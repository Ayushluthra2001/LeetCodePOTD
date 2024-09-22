class Solution {
public:
   int calSteps(int n, long n1, long n2) {
    int steps = 0;
    // Continue counting the number of nodes while n1 <= n
    while (n1 <= n) {
        // Add the minimum of (n + 1) and n2 to steps
        steps += min((long)n + 1, n2) - n1;
        n1 *= 10;
        n2 *= 10;
    }
    return steps;
}
   int findKthNumber(int n, int k) {
                // Initialize the current number as 1
        int curr = 1;
        // Decrement k by 1, since we're counting from 0
        k--;
        while (k > 0) {
            // Calculate the number of nodes in the next level
            int steps = calSteps(n, curr, curr + 1);
            // If the number of nodes is greater than k, go to the next level
            if (steps <= k) {
                curr += 1;
                k -= steps;
            } 
            // If the number of nodes is less than k, go to the next sibling
            else {
                curr *= 10;
                k--;
            }
        }
        // Return the kth lexicographically smallest integer
        return curr;

    }
};
