# Cppregex Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | input width | 105 | watch |
| stress | search depth | 168 | ship |
| edge | boundary pressure | 122 | watch |
| recovery | complexity | 165 | ship |
| stale | input width | 207 | ship |

Start with `stale` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around search depth and complexity.
