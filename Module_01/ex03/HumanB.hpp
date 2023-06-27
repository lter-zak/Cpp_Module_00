#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon& gun);
	private:
		std::string _name;
		Weapon* _weapon;
};

# endif