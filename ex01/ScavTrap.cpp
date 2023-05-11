#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _hp = 100;
    _ep = 50;
    _ad = 20;
    std::cout << "ScavTrap created." << std::endl;
}
ScavTrap::ScavTrap(std::string const Name)
{
    _Name = Name;
    _hp = 100;
    _ep = 50;
    _ad = 20;
    std::cout << Name << " ScavTrap created." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &c)
{
    _Name = c._Name;
    _hp = c._hp;
    _ep = c._ep;
    _ad = c._ad;
    std::cout << "ScavTrap created from" + c._Name << std::endl;
}

ScavTrap & ScavTrap::operator = (ScavTrap const &c)
{
    this->_Name = c._Name;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << _Name + " ScavTrap destroyed." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if(_ep > 0 && _hp > 0)
    {
        std::cout << _Name + " attacks " + target + " causing " << _ad << " points of damage." << std::endl; 
        --_ep;
    }
    else
        std::cout << _Name + " don't have enought hp or ep."<< std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << _Name + "is guarding the gate." << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if(_hp - amount > 0)
    {
        _hp -= amount;
        std::cout << _Name + " takes " << amount << " points of damage." << std::endl;
    }
    else
    {
        _hp = 0;
        std::cout << _Name + "don't have hit points." << std::endl;
    }
}
void ScavTrap::beRepaired(unsigned int amount)
{
    if(_ep > 0)
    {
        std::cout << _Name + " recover " << amount << " of hit points." <<std::endl; 
        --_ep;
    }
    else
        std::cout << _Name + " don't have enought energy."<< std::endl;
}