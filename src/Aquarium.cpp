#include "Aquarium.hpp"
#include <iostream>

Aquarium::Aquarium() {
    Snail S((double)(rand() % 640 + 1));
    this->snail = S;
    this->money = 500;
    this->egg = 0;
    Guppy ikan1;
    this->listOfGuppy.add(ikan1);
    Guppy ikan2;
    this->listOfGuppy.add(ikan2);
}

// Destruktor akuarium dan seluruh object di dalamnya
Aquarium::~Aquarium(){
}

// getter ukuran dari akuarium
LinkedList<Piranha> Aquarium::getListOfPiranha() const {
    return this->listOfPiranha;
}
LinkedList<Guppy> Aquarium::getListOfGuppy() const {
    return this->listOfGuppy;
}
LinkedList<Coin> Aquarium::getListOfCoin() const {
    return this->listOfCoin;
}

LinkedList<FishFood> Aquarium::getListOfFishFood() const {
    return this->listOfFishFood;
}  

Snail& Aquarium::getSnail(){
    return this->snail;
}


int Aquarium::getMoney(){
    return this->money;
}

int Aquarium::getEgg(){
    return this->egg;
}

void Aquarium::buyEgg(){
    this->egg++;
}

void Aquarium::increaseMoney(int value){
    this->money+=value;
}

void Aquarium::decreaseMoney(int value){
    this->money-=value;
}
