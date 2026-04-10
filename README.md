# ⚽ Top 3 Players - C++ Console App

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Status](https://img.shields.io/badge/status-concluído-brightgreen?style=for-the-badge)

---

## 📌 About the Project

This is a simple C++ console application that allows the user to input their top 3 favorite football players and their teams, then displays the ranking.

---

## 🚀 Features

- 📥 User input with `getline`
- 📊 Ranking system (Top 3 players)
- 🧱 Use of `struct` to organize data
- 🔁 Loop for input and output

---

## 🛠️ Technologies

- C++
- Standard Library (`iostream`, `string`)

---

## 💻 Code Example

```cpp
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
