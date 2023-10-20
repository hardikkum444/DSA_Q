// using quick sort for reverse lexicographicall order(reverse dictionary order)


#include <iostream>
#include <vector>
#include <string>

// Function to compare two strings in reverse lexicographical order
bool compareStrings(const std::string& a, const std::string& b) {
    return a > b;
}

// Function to partition the array of strings
int partition(std::vector<std::string>& arr, int low, int high) {
    std::string pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (compareStrings(arr[j], pivot)) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

// QuickSort algorithm for sorting in reverse lexicographical order
void quickSort(std::vector<std::string>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> words(n);
    for (int i = 0; i < n; i++) {
        std::cin >> words[i];
    }

    quickSort(words, 0, n - 1);

    for (int i = 0; i < n; i++) {
        std::cout << words[i] << " ";
    }

    std::cout << std::endl;
    
    return 0;
}
