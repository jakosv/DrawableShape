#pragma once

#include "Shape.h"

#include <iostream>

class RightTriangle : public Shape {
public:
    RightTriangle(const unsigned int size,
           const char fgSymbol = defaultFgSymbol, 
           const char bgSymbol = defaultBgSymbol);

    void draw(std::ostream& out = std::cout) const override;
};


