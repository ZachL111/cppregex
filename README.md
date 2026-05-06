# cppregex

`cppregex` explores algorithms with a small C++ codebase and local fixtures. The technical goal is to compile a regex subset into Thompson NFA transitions.

## Project Rationale

This is intentionally local and self-contained so it can be inspected without credentials, services, or seeded history.

## Cppregex Review Notes

`stale` and `baseline` are the cases worth reading first. They show the optimistic and cautious ends of the fixture.

## Feature Set

- `fixtures/domain_review.csv` adds cases for input width and search depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/cppregex-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `input width` and `input width`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Architecture

The fixture data drives the tests. The code stays thin, while `metadata/domain-review.json` and `config/review-profile.json` explain what each case is meant to protect.

The added C++ path is deliberately direct, with fixtures doing most of the explaining.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Test Command

The check exercises the source code and the review fixture. `stale` is the high score at 207; `baseline` is the low score at 105.

## Next Improvements

No external service is required. A deeper version would add more negative cases and a clearer boundary around invalid input.
