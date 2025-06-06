/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 00:22:38 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/26 10:01:47 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), grade_sign(75), grade_exec(75)
{
	this->isSigned = 0;
}

Form::Form(std::string formname, unsigned int grade_s, unsigned int grade_e) : name(formname), grade_sign(grade_s), grade_exec(grade_e)
{
	this->isSigned = 0;
	if (grade_e < 1 || grade_s < 1)
		throw Form::GradeTooHighException();
	else if (grade_e > 150 || grade_s > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src): name(src.getName()), grade_sign(src.getGradeSign()), grade_exec(src.getGradeExec())
{
	this->isSigned = src.getIsSigned();
}

Form::~Form()
{
}

Form &Form::operator=( Form const & rhs )
{
	if (this != &rhs)
		*this = Form(rhs);
	return *this;
}

std::string const &Form::getName() const
{
	return this->name;
}

unsigned int const &Form::getGradeExec() const
{
	return this->grade_exec;
}

unsigned int const &Form::getGradeSign() const
{
	return this->grade_sign;
}


bool const &Form::getIsSigned() const
{
	return this->isSigned;
}

void Form::beSigned(const Bureaucrat person)
{
	if (person.getGrade() <= this->grade_sign)
		this->isSigned = 1;
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &os, const Form print)
{
	os << "Form " << print.getName() <<" inscription grade minimal grade is " << print.getGradeSign() << " and execution minimal grade is " << print.getGradeExec();
	os << ", form " << (print.getIsSigned() ? "is not signed." : "is signed.");
	return os;
}