# MiniShopManagerPro
## Contents
 - [How to compile](#how-to-compile)
 - [How to make changes](#how-to-make-changes)
 - [How to use](#how-to-use)
 - [How to test](#how-to-test)

## How to compile
### Firstly, create the folder `./build/`. The project will not compile without it.
 - **MaxOS / Linux**:

    Run following command from project folder:

    `make shop`

 - **Windows**:

    Run following command from project folder:

    `mingw32-make`

## How to make changes
### First time
1. Clone the repository \
    `git clone`
1. Create your own branch with your function name \
    `git branch your_function_name` \
    `git checkout your_function_name`
### Otherwise
1. Go to dev branch \
   `git checkout dev`
1. Pull from origin \
   `git pull`
1. Go to your branch \
   `git checkout your_function_name`
1. Merge dev to your branch \
    `git merge dev`
1. Make changes to your function 
    + If you need to include other person's function, add \
    `#include "needed_function_name.h"` \
    to the file `your_function_name.h`
1. Add them to your branch \
    `git add .`
1. Check if the correct changes were made \
    `git status` 
    + If you need to remove a change \
    `git restore --staged file_to_reset`
    ### IMPORTANT: If you have made a placeholder for a different person's function, do not add it to your commit. Also don't make other people's function fully functional, just good enough for your testing purposes
1. Commit changes \
    `git commit -m "Your message"`
1. Push your branch to origin \
    `git push --set-upstream origin your_function_name`
1. Create a pull request 
## How to use
Use the following commands to run the program
 + **Windows**:\
    `.\build\shop`

 + **MacOS/Linux**: \
    `./build/shop`

Use the commands from the menu

## How to test
### For testers
1. Compile the program on dev branch
1. Run it and break it
1. When you find a bug, create an issue with following details: where it is, what causes it, how to replicate, possibly, how to fix it.
1. After you created the issue, you should notify the person, who created the function \
You can also create a list of test cases, that might be helpful to find bugs for a particular function
### For developers
1. After you recieve a notification about the bug, try to replicate it
1. Fix it. If you have problems, ask other team members
1. Test your fix extensively
1. Commit it to YOUR branch and create a pull request
