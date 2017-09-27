#pragma once
#include "prime.h"
#include <inttypes.h>

//#define PMIN 0x10000000
//#define PMAX 0x100000000

#define PMIN 50
#define PMAX 60

typedef struct {
	rlong exp, modus, priv;
}RSA;

RSA rsa();