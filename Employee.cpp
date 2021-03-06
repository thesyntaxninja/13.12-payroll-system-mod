// 13.12 Employee.cpp
// Description: Problem 2 of 2 due week 6
// Programmer: Parker Esmay
// Date: 03/02/2015


#include <iostream>

#include "Employee.h" 

// constructor
Employee::Employee(const string &first, const string &last, const string &ssn, int month, int day, int year) : 
	firstName(first), lastName(last), socialSecurityNumber(ssn), birthDate(month, day, year)
{
} 

// set first name
void Employee::setFirstName(const string &first)
{
	firstName = first;
} 

// return first name
string Employee::getFirstName() const
{
	return firstName;
} 

// set last name
void Employee::setLastName(const string &last)
{
	lastName = last;
} 

// return last name
string Employee::getLastName() const
{
	return lastName;
} 

// set social security number
void Employee::setSocialSecurityNumber(const string &ssn)
{
	socialSecurityNumber = ssn; // should validate
} 

// return social security number
string Employee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
} 

// set birthday
void Employee::setBirthDate(int month, int day, int year)
{
	birthDate.setDate(month, day, year);
} 

// return birthday
Date Employee::getBirthDate() const
{
	return birthDate;
} 

// print Employee's information (virtual, but not pure virtual)
void Employee::print() const
{
	cout << getFirstName() << " " << getLastName()
		<< "\nsocial security number: " << getSocialSecurityNumber()
		<< "\nbirthday: " << getBirthDate();
} 
