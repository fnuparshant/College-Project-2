#pragma once
#include "Animal.hpp"
#include<string>
using namespace std;

class Fish : public Animal {

public:
	Fish();
	Fish(std::string name, bool domestic = false, bool predator = false);
	bool isVenomous();
	void setVenomous();

private:
	bool venomous_;

};