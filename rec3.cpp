#include <bits/stdc++.h>
using namespace std;
int main() {

	int n, m, i, j, t, k;
	scanf("%d%d", &n, &m);
	t = m;

	int bar[n+5];

	fill(bar, bar + n + 5, 0);
while (t--) {
		scanf("%d%d", &i, &j);
		bar[i]++;
		bar[j+1]--;

	}
	for(k = 1; k < (n + 1); k++) {
			bar[k] += bar[k-1];

		}

sort(bar, bar + n + 1);

		printf("%d\n", bar[n/2 + 1]);
	return 0;
}
