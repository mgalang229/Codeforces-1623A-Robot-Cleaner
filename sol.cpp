#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m, rb, cb, rd, cd;
		cin >> n >> m >> rb >> cb >> rd >> cd;
		// perform the operations until the robot is at the same row/column as the dirt
		int ans = 0;
		// x and y movements are both plus 1
		int dr = 1;
		int dc = 1;
		while (rb != rd && cb != cd) {
			// if the robot is about to hit a wall (row/column), then change the sign of dr/dc
			if (rb + dr > n) {
				dr = -dr;
			}
			if (cb + dc > m) {
				dc = -dc;
			}
			// add the movement to the current position of the robot
			rb += dr;
			cb += dc;
			// increment ans for every movement
			ans++;
  	}	
  	cout << ans << '\n';
	}
	return 0;
}