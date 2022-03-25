#include <iostream>
#include <cstdlib>
#include <string>

#include "ArtificialPet.h"
#include"Furby.h"

using namespace std;
int main() {
    
    ArtificialPet *pet1=new ArtificialPet();
    Furby *pet2= new Furby();
    
    pet1->feed();
    pet1->play(6);
    
    pet2->feed();
    pet2->play(8);
    
    cout << pet1->isHungry() <<endl;
    cout << pet2->isHungry() <<endl;

    
    return 0;
}