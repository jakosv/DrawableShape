#pragma once

#include "Shape.h"

#include <iostream>

class Circle : public Shape {
public:
    Circle(const unsigned int size,
           const char fgSymbol = defaultFgSymbol, 
           const char bgSymbol = defaultBgSymbol);

    void draw(std::ostream& out = std::cout) const override;
};
