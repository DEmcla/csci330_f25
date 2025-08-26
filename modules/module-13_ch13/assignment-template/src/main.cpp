#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>

class AdvancedSorting {
public:
    // TODO: Implement merge sort algorithm
    static void mergeSort(std::vector<int>& arr, int left, int right);
    
    // TODO: Helper function for merge sort
    static void merge(std::vector<int>& arr, int left, int mid, int right);
    
    // TODO: Implement quicksort algorithm
    static void quickSort(std::vector<int>& arr, int low, int high);
    
    // TODO: Helper function for quicksort (partition)
    static int partition(std::vector<int>& arr, int low, int high);
    
    // TODO: Implement heap sort algorithm
    static void heapSort(std::vector<int>& arr);
    
    // TODO: Helper functions for heap sort
    static void heapify(std::vector<int>& arr, int n, int i);
    static void buildMaxHeap(std::vector<int>& arr);
    
    // TODO: Implement counting sort (for integers in specific range)
    static void countingSort(std::vector<int>& arr, int maxValue);
    
    // TODO: Create wrapper functions for timing
    template<typename SortFunc>
    static double timeSort(SortFunc sortFunction, std::vector<int> arr);
    
    // TODO: Generate test data of different characteristics
    static std::vector<int> generateRandomArray(int size);
    static std::vector<int> generateSortedArray(int size);
    static std::vector<int> generateReverseSortedArray(int size);
};

int main() {
    // TODO: Create test arrays of different sizes (1000, 10000, 50000)
    
    // TODO: Test all sorting algorithms on random data
    
    // TODO: Test on already sorted data
    
    // TODO: Test on reverse sorted data
    
    // TODO: Create performance comparison table
    
    // TODO: Analyze best-case, average-case, and worst-case scenarios
    
    // TODO: Verify correctness of all sorting algorithms
    
    // BONUS TODO: Implement radix sort and add to comparison
    
    return 0;
}