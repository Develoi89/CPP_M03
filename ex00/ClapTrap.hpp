#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string _Name;
        unsigned int _hp;
        unsigned int _ep;
        unsigned int _ad;
    public:
        ClapTrap();
        ClapTrap(std::string const Name);
        ClapTrap(ClapTrap const &c);
        ClapTrap & operator = (ClapTrap const &c);
        ~ClapTrap();

        void setName(std::string name);
        std::string getName(void);
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif