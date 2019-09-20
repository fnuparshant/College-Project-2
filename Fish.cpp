#include "Fish.hpp"

Fish::Fish() {
	venomous_ = false;
}


Fish::Fish(std::string name, bool domestic, bool predator) :Animal(name, domestic, predator) {
	venomous_ = true;
}

bool Fish::isVenomous() {
	return venomous_;
}

void Fish::setVenomous() {
	venomous_ = true;
}