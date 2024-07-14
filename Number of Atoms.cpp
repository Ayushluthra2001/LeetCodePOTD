class Solution {
public:
    string countOfAtoms(string formula) {

        int n = formula.length();
        stack<unordered_map<string,int>>st;
        st.push(unordered_map<string,int>());

        int i=0;
        while(i<n){
            if(formula[i]=='('){
                st.push(unordered_map<string,int>());
                i++;
            }else if(formula[i]==')'){
                unordered_map<string,int>curr = st.top();
                st.pop();
                i++;
                string temp="";
                while(i<n && isdigit(formula[i])){
                    temp+=formula[i];
                    i++;
                }
                if(temp.length()!=0){
                    int multiplier = stoi(temp);
                    for(auto i : curr){
                        string element  =i.first;
                        int count       =i.second;

                        curr[element] = multiplier *count;
                    }
                    
                }

                for(auto i : curr){
                    string element = i.first;
                    int count      = i.second;
                    
                    st.top()[element] += count;
                }

            }else{
                string currElement ="";
                currElement+=formula[i];
                i++;
                while(i<n && isalpha(formula[i]) && islower(formula[i])){
                    currElement += formula[i];
                    i++;
                }

                string count ="";
                while(i<n && isdigit(formula[i])){
                    count+=formula[i++];
                }
              
                int currCount = count.length()==0 ? 1 :stoi(count);

                st.top()[currElement]  += currCount;
            }
        }
        map<string,int>mapping(st.top().begin(),st.top().end());
        string result ="";
        for(auto i : mapping){
            string element = i.first;
            int count = i.second;
            result+=element;
            if(count>1){
                result+=to_string(count);
            }
        }
        return result;
    }
};
