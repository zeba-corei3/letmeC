class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        if(n==1) return;

        for(int i=0, j = n-1; i<n/2; i++, j--)
        {
            int temp = s[i];
            s[i] = s[j-i];
            s[j-i] = temp;
        }

    }
};
