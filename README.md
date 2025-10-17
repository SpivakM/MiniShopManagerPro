# MiniShopManagerPro
## Contents
 - [How to compile](#how-to-compile)
 - [How to make changes](#how-to-make-changes)
 - [How to use](#how-to-use)
 - [Project structure](#project-structure)

## How to compile
 - **MaxOS / Linux**:

    Run following command from project folder:

    `make shop`

 - **Windows**:

    Run following command from project folder:

    `mingw32-make`

## How to make changes
1. Clone the repository \
    `git clone`
1. Create your own branch with your function name \
    `git branch your_function_name` \
    `git checkout your_function_name`
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
    ### IMPORTANT: If you made a placeholder for a different person's function, do not add it. Also don't make other people's function fully functional, just good enough for your testing purposes
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

## Project structure

