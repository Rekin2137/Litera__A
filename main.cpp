#include <iostream>

int main() {
    int wysokosc = 5; // Wysokość litery A
    int szerokosc = (2 * wysokosc) - 1; // Szerokość litery A

    for (int i = 1; i <= wysokosc; i++) {
        for (int j = 1; j <= szerokosc; j++) {
            if (j == wysokosc - i + 1 || j == wysokosc + i - 1 || (i == wysokosc / 2 + 1 && j >= wysokosc - i + 1 && j <= wysokosc + i - 1)) {
                std::cout << "A";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}