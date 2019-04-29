#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		stack<int> st;
		int j = 0;
		for (int i = 0; i < popV.size(); i++)
		{
			if (st.empty() || popV[j] != st.top())
			{
				st.push(pushV[i]);
			}
			if (st.top() == popV[j])
			{
				st.pop();
				j++;
			}
		}
		if (st.empty())
		{
			return true;
		}
		return false;
	}
};

int main()
{
	vector<int> pushV = { 1,2,3,4,5 };
	vector<int> popV = { 4,5,3,2,1 };
	Solution().IsPopOrder(pushV, popV);
	return 0;
}