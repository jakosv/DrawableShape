#include "Square.h"

#include <iostream>

Square::Square(const unsigned int size,
               const char fgSymbol,
               const char bgSymbol) 
   : Shape(size, fgSymbol, bgSymbol)
{
    _type = ShapeType::Square;    
}

void Square::draw(std::ostream& out) const {
    for (unsigned int i = 0; i < size(); i++) {
        out << _fgSymbol;
    }
    out << "\n";
    for (unsigned int i = 1; i < size() - 1; i++) {
        out << _fgSymbol;
        for (unsigned int j = 1; j < size() - 1; j++) {
            out << _bgSymbol;
        }
        out << _fgSymbol << "\n";
    }
    for (unsigned int i = 0; i < size(); i++) {
        out << _fgSymbol;
    }
    out << "\n";
}
