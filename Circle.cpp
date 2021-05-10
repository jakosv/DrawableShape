#include "Circle.h"

#include <iostream>
#include <cmath>

const float accuracy = 0.5f;

Circle::Circle(const unsigned int size,
               const char fgSymbol,
               const char bgSymbol)
    : Shape(size, fgSymbol, bgSymbol)
{
    _type = ShapeType::Circle;
}

void Circle::draw(std::ostream& out) const {
    float radius = static_cast<float>(size() - 1) / 2;

    for (unsigned int x = 0; x < size(); x++) {
        for (unsigned int y = 0; y < size(); y++) {
            float dist = sqrt((radius - x) * (radius - x) 
                            + (radius - y) * (radius - y));
            if (dist > radius - accuracy && dist < radius + accuracy) {
                out << _fgSymbol; 
            }
            else {
                out << _bgSymbol;
            }
        }
        out << "\n";
    }
}
