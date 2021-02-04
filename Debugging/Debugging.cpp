
// This project is only for using the debuhgoptions that VS includes.

#include <iostream>

void printValue(int x) {
    std::cout << x;
}

// This will make the app stop, and wait before we press any button for closing it.
void askBeforeExiting() {

    std::cout << "\n\nPulse cualquier tecla para cerrar esta ventana.";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

int main()
{
    printValue(8);
    askBeforeExiting();
}

