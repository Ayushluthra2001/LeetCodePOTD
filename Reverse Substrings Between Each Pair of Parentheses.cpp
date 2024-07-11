class Solution {
public:
    void swapWords(vector<string>& words, int start, int end) {
        while (start <= end) {
            if (start == end) {
                swapChar(words[start]);
            } else {
                swapChar(words[start]);
                swapChar(words[end]);
                swap(words[start], words[end]);
            }
            end--;
            start++;
        }
        return;
    }

    void swapChar(string& temp) {
        int start = 0;
        int end = temp.length() - 1;
        while (start <= end) {
            swap(temp[start], temp[end]);
            start++;
            end--;
        }
        return;
    }

    string reverseParentheses(string s) {
        vector<string> words;
        vector<int> openBrackets;

        int i = 0;
        while (i < s.length()) {
            if (s[i] == '(') {
                openBrackets.push_back(words.size());
                i++;
            } else if (s[i] == ')') {
                int openIndex = openBrackets.back();
                openBrackets.pop_back();
                swapWords(words, openIndex, words.size() - 1);
                i++;
            } else {
                int j = i;
                string temp = "";
                while (j < s.length() && s[j] != '(' && s[j] != ')') {
                    temp += s[j++];
                }
                words.push_back(temp);
                i = j;
            }
        }

        string ans = "";
        for (auto& word : words) {
            ans += word;
        }

        return ans;
    }
};
