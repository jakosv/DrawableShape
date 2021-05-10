#include <iostream>
#include <fstream>
#include "Circle.h"
#include "Square.h"
#include "Rhombus.h"
#include "RightTriangle.h"

using namespace std;

int main()
{
    const unsigned int shapesCount = 5;
    Shape* shapes[] = {new Shape(9), 
                       new Square(9), 
                       new Circle(9), 
                       new Rhombus(9),
                       new RightTriangle(9)};

    for (int i = 0; i < shapesCount; i++) {
        Shape* shape = shapes[i];

        switch(shape->getType()) {
            case ShapeType::Unknown:
                std::cout << "Unknown\n";
                break;
            case ShapeType::Square:
                std::cout << "Square\n";
                break;
            case ShapeType::Circle:
                std::cout << "Circle\n";
                break;
            case ShapeType::Rhombus:
                std::cout << "Rhombus\n";
                break;
            case ShapeType::RightTriangle:
                std::cout << "RightTriangle\n";
                break;
            default:
                break;
        }

	    shape->draw();
        cout << "\n";

        shape->setFgSymbol('0');
        shape->setBgSymbol('!');
        shape->setSize(16);
	    shape->draw();
        cout << "\n";
    }
   
    // Other ostream output test
    ofstream file("fileExample.txt");
    if (file.is_open()) {
        for (int i = 0; i < shapesCount; i++) {
            Shape* shape = shapes[i];

            switch(shape->getType()) {
                case ShapeType::Unknown:
                    file << "Unknown\n";
                    break;
                case ShapeType::Square:
                    file << "Square\n";
                    break;
                case ShapeType::Circle:
                    file << "Circle\n";
                    break;
                default:
                    break;
            }

	        shape->draw(file);
            file << "\n";

            shape->setFgSymbol('0');
            shape->setBgSymbol('!');
            shape->setSize(16);
	        shape->draw(file);
            file << "\n";
        }
    }
}
