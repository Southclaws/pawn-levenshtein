#include "levenshtein.inc"

#include <a_samp>

main() {
	new
		a[128],
		b[128];
	
	a = "hello there friend";
	b = "hallo thar friend";
	printf("'%s' : '%s' = %d", a, b, levenshtein(a, b));

	a = "hello";
	b = "hallo";
	printf("'%s' : '%s' = %d", a, b, levenshtein(a, b));

	a = "this is the same";
	b = "this is the same";
	printf("'%s' : '%s' = %d", a, b, levenshtein(a, b));

	a = "this is wildly different";
	b = "from the next string";
	printf("'%s' : '%s' = %d", a, b, levenshtein(a, b));
}
