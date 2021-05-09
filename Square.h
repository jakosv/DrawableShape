#pragma once

#include "Shape.h"

#include <iostream>

class Square: public Shape {
public: 
    Square(const unsigned int size,
           const char fgSymbol = defaultFgSymbol,
           const char bgSymbol = defaultBgSymbol);
    ~Square() = default;

    void draw(std::ostream& out = std::cout) const override;
};
