#include "../headers/random.h"

rlong random(rlong min, rlong max) {
	srand(time(NULL));
	rlong r = rand() % (max - min) + min;
	return r;
}
