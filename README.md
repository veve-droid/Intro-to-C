# Intro-to-C
Contains: (A) Conversion of seconds, (B) conversion of euro to peso, and (C) displaying the fraction

A. ////////////////////////////////

The clocks in the computer systems assumes that time 0 was in January 1, 1970. Given the number of seconds (as of this writing, it has been 1,605,137,670 seconds since) from the aforementioned date, we can get the date. For this problem, ask the user to enter a number representing seconds (time). Compute and print how many years, months, days, hours, minutes, and seconds it has been from January 1, 1970. Assume that there are only 30 days in a month and that there are no leap years.

Sample:

Input: 50 Output: 50 second/s is 0 year/s, 0 month/s, 0 day/s, 0 hour/s, 0 minute/s, and 50 second/s.
Input: 500 Output: 500 second/s is 0 year/s, 0 month/s, 0 day/s, 0 hour/s, 8 minute/s, and 20 second/s.
Input: 5000 Output: 5000 second/s is 0 year/s, 0 month/s, 0 day/s, 1 hour/s, 23 minute/s, and 20 second/s.
Input: 50000 Output: 50000 second/s is 0 year/s, 0 month/s, 0 day/s, 13 hour/s, 53 minute/s, and 20 second/s.
Input: 500000 Output: 500000 second/s is 0 year/s, 0 month/s, 5 day/s, 18 hour/s, 53 minute/s, and 20 second/s.
Input: 5000000 Output: 5000000 second/s is 0 year/s, 1 month/s, 27 day/s, 20 hour/s, 53 minute/s, and 20 second/s.
Input: 50000000 Output: 50000000 second/s is 1 year/s, 7 month/s, 8 day/s, 16 hour/s, 53 minute/s, and 20 second/s.
Input: 500000000 Output: 500000000 second/s is 16 year/s, 0 month/s, 27 day/s, 0 hour/s, 53 minute/s, and 20 second/s.
Input: 1605137670 Output: 1605137670 second/s is 51 year/s, 7 month/s, 7 day/s, 23 hour/s, 34 minute/s, and 30 second/s.



B. ////////////////////////////////

Different countries have different currencies. But there is always that conversion rate when you want to convert one currency to another.

For this problem, ask the user to enter an amount in euros and the exchange rate (1 euro to peso) as well. Display the peso equivalent of the euro input.

Sample:

Input: 43, 57.15       Output: 43.00 euro/s with exchange rate 57.15 is 2457.45 pesos.
Input: 150.5, 56.15    Output: 150.50 euro/s with exchange rate 56.15 is 8450.57 pesos.
Input: 260, 59.73      Output: 60.00 euro/s with exchange rate 59.73 is 15529.80 pesos.
Input: 1253, 58.05     Output: 1253.00 euro/s with exchange rate 58.03 is 72711.59 pesos.
Input: 3967.55, 63.28  Output: 3967.55 euro/s with exchange rate 63.28 is 251066.56 pesos.



C. ////////////////////////////////

For this problem, ask the user to enter 4 numbers. Consider the first two as one fraction and the second two as another. Display in fraction form(numerator/denominator) when the second fraction is subtracted from the first. Your answer is not necessarily in the lowest terms.

Sample:

Input: 1, 2, 3, 4         Output: -2/8
Input: 5, 3, 7, 3         Output: -6/9
Input: 10, 4, 3, 6        Output: 48/24
Input: 2, 3, 1, 5         Output: 7/15
