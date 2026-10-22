#include <iostream>
int main () {

const int size = 10;
int arr[size] = {2, 5, 7, 14, 18, 23, 25, 28, 31, 35};
std::cout << " Before: ";
for (int i = 0; i < size; i++)
{
    std::cout << arr[i];
    if ( i < size - 1)
{
        std::cout << ", ";
  }
}
std::cout <<std::endl;

int pass = 0;
do {
    for (int i = size - 1; i > pass; i--) {
        if (arr[i] < arr [i -1]) {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
    } 
    pass++;
}
while (pass < size - 1);

std::cout << "After: ";
for (int i = 0; i < size; i++) {
    std::cout << arr[i];
    if (i < size - 1) {
        std::cout << ", ";
    }
}
std::cout << std::endl;
return 0;
}
