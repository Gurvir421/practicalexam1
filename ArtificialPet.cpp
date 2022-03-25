#include <iostream>

#include"ArtificialPet.h"

ArtificialPet::ArtificialPet() {
    fullness =0;
}

bool ArtificialPet::isHungry() {
    //bool hungry_status =true
    std::cout << fullness <<std::endl;
    if (fullness <0) {
        return true;
    }
    else {
        return false;
    }
}

void ArtificialPet::feed() {
    
    fullness =fullness + 0.5*(10-fullness)+1;
    
    if (fullness >10) {
        fullness=10;
    }
    
}

void ArtificialPet::play(int minutes) {
    fullness =fullness -minutes;
}
