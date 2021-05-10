#include "RightTriangle.h"

#include <iostream>

RightTriangle::RightTriangle(const unsigned int size,
               const char fgSymbol,
               const char bgSymbol)
    : Shape(size, fgSymbol, bgSymbol)
{
    _type = ShapeType::RightTriangle;
}

void RightTriangle::draw(std::ostream& out) const {
    int pos = 0;
    for (int i = 0; i < size() - 1; i++) {
        out << _fgSymbol;
        for (int j = 1; j < size(); j++) {
            if (j == pos) {
                out << _fgSymbol;
            }
            else {
                out << _bgSymbol;
            }
        }
        pos++;
        out << "\n";
    }
    for (int i = 0; i < size(); i++) {
        out << _fgSymbol;
    }
    out << "\n";
}

