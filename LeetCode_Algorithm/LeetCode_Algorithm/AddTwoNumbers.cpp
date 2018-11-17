#include <iostream>

/**
 Definition for singly-linked list.
*/

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *result = new ListNode(0);
		ListNode * node = result;
		bool ceiling = 0;
		int i, j;
		for (; l1 != NULL || l2 != NULL || ceiling != 0;)
		{
			if (l1 == NULL)
				i = 0;
			else
			{
				i = l1->val;
				l1 = l1->next;
			}

			if (l2 == NULL)
				j = 0;
			else
			{
				j = l2->val;
				l2 = l2->next;
			}


			if (i + j + ceiling >= 10)
			{
				node->val = (i + j + ceiling) % 10;
				ceiling = 1;
			}
			else
			{
				node->val = i + j + ceiling;
				ceiling = 0;
			}



			if (l1 != NULL || l2 != NULL || ceiling != 0)
			{
				node->next = new ListNode(NULL);
				node = node->next;
			}



		}
		return result;

	}
};