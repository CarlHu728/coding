#include <bits/stdc++.h>

using ll = long long;
using vi = std::vector<int>;
using vll = std::vector<ll>;
using pii = std::pair<int, int>;


int main() {
	std::cin.tie(0), std::cout.tie(0);
	std::ios::sync_with_stdio(false);
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i ++) std::cout << (i % 3 ? 1 : 2) << " ";
}