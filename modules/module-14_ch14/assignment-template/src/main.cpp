#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

class DynamicProgramming {
public:
    // TODO: Implement Fibonacci with memoization
    static int fibonacciMemo(int n, std::vector<int>& memo);
    
    // TODO: Implement Fibonacci with tabulation (bottom-up)
    static int fibonacciTab(int n);
    
    // TODO: Implement Longest Common Subsequence (LCS)
    static int longestCommonSubsequence(const std::string& str1, const std::string& str2);
    
    // TODO: Implement 0/1 Knapsack problem
    static int knapsack(const std::vector<int>& weights, const std::vector<int>& values, int capacity);
    
    // TODO: Implement Coin Change problem (minimum coins)
    static int coinChange(const std::vector<int>& coins, int amount);
    
    // TODO: Implement Longest Increasing Subsequence (LIS)
    static int longestIncreasingSubsequence(const std::vector<int>& arr);
    
    // TODO: Implement Edit Distance (Levenshtein Distance)
    static int editDistance(const std::string& str1, const std::string& str2);
    
    // TODO: Helper function to print DP table (for visualization)
    template<typename T>
    static void printTable(const std::vector<std::vector<T>>& table);
};

int main() {
    // TODO: Test Fibonacci with both approaches (compare performance)
    
    // TODO: Test LCS with example strings
    // Example: "ABCDGH" and "AEDFHR" -> LCS = "ADH" (length 3)
    
    // TODO: Test 0/1 Knapsack problem
    // Example: weights = [1,3,4,5], values = [1,4,5,7], capacity = 7
    
    // TODO: Test Coin Change problem
    // Example: coins = [1,3,4], amount = 6 -> minimum 2 coins (3+3)
    
    // TODO: Test Longest Increasing Subsequence
    // Example: [10,9,2,5,3,7,101,18] -> LIS length = 4
    
    // TODO: Test Edit Distance
    // Example: "kitten" and "sitting" -> distance = 3
    
    // TODO: Compare recursive vs DP solutions (time complexity)
    
    // BONUS TODO: Implement Matrix Chain Multiplication
    
    return 0;
}