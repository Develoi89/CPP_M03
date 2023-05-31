#include "ClapTrap.hpp"

int main()
{
    ClapTrap Sefirot;
    Sefirot.setName("Sefirot");
    ClapTrap Cloud("Cloud");
    Cloud.attack("Cloud");
    Sefirot.takeDamage(0);
    Sefirot.attack("Colud");
    Cloud.takeDamage(0);
    Cloud.beRepaired(0);
}