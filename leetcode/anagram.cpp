#include <iostream>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t) 
{
    if(s.size() != t.size())
    {return false;}

    unordered_map<char, int> ht;
    cout << "adding\n";
    for(auto e : s)
    {
        ht[e]++;
        // ht[e]--;
        cout << e<< " | " <<ht[e]<<"\n";
    }
    cout << "\n";
    // unordered_map<int, int> ht2 = {{1, 0}, {2, 0}, {3, 0}};
    cout << "deleting:\n";
    for(auto e : t)
    {
        ht[e]--;
        cout << e<< " | " <<ht[e]<<"\n";
        if(ht[e] < 0)
        {
            return false;
        }
    }
    cout << "\n";

    return true;

}


int main()
{
    string s = "ab";
    string t = "a";
    
    // cout << "Both are " <<( isAnagram(s, t)?"anagram" : "not anagram" )<< endl;
    cout << isAnagram(s, t);

    return 0;
}