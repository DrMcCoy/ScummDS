ScummDS
=======
ScummDS is an attempt to get (especially Humongous Entertainment) scumm games to run on the DS. I know there is a DS port of ScummVM, but it can't run 640x480 games, because it's not optimized for the DS.

The interpreter part is heavily based on ScummVM, but optimized for the DS. <b>This project has no relation to ScummVM at all!</b>

Because I used a lot of their code, <b>I want to credit all people that worked on ScummVM</b> (mainly the scumm engine) for <b>the great work they did on reverse engineering</b> all of this difficult stuff!

<img src="http://florian.nouwt.com/forum/get.php?id=30" align="right"/>
<h3>Current State</h3>
Currently I got some games to run at least. Actors don't work very good at the moment (but I got them drawn at least), and there are still opcodes that are not implemented. Object stuff is not implemented at all, and although the cursor works, you can't click on anything yet.

I have big problems with dynamic memory allocation. It is not that the DS got not enough memory (in fact it got plenty enough), but when using <code>free()</code> to free a script, I get all kinds of weird problems. And for example if I don't use printf somewhere, it can't find a local script in FF4 demo. I don't know where those errors come from, and I hope they can be fixed somehow.

<h3>Supported Games</h3>
The games listed here do NOT run fully correctly (since the interpreter is just not finished), but atleast they boot past the HE logo and show their first location you can actually move your mouse. I am not sure if language matters, but it is possible that the HE version differs between languages.<br>
* <b>Freddi Fish and Luther's Maze Madness</b> (Dutch, Freddi Fish en Loebas' Dolle Doolhof) - The intro cutscene doesn't work with sound enabled
* <b>Freddi Fish 4 Demo</b> (Dutch) - Depends on skipping cutscenes
* <b>Pajama Sam 2 Demo</b> (Dutch)
* <b>Spy Fox 2 Demo</b> (Dutch)
