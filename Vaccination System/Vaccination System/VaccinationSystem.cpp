#include "VaccinationSystem.h"
VaccinationSystem::VaccinationSystem()
{
	head = nullptr;
}


void VaccinationSystem::registerPerson()
{
	string name, vaccineType, vaccinationStatus, vaccinationDate;
	int age;
	cout << "Enter Name: ";
	cin.ignore();
	getline(cin, name);

	cout << "Enter age: ";
	cin >> age;

	cout << "Enter vaccineType: ";
	cin.ignore();
	getline(cin, vaccineType);

	cout << "Enter  vaccinationStatus: ";
	cin >> vaccinationStatus;

	cout << "Enter vaccinationDate: ";
	cin >> vaccinationDate;
	//create Person fe el Heap 
	Person* newPerson = new Person(name, age, vaccineType, vaccinationStatus, vaccinationDate);
	if (head==nullptr)
	{
		head = newPerson;
	}
	else
	{
		newPerson->next = head;
		head = newPerson;
	}
	cout << "Person registered successfully!\n";
}

void VaccinationSystem::displayPersons()
{
	if (head == nullptr)
	{
		cout << "No persons registered.\n";
		return;
	}
	Person* temp = head;
	cout << "\nList of all registered persons:\n";
	while (temp != nullptr) {
		cout << "Name: " << temp->name << "\n";
		cout << "Age: " << temp->age << "\n";
		cout << "Vaccine Type: " << temp->vaccineType << "\n";
		cout << "Vaccination Status: " << temp->vaccinationStatus << "\n";
		cout << "Vaccination Date: " << temp->vaccinationDate << "\n";
		cout << "-------------------------------\n";
		temp = temp->next;
	}
}


void VaccinationSystem::searchPersonByName()
{
	string searchName;
	cout << "Enter Name To Search: ";
	cin.ignore();
	getline(cin, searchName);
	Person* temp = head;
	bool Found = false;
	while (temp != nullptr)
	{
		if (temp->name == searchName)
		{
			cout << "\nPerson found:\n";
			cout << "Name: " << temp->name << "\n";
			cout << "Age: " << temp->age << "\n";
			cout << "Vaccine Type: " << temp->vaccineType << "\n";
			cout << "Vaccination Status: " << temp->vaccinationStatus << "\n";
			cout << "Vaccination Date: " << temp->vaccinationDate << "\n";
			Found = true;
			break;
		}
		temp = temp->next;
	}
	if (!Found)
	{
		cout << "Person not found.\n";
	}
}

void VaccinationSystem::updateVaccinationStatus()
{
	string searchName;
	cout << "Enter name to update vaccination status: ";
	cin.ignore();
	getline(cin, searchName);

	Person* temp = head;
	bool Found = false;
	while (temp != nullptr)
	{
		if (temp->name == searchName)
		{
			cout << "Enter new vaccination status: ";
			getline(cin, temp->vaccinationStatus);
			cout << "Vaccination status updated successfully!\n";
			Found = true;
			break;
		}
		temp = temp->next;
	}
	if (!Found)
	{
		cout << "Person not found.\n";
	}
}

void VaccinationSystem::displayMenu()
{
	cout << "\n***** Vaccination System *****\n";
	cout << "1. Register a new person\n";
	cout << "2. Display all persons\n";
	cout << "3. Search for a person by name\n";
	cout << "4. Update vaccination status\n";
	cout << "5. Exit\n";
	cout << "Enter your choice: ";
}

VaccinationSystem::~VaccinationSystem()
{
	Person* temp;
	while (head != nullptr)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
}






	