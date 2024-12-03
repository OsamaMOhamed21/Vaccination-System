#pragma once
#include "Person.h"
class VaccinationSystem
{
private:
	Person* head;
public:
	VaccinationSystem();
	void registerPerson();
	void displayPersons();
	void searchPersonByName();
	void updateVaccinationStatus();
	void displayMenu();
	~VaccinationSystem();
};

