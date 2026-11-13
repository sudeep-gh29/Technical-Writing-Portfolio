# Module 1: Git and GitHub

## 1. Introduction

Git is a distributed version control system used to
track changes in files and manage different versions
of a project.

GitHub is a cloud-based platform that hosts Git
repositories and supports collaboration among
developers.

## 2. Git vs GitHub

| Git | GitHub |
|---|---|
| Version control system | Online hosting platform |
| Works locally | Accessible over the internet |
| Tracks changes and commits | Supports collaboration |
| Manages branches and merges | Supports pull requests |

## 3. Important Git Concepts

- **Repository:** A location where project files
  and their version history are stored.
- **Commit:** A saved snapshot of changes.
- **Branch:** An independent line of development.
- **Staging Area:** A place where changes are
  prepared before committing.
- **Remote:** A repository hosted on another
  computer or platform, such as GitHub.

## 4. Essential Git Commands

| Command | Purpose |
|---|---|
| `git init` | Initialises a new repository |
| `git clone` | Copies a remote repository locally |
| `git status` | Displays the current repository state |
| `git add` | Stages changes |
| `git commit` | Saves staged changes |
| `git push` | Uploads commits to a remote |
| `git pull` | Retrieves and integrates remote changes |
| `git branch` | Lists or manages branches |
| `git log` | Displays commit history |

## 5. Basic Git Workflow

A typical Git workflow consists of:

1. Modify project files.
2. Check the changes using `git status`.
3. Stage the changes using `git add`.
4. Commit the changes using `git commit`.
5. Upload the commits using `git push`.

## 6. Conclusion

Git and GitHub provide an organised approach
to version control and project collaboration.
They help maintain project history, manage
changes, and share work efficiently.

## 7. Branching

Branching allows developers to work on different
features independently without directly modifying
the main branch.

A new branch can be created using:

`git branch branch-name`

To switch to an existing branch:

`git switch branch-name`

To create and switch to a new branch:

`git switch -c branch-name`

## 8. Merging

Merging combines changes from one branch into
another branch.

To merge a feature branch into the main branch:

1. Switch to the main branch.
2. Execute the merge command.
3. Verify the updated repository status.

Example:

`git switch main`

`git merge feature/git-branching`

## 9. Remote Repositories

A remote repository is a version of the project
hosted on another server or platform.

Common commands:

- `git remote -v`: Displays remote repositories.
- `git fetch`: Retrieves remote changes.
- `git pull`: Downloads and integrates remote changes.
- `git push`: Uploads local commits to a remote.

## 10. Pull Requests

A Pull Request is a feature of GitHub that allows
developers to propose and review changes before
merging them into another branch.

Typical workflow:

1. Create a feature branch.
2. Make and commit changes.
3. Push the branch to GitHub.
4. Open a Pull Request.
5. Review and merge the Pull Request.