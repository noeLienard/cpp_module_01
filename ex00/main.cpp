#include "Zombie.hpp"

int main(void) {
    Zombie *zom = newZombie( "Noé");
    zom->announce();
    delete zom;
}