#include <bits/stdc++.h>
#define gc getchar_unlocked

void scanint(long long int &x)
{
    register long long int c = gc();
    x = 0;
    long long int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int main() {
	int t;
	long long int r, g, b, k, ans;
	long long int a[3];
	
	scanf("%d", &t);
	
	while (t--) {
		scanint(r);
		scanint(g);
		scanint(b);
		scanint(k);
		
		a[0] = r;
		a[1] = g;
		a[2] = b;
		
		std::sort(a, a + 3);
		ans = 0;
		if (k <= (a[0] + 1)) {
			ans += 1 + (3 * (k - 1));
		} else if (k <= (a[1] + 1)) {
			ans += 1 + (3 * a[0]);
			k -= a[0];
			ans += 2 * (k - 1);
		} else {
			ans += 1 + (3 * a[0]);
			k -= a[0];
			ans += 2 * (a[1] - a[0]);
			k -= (a[1] - a[0]);
			ans += k - 1;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
