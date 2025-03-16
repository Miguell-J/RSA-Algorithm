#pragma once
#ifndef RSA_H
#define RSA_H

#include <vector>

std::vector<long long> sieve(long long n);
long long gcd(long long a, long long b);
long long modIN(long long e, long long phi);
long long power(long long base, long long exp, long long mod);
void rsa(long long &n, long long &e, long long &d, long long x);
long long encrypt(long long msg, long long e, long long n);
long long decrypt(long long dcp, long long d, long long n);

#endif // !RSA_H




