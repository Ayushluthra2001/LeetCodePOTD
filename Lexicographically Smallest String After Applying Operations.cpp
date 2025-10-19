class Solution {
public:
void rotate(string &s , int b){
    reverse(begin(s), end(s));
    reverse(begin(s), begin(s)+b);
    reverse(begin(s)+b , end(s));
}
    string findLexSmallestString(string s, int a, int b) {
        string smallestString = s;


        queue<string>q;
        q.push(smallestString);
        unordered_set<string>visited;
        visited.insert(smallestString);
        while(!q.empty()){
            string curr = q.front();
            q.pop();

            if(curr <  smallestString){
                smallestString = curr;
            }

            string temp = curr;
            for(int i =1; i<temp.length();  i+=2){
                temp[i] = ((temp[i]-'0' + a)%10)+'0';


            }
            if(!visited.count(temp)){
                q.push(temp);
                visited.insert(temp);
            }

            rotate(curr, b);
              if(!visited.count(curr)){
                q.push(curr);
                visited.insert(curr);
            }
        }

        return smallestString;
    }
};
