# Sorting-Algorithm

Welcome to Sorting Algorithm repository. This repository is a small and handful collection of all sorting algorithms that needed most. 

## Index

+ [Bubble Sort](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Bubble_Sort/README.md)
+ [Heap Sort](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Heap_Sort/README.md)
+ [Insertion Sort](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Insertion_Sort/README.md)
+ [Merge Sort](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Merge_Sort/README.md)
+ [Quick Sort](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Quick_Sort/README.md)
+ [Radix Sort](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Radix/README.md)
+ [Selection Sort](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Selection_Sort/README.md)

## Getting Started :scroll:

### 1. Fork it :fork_and_knife:

Get a fork/copy of this repository by clicking on <a href="https://github.com/Himanshu40/Sorting-Algorithm/fork"><kbd><b>Fork</b></kbd></a> button.

[![Fork Button](https://help.github.com/assets/images/help/repository/fork_button.jpg)](https://github.com/Himanshu40/Sorting-Algorithm/fork)

### 2. Clone it :busts_in_silhouette:

Clone it into your local PC by using

```sh
$ git clone https://github.com/Himanshu40/Sorting-Algorithm
```

> This command creates a copy of this repository in your machine.

After cloning this repository, move into this repository by using

```sh
# This will change directory to Sorting-Algorithm
$ cd Sorting-Algorithm/
```

### 3. Setting up :arrow_up:

Below are the following commands to see your *local copy* has a reference to your *forked repository* in Github :octocat:

```sh
# Here YourUserName is your Github User name
$ git remote -v
origin	https://github.com/YourUserName/Sorting-Algorithm.git (fetch)
origin	https://github.com/YourUserName/Sorting-Algorithm.git (push)
```

Add reference to this repository by using

```sh
$ git remote add newBranch https://github.com/Himanshu40/Sorting-Algorithm
```

> This command adds a new remote named **newBranch**.

To see the changes, run the following command

```sh
$ git remote -v
origin     https://github.com/YourUserName/Sorting-Algorithm.git (fetch)
origin     https://github.com/YourUserName/Sorting-Algorithm.git (push)
newBranch  https://github.com/Himanshu40/Sorting-Algorithm.git (fetch)
newBranch  https://github.com/Himanshu40/Sorting-Algorithm.git (push)
```

### 4. Synchronize :recycle:

Always make sure to update your local repository with this repository before making any changes.

```sh
# Fetch all remote repositories & delete any deleted remote branches
$ git fetch --all --prune

# Switch to `master` branch
$ git checkout master

# Reset local `master` branch to match `newBranch` repository's `master` branch
$ git reset --hard newBranch/master

# Push changes to your forked `Sorting-Algorithm` repository
$ git push origin master
```

Now you are ready to start contributing and sending pull requests.

## Contribute

You are freely welcome to send a pull request on any sorting algorithm, typo correction, bug. Your contribution will be highly appreciable :thumbsup:. When you want to contribute to this repository then create a another branch and send a [new pull request](https://github.com/Himanshu40/Sorting-Algorithm/compare?expand=1) here.

```sh
# This will create a new branch with Branch_name & switch to YourDirectoryName
$ git checkout -b YourDirectoryName
```

Create an another branch for contribution and use same name of branch as of Directory.

To switch to any branch

```sh
# To switch from one directory to another
$ git checkout YourDirectoryName
```

To add your changes to the branch

```sh
# To add all your files to branch YourDirectoryName
$ git add .
```

Commit a new info or message for your changes

```sh
# This message will show in your all files that you have changed
$ git commit -m 'message or info for your changes'
```

Push your changes to your remote repository

```sh
# To push your changes to your remote repository
$ git push -u origin YourDirectoryName
```

Voila !!! Then head towards to your repository in any browser and click on `compare and pull requests`. Then add a title & description to your pull request that explains what you have done.

## Tech/Framework Used
+ [GCC](https://gcc.gnu.org/) compiler
+ [VSCODE](https://code.visualstudio.com/) (A source code editor)

## Credits

+ [Data Structures and Algorithm Analysis in C by Mark Allen Weiss](https://www.amazon.in/Data-Structures-Algorithm-Analysis-2e/dp/8177583581)
+ [GeeksforGeeks](https://www.geeksforgeeks.org/)
+ [Wikipedia](https://en.wikipedia.org/wiki/Main_Page)

## License

[GNU GENERAL PUBLIC LICENSE](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/LICENSE)
