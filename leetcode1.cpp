
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int s = nums.size(); 
        bool x = false;
        for (int i = 0; i < s; i++)
        {
            for (int j = i + 1; j < s; j++)
            {
                if (nums[i] == nums[j])
                {
                    x = true;
                }
                
            }
        }
    return bool(x);
    }
};
int main()
{   
    
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    vector<int> v(arr, arr + 4); 
    Solution obj;
    int w=obj.containsDuplicate(v); 
    if(w==1)
     cout<<"true";
    else
     cout<<"false";
}