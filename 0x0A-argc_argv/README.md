0-whatsmyname.c: This is a program that prints its name, followed by a new line.

	* If you rename the program, it will print the new name, without having to compile it again
	* You should not remove the path before the name of the program

1-args.c: This is a program that prints the number of arguments passed into it.

	* Your program should print a number, followed by a new line

2-args.c: This is a program that prints all arguments it receives.

	* All arguments should be printed, including the first one
	* Only print one argument per line, ending with a new line

3-mul.c: This is a program that multiplies two numbers.

	* Your program should print the result of the multiplication, followed by a new line
	* You can assume that the two numbers and result of the multiplication can be stored in an integer
	* If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

100-change: This is a program that prints the minimum number of coins to make change for an amount of money.

	* Usage: ./change cents
	* where cents is the amount of cents you need to give back
	* if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
	* you should use atoi to parse the parameter passed to your program
	* If the number passed as the argument is negative, print 0, followed by a new line
	* You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
