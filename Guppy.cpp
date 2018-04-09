#include "Guppy.hpp"

Guppy :: Guppy():Fish() {
	this->size = 1;
	this->coinTime = 1;
	this->coinValue = 0;
	this->foodEaten = 0;
}

int Guppy::getSize() const {
	return this->size;
}
Guppy Guppy :: operator=(const Guppy& G){
	this->size = G.size;
	this->coinTime = G.coinTime;
	this->coinValue = G.coinValue;
	this->foodEaten = G.foodEaten;
	Fish::operator=(G);
	return *this;
}

void Guppy::eatFood() {
	this->foodEaten++;
	this->hungerTime+=40;
	if ((this->foodEaten == 3) or (this->foodEaten == 10)) {
		grow();
	}
}

void Guppy::grow() {
	this->size++;
	if (this->coinValue == 0) {
		this->coinValue = 50;
	}
	else if (this->coinValue == 50) {
		this->coinValue = 100;
	}
}

Coin Guppy::extractCoin() {
	int val;
	
	if (this->size == 2) {
		val = 50;
	}
	else if (this->size == 3) {
		val = 100;
	}
	
	return Coin(val, this->getXPos(), this->getYPos());;
}
