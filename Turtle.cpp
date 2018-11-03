#include <iostream>
#include <string>
#include "Tour.h"
using namespace std;


Tour::Tour() {
	country = "Ukraine";
	duration = 4;
	price = 79;

	rate = 9;
	description = "well organized";
}


Tour::Tour(string _country, int _duration, int _price, int _rate, string _description)
{
	country = _country;
	duration = _duration;
	price = _price;

	rate = _rate;
	description = _description;

	peopleAmount = 50;
	availability = "available";
}


Tour::~Tour()
{
	cout << "Deleting all data..." << endl << endl;
}

string Tour::getCountry() {
	return country;
}


int Tour::getDuration() {
	return duration;
}


int Tour::getPrice() {
	return price;
}


int Tour::getRate() {
	return rate;
}


string Tour::getDescription() {
	return description;
}