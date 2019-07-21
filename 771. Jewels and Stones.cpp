// 0 ms, 8.4 MB

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int a[256] = {0};
        for(char i : J) ++a[i];
        int cnt =0;
        for(char i : S) if(a[i]) ++cnt;
        return cnt;
    }
}



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
