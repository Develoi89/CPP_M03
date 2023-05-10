#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const Name) : _Name(Name)
{
}

ClapTrap::ClapTrap(ClapTrap const &c) : _Name(c._Name)
{
}

ClapTrap & ClapTrap::operator = (ClapTrap const &c)
{
    this->_Name = c._Name;
    return *this;
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(const std::string &target)
{
    if(_ep > 0)
    {
        std::cout << _Name + " attacks " + target + " causing " << _ad << " points of damage" << std::endl; 
        --_ep;
    }
    else
        std::cout << _Name + " don't have enought energy."<< std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hp - amount > 0)
    {
        _hp -= amount;
        std::cout << _Name + " takes " << amount << "points of damage." << std::endl;
    }
    else
    {
        _hp = 0;
        std::cout << _Name + "don't have hit points." << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(_ep > 0)
    {
        std::cout << _Name + " recover " << amount << " of hit points." <<std::endl; 
        --_ep;
    }
    else
        std::cout << _Name + " don't have enought energy."<< std::endl;
}