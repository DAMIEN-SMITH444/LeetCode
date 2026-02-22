class Solution {
public:
    string maximumXor(string s, string t) {
        int z=0,o=0;
        string str;

        for(int var=0;var<t.size();var++)
        {
        if(t[var]=='0')
        z++;
        else
        o++;
        }


        for(int var=0;var<s.size();var++)
        {
            if(s[var]=='0')
            {
               if(o)
               {
                str.push_back('1');
                o--;
               }
               else
               str.push_back('0');
            }
            else
            {
                if(z)
                {
                    str.push_back('1');
                    z--;
                }
                else
                str.push_back('0');
            }
        }
       return str;
    }
};