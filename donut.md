
this is what i understand after reading the donut program documentation.


<h1>What this program does:</h1>
<hr>

It prints a rotating 3D donut in the terminal using only c code and ANSCII characters. Basically ,it keeps drawing frames again and again so it looks like the donut is spinning.

<h1>How it works?</h1>
<hr>

The donut is made by using maths.<br>
 
<h4>These angle help calculate the donut shape in 3D</h4>

theta->goes around the donut ring.<br>
phi->goes around the donut hole.<br>

<h4>The donut rotates becauses two variable keep changing:</h4>

A->Rotation around x-axis.<br>
B->rotation around Z-axix.<br>
after every frame,A and B increase like bit,so the donut moves.

<h4>Brightness using ASCII chars</h4>

Different ASCII symbols show different lighting.<br>
Brighting surface->character like @ or #<br>
dimmer surface->,=~'etc,<br>
The character chosen depends on how light hits the surface point.<br>

<h3>Main loop</h3>
<hr>
The whole donut is drawn again and again a loop.<br>

calculate points<br>
choose brightness<br>
print the frame<br>
update A and B<br>
And this responds forever.<br>

No graphic library used.<br>
Simple but smart logic<br>
output is amazing<br>

thank you.