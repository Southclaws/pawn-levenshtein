# levenshtein.inc

https://en.wikipedia.org/wiki/Levenshtein_distance

## Usage

Simply add to your `pawn.json` and include:

```json
{
    "dependencies": ["ScavengeSurvive/levenshtein"]
}
```

The function `levenshtein` simply takes two strings and returns a score that indicates the difference.

```pawn
#include <levenshtein>

main() {
    new difference = levenshtein("these strings are similar, but not the same", "these strings ar similar, but no the same");
    printf("%d", difference);
}
```

## Testing

To test, simply run the package:

```bash
sampctl package run
```

Then connect to `localhost:7777`.
