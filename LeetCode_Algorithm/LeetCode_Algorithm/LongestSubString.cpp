#include <vector>
#include <iostream>

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int max_value = 0;
		bool pass = 0;
		bool pass1 = 0;
		bool pass2 = 0;
		int i, j;
		for (i = 0; i<s.length(); i++)
		{
			pass1 = 0;
			for (j = i + 1; j<s.length(); j++)
			{
				pass = 0;
				for (int k = i + 1; k<j; k++)
				{
					if (s[k] == s[j])
					{
						max_value = max(max_value, j - k);
						pass = true;
						break;
					}
				}
				if (pass == true)
				{
					pass = false;
					break;
				}
				else if (s[i] == s[j])
				{
					max_value = max(max_value, j - i);
					pass1 = true;
				}

			}
			if (pass1 == false)
				max_value = max(max_value, j - i);

		}


		return max_value;
	}
};