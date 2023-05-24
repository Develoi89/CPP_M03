#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap Pokemon("Pokemon");
    ScavTrap MrMime("MrMime");
    FragTrap Arcanine("Arcanine");

    MrMime.guardGate();
    Arcanine.highFivesGuys();
    MrMime.attack("Arcanine");
    Arcanine.takeDamage(50);
    Arcanine.beRepaired(5);
    Arcanine.attack("MrMime");
    Arcanine.beRepaired(5);
    MrMime.takeDamage(50);
    MrMime.beRepaired(5);
}