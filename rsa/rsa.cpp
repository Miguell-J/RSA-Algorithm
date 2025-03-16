#include "rsa.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cstdlib>

std::vector<long long> sieve(long long n)
{
	std::vector<long long> is_prime(n + 1, true);
	std::vector<long long> primes;
	is_prime[0] = is_prime[1] = false;

	for (long long i = 2; i <= n; i++)
	{
		if (is_prime[i])
		{
			primes.push_back(i);
			for (long long j = i * i; j <= n; j += i)
			{
				is_prime[j] = false;
			}
		}
	}

	return primes;
}

long long gcd(long long a, long long b) {
	while (b != 0) {
		long long t = b;
		b = a % b;
		a = t;
	}
	return a;
}

long long modIN(long long e, long long phi) {
	long long m0 = phi, t, q;
	long long x0 = 0, x1 = 1;
	if (phi == 1) return 0;
	while (e > 1) {
		q = e / phi;
		t = phi;
		phi = e % phi;
		e = t;
		t = x0;
		x0 = x1 - q * x0;
		x1 = t;
	}
	if (x1 < 0) x1 += m0;
	return x1;
}

long long power(long long base, long long exp, long long mod) {
	long long result = 1;
	base = base % mod;
	while (exp > 0) {
		if (exp % 2 == 1) {
			result = (result * base) % mod;
		}
		exp = exp >> 1;
		base = (base * base) % mod;
	}
	return result;
}

void rsa(long long& n, long long& e, long long& d, long long x) {
	std::vector<long long> primes = sieve(x);
	srand(time(NULL));
	long long p = primes[rand() % primes.size()];
	long long q;
	do {
		q = primes[rand() % primes.size()];
	} while (p == q);
	n = p * q;
	long long phi = (p - 1) * (q - 1);
	e = 2;
	while (gcd(e, phi) != 1) {
		e++;
	}
	d = modIN(e, phi);
}

long long encrypt(long long msg, long long e, long long n) {
	return power(msg, e, n);
}

long long decrypt(long long dcp, long long d, long long n) {
	return power(dcp, d, n);
}

