# obj-mosher
Very simple program. Will take .obj file and input and output scrambled .obj file, reverse scrambling all but on a specified layer.

Follow this tutorial to generate an obj from an image using blender. https://www.youtube.com/watch?v=_YbvXgls1Yw
This program works assuming you have isolated your object in your image using some editor already. Open up your obj in a text editor and look for the most common second value of lines beginning with "v " and use that as the height parameter. 
Using this image of an egg:

![pure image](http://i.imgur.com/DEPMGPp.jpg)

I used GIMP and upped the contrast and so that the background would be a solid black:
![after gimp](http://i.imgur.com/hjepRLQ.png)

Then used the blender displace technique to create a surface that looks like:
![in 3D](http://i.imgur.com/QKDF6L3.png)

And then ran my program on it to make this, (notice the background is not moshed)
![glitched!](http://i.imgur.com/vBeXuqy.png)

Adding the edited egg image back on as a texture and rendering the surface as BSDF Glossy:
![final art project](http://i.imgur.com/uVFomyX.png)

The final product turned out nicely I think.
