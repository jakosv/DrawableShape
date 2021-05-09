#include <iostream>
#include <fstream>
#include "Circle.h"
#include "Square.h"

using namespace std;

int main()
{
    Shape* shapes[] = {new Shape(9), new Square(9), new Circle(9)};

    for (int i = 0; i < 3; i++) {
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
        for (int i = 0; i < 3; i++) {
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
