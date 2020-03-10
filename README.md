# A-Fun-Problem-
A mathematical problem of number theory 

Here is task for you. Let's play a game. The game is simple. You start with a number (non-zero natural number). And, if you have an even number divide it by 2, if it's an odd number multiply it by 3 and add 1. Keep repeating this process. The fun fact is that you will always end up to 1.

So, let's try this game with say a number like 17. 
17 --> 52 --> 26 --> 13--> 40-->20--> 10--> 5--> 16--> 8--> 4-->2 -->1.

Let's try a different number say 2019.
2019--> 6058-->3029-->9088-->4544-->2272-->1136-->568-->284-->142-->71-->214-->107-->322-->161-->484-->242-->121-->264-->132-->66-->33-->100-->
50-->25-->76-->38-->19-->58-->29-->88-->44-->22-->11-->34-->17
(After 17, we will repeat as in the previous example.)

It's a long standing conjecture that any number would eventually end up to 1 in this game. Terrance Tao has recently made a great breakthrough proving that "in some sense" the conjecture is true for most of the natural numbers. The full conjecture is still not resolved, and a lot of research is going on on this problem. It's called Collatz Conjecture. 

A fun thing to code would be the following. 

a) (Simple) Make a game where a user just enters a number, and your code produces the sequence (as in the examples above) how the number goes to 1.
b) (A little challenging) Write a program which plays the above game with say first 1000 natural numbers and records the following informations in an excel file.

    I) What is the largest number in the sequence. For example if you start with 17, the largest number you reach is 52, while if you start with 2019 the largest number you reach is 9088.
    ii) And, also record at which iteration the largest number comes up. In the example with number 17, we hit the largest value in first step, while with 2019 we hit the largest in 3rd step.
    iii) How many iterations it takes in total to reach to 1.
