#include <iostream>
int main () {

const int size = 10;
int arr[size] = {2, 5, 7, 14, 18, 23, 25, 28, 31, 35};

std::cout << " Massif: ";
for (int i = 0; i < size; i++) {
    std::cout << arr[i];
    if ( i < size - 1) {
        std:: cout << " ";
    }
}
std::cout << std::endl;

int min = arr[0];
int max = arr[0];
for (int i = 1; i < size; i++) {
    if (arr[i] < min) {
        min = arr[i];
    }
    if (arr[i] > max) {
        max = arr[i];
    }
}
std::cout << " Minimal element " << min << std::endl;
std::cout << " Maximal element " << max << std::endl;
return 0;
}