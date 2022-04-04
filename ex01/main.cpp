
#include "Zombie.hpp"

int main()
{
    // Zombie *new_zom = newZombie("Foo");
    // randomChump("Foo");
    Zombie *new_zomb = zombieHorde(10 ,"Maciek");
    for(int i = 0; i < 10; i++)
    {
        new_zomb[i].announce();
    }
    std::string name = "Marek";
    int N = 10;
    Zombie *zombie_horde = new Zombie[N];

    for(int j = 0; j < N; j++)
        zombie_horde[j] = Zombie(name);
    for(int i = 0; i < 10; i++)
    {
        zombie_horde[i].announce();
    }
}