#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
    Weapon::setType(type);
}

std::string Weapon::getType()
{
    return (Weapon::type);
}

void        Weapon::setType(std::string type)
{
    Weapon::type = type;
}
