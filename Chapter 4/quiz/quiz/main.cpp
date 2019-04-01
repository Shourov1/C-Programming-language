//
//  main.cpp
//  quiz
//
//  Created by Md. Shariful Alam on 25/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

Quiz

1) Convert the following numbers to C++ style scientific notation (using an e to represent the exponent) and determine how many significant digits each has (keep trailing zeros after the decimal):
a) 34.50
b) 0.004000
c) 123.005
d) 146000
e) 146000.001
f) 0.0000000008
g) 34500.0

Quiz Answers

1) Hide Solution

a) 3.450e1 (4 significant digits)
b) 4.000e-3 (4 significant digits)
c) 1.23005e2 (6 significant digits)
d) 1.46e5 (3 significant digits). Remember, trailing zeros in a whole number with no decimal are not significant.
e) 1.46000001e5 (9 significant digits)
And now a couple of trickier ones:

f) 8e-10 (1 significant digit)

The correct significand is 8, not 8.0. 8.0 has two significant digits, but this number only has 1.

g) 3.45000e4 (6 significant digits)

We don’t trim the trailing zeros here because the number does have a decimal point. Even though the decimal point doesn’t affect the value of the number, it affects the precision, so it needs to be included in the significand. If the number had been specified as 34500, then the answer would have been 3.45e4.
