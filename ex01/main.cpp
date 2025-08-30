#include "Zombie.hpp"

int main(void) {
    Zombie *zombie = zombieHorde(5, "Ordre 1");
    for (int i = 0; i < 5; i++)
        zombie[i].announce();
    delete zombie;
}