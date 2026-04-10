#include <iostream>
#include <string>

struct Jugador {
    std::string nombre;
    std::string equipo;
};

int main() {
    Jugador jugadores[3];

    std::cout << "Introduzca su top 3 de jugadores\n";

    for (int i = 2; i >= 0; i--) {
        std::cout << "Top " << (i + 1) << "\n";

        std::cout << "Nombre: ";
        std::getline(std::cin, jugadores[i].nombre);

        std::cout << "Equipo: ";
        std::getline(std::cin, jugadores[i].equipo);
    }

    std::cout << "\nSu top 3 jugadores es:\n";

    for (int i = 0; i < 3; i++) {
        std::cout << i + 1 << ".- "
                  << jugadores[i].nombre
                  << " - "
                  << jugadores[i].equipo
                  << "\n";
    }

    return 0;
}
