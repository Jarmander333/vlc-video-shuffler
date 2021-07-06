# vlc-video-shuffler
A video shuffler that utilizes VideoLAN's VLC.

A video shuffler written in C that utilizes rand(), srand(), printf(), and system() functions.

--------------------------------------------------------

### Resources used:

* GNU Compiler Collection (GCC)

* Sublime Text

--------------------------------------------------------

### Compatibility:

Yes!

* Linux

Maybe?

* MacOS

No.

* Windows

--------------------------------------------------------

### Setup:

It requires a bit of setup before you should compile it!

* Make sure you have VideoLAN VLC installed. https://www.videolan.org/

* Make sure that in the source code, you re-name the "video*.mp4" to your name of file, and the format too, so from "video.mp4" to something like "my_awesome_video.mkv". If you do not want to go through the trouble of digging through source code, you could also make all your videos mp4, and just re-name them to "video1.mp4", and so on...

* If you have, say, 13 videos you want to randomize, edit the source code to make the rand() statement read "rand() % 13", and add some core "if-else" statements to it!

* If you want to randomize video outside the source directory of the videos, specify a directory like this, "system("vlc /home/user/movies/video01.mp4");",

--------------------------------------------------------

### How to use:

Use GCC to compile the source code with "gcc video.c -o video" without the quotes of course

Then run "./video" in Linux, not Sure about MacOS...

--------------------------------------------------------
### NOTES:

Now, yes, I understand that VLC Media Player, and many other media players have this functionality, but this was supposed to be a learning expeirience for me.  

Just going to say that this could also be used for audio. (instead of "video01.mp4" just use "audio01.mp3", or something of the sort.)

--------------------------------------------------------

### What do I use this for?

I run it of a Raspberry Pi constantly, leaving all my videos running on it, so I don't get to pick what I watch.  

--------------------------------------------------------

### TODO-List:

Make Ctrl+C actually work.

Maybe use printf()  to display a "Now Playing" message?
