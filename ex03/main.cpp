#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap Arcamime("Arcamime");
    FragTrap    Mrmime("Mrmime");

    Arcamime.attack("Mrmime");
    Arcamime.attack("to me");
    Arcamime.takeDamage(20);
    std::cout << "EnergyPoints: " << Arcamime.get_ep() << std::endl;
    std::cout << "HealthPoints: " << Arcamime.get_hp() << std::endl;
    Arcamime.whoAmI();
}