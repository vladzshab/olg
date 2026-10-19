<<<<<<< HEAD
﻿#pragma once 

namespace Vladz {
	struct MenuItem {
		const char* const title;
		const MenuItem* (*func)(const MenuItem* current);
		const MenuItem* parent;
		const MenuItem* const* children;
		const int children_count;
	};
}

=======
﻿#pragma once 

namespace Vladz {
	struct MenuItem {
		const char* const title;
		const MenuItem* (*func)(const MenuItem* current);
		const MenuItem* parent;
		const MenuItem* const* children;
		const int children_count;
	};
}

>>>>>>> c0c2ef6 (Собрал в батник)
