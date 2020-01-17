#include "calc.h"

void mult(struct complex f, struct complex s, struct complex *r){
	r -> real = ((f.real * s.real) - (f.img * s.img));
	r -> img = ((f.real * s.img) + (f.img * s.real));
};
