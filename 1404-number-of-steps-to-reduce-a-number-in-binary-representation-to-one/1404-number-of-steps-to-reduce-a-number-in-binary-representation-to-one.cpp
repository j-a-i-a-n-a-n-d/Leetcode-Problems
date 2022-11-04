class Solution {
public:
    int numSteps(string s)
    {
	int cnt = 0;
	while (s != "1") 
    {
		if (s.back() == '0') 
            s.pop_back();
		else 
        {
			while (!s.empty()/*imp*/ && s.back() == '1') 
            {
				s.pop_back();
				++cnt;
			}
			if (s.empty()) return cnt + 1;
			else s.back() = '1';
		}
		++cnt;
	}
	return cnt; 
    }
};