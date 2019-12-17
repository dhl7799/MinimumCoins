#include<iostream>
//https://www.acmicpc.net/problem/11047
using namespace std;

int main()
{
	int N, K,C, m, n;
	scanf("%d %d", &N, &K);
	int* A = new int[N];

	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	int i = N-1;
	C = 0;
	m = 0;
	n = 0;

	
	while (i>0)
	{
		if (K < A[i]) {
			i--;
			continue;

		}
		else{
			m = K / A[i];
			n = K - A[i] * m;
			C = C + m;
			K = n;
			i--;
		}
		

	}

	printf("%d\n", C);
	return 0;
}