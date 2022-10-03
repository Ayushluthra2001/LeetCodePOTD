int minCost(string colors, vector<int>& neededTime) {
        char ch='*';
        int totalcost=0;
        int currcost=0;
        for(int i=0;i<colors.length();i++){
            if(colors[i]==ch){
                if(neededTime[i]>=currcost){
                    totalcost+=currcost;
                    ch=colors[i];
                    currcost=neededTime[i];
                }else{
                    totalcost+=neededTime[i];
                    ch=colors[i];
                }
            }else{
                ch=colors[i];
                currcost=neededTime[i];
            }
        }
        return totalcost;
    }
