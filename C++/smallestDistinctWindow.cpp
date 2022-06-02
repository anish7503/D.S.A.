int findSubString(string str)
    {
        // Your code goes here
        map<char,int> mp;
        for(int i=0;i<str.size();i++){
            if(!mp[str[i]]){
                mp[str[i]]=1;
            }
        }
        int nE=mp.size();
        
        
        int s = 0, min = INT_MAX,count = 0;
        int vis[256] = {0};
    
        for (int j = 0; j < str.size(); j++) {
            vis[str[j]]++;
 
            if (vis[str[j]] == 1)
                count++;
 
            if (count == nE) {
                while (vis[str[s]] > 1) {
                        vis[str[s]]--;
                        s++;
                }
 
                int len = j - s + 1;
                if (min > len) {
                    min = len;
                }
            }
        }
        return min;
    }
