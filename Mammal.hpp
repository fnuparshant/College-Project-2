#pragma once
#include "Animal.hpp"
#include<string>
using namespace std;

class Mammal : public Animal {

public:
	Mammal();
	Mammal(std::string name, bool domestic = false, bool predator = false);
	bool hasHair();
	bool isAirborne();
	bool isAquatic();
	bool isToothed();
	bool hasFins();
	bool hasTail();
	int legs();
	void setHair();
	void setAirborne();
	void setAquatic();
	void setToothed();
	void setFins();
	void setTail();
	void setLegs(int legs);

private:
	bool hair_;
	bool airborne_;
	bool aquatic_;
	bool toothed_;
	bool fins_;
	bool tail_;
	int legs_;

};