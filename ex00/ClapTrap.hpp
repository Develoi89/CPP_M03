#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string _Name;
        unsigned int _hp = 10;
        unsigned int _ep = 10;
        unsigned int _ad = 0;
    public:
        ClapTrap(std::string const Name);
        ClapTrap(ClapTrap const &c);
        ClapTrap & operator = (ClapTrap const &c);
        ~ClapTrap();

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif