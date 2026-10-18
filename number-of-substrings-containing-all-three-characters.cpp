class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, bool> mp;
            int total=0;
            bool ans=false;
            int i=0;
            int j;
            while(i<s.size()){
                    mp['a']=false;
                    mp['b']=false;
                    mp['c']=false;
                    j=i;
                    while(j<s.size()){
                        if(mp.count(s[j])){
                               mp[s[j]]=true;
                        }
                     
                    
                     ans=all_of(mp.begin(),mp.end(),[](auto p){
                        return p.second == true;
                     });
                if(ans){
                    total++;
                }
                j++;
                    }
                i++;
                    
            }
            return total;
    }
};
