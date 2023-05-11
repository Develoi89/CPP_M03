#include "ScavTrap.hpp"

int main()
{
    ClapTrap Goku;
    ScavTrap Goten;
    ScavTrap Gohan;

    Gohan.guardGate();
    Goten.guardGate();
    Gohan.attack("Goku");
    Goku.takeDamage(50);
    Goku.beRepaired(5);
    Goten.attack("Goku");
    Goku.takeDamage(50);
    Goku.beRepaired(5);
}