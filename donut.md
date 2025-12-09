# my statement
this is what i understand after reading the donut program documentation.


<h1>What this program does:</h1>
<hr>

It prints a rotating 3D donut in the terminal using only c code and ANSCII characters. Basically ,it keeps drawing frames again and again so it looks like the donut is spinning.

<h1>How it works?</h1>
<hr>

The donut is made by using maths.
 
<h4>These angle help calculate the donut shape in 3D</h4>

theta->goes around the donut ring.
phi->goes around the donut hole.

<h4>The donut rotates becauses two variable keep changing:</h4>

A->Rotation around x-axis.
B->rotation around Z-axix.
after every frame,A and B increase like bit,so the donut moves.

<h4>Brightness using ASCII chars</h4>

Different ASCII symbols show different lighting.
Brighting surface->character like @ or #
dimmer surface->,=~'etc,
The character chosen depends on how light hits the surface point.

<h3>Main loop</h3>
<hr>
The whole donut is drawn again and again a loop.

calculate points
choose brightness
print the frame
update A and B
And this responds forever.

No graphic library used.
Simple but smart logic
output is amazing

thank you