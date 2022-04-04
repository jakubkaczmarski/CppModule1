#include "Zombie.hpp"

void Zombie::announce(){
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(std::string name)
{
    this->name = name;
}
Zombie* newZombie( std::string name )
{
    Zombie *zmb_ptr = new Zombie(name);
    return  zmb_ptr;
}
void randomChump( std::string name )
{
    Zombie zmb_ptr = Zombie(name);
    zmb_ptr.announce();
}
Zombie::~Zombie()
{
    std::cout << name << " Destroyed" << std::endl;
}
