#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie{
    std::string name;
   
    
    public:
    void announce();
    Zombie(std::string name);
    Zombie();
    ~Zombie();
    // Zombie* newZombie( std::string name );
    // void randomChump( std::string name );
}; 
Zombie* zombieHorde( int N, std::string name );
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif