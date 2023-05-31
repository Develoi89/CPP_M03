#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _Name;
    public:
        DiamondTrap();
        DiamondTrap(std::string const Name);
        DiamondTrap(DiamondTrap const &c);
        DiamondTrap & operator = (DiamondTrap const &c);
        ~DiamondTrap();

        using ScavTrap::attack;
        void whoAmI();
};

#endif