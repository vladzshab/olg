#include "menu_items.hpp"
#include "menu_function.hpp"

#include <iostream>


const Vladz::MenuItem Vladz::EXIT = {
    "0 - Как-то лень",
    Vladz::exit,
    &Vladz::MAIN
};


const Vladz::MenuItem Vladz::ALTAI = {
    "2 - Алтай",
    Vladz::altai,
    &Vladz::TRAVEL_RUSSIA
};

const Vladz::MenuItem Vladz::GOLDEN_RING = {
    "3 - Золотое Кольцо России",
    Vladz::golden_ring,
    &Vladz::TRAVEL_RUSSIA
};

const Vladz::MenuItem Vladz::BACK_TO_MAIN = {
    "0 - Назад в главное меню",
    Vladz::back_to_main,
    &Vladz::TRAVEL_RUSSIA
};


const Vladz::MenuItem Vladz::VLADIVOSTOK = {
    "1 - Владивосток",
    Vladz::vladivostok,
    &Vladz::FAR_EAST
};

const Vladz::MenuItem Vladz::SAKHALIN = {
    "2 - Сахалин",
    Vladz::sakhalin,
    &Vladz::FAR_EAST
};

const Vladz::MenuItem Vladz::KHABAROVSK = {
    "3 - Хабаровск",
    Vladz::khabarovsk,
    &Vladz::FAR_EAST
};

const Vladz::MenuItem Vladz::BACK_TO_TRAVEL = {
    "0 - Назад в меню путешествий по России",
    Vladz::back_to_travel,
    &Vladz::FAR_EAST
};


namespace {
    const Vladz::MenuItem* const far_east_children[] = {
        &Vladz::BACK_TO_TRAVEL,
        &Vladz::VLADIVOSTOK,
        &Vladz::SAKHALIN,
        &Vladz::KHABAROVSK
    };

    const int far_east_size =
        sizeof(far_east_children) / sizeof(far_east_children[0]);
}

const Vladz::MenuItem Vladz::FAR_EAST = {
    "1 - Дальний Восток",
    Vladz::show_menu,
    &Vladz::TRAVEL_RUSSIA,
    far_east_children,
    far_east_size
};


namespace {
    const Vladz::MenuItem* const travel_children[] = {
        &Vladz::BACK_TO_MAIN,
        &Vladz::FAR_EAST,
        &Vladz::ALTAI,
        &Vladz::GOLDEN_RING
    };

    const int travel_size =
        sizeof(travel_children) / sizeof(travel_children[0]);
}


const Vladz::MenuItem Vladz::TRAVEL_RUSSIA = {
    "1 - Путешествовать по России",
    Vladz::show_menu,
    &Vladz::MAIN,
    travel_children,
    travel_size
};


namespace {
    const Vladz::MenuItem* const main_children[] = {
        &Vladz::EXIT,
        &Vladz::TRAVEL_RUSSIA
    };

    const int main_size =
        sizeof(main_children) / sizeof(main_children[0]);
}


const Vladz::MenuItem Vladz::MAIN = {
    nullptr,
    Vladz::show_menu,
    nullptr,
    main_children,
    main_size
};