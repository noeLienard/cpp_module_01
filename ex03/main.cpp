#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main( void )
{
    int x = 10;
    int &ref = x;
    x = 20;

    std::cout << ref;
    return (0);
}
