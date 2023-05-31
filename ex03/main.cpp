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

// #include <iostream>
// #include "DiamondTrap.hpp"

// int main(void)
// {
//     DiamondTrap p7("Player_7");
//     DiamondTrap p8("Player_8");
//     p7.whoAmI();
//     p8.whoAmI();

//     p7.attack(p8.getName());
//     p8.takeDamage(p7.get_ad());
//     p8.beRepaired(5);
//     return (0);
// }
