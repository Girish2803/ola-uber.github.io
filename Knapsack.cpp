#include <bits/stdc++.h>
using namespace std;

// Function to solve the unbounded knapsack problem
int optimizeDriverDeployment(int numDrivers, int maxResources, vector<int>& profit, vector<int>& resources) {
    vector<vector<int>> dp(numDrivers, vector<int>(maxResources + 1, 0)); // Create a DP table

    // Base Condition
    for (int i = resources[0]; i <= maxResources; i++) {
        dp[0][i] = (i / resources[0]) * profit[0]; // Calculate the maximum profit for the first driver
    }

    for (int ind = 1; ind < numDrivers; ind++) {
        for (int cap = 0; cap <= maxResources; cap++) {
            int notTaken = 0 + dp[ind - 1][cap]; // Maximum profit without deploying the current driver

            int taken = INT_MIN;
            if (resources[ind] <= cap)
                taken = profit[ind] + dp[ind][cap - resources[ind]]; // Maximum profit by deploying the current driver

            dp[ind][cap] = max(notTaken, taken); // Store the maximum profit in the DP table
        }
    }

    return dp[numDrivers - 1][maxResources]; // Return the maximum profit considering all drivers and the resource constraints
}

int main() {
    vector<int> resources = {2, 4, 6}; // Constraints associated with drivers (e.g., availability or cost)
    vector<int> profit = {5, 11, 13}; // Profit/efficiency of drivers
    int maxResources = 10; // Total resource constraint (e.g., maximum hours or budget)
    int numDrivers = resources.size(); // Number of drivers

    // Call the function to calculate and output the maximum profit from deploying drivers
    cout << "The maximum profit from deploying drivers is " << optimizeDriverDeployment(numDrivers, maxResources, profit, resources) << endl;

    return 0; // Return 0 to indicate successful program execution
}
