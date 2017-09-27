#pragma once
#include "../headers/rsalib.h"

RSA rsa()
{
	rlong p = prime_random(PMIN, PMAX);
	rlong q = prime_random(PMIN, PMAX);
	rlong n = p * q;

	rlong phi = (p - 1) * (q - 1);
	rlong e = random(1, phi);

	while (gcd(e, phi) != 1) e = random(1, phi);

	rlong d = 1;

	while (true) {
		if ((e * d) % phi == 1) break;
		d++;
	}

	RSA r;
	r.exp = e;
	r.modus = n;
	r.priv = d;	

	return r;
}