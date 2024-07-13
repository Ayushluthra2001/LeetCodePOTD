class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
            int n = positions.size();


            vector<int>acutal_index(n);
            for(int i=0;i<n;i++){
                acutal_index[i]=i;
            }

            auto lambda = [&] (int &i, int &j){
                return positions[i] <positions[j] ;

            };
            sort(begin(acutal_index),end(acutal_index),lambda);

            vector<int>result;
            stack<int>st;

            for(auto i : acutal_index){
                if(directions[i]=='R'){
                    st.push(i);
                }else{

                    while(!st.empty() && healths[i]>0){
                        int top = st.top();
                        st.pop();

                        if(healths[top] > healths[i]){
                            healths[top] -= 1;
                            healths[i]    = 0;
                            st.push(top);
                        }else if(healths[top] < healths[i]){
                            healths[i]  -= 1;
                            healths[top] = 0;
                        
                        }else{
                            healths[top] = 0;
                            healths[i]   = 0;

                        }
                    }
                }
            }

            for(int i=0;i<n;i++){
                if(healths[i]>0) result.push_back(healths[i]);
            }

            return result;
    }
};
