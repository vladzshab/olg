#include <cstdlib>
#include <iostream>

static const int ARRAY_SIZE = 10;
static const int RANDOM_LIMIT = 10;

void print_array_average(float numbers[], const char* title)


int main() 
{
	int first_array[ARRAY_SIZE];
    int second_array[ARRAY_SIZE];
    int third_array[ARRAY_SIZE];

    print_array_average(first_array, "Первая");
    print_array_average(second_array, "Вторая");
    print_array_average(third_array, "Третья");
    return 0;
}

void print_array_average(float numbers[], const char* title){
    float sum = 0;
    std::cout << title << " последовательность:\n";
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        numbers[i] = std::rand() % RANDOM_LIMIT;
        std::cout << numbers[i] << ' ';
        sum += numbers[i];
    }

	const float average = static_cast<float>(sum) / ARRAY_SIZE;
	std::cout << "\nСреднее арифметическое: "<< average << "\n\n"
}			  