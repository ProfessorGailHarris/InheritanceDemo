#ifndef TOUGHPACK_H
#define TOUGHPACK_H

#include "Box.h"

class ToughPack :
    public Box
{
public:
    //Constructor
    ToughPack( double l_, double w_, double h_ ) : Box{ l_, w_, h_ } {}

    // Function to calculate volume allowing for 25% packing
    double volume() const
    {
        return 0.75 * length * width * height;
    }
};

#endif
