#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _ep = 100;
    _ad = 30;
    std::cout << "FragTrap created." << std::endl;
}
FragTrap::FragTrap(std::string const Name)
{
    _Name = Name;
    _ep = 100;
    _ad = 30;
    std::cout << Name << " FragTrap created." << std::endl;
}

FragTrap::FragTrap(FragTrap const &c)
{
    _Name = c._Name;
    _hp = c._hp;
    _ep = c._ep;
    _ad = c._ad;
    std::cout << "FragTrap created from" + c._Name << std::endl;
}

FragTrap & FragTrap::operator = (FragTrap const &c)
{
    this->_Name = c._Name;
    _hp = c._hp;
    _ep = c._ep;
    _ad = c._ad;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << _Name + " FragTrap destroyed." << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if(_ep > 0 && _hp > 0)
    {
        std::cout << _Name + " attacks so efective " + target + " causing " << _ad << " points of damage." << std::endl; 
        --_ep;
    }
    else
        std::cout << _Name + " don't have enought hp or ep."<< std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << _Name + " says, high five!!!." << std::endl;
}
