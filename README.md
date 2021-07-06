# vlc-video-shuffler
A video shuffler that utilizes VideoLAN's VLC.

A video shuffler written in C that utilizes rand(), srand(), printf(), sleep(), and system() functions.

--------------------------------------------------------

### Resources used:

* GNU Compiler Collection (GCC)

* Sublime Text

* Python3

--------------------------------------------------------

### Build System:

Operating System: Ubuntu 20.04.2 LTS (64 bit)
Kernel Version: 5.8.0-59-generic
GCC Version: GCC 9.3.0
X Window Manager: GNOME Shell
Sublime Text Version: 3.2.2 | UNREGISTERED

--------------------------------------------------------

### Compatibility:

Yes!

* Linux

Maybe?

* MacOS

* Windows XP+

No.

* MS-DOS
--------------------------------------------------------

### Setup:

It requires a bit of setup before you should compile it!

* Make sure you have VideoLAN VLC and Python3 installed. https://www.videolan.org/ | https://www.python.org/downloads/

* Make sure that in the source code you add in your videos after the "vlc ", or else when you run the program, nothing will happen. 

* If you have, say, 13 videos you want to randomize, edit the source code to make the rand() statement read "rand() % 13", and add some more "if-else" statements, and more strings, and then you have 13 videos!

* If you want to randomize video outside the source directory of the videos, specify a directory like this, "system("vlc /home/user/movies/video01.mp4");",

--------------------------------------------------------

### How to use:

Use GCC to compile the source code with "gcc video.c -o video" without the quotes of course

Then run "./video" in Linux, not sure about MacOS...

--------------------------------------------------------
### NOTES:

Now, yes, I understand that VLC Media Player, and many other media players have this functionality, but this was supposed to be a learning expeirience for me.  

Just going to say that this could also be used for audio. (instead of "video01.mp4" just use "audio01.mp3", or something of the sort.)

Yes, there's a reason why I didn't upload a compiled version of the program - Not everyone is going to name their files the same, and that is fine, it's supposed to be tweakable to many users.  

--------------------------------------------------------

### What do I use this for?

I run it of a Raspberry Pi constantly, leaving all my videos running on it, so I don't get to pick what I watch.  

--------------------------------------------------------

### TODO-List:

~~Make Ctrl+C actually work.~~

~~Maybe use printf() to display a "Now Playing" message?~~

~~Make an automated python3 script to make the file for you.~~


