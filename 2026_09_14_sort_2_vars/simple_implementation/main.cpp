#include <iostream>

int main() {
    int size;
    std::cin >> size;

    int* arr = new int[size];
    int* original_arr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
        original_arr[i] = arr[i];
    }

    my_sort(arr, size);

    for (int i = 0; i < size; i++) {
        std::cout << original_arr[i] << " ";
    }

    std::cout << "\n";

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    delete[] arr;
    delete[] original_arr;

    return 0;
}

void my_sort(int *arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
