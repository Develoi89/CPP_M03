#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ClapTrap Goku("Goku");
    ScavTrap Goten("Goten");
    ScavTrap Gohan("Gohan");

    Gohan.guardGate();
    Goten.guardGate();
    Gohan.attack("Goku");
    Goku.takeDamage(50);
    Goku.beRepaired(5);
    Goten.attack("Goku");
    Goten.beRepaired(5);
    Goku.takeDamage(50);
    Goku.beRepaired(5);
}