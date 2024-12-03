#include <iostream>
#include<string>
#include "Person.h"
#include "VaccinationSystem.h"
using namespace std;
int main()
{
	VaccinationSystem system;
	int choice;
	while (true) {
		system.displayMenu();
		cin >> choice;
		switch (choice)
		{
		case 1:
			system.registerPerson();
			break;
		case 2:
			system.displayPersons();
			break;
		case 3:
			system.searchPersonByName();
			break;
		case 4:
			system.updateVaccinationStatus();
			break;
		case 5:
			cout << "Exiting system...\n";
			return 0;
		default:
			cout << "Invalid choice. Please try again.\n";
		}
	}
	return 0;
}