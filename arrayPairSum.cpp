
#include <iostream>
#include <unordered_map>
using namespace std;
void findPair(int nums[], int n, int target)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        if (map.find(target - nums[i]) != map.end())
        {
            cout << "Pair found (" << nums[map[target -nums[i]]] << ", " << nums[i] << ")\n";
            return;
        }
        map[nums[i]] = i;
    }
    cout << "Pair not found";
}
 
int main()
{
    int nums[] = { 8, 7, 2, 5, 3, 1 };
    int target = 10;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    findPair(nums, n, target);
 
    return 0;
}
