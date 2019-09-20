#pragma once
#include "Animal.hpp"
#include<string>
using namespace std;

class Bird : public Animal {

public:
	Bird();
	Bird(std::string name, bool domestic = false, bool predator = false);
	bool isAirborne() ;
	bool isAquatic() ;
	void setAirborne();
	void setAquatic();

private:
	bool airborne_;
	bool aquatic_;
	

};