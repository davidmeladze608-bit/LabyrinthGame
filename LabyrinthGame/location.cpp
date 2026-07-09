#include "location.h"
#include <iostream>

Location::Location(int id, const std::vector<std::string>& map)
    : id(id), map(map), isOpen(false) {}

// Остальные методы класса Location
g++ -c player.cpp -o player.o