#include <iostream>

int count(const int arr[], int n, int point) {

    int left = 0;
    int right = n - left;
    int mid;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] > point) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }

        }
        return n - left;

   
     }
        


int main() {

    setlocale(LC_ALL, "Russian");

    const int arr[] = { 14, 16, 32, 32, 32, 35, 56, 69, 72 };
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Массив из " << n << " элементов\n";
    std::cout << "Массив [14, 16, 32, 32, 32, 35, 56, 69, 72]\n";
    int point;

    std::cout << "Введите точку отчета: ";
    std::cin >> point;


    std::cout << "\nпо счету будет больше чем " << point << ": " << count(arr, n, point) << std::endl;


    return 0;
}