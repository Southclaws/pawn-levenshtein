#include "levenshtein.inc"

#include <a_samp>

main() {
	new
		a[128],
		b[128];
	
	a = "hello there friend";
	b = "hallo thar friend";

	printf("'%s' : '%s' = %d", a, b, levenshtein(a, b));
}
