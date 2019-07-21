// 0 ms, 8.3 MB

class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        int cnt = 0;
        for(char i : S)
            if(J.find(i) != string::npos)
                ++cnt;
        return cnt;
    }
};



// ----------------------------------------------------------------------

// bitset ver

class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        bitset<128> bs;
        for(char i : J)
        {
            bs.set((int)i);
        }
        int cnt = 0;
        for(char i : S)
        {
            if(bs[(int)i])
            {
                cnt = cnt + 1;
            }
        }
        return cnt;
    }
};
