#include "Shape.h"

#include <iostream>

Shape::Shape(const unsigned int newSize, 
             const char fgSymbol, 
             const char bgSymbol)
{
    _size = newSize;
    _bgSymbol = bgSymbol;
    _fgSymbol = fgSymbol;
    _type = ShapeType::Unknown;
}


ShapeType Shape::getType() const {
	return _type;
}


void Shape::draw(std::ostream& out) const {
	for (int i = 0; i < _size; i++) {
		for (int j = 0; j < _size; j++) {
			out << _bgSymbol;
		}
		out << "\n";
	}
}


void Shape::setFgSymbol(const char c) {
    _fgSymbol = c;
}

void Shape::setBgSymbol(const char c) {
    _bgSymbol = c;
}


unsigned int Shape::size() const {
    return _size;
}

void Shape::setSize(const unsigned int newSize) {
    _size = newSize;
}
