//class Solution {
//public:
//    vector<string> conversion (string &p)
//    {
//        vector<string>arr;
//        int n = p.length();
//        for(int i =0;i<p.size();i++)
//        {
//            string s = "";
//            while (i<p.size() && p[i]!=',')
//            {
//                s=s+p[i];
//                i++;
//            }
//            arr.push_back(s);
//        }
//        //for(int i=0;i<arr.size();i++)
//        //{
//        //    cout<<arr[i]<<endl;
//        //}
//        return arr;
//    }
//    bool isValidSerialization(string p) 
//    {
//        if (p.size()==1 && p[0]=='#')return 1;
//        int v=0;
//        vector<string> parsed;
//        parsed=conversion(p);
//        for(int i=0;i<parsed.size();i++)
//        {
//            if(v==0 && parsed[i]!="#")v+=2;
//            else if (parsed[i]!="#")v+=1;
//            else if (parsed[i]=="#" && v!=0)v--;
//            else ;
//        }
//        return v==0?true:false; 
//    }
//};//
class Solution
{
    public:
        bool isValidSerialization(string p)
        {
            //creating Tokens
            vector<string> tokens;
            stringstream check(p);
            string temp;
            while (getline(check, temp, ','))
            {
                tokens.push_back(temp);
            }
            int v = 1;	//vacancy
            //checking for valid preorder
            for (auto s: tokens)
            {
                v--;
                if(v<0){
                    return false;
                }
                if (s != "#")
                {
                    v += 2;
                }
            }
            return v == 0;
        }
};
