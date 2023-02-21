#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int gcd(int a, int b) {
	if (a < b) {
		return gcd(b, a);
	}

	if (0 == b) {
		return a;
	}

	return gcd(b, a % b);
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	auto vec = vi(n);
	for (auto i = 0; i < n; ++i) {
		cin >> vec[i];
	}

	auto d = gcd(vec[0], vec[1]);
	for (auto i = 2; i < n; ++i) {
		d = gcd(d, vec[2]);
	}

	for (auto i = 1; i <= d; ++i) {
		if (0 == d % i) {
			cout << i << '\n';
		}
	}

	return 0;
}