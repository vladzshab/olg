<<<<<<< HEAD
﻿#include "menu_function.hpp"

#include <iostream>
#include <cstdlib>

const Vladz::MenuItem* Vladz::show_menu(const MenuItem* current) {
    std::cout << "Дарова, выбирай" << std::endl;

    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }

    std::cout << current->children[0]->title << std::endl;
    std::cout << "Выбор > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const Vladz::MenuItem* Vladz::exit(const MenuItem* current) {
    std::cout << "Пошел отсюда!" << std::endl;
    std::exit(0);
}

const Vladz::MenuItem* Vladz::altai(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Vladz::MenuItem* Vladz::golden_ring(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Vladz::MenuItem* Vladz::vladivostok(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Vladz::MenuItem* Vladz::sakhalin(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Vladz::MenuItem* Vladz::khabarovsk(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Vladz::MenuItem* Vladz::back_to_main(const MenuItem* current) {
    return current->parent->parent;
}

const Vladz::MenuItem* Vladz::back_to_travel(const MenuItem* current) {
    return current->parent->parent;
=======
﻿#include "menu_function.hpp"

#include <iostream>
#include <cstdlib>

const Vladz::MenuItem* Vladz::show_menu(const MenuItem* current) {
    std::cout << "Дарова, выбирай" << std::endl;

    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }

    std::cout << current->children[0]->title << std::endl;
    std::cout << "Выбор > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const Vladz::MenuItem* Vladz::exit(const MenuItem* current) {
    std::cout << "Пошел отсюда!" << std::endl;
    std::exit(0);
}

const Vladz::MenuItem* Vladz::altai(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Vladz::MenuItem* Vladz::golden_ring(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Vladz::MenuItem* Vladz::vladivostok(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Vladz::MenuItem* Vladz::sakhalin(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Vladz::MenuItem* Vladz::khabarovsk(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Vladz::MenuItem* Vladz::back_to_main(const MenuItem* current) {
    return current->parent->parent;
}

const Vladz::MenuItem* Vladz::back_to_travel(const MenuItem* current) {
    return current->parent->parent;
>>>>>>> c0c2ef6 (Собрал в батник)
}