#include "..\Include\PlayerController.hpp"

PlayerController::PlayerController() :owner(nullptr) {

}

PlayerController::~PlayerController() {

}

bool PlayerController::isPossesed(Player *owner) {
	if (!owner) {
		this->owner = owner;
		return true;
	}
	return false;
}