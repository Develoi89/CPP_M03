#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string const Name);
        ScavTrap(ScavTrap const &c);
        ScavTrap & operator = (ScavTrap const &c);
        ~ScavTrap();

        void attack(const std::string &target);
        void guardGate();
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif