#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie {
    public:
        Zombie(void);
        ~Zombie();
        void announce( void );
        void add_name( std::string name );
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif