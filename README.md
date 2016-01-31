# Grader App

Simple app for converting your own grading point scale to a new point scale. Also has functionality for offset percentages such as late assignments or extra credit.

####When you first begin...

Enter your grade scale's total points possible. In this example, the assignment was initially graded on a 15 point scale and is going to be converted to a 2.5 point scale.

`Original grade point scale: 15`

`Target grade point scale: 2.5`

####Regular Submission

Enter the students score and it will be converted to the new scale. 

`Student score: 13`

`Grade: 2.167`

####Late Submission

Lets say you want to take 5% off because of a late submission. The first argument (e.g. `13`) will be the students original point score and the option second argument (e.g. `-5`) will be the percentage value added to thier converted score. The offset will be printed out to ensure the user that the offset has been added to the students final grade during the conversion.

Note: When trying to increase a students score (e.g. extra credit), enter a positive percentage value for the second argument. When adding a late penalty to the students score, enter a negative percentage value for the second argument.

`Student score: 13 -5`

`Offset: -5%`

`Grade: 2.042`

####Example Run

`> g++ grader.cpp -o grader`

`> ./grader`




<sub><sup>*Writen using C++ 99*</sup></sub>

