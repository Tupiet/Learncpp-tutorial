
// This app will, simply, sum two numbers that we'll input from the console. It's an easy program. 

#include "sum.h"        // Including the header with the math logic
#include "getInput.h"   // Including the header with all the inputs
#include "utilities.h"  // This includes some utilities that will made this easy to understarnd

#include <iostream>     // For having std::cout and std::cin
#include <limits>       // We need them for allowing the app to only close if the user press any key.

int main()
{
    std::cout << "Bienvenido a SumNumber!\n" << "Somos la aplicacion perfecta si no sabes sumar.\n";

    int x = intInput();
    int y = intInput();

    std::cout << "La suma de " << x << " y " << y << " es igual a " << sum(x, y);

    askBeforeExiting();

    return 0;
}

