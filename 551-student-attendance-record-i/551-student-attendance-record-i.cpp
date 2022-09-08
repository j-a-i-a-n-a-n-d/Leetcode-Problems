class Solution {
public:
    bool checkRecord(string s)
    {
        int A=0;
        int L=0;
        for(int i=0;i<s.length();i++)
        {
            if (s[i]=='A')
            {
                A++;
                cout<<"A"<<A<<endl;
                L=0;
                if(A==2)
                    return false;
            }
            else if (s[i]=='L')
            {
                L++;
                cout<<"L"<<L<<endl;
                if(L==3)
                    return false;
            }
            else 
                L=0;
        }
        return true;
    }
};