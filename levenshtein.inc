#if defined _levenshtein_included
	#endinput
#endif
#define _levenshtein_included

#include <string>


levenshtein(a[], b[]) {
	new
		aLength = strlen(a),
		bLength = strlen(b),
		cache[256],
		index = 0,
		bIndex = 0,
		distance,
		bDistance,
		result,
		code;

	if (!strcmp(a, b)) {
		return 0;
	}

	if (aLength == 0) {
		return bLength;
	}

	if (bLength == 0) {
		return aLength;
	}

	/* initialize the vector. */
	while (index < aLength) {
	cache[index] = index + 1;
	index++;
	}

	/* Loop. */
	while (bIndex < bLength) {
		code = b[bIndex];
		result = distance = bIndex++;
		index = -1;

		while (++index < aLength) {
			bDistance = code == a[index] ? distance : distance + 1;
			distance = cache[index];

			cache[index] = result = distance > result
			? bDistance > result
				? result + 1
				: bDistance
			: bDistance > distance
				? distance + 1
				: bDistance;
		}
	}

	return result;
}
