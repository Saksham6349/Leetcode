# Contributing Guidelines

This repository is primarily maintained as a personal LeetCode practice tracker, but quality standards are kept intentionally high.

## Commit Style
- Keep commits small and focused (one logical change per commit).
- Use clear prefixes:
  - `feat:` for adding a new problem solution
  - `refactor:` for improving an existing solution
  - `docs:` for README, notes, or template updates
  - `chore:` for non-solution maintenance

## Problem Addition Checklist
- Create a new folder using the existing `<id>-<slug>` naming convention.
- Add only accepted, tested solutions.
- Keep implementation readable and complexity-aware.
- Ensure any generated metadata remains valid.

## Solution Improvement Checklist
- Explain what changed (readability, complexity, bug fix, or edge-case handling).
- Preserve behavior unless explicitly fixing a defect.
- Keep edits scoped to the target problem.

## Repository Consistency
- Prefer C++ unless there is a specific reason to use another language.
- Avoid unnecessary abstractions for simple DSA implementations.
- Maintain consistent formatting and naming style across problems.

## Suggested GitHub Project Hygiene
- Labels:
  - `problem-added`
  - `solution-improved`
  - `easy`, `medium`, `hard`
  - `binary-search`, `tree`, `dp`, `graph`, `greedy` (as needed)
- Milestones:
  - `Week 1 - Profile & Repo Setup`
  - `Week 2 - README & Conventions`
  - `Week 3 - Showcase Project Polish`
  - `Week 4 - Public Contribution Push`
