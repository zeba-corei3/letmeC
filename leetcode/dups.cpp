#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {1, 3, 3};

    int dist[100] = {0};
    int n = sizeof(dist)/sizeof(dist[0]);
    int c = 0;

    for(int i=0; i<nums.size(); i++)
    {
        if(dist[nums[i]] == 0)
        {
            dist[nums[i]] = 1;
        }
    }


    for(int i=0; i<n; i++)
    {
        if(dist[i] == 1)
        cout<<i<<" "<<dist[i]<<endl;
    }


    for(int i=0; i<n; i++)
    {
        if(dist[i] == 1)
        {
            // c++;
            nums[c++] = i;
            // cout << "\nat i = "<< c << " = " <<nums[i] <<"  ";
        }
    }


    // cout << "final array of size "<<c<<" : \n";
    // for(int i = 0; i<c; i++)
    // cout << nums[i] <<"  ";
    // cout<<"\n";

    return c;
}