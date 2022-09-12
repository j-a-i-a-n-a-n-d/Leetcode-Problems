class Solution {
public:
    string normalization(string a)
    {
        int n=a.size();
        unordered_map<char,char>map1;
        char w='a';
        for(int i=0;i<n;i++)
        {
            map1[a[i]]=w++;
        }
        for(int i=0;i<n;i++)
            a[i]=map1[a[i]];
        return a;
    }
    bool isIsomorphic(string s, string t) 
    {
        return normalization(s)==normalization(t);
    }
};
//class Solution {
//public:
//    bool isIsomorphic(string s, string t)
//    {
//        unordered_map<char,int>map1;
//        unordered_map<char,int>map2;
//        int n = s.size();
//        for(int i=0;i<n;i++)
//        {
//            map1[s[i]]=i+1;
//            cout<<map1[s[i]]<<" "<<map2[t[i]]<<endl;
//            map2[t[i]]=i+1;
//        }
//        for(int i=0;i<n;i++)
//        {
//            if (map1[s[i]]!=map2[t[i]])return false;
//        }
//        return true;
//    }
//};
//
//