/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 00:22:38 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/26 10:01:47 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), grade_sign(75), grade_exec(75)
{
	this->isSigned = 0;
}

AForm::AForm(std::string AFormname, unsigned int grade_s, unsigned int grade_e) : name(AFormname), grade_sign(grade_s), grade_exec(grade_e)
{
	this->isSigned = 0;
	if (grade_e < 1 || grade_s < 1)
		throw AForm::GradeTooHighException();
	else if (grade_e > 150 || grade_s > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm & src): name(src.getName()), grade_sign(src.getGradeSign()), grade_exec(src.getGradeExec())
{
	this->isSigned = src.getIsSigned();
}

AForm::~AForm()
{
}

AForm &AForm::operator=( AForm const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

std::string const &AForm::getName() const
{
	return this->name;
}

unsigned int const &AForm::getGradeExec() const
{
	return this->grade_exec;
}

unsigned int const &AForm::getGradeSign() const
{
	return this->grade_sign;
}


bool const &AForm::getIsSigned() const
{
	return this->isSigned;
}

void AForm::beSigned(const Bureaucrat person)
{
	if (person.getGrade() <= this->grade_sign)
		this->isSigned = 1;
	else
		throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *AForm::FormNotSigned::what() const throw()
{
	return ("Form not signed");
}

std::ostream &operator<<(std::ostream &os, const AForm &print)
{
	os << "AForm " << print.getName() <<" inscription grade minimal grade is " << print.getGradeSign() << " and execution minimal grade is " << print.getGradeExec();
	os << ", AForm " << (print.getIsSigned() ? "is not signed." : "is signed.");
	return os;
}