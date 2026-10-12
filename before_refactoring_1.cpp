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
        a[i] = rand() % 10;
        cout << a[i];
        cout << ' ';
        sa = sa + a[i];
    }
    cout << ' ' << endl;
    cout << "srednee pervoy posledovatelnocty =" << sa / 10 << endl;
    cout << "vtoraja posledovatelnost" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        b[i] = std::rand() % 10;
        cout << b[i];
        cout << ' ';
        sb = sb + b[i];
    }
    cout << ' ' << endl;
    cout << "srednee vtoroy posledovatelnocty =" << sb / 10 << endl;
    cout << "tretja posledovatelnost" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        c[i] = rand() % 10;
        cout << c[i];
        cout << ' ';
        sc = sc + c[i];
    }
    cout << ' ' << endl;
    cout << "srednee tretjey posledovatelnocty =" << sc / 10 << endl;

    return 0;
}
