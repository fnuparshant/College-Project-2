#include "Bird.hpp"

Bird::Bird(){
	airborne_=false;
	aquatic_=false;
}

Bird::Bird(std::string name, bool domestic, bool predator):Animal(name,domestic,predator){
	airborne_ = true;
	aquatic_ = true;
}


bool Bird::isAirborne() {
return airborne_

}

bool Bird::isAquatic() {
return aquatic_
}

void Bird::setAirborne() {
	airborne_ = true;
}
void Bird::setAquatic() {
	aquatic_ = true;
}