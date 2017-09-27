#pragma once
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "random.h"

bool is_prime(long long number, int max_tests);
rlong prime_random(rlong min, rlong max);
rlong gcd(rlong a, rlong b);