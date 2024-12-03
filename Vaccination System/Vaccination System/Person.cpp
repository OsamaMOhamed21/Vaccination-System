#include "Person.h"

Person::Person(string name, int age, string vaccineType, string vaccinationStatus, string vaccinationDate)
{
	this->name = name;
	this->age = age;
	this->vaccinationDate = vaccinationDate;
	this->vaccinationStatus = vaccinationStatus;
	this->vaccineType = vaccineType;
	this->next = nullptr;

}
