#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int i;
		vector<int> number;
		int temp;
		for (i = 0; i<nums.size(); i++)
		{
			temp = target - nums[i];
			for (int j = i + 1; j<nums.size(); j++)
			{
				if (nums[j] == temp)
				{
					number.push_back(i);
					number.push_back(j);
					return number;
				}
			}
		}
		return number;
	}
};