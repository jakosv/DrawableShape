#pragma once

#include <iostream>

const char defaultFgSymbol = '*';
const char defaultBgSymbol = ' ';

enum class ShapeType {
    Circle = 0,
    Rectangle,
    Square,
    Rhombus,
    RightTriangle,
    Unknown
};

class Shape {
protected:
    unsigned int _size;
    char _fgSymbol;
    char _bgSymbol;
    ShapeType _type;
public:
    Shape(const unsigned int newSize, 
          const char fgSymbol = defaultBgSymbol, 
          const char bgSymbol = defaultFgSymbol);
    virtual ~Shape() = default;
	
    ShapeType getType() const;

    virtual void draw(std::ostream& out = std::cout) const;

    void setFgSymbol(const char c);
    void setBgSymbol(const char c);

    unsigned int size() const;
    void setSize(const unsigned int newSize);
};
