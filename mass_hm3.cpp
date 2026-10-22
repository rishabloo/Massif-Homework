#include <iostream>

int main()
{
    const int rows = 3, columns = 6;
    int arr [rows][columns] =
    {
        {5, 3, 4, 2, 9, 6},
        {6, 1, 2, 3, 4, 8},
        {2, 10, 8, 7, 6, 5}
    };
    std::cout << "Massif: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
int minRows = 0, minCollimns = 0;
int maxRows = 0, maxCollimns = 0;

for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
        if (arr[i][j] < arr[minRows][minCollimns]) {
            minRows = i;
            minCollimns = j;
        }
         if (arr[i][j] > arr[maxRows][maxCollimns]) {
            maxRows = i;
            maxCollimns = j;
    }
}
}
std::cout << "Index min element: " << minRows << "\t" <<minCollimns << std::endl;
std::cout << "Index max element: " << maxRows << "\t" <<maxCollimns << std::endl;
return 0;
}