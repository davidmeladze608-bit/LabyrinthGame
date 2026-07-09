#include "player.h"
Player::Player() : currentLocation(0) {}

void Player::moveTo(int location) {
    currentLocation = location;
}

int Player::getLocation() const {
    return currentLocation;
}
