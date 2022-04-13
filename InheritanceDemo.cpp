// InheritanceDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Box.h"
#include "ToughPack.h"

int main()
{
    std::cout << "Hello World!\n\n";

    // 1. behaviour with objects
    std::cout << "1. Behaviour with objects\n\n";

    // declare box1 as an instance of Box
    Box box1{ 20.0, 30.0, 40.0 };
    
    // declare toughie as an instance of ToughPack
    ToughPack toughie{ 20.0, 30.0, 40.0 };

    // what output do you expect from these two lines???
    box1.showVolume();  // calls Box::volume()
    toughie.showVolume(); // calls ToughPack::volume()

    std::cout << "\n\n";

    // 2. behaviour with pointers
    std::cout << "2.Behaviour with pointers\n\n";
    Box *pBox1;
    pBox1 = &toughie;
    
    // what output do you expect from these two lines???
    std::cout << "tough case volume is " << toughie.volume() << std::endl;
    std::cout << "tough case volume through pBox1 is " << pBox1->volume() << std::endl;

    std::cout << "\n\n";


    // 3. virtual destructors
    
    std::cout << "3. Virtual Destructors\n\n";

    Box* pBox2;
    pBox2 = new Box( 2.0, 3.0, 4.0 );
    Box* pTough2;
    pTough2 = new ToughPack( 1.0, 2.0, 3.0 );

    delete pBox2;
    delete pTough2;

    std::cout << "\n\n";


    // End of main
    std::cout << "End of main\n\n";
}
