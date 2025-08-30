#include "HumanB.hpp"

HumanB::HumanB( std::string name ) :name(name), weapon(nullptr) {
}

void HumanB::attack() {
    if (weapon)
        std::cout <<  HumanB::name << " attacks with their " << HumanB::weapon->getType() << std::endl;
    else
        std::cout <<  HumanB::name << " attacks with their hands" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    HumanB::weapon = &weapon;
}