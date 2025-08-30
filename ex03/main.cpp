#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main( void )
{
    int x = 10;
    int &ref = x; // ref est un autre nom pour x
    x = 20;     // modifie x aussi

    std::cout << ref;
    return (0);
}
