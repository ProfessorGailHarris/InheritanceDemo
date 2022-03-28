#ifndef BOX_H
#define BOX_H

#include <iostream>

class Box
{
protected:
	double length{ 1.0 };
	double width{ 1.0 };
	double height{ 1.0 };

public:
	Box() = default;
	Box( double l_, double w_, double h_ ) : length{ l_ }, width{ w_ }, height{ h_ } {}

	//Function to display the volume
	// const ensures this method does not modify member variables.
	void showVolume() const
	{
		std::cout << "Box usable volume is " << volume() << std::endl; 
	}

	// Function to calculate the volume of a Box
	//  const ensures this method does not modify member variables.
	double volume() const
	{
		return length * width * height;
	}
};

#endif
