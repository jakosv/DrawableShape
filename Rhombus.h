#pragma once

#include "Shape.h"

#include <iostream>

class Rhombus : public Shape {
public:
    Rhombus(const unsigned int size,
           const char fgSymbol = defaultFgSymbol, 
           const char bgSymbol = defaultBgSymbol);

    void draw(std::ostream& out = std::cout) const override;
private:
    void drawLine(const unsigned int number, std::ostream& out) const;
};

