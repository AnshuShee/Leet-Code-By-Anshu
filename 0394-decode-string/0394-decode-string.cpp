class Solution {
public:

    string solve(string &s, int &i)
    {
        string result = "";

        while(i < s.length() && s[i] != ']')
        {
            if(isalpha(s[i]))
            {
                result += s[i];
                i++;
            }
            else if(isdigit(s[i]))
            {
                int num = 0;

                while(i < s.length() && isdigit(s[i]))
                {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                i++; // skip '['

                string decoded = solve(s, i);

                i++; // skip ']'

                while(num--)
                {
                    result += decoded;
                }
            }
        }

        return result;
    }

    string decodeString(string s)
    {
        int i = 0;
        return solve(s, i);
    }
};