1: Git: Git is a version control system (VCS) that helps developers keep track of changes to their code over time. It allows multiple people to collaborate on the same project, track the history of changes, and manage different versions of a project efficiently.



🚀 Git Guide for Daily Development
A clean, practical, and beginner-friendly Git workflow you can use every day.


🧩 Setup (One-time)
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
git config --list


📁 Start a Project
New project
git init
Clone existing repo
git clone <repo-url>


🔄 Daily Workflow (Most Important)
git status
git add .
git commit -m "message"
git push


🔍 Check & Review Changes
git status     # current state
git diff       # unstaged changes (press q to exit)


➕ Stage & Commit
git add filename    # add specific file
git add .           # add all files

git commit -m "your message"


🚀 Push & Pull
git push            # upload changes
git pull            # get latest changes
First push only:
git push -u origin main
🔗 Connect to GitHub (First Time)
git remote add origin <repo-url>


❌ Undo Changes
git restore --staged filename   # unstage file
git restore filename            # discard changes ⚠️
git reset --hard <hash>         # delete history ⚠️⚠️
git revert <hash>               # safe undo ✅


📜 History
git log
git log --oneline
git show <hash>


🌿 Branching
git checkout -b feature1    # create + switch
git checkout main           # go back to main
git merge feature1          # merge branch
git branch                  # list branches


🧠 Git Flow (Mental Model)
Edit → Stage → Commit → Push


🔥 Quick Cheat Sheet
git add .
git commit -m "message"
git push

🌿 What is Branching?
A branch = an independent line of development.
Default branch → main
New branch → work safely without breaking main


👉 Think:
main = stable code
feature/login = your new work
🔧 Basic Branch Commands (Git)


1. Check branches
git branch
👉 Shows all local branches
👉 * = current branch


2. Create a new branch
git branch feature-1
👉 Only creates branch (does NOT switch)


3. Switch branch
git checkout feature-1
OR (modern way 👇)
git switch feature-1


4. Create + switch together (most used)
git checkout -b feature-1
OR
git switch -c feature-1



5. Delete a branch
git branch -d feature-1
👉 Safe delete (only if merged)
Force delete:
git branch -D feature-1


🔄 Working with Branches (Flow)
Typical workflow:
git checkout -b feature-login


# make changes
git add .
git commit -m "Added login feature"


🔀 Merging Branches
Step 1: Go to main
git checkout main

Step 2: Merge branch
git merge feature-login
👉 Combines feature into main

⚠️ Merge Conflicts
Happens when:
Same file edited in both branches
Fix manually → then:
git add .
git commit


🌍 GitHub (Remote Branching)
1. Push new branch to GitHub
git push origin feature-login
👉 Now visible on GitHub


2. Push with upstream (first time best practice)
git push -u origin feature-login
👉 After this, just use:
git push


3. Pull latest changes
git pull origin main


4. Delete remote branch
git push origin --delete feature-login

🔁 Full Real-World Flow
git checkout main
git pull origin main

git checkout -b feature-cart

# work
git add .
git commit -m "Added cart logic"

git push -u origin feature-cart
👉 Then on GitHub:
Create Pull Request (PR)
Review → Merge → Done


🧠 Important Concepts

1. HEAD
👉 Points to current branch
2. origin
👉 Default name of remote repo (GitHub)
3. upstream
👉 Link between local & remote branch
4. Fast-forward vs Merge commit
Fast-forward → clean history
Merge commit → shows branch history


🔥 Pro Tips (Very Important)
✔ Use meaningful branch names
feature/login
bugfix/navbar
refactor/api

✔ Never work directly on main
Always:
git checkout -b new-feature

✔ Pull before starting work
git pull origin main

✔ Small commits > big commits


🚀 Advanced (You’ll need soon)
Rebase (clean history)
git rebase main
👉 Rewrites history (use carefully)
See all branches (including remote)
git branch -a

Rename branch
git branch -m old-name new-name


🧾 Quick Cheat Sheet
git branch
git switch -c branch-name
git switch branch-name
git merge branch-name
git branch -d branch-name

git push origin branch-name
git push -u origin branch-name
git pull origin main


💡 When do you use branching?
Adding new feature
Fixing bug
Testing ideas
Team collaboration



🚀 What is a Pull Request?


A Pull Request (PR) =
👉 “I’ve made changes in my branch — please review and merge into main”
It’s called pull because:
👉 You’re asking the main branch to pull your changes


🔁 Full PR Workflow (Step-by-Step)


🧩 Step 1: Create a branch
git switch -c feature/login


💻 Step 2: Do your work
git add .
git commit -m "Add login page UI"


🌍 Step 3: Push to GitHub
git push -u origin feature/login
👉 Now your branch exists on GitHub


🌐 Step 4: Create Pull Request (on GitHub)
Go to your repo → you’ll see:
👉 “Compare & Pull Request” button
Click it.


✍️ Step 5: Fill PR details
Title:
Add login page UI
Description:
- Created login form
- Added validation
- Styled with CSS
👉 Good PR = easy to review


🔍 Step 6: Review process
Teammates review your code
They may:
Comment
Suggest changes
Approve


🔄 Step 7: Make changes (if asked)
# edit code
git add .
git commit -m "Fix validation issue"
git push
👉 PR updates automatically (no need to recreate)


✅ Step 8: Merge PR
Click:
👉 Merge Pull Request
Options:
1. Merge commit (default)
Keeps full history
2. Squash and merge
Combines all commits into 1 (cleaner)
3. Rebase and merge
Linear history


🧹 Step 9: Delete branch
GitHub gives option:
👉 Delete branch
Or locally:
git branch -d feature/login


🧠 Important PR Concepts

🔵 Base vs Compare
Base → main (target)
Compare → your branch
👉 “Merge feature/login → main”
🟢 Draft PR
👉 Work in progress
👉 Not ready for merge


🟡 Review Comments
Types:
Comment
Suggestion
Request changes


🔴 Merge Conflicts in PR
GitHub will show:
👉 “This branch has conflicts”
Fix locally:
git pull origin main


# fix conflicts
git add .
git commit
git push
