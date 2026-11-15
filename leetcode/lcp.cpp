/*

14. Longest Common Prefix
Easy
Topics
premium lock icon
Companies
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.

*/

#include <vector>
#include <iostream>
using namespace std;

string longestCommonPrefix(vector<string>& strs){

    string common = "";
    int rows = strs.size(), cols = strs[0].size();

    for(int i=0; i<cols; i++)
    {
        char c = strs[0][i];
        for(int j=1; j<rows; j++)
        {
            if(strs[j][i] != c)
            {
                return common;
            }
        }
        common.push_back(c);
    }

    return common;

}

int main()
{
    vector<string> strs = {"flower","f","flight"};
    string c = longestCommonPrefix(strs);

    cout << "least common prefix: \'" << c << "\'" << endl;

    return 0;
}


