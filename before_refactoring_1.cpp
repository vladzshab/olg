#include <cstdlib>
#include <iostream>

static const int ARRAY_SIZE = 10;
static const int RANDOM_LIMIT = 10;

int main()
{
    float first_array[ARRAY_SIZE], second_array[ARRAY_SIZE], third_array[ARRAY_SIZE];
float first_sum, second_sum, third_sum;
    std::cout << "pervaja posledovatelnost" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
		first_array[i] = std::rand() % RANDOM_LIMIT;
		std::cout << first_array[i] << ' ';
		first_sum += first_array[i]; 
    }
    cout << ' ' << endl;
    cout << "srednee pervoy posledovatelnocty =" << sa / 10 << endl;
    cout << "vtoraja posledovatelnost" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        second_array[i] = std::rand() % RANDOM_LIMIT;
		std::cout << second_array[i] << ' ';
		first_sum += second_array[i];
    }
    cout << ' ' << endl;
    cout << "srednee vtoroy posledovatelnocty =" << sb / 10 << endl;
    cout << "tretja posledovatelnost" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        third_array[i] = std::rand() % RANDOM_LIMIT;
		std::cout << third_array[i] << ' ';
		first_sum += third_array[i];
    }
    cout << ' ' << endl;
    cout << "srednee tretjey posledovatelnocty =" << sc / 10 << endl;

    return 0;
}
