#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    _hp = FragTrap::_hp;
    _ep = ScavTrap::_ep;
    _ad = FragTrap::_ad;
    std::cout << "DiamondTrap created." << std::endl;
}
DiamondTrap::DiamondTrap(std::string const Name)
{
    _Name = Name;
    ClapTrap::_Name = _Name + "_clap_name";
    _hp = FragTrap::_hp;
    _ep = ScavTrap::_ep;
    _ad = FragTrap::_ad;
    std::cout << Name << " DiamondTrap created." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &c)
{
    _Name = c._Name;
    ClapTrap::_Name = c._Name + "_clap_name";
    _hp = c._hp;
    _ep = c._ep;
    _ad = c._ad;
    std::cout << "DiamondTrap created from" + c._Name << std::endl;
}

DiamondTrap & DiamondTrap::operator = (DiamondTrap const &c)
{
    this->_Name = c._Name;
    _hp = c._hp;
    _ep = c._ep;
    _ad = c._ad;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << _Name + " DiamondTrap destroyed." << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "The name's DiamondTrap is" << _Name << std::endl;
    std::cout << "The name's ClapTrap is" << ClapTrap::_Name << std::endl;
}