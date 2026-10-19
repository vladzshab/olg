#include "menu.hpp"
#include "menu_function.hpp"
#include "menu_items.hpp"

#include <iostream>


int main() {
    std::setlocale(LC_ALL, "");

    const Vladz::MenuItem* current = &Vladz::MAIN;

    do {
        current = current->func(current);
    } while (true);

    return 0;
}
