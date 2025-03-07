// C++ program to print all primes
// smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{

	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++)
	{
		if (prime[p] == true)
		{

			for (int i = p * p; i < n; i++)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}

// Driver Code
int main()
{
	int n = 30;
	cout << "Following are the prime numbers smaller "
		 << " than or equal to " << n << endl;
	SieveOfEratosthenes(n);
	return 0;
}
