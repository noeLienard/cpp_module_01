#include "Harl.hpp"

void Harl::complain( std::string level )
{
    int lvl = 4;
    void (Harl::*arr[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string tab[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for (int i = 0; i < 4; i++)
    {
        if (level == tab[i])
        {
            lvl = i;
            break ;
        }
    }
    switch (lvl)
    {
		case(0):
			(this->*arr[0])();
		case(1):
			(this->*arr[1])();
		case(2):
			(this->*arr[2])();
		case(3):
        {
			(this->*arr[3])();
            break ;
        }
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
