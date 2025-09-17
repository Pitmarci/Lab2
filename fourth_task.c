#include <stdio.h>
// #include <math.h> Why don't we need this library?

int main()
{
    // declare  variable, set its value to 1
    int n = 1;
    while(n <= 20){
        printf("%d\n",n);
        n++;
    }

    // create a while loop that runs while the variable is less than or equal to 20
    {

        // increment the variable by 1

        // print the value of the variable

    } //this is the end of the body of the while loop, it keeps looping back to the while statement, while the condition is true

    // you can put breakpoints on the closing curly brace of the while loop to see how it loops back to the while statement and checks the condition again
    // you can also put breakpoints on the increment statement to see how the variable changes each time through the loop
    // you can add breakpoint by clicking in the margin to the left of the line numbers!

    // when the code stopped at a line you can evaluate the next line by clicking the "step over" button (or pressing F10)
    // you can also hover your mouse over variables to see their values
    // you can stop the debugging session by clicking the red square button or resuming the program (green triangle button) or restarting the debugging session (green circular arrow button)
    return 0;
}

/*if you are ready, please go to the files on the right and open create a new file named fifth_task.c for
that you can hover your mouse over the "src" folder, right click and select "New File",
then type the name of the file and press enter (do not forget the extension .c)*/

/*if you are ready with that too, you can commit your changes by clicking the Source Control icon on the left sidebar (the one that looks like a branch with a dot on it),
then type a message in the message box at the top (for example "completed fourth task and created fifth_task.c file") and click the checkmark button above the message box to commit your changes
in this way you can keep track of your progress and go back to previous versions if needed in your local respository!*/