class Solution {
public:
    string addBinary(string a, string b)
    {                     // "1"     "1"
        int i = a.size()-1;
        int j = b.size()-1;
        int c=0;
        int r=0;
        string result="";
 
        while(i>=0 && j>=0)                 // 0     0
        {                                    
            r=(int(a[i])+int(b[j])+c-96)%2;              //2%2 =>0
            c=(int(a[i])+int(b[j])+c-96)/2;               //2/2=>1
            result=to_string(r)+result;      //"0"
            --i;
            --j;      
        }
        while(i>-1)                     //-1     -1
        {
            r=(int(a[i])+c-48)%2;
            c=(int(a[i])+c-48)/2;
            result=to_string(r)+result;
            --i;
        }
        while(j>=0)                    //-1    -1
        {
            r=(int(b[j])+c-48)%2;
            c=(int(b[j])+c-48)/2;
            result=to_string(r)+result;
            j--;
        }
        cout<<c<<endl;
        if(c==1)                     //c==1 true
            result="1"+result;       // "10"
        return result;
        return {};
    }
};