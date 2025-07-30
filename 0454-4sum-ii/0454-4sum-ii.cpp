class Solution {
public:
    int fourSumCount(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
        int n=a.size();
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
                mp[a[i]+b[j]]++;
        
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
                if(mp.count(-c[i]-d[j])) ans+=mp[-c[i]-d[j]];
        return ans;
    }
};