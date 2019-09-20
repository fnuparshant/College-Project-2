#include "Animal.hpp"
#include "Mammal.hpp"
#include "Bird.hpp"
#include "Fish.hpp"
#include<iostream>

int main()
{
	Animal anim=Animal("Cat", true, false);
	std::cout << "Name:" << anim.getName() << std::endl;
	std::cout << "Domestic:" << anim.isDomestic() << std::endl;
	std::cout << "Predator: " << anim.isPredator() << std::endl;
	
	
	Mammal mammal=Mammal();
	mammal.setName("this is mammal");
	std::cout << "mammal:" << mammal.getName() << std::endl;

	Mammal mammal1 = Mammal("mamm", true, false);
	std::cout << "mammal1:" << mammal1.getName() << std::endl;
	std::cout << "mammal1:" << mammal1.isDomestic() << std::endl;
	std::cout << "mammal1:" << mammal1.isPredator() << std::endl;
	std::cout << "mammal1:" << mammal1.hasHair() << std::endl;
	std::cout << "mammal1:" << mammal1.isAquatic() << std::endl;  

/*	Bird bird = Bird();
	bird.setAquatic();
	std::cout << "bird:" << bird.isAquatic()<< std::endl;  

	Fish fish = Fish();
	fish.setName("fishhh");
	std::cout << "fish:" << fish.getName() << std::endl;  */

	  
	cin.get();
	return 0;
}
/*
void setters(Animal anim);


void main() {
	cout << "Input file can't be open" << endl;

//	Animal anim;
	Animal anim = Animal("name", true, false);
	setters(anim);



}

void setters(Animal anim) {
	/*anim.setName("dog");
	anim.setDomestic(true);
	anim.setPredator(false);
*/
/*	cout << anim.getName() << endl;
	cout << anim.isDomestic() << endl;
	cout << anim.isPredator() << endl;

}
*/
