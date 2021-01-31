
// This app will, simply, sum two numbers that we'll input from the console. It's an easy program. 

#include <iostream>     // For having std::cout and std::cin
#include <limits>       // We need them for allowing the app to only close if the user press any key. 

int sum(int x, int y);  // Now, I'm declaring the sum() function that's on sum.cpp

int main()
{
    std::cout << "Bienvenido a SumNumber!\n" << "Somos la aplicacion perfecta si no sabes sumar.\n";

    std::cout << "Por favor, introduzca el primer numero.\n";
    int x{ 0 };
    std::cin >> x;

    std::cout << "Ahora introduzca el segundo numero.\n";
    int y{ 0 };
    std::cin >> y;

    std::cout << "La suma de " << x << " y " << y << " es igual a " << sum(x, y);

    // This will make the app stop, and wait before we press any button for closing it.
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

