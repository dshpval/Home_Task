#pragma once
#include <iostream>
#include <string>
using namespace std;

class Tour
{
private:
	string country;
	int duration;
	int price;

protected:
	int rate;
	string description;

public:
	Tour();
	Tour(string _country, int _duration, int _price, int _rate, string _description);
	~Tour();
	string getCountry();
	int getDuration();
	int getPrice();
	int getRate();
	string getDescription();

	int peopleAmount;
	string availability;
};