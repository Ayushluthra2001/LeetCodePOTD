class Solution {
public:
    string solve(int num, unordered_map<int, string>& mapping) {
        if (num < 20) return mapping[num];
        if (num < 100) return mapping[num / 10 * 10] + ((num % 10 != 0) ? " " + mapping[num % 10] : "");
        if (num < 1000) return solve(num / 100, mapping) + " Hundred" + ((num % 100 != 0) ? " " + solve(num % 100, mapping) : "");
        if (num < 10000) return solve(num / 1000, mapping) + " Thousand" + ((num % 1000 != 0) ? " " + solve(num % 1000, mapping) : "");
        if (num < 1000000) return solve(num / 1000, mapping) + " Thousand" + ((num % 1000 != 0) ? " " + solve(num % 1000, mapping) : "");
        if (num < 1000000000) return solve(num / 1000000, mapping) + " Million" + ((num % 1000000 != 0) ? " " + solve(num % 1000000, mapping) : "");
        return solve(num / 1000000000, mapping) + " Billion" + ((num % 1000000000 != 0) ? " " + solve(num % 1000000000, mapping) : "");
    }

    string numberToWords(int num) {
        if (num == 0) return "Zero";
        
        unordered_map<int, string> mapping = {
            {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"},
            {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}, {10, "Ten"},
            {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"},
            {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"},
            {19, "Nineteen"}, {20, "Twenty"}, {30, "Thirty"}, {40, "Forty"},
            {50, "Fifty"}, {60, "Sixty"}, {70, "Seventy"}, {80, "Eighty"},
            {90, "Ninety"}
        };

        return solve(num, mapping);
    }
};
