# Grader App

Simple app for converting your own grading point scale to a new point scale. Also has functionality for offset percentages such as late assignments or extra credit.

####When you first begin...

Enter your grade scale's total points possible. In this example, the assignment was initially graded on a 15 point scale and is going to be converted to a 2.5 point scale. (Note: By default this program converts the all grades to a 2.5 point score.)

`Total points possible: 15`

####Regular Submission

Enter the students score and it will be converted to the new scale. 

`Student score: 13`

`Grade: 2.167`

####Late Submission

Lets say you want to take 5% off because of a late submission. `13` will be the students score and the `-5` will be the subtraction of 5% from their score. (Note: In order to give a student an extra credit percentage, make the second argument a positive value.)

`Student score: 13 -5`

`Offset: -5%`

`Grade: 2.042`

