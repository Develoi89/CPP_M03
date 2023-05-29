#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string const Name);
        FragTrap(FragTrap const &c);
        FragTrap & operator = (FragTrap const &c);
        ~FragTrap();

        void attack(const std::string &target);
        void highFivesGuys();
};

#endif