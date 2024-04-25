#include<iostream>
#include<vector>
using namespace std;

int main()
{	
	//拉取
	int n;
	cin >> n;
	int nums[26];
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int temp_max = nums[n - 1];
	int max_cnt = 1;
	vector<int> dp(n+1, 1);
	for (int i = n - 2; i >= 0; i--) {
		if (nums[i] >= temp_max) {
			temp_max = nums[i];
			dp[i] = max_cnt++;
		}
		else {
			if (nums[i] >= nums[i + 1]) {
				dp[i] = dp[i + 1] + 1;
			}
		}
	}
	cout << max_cnt << endl;
	return 0;
}
