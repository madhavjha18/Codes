1: Git: Git is a version control system (VCS) that helps developers keep track of changes to their code over time. It allows multiple people to collaborate on the same project, track the history of changes, and manage different versions of a project efficiently.




Install Git


<!-- 1: On Mac: -->




Install Homebrew(if not already installed)
Command:
First step: /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"


Second Step: eval "$(/opt/homebrew/bin/brew shellenv)"


Third Step: brew install git
Fourth step: git --version



# Git Guide for Daily Development

A simple and practical Git workflow for everyday use.

---

## Setup (one-time)

```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
git config --list
```

---

## Start a project

Initialize a new repository:

```bash
git init
```

Clone an existing repository:

```bash
git clone <repo-url>
```

---

## Daily workflow

```bash
git status
git add .
git commit -m "message"
git push
```

---

## Check changes

```bash
git status
git diff   # press q to exit
```

---

## Stage and commit

```bash
git add filename
git add .

git commit -m "your message"
```

---

## Push and pull

```bash
git push
git pull
```

First push only:

```bash
git push -u origin main
```

---

## Connect to GitHub (first time)

```bash
git remote add origin <repo-url>
```

---

## Undo changes

```bash
git restore --staged filename   # unstage file
git restore filename            # discard changes (destructive)
git reset --hard <hash>         # reset history (destructive)
git revert <hash>               # safe undo
```

---

## View history

```bash
git log
git log --oneline
git show <hash>
```

---

## Branching

```bash
git checkout -b feature1
git checkout main
git merge feature1
git branch
```

---

## Git flow

```
Working Directory → Staging Area → Commit → Remote
```

---

## Quick reference

```bash
git add .
git commit -m "message"
git push
```

---


# Branching in Git (In-Depth)

Branching lets you work on features or fixes without affecting the main codebase.

---

## What is a Branch?

A branch is simply a **pointer to a commit**.

* `main` → stable code
* `feature-x` → new feature
* `bugfix-y` → fix

---

## Why Use Branches?

* Work safely without breaking main code
* Develop multiple features in parallel
* Easier collaboration in teams

---

## Basic Commands

Create a branch:

```bash id="d8m3ax"
git branch feature1
```

Switch to a branch:

```bash id="a6s1ke"
git checkout feature1
```

Create + switch (recommended):

```bash id="yq8u2b"
git checkout -b feature1
```

List branches:

```bash id="k0q2zm"
git branch
```

---

## Typical Workflow

```bash id="v0qjfd"
git checkout -b feature-login

# make changes
git add .
git commit -m "Add login feature"

git checkout main
git pull

git merge feature-login
```

---

## Merge Explained

When you run:

```bash id="1t7f1n"
git merge feature1
```

Git combines:

* `main`
* `feature1`

Types of merge:

* Fast-forward (simple)
* 3-way merge (creates a merge commit)

---

## Merge Conflicts

Happens when:

* Same file
* Same lines edited differently

Example:

```id="8d7xrp"
your code
```   

Fix manually → then:

```bash id="8n3m2k"
git add .
git commit
```

---

## Best Practices

* Keep branches small and focused
* Name clearly:

  * `feature-login`
  * `fix-navbar`
* Always pull before merging:

```bash id="8rx0tf"
git checkout main
git pull
```

---

## Deleting Branches

After merging:

```bash id="7y2m1a"
git branch -d feature1
```

Force delete:

```bash id="m6s2pd"
git branch -D feature1
```

---

## Remote Branches

Push branch:

```bash id="k2z8q1"
git push origin feature1
```

Track branch:

```bash id="6m9zxp"
git push -u origin feature1
```

---

## Pull Requests (GitHub)

Typical flow:

1. Push branch
2. Open Pull Request
3. Review
4. Merge into main

---

## Rebase (Advanced)

Instead of merge:

```bash id="7t4k1c"
git rebase main
```

This:

* Moves your branch on top of main
* Keeps history clean (no merge commits)

---

## Merge vs Rebase

Merge:

```id="y4s9zk"
A---B---C (main)
     \
      D---E (feature)
```

Rebase:

```id="3qk1yt"
A---B---C---D'---E' (feature)
```

---

## Mental Model

```id="5u1rwx"
main → stable timeline
feature → separate timeline → merged later
```

---

## Common Mistakes

* Working directly on `main`
* Not pulling before merging
* Force pushing without understanding
* Large messy branches

---

## Recommended Workflow (Best Practice)

```bash id="2xj3pn"
git checkout -b feature-name

# work
git add .
git commit -m "work"

git push -u origin feature-name

# open PR → review → merge
```

---
