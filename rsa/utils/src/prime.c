#pragma once
#include "../headers/prime.h"

bool is_prime(long long p, int max_tests) {

	for (int i = 0; i < max_tests; i++) {
		rlong n = random(1, p);
		if ((long long)pow(n, p - 1) % p != 1) return 0;
	}

	return 1;
}

rlong prime_random(rlong min, rlong max) {
	
	rlong p = random(min, max);
	rlong max_tests = random(1, 3);

	while (!is_prime(p, max_tests)) p = random(min, max);

	return p;
}

rlong gcd(rlong a, rlong b) {
	while (b != 0) {
		rlong r = a % b;
		a = b;
		b = r;
	}
	return a;
}