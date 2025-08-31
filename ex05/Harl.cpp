#include "Harl.hpp"

void Harl::complain( std::string level )
{
   void (Harl::*arr[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
   std::string tab[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
   for (int i = 0; i < 4; i++)
   {
        if (level == tab[i])
        {
            (this->*arr[i])();
            break ;
        }
   }
}
