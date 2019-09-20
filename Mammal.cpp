#include "Mammal.hpp"

Mammal::Mammal()
{
	 hair_=false;
	 airborne_=false;
	 aquatic_=false;
	 toothed_=false;
	 fins_=false;
	 tail_=false;
	 legs_=0;
}

Mammal::Mammal(std::string name, bool domestic, bool predator) : Animal(name,domestic,predator) {
	 hair_ = true;
	 airborne_ = true;
	 aquatic_ = true;
	 toothed_ = true;
	 fins_ = true;
	 tail_ = true;
	 legs_ = 0;

}

void Mammal::setHair() {
	hair_ = true;

}

void Mammal::setAirborne() {
	airborne_ = true;
}

void Mammal::setAquatic() {
	aquatic_ = true;
}

void Mammal::setToothed() {
	toothed_ = true;
}

void Mammal::setFins() {
	fins_ = true;
}


void Mammal::setTail() {
	tail_ = true;
}
void Mammal::setLegs(int legs) {
	legs_ = legs;
}



bool Mammal::hasHair() {
	return hair_;
}
bool Mammal::isAirborne() {
	return airborne_;
}
bool Mammal::isAquatic() {
	return aquatic_;
};
bool Mammal::isToothed() {
	return toothed_;
};
bool Mammal::hasFins() {
	return fins_;
};
bool Mammal::hasTail(){
	return tail_;
};
int Mammal::legs() {
	return legs_;
};



