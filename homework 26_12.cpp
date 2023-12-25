
#include <iostream>
#include <cstdlib>
//For task 3:
void change_plase(int* array, int size) {
    for (int i = 0; i < size - 1; i = i + 2) {
        int variable = array[i];
        array[i] = array[i + 1];
        array[i + 1] = variable;
    }
}
//For task 4:
void fill_arr(int** array, int line, int column) {
    for (int l = 0; l < line; ++l) {
        for (int c = 0; c < column; ++c) {
            array[l][c] = rand() % 41 + 10;
        }
    }
}
void print_arr(int** array, int line, int column) {
    std::cout << "Array:\n";
    for (int l = 0; l < line; ++l) {
        for (int c = 0; c < column; ++c) {
            std::cout << array[l][c] << " ";
            
        }
        std::cout << "\n";
    }
}
//For task 5
int summ(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    if (y != 0) {
        return x / y;
    }
}
typedef int (*culculation)(int, int);

int main()
{
    /*Task3*/
    const int size = 12;
    int* array_3 = new int[size];

    for (int i = 0; i < size; ++i) {
        array_3[i] = i + 1;
    }

    change_plase(array_3, size);//вызов функции

    }

    return 0;
}

/*Task 4*/
int line, column;
std::cout << "Enter the number of lines: ";
std::cin >> line;
std::cout << "Enter the number of columns: ";
std::cin >> column;

int** array = new int* [line];
for (int i = 0; i < line; ++i) {
    array[i] = new int[column];
}
fill_arr(array, line, column);
print_arr(array, line, column);
return 0;
}
 /*Task 5*/
culculation operation;
std::cout << "Enter first number, sign (+, -, *, /), second number: ";
int number_1;
std::cin >> number_1;
char sign;
std::cin >> sign;
int number_2;
std::cin >> number_2;

switch (sign) {
case '+':
    operation = summ;
    break;
case '-':
    operation = subtract;
    break;
case '*':
    operation = multiply;
    break;
case '/':
    operation = divide;
    break;
case ' ':
    return 1;
}

int result = operation(number_1, number_2);
std::cout << "Result: " << result << "\n";
return 0;
//Enter first number, sign (+, -, *, /), second number: 8+4 Result: 12
}   


