#pragma once
#include <vector>
#include <string>

class Location {
private:
    int id;
    std::vector<std::string> map;
    bool isOpen;
    std::vector<int> connectedLocations;
public:
    Location(int id, const std::vector<std::string>& map);
    void setOpen(bool open);
    bool isLocationOpen() const;
    void addConnection(int locationId);
    const std::vector<int>& getConnectedLocations() const;
    int getId() const;
    void displayMap() const;
    bool solvePuzzle();
};
