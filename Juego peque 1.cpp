#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); 
    int secretNumber = rand() % 10 + 1; 
    int guess = 0;

    std::cout << "Adivina el numero secreto que tengo guardado en el sistema...dame un numero entre 1 y 10: ";

    while (guess != secretNumber) {
        std::cin >> guess;

        if (guess > secretNumber) {
            std::cout << "Ups... te equivocaste demasiado alto. Vamos, intenta de nuevo: ";
        } else if (guess < secretNumber) {
            std::cout << "Ups!...te equivocaste demasiado bajo. Vamos, intenta de nuevo: ";
        }
    }

    std::cout << " Yuju! es coooorrecto! El numero era " << secretNumber << std::endl;

    system("pause");
}
