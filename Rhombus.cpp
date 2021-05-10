#include "Rhombus.h"

#include <iostream>
#include <cmath>


Rhombus::Rhombus(const unsigned int size,
               const char fgSymbol,
               const char bgSymbol)
    : Shape(size, fgSymbol, bgSymbol)
{
    _type = ShapeType::Rhombus;
}

void Rhombus::drawLine(const unsigned int number, std::ostream& out) const {
    int pos1 = size() / 2 - number;
    int pos2 = size() / 2 + number;
    if (size() % 2 == 0) {
        pos1--;
    }

    for (int i = 0; i < pos1; i++) {
        out << _bgSymbol;
    }
    out << _fgSymbol; 
    for (int i = pos1 + 1; i < size(); i++) {
        if (i == pos2) {
            out << _fgSymbol;
        }
        else {
            out << _bgSymbol;
        }
    }
    out << "\n";
}

void Rhombus::draw(std::ostream& out) const {
    int center = size() / 2;

    if (size() % 2 == 0) {
        for (int i = 0; i < center; i++) {
            drawLine(i, out);
        }
    }
    else {
        for (int i = 0; i <= center; i++) {
            drawLine(i, out);
        }
    }
    for (int i = center - 1; i >= 0; i--) {
        drawLine(i, out);
    }
}

