//Literal programming
/*

======================================Requirements====================================================================
The program must show a test image.
The test image must consist of a semi-transpatent cirlce.
Behind or Infront
Also a semi-transparent chessboard must be visible.
The image must consist of characters, each charcater denotes a pixel.
The test must be OK on any screen.


=======================================Testspecs=====================================================================
Test are done visually.
If the program us run, a chessboard with a semi-transparent circle must indeed be visible.
If you're close to the screen separate characters must be visible
These results must hold for any screen resolution and should be tested on at least 3 distinct devices, a.o. a smartphone

========================================Design========================================================================
Make a [data structures] to hold the image.
The data structure is a vector.
Each element of that vector is a row of floats on the screen.
Specifically  each row is also a vector, namely a vector of floats.
Reason: You can compute with brightness but not with chars.
(brightnes = 1 / blackness)

First draw the circle.
The circle has a certain width.
It is a filled shape between a small and large radius.
The circle is draw line by line, by a scanning algorithm. !!!!

Originally my image contains 1's
If a field is white in one of the ti figures,
it is multiplied by 1/ brightness.
Agood value to multiply with is 1 / 2. (Test and you will see)

Use two nested loops, the outer one for the rows,
the inner one for the individual brightness.

Put the origin of the coordinate frame in the middle.
x and y as usual in math, -0.5 <= x <= 0.5 y ,
somewhere between  -0.7 & 0.7, deppending on the aspect ratio.

After that draw the chessboard.
The width of one field is called the stride.
By dividing the width of the chessboard by the stride,
i get the number of fields.
The fiekd number is called crudeX or crudeY.
Ditermine wether or not crudeX or crudeY are even or odd by the % operator.
White fields are fields where crudeX % 2 == crudeY %2

As last step, render the values in the image datastructure of the screen
As brightness use MNOLI (8 chars , because  2,4,8,16 ----- are easier for the computer to work with)
Pick a character by using 7 * (1 / brightness) as index in the char array.

*Schrijf bij elke stukje code een stukje teks tot wanneer het duidelijker is voor je.*

*/