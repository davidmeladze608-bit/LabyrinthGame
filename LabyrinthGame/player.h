#pragma once
class Player {
private:
    int currentLocation;
public:
    Player();
    void moveTo(int location);
    int getLocation() const;
};
