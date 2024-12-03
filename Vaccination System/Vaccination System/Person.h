#pragma once
#include <iostream>
#include<string>
using namespace std;
class Person
{
public:
	string name;
	int age;
	string vaccineType;
	string vaccinationStatus;
	string vaccinationDate;
	Person* next;
	Person(string name, int age, string vaccineType, string vaccinationStatus, string vaccinationDate);
};

