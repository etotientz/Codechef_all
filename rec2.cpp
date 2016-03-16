#include <bits/stdc++.h>
#define ll long long int
	long long int arra[1000005];


int main() {
	ll i, n, x, sol;
	ll t;
arra[0] = 1;
	arra[1] = 1;
	for (i = 2; i < 1000004; i++) {
		arra[i] = (arra[i - 1]  * i ) % 1000003;
	}

	scanf("%lld", &t);
	while (t--) {
		scanf("%lld%lld", &n, &x);
		if (n >= 1000003) {
		sol = 0;

		} else
		sol = (arra[n] * (x%1000003)) % 1000003;
		printf("%lld\n", sol);
	}
	return 0;
}
