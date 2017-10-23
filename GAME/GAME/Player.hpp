#pragma once
#include "CharacterMechanic.hpp"
#include "PlayerController.hpp"
class PlayerController;
class Player : public CharacterMechanic { // klasa do poruszania si� graczem.
public:
	Player(PlayerController *controller);
	virtual ~Player();
	void resetController(PlayerController *controller);
	virtual void update(const float &deltaTime);
private:
	PlayerController* controller;
};