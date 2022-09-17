#include <iostream>

using namespace std;

int* apply_all(int* a, const size_t a_size, int* b, const size_t b_size);

void print(int* a, const size_t a_size);

int main() {
    const size_t array1_size{ 5 };
    const size_t array2_size{ 3 };

    int array1[]{ 1,2,3,4,5 };
    int array2[]{ 10,20,30 };

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    int* results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size{ array1_size * array2_size };

    cout << "Result: ";
    print(results, results_size);

    cout << endl;

    return 0;
}

int* apply_all(int* a, const size_t a_size, int* b, const size_t b_size)
{
    int* arr{ new int[a_size * b_size] };
    for (size_t i{}; i < (b_size); i++)
    {
        static size_t index{};
        for (size_t j{}; j < (a_size); j++)
            arr[index++] = b[i] * a[j];
    }
    return arr;
}

void print(int* a, const size_t a_size)
{
    cout << "[ ";
    for (size_t i{}; i < a_size; i++)
        cout << a[i] << " ";
    cout << "]" << endl;
}
