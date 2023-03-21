#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	auto dat = vi(n);
	auto dp = vi(n, 0);
	for (auto i = 0; i < n; ++i) {
		cin >> dat[i];
		if (0 == i) {
			dp[i] = dat[i];
		}
		else {
			if (dp[i - 1] < 0) {
				dp[i] = dat[i];
			}
			else {
				dp[i] = dp[i - 1] + dat[i];
			}
		}
	}

	cout << *max_element(dp.begin(), dp.end());

	return 0;
}