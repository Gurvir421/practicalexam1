#include <iostream>
#include "Furby.h"
#include"ArtificialPet.h"

Furby::Furby() : ArtificialPet::ArtificialPet() {
    
}

void Furby::play(int minutes) {
    fullness =fullness -2*minutes;

}
void Furby::dance(int minutes) {
    fullness =fullness -3*minutes;
}