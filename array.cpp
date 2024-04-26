#include <iostream>

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = &array[0];
    
    // выводим 4-й элемент массива через указатель
    std::cout << *(ptr + 3) << '\n';
}