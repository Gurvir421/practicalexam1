#ifndef ARTIFICIALPET_H
#define ARTIFICIALPET_H

class ArtificialPet {
    
    public:
    ArtificialPet();
    bool isHungry();
    void feed();
    virtual void play(int minutes);
    
    protected:
    int fullness ;
    
    
};
#endif
