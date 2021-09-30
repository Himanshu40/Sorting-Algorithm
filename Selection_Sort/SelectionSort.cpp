// Selection sort in c++

#include <iostream>
#include <vector>

void display(std::vector<int> vec) {

    for (auto it = std::begin(vec); it != std::end(vec); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
}

void selectionSort(std::vector<int> &vec) {
    int min, temp;

    for (auto it1 = std::begin(vec); it1 != std::end(vec); ++it1) {
        auto min = it1;
        // int value = *it1;

        for (auto it2 = it1 + 1; it2 != std::end(vec); ++it2) {
            if (*it2 < *min) {
                min = it2;
            }
        }

    std::iter_swap(min, it1);

    }
}

int main() {
    std::vector<int> vec;
    int size;
    int element;

    std::cout << "\n\t---SELECTION SORT---" << std::endl;
    std::cout << "Enter size :";
    std::cin >> size;

    for (int i = 0; i < size; ++i) {
        std::cout << "Enter the elements in the array: ";
        std::cin >> element;
        
        vec.push_back(element);
    }

    std::cout << "Elements in the array : " << std::endl;
    display(vec);

    selectionSort(vec);

    std::cout << "Elements in ascending order" << std::endl;
    display(vec);

    return 0;
}