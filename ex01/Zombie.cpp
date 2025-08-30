#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::add_name( std::string name )
{
    this->name = name;
}

Zombie::Zombie() {}

Zombie::~Zombie() {
    std::cout << name << " has been destroyed" << std::endl;
}