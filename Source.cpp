#include <iostream>
#include <string>
#include "Tour.h"
using namespace std;

int main(void) {
	string _country[3];
	int _duration[3];
	int _price[3];
	int _rate[3];
	string _description[3];

	for (int i = 0; i < 3; i++) {
		cout << "Enter the country: ";
		cin >> _country[i];
		cout << "Enter the duration (in days): ";
		cin >> _duration[i];
		cout << "Enter the price (in euros): ";
		cin >> _price[i];
		cout << "Rate the tour from 1 to 10: ";
		cin >> _rate[i];
		cout << "Describe the tour by one word: ";
		cin >> _description[i];
		cout << endl;
	}

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	Tour t1(_country[0], _duration[0], _price[0], _rate[0], _description[0]);
	Tour t2(_country[1], _duration[1], _price[1], _rate[1], _description[1]);
	Tour t3(_country[2], _duration[2], _price[2], _rate[2], _description[2]);


	cout << "Tour country:  " << t1.getCountry() << endl;
	cout << "Tour duration: " << t1.getDuration() << " (in days)" << endl;
	cout << "Tour price: " << t1.getPrice() << " (in euros)" << endl;
	cout << "Tour rate: " << t1.getRate() << "       (1-min, 10-max)" << endl;
	cout << "Tour description: " << t1.getDescription() << endl;
	cout << "Maximal peaple amount: " << t1.peopleAmount << endl;
	cout << "Availability: " << t1.availability << endl;


	cout << endl << endl;


	cout << "Tour country:  " << t2.getCountry() << endl;
	cout << "Tour duration: " << t2.getDuration() << " (in days)" << endl;
	cout << "Tour price: " << t2.getPrice() << " (in euros)" << endl;
	cout << "Tour rate: " << t2.getRate() << "       (1-min, 10-max)" << endl;
	cout << "Tour description: " << t2.getDescription() << endl;
	cout << "Maximal peaple amount: " << t2.peopleAmount << endl;
	cout << "Availability: " << t2.availability << endl;

	cout << endl << endl;
	
	cout << "Tour country:  " << t3.getCountry() << endl;
	cout << "Tour duration: " << t3.getDuration() << " (in days)" << endl;
	cout << "Tour price: " << t3.getPrice() << " (in euros)" << endl;
	cout << "Tour rate: " << t3.getRate() << "       (1-min, 10-max)" << endl;
	cout << "Tour description: " << t3.getDescription() << endl;
	cout << "Maximal peaple amount: " << t3.peopleAmount << endl;
	cout << "Availability: " << t3.availability << endl;

	cout << endl << endl;

	t1.~Tour();
	t2.~Tour();
	t3.~Tour();

	getchar();
	getchar();
	return 0;
}