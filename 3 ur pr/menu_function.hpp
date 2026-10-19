#pragma once

#include "menu.hpp"

namespace Vladz {
	const MenuItem* show_menu(const MenuItem* current);

	const MenuItem* exit(const MenuItem* current);

	const MenuItem* travel_russia(const MenuItem* current);
	const MenuItem* far_east(const MenuItem* current);
	const MenuItem* altai(const MenuItem* current);
	const MenuItem* golden_ring(const MenuItem* current);
	const MenuItem* back_to_main(const MenuItem* current);

	const MenuItem* vladivostok(const MenuItem* current);
	const MenuItem* sakhalin(const MenuItem* current);
	const MenuItem* khabarovsk(const MenuItem* current);
	const MenuItem* back_to_travel(const MenuItem* current);

}