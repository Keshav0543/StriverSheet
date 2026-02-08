#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "ABCDAEBFC";
    string t = "ABC";
    int curr_size = 0;
    int size = t.size();
    int start_ind = -1;
    int left_ind = -1;
    int ans = 1000;
    unordered_map<char, int> mp;
    for (int i = 0; i < size; i++)
    {
        mp[t[i]]++;
    }
    int left = 0;
    int right = 0;
    while (right < s.size())
    {
        if (!mp.count(s[right]))
        {
            mp[s[right]] = -1;
            right++;
        }
        else
        {
            mp[s[right]]--;
            if (mp[s[right]] >= 0)
                curr_size++;
            if (curr_size == size)
            {
                while (mp[s[left]] < 1)
                {
                   ans= min(ans, (right - left) + 1);
                    {
                        left_ind = right;
                        start_ind = left;
                    }
                    mp[s[left]]++;
                    if (mp[s[left]] >= 1)
                    {
                        ans= min(ans, (right - left) + 1);
                        {
                            left_ind = right;
                            start_ind = left;
                        }
                        left++;
                        curr_size--;
                        break;
                    }
                    left++;
                }
            }
            right++;
        }
    }
    cout<<ans<<" ";
    return 0;
}