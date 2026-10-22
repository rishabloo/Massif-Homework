#include <iostream>
int main () {

const int size = 10;
int arr[size] = {2, 5, 7, 14, 18, 23, 25, 28, 31, 35};
for (int i = 0; i < size; i++)
{
    std::cout << arr[i];
    if ( i < size - 1)
{
        std::cout << ", ";
  }
}
std::cout <<std::endl;
return 0;
}