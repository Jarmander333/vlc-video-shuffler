//PLEASE READ THE README OVER AT THE GITHUB PAGE: https://github.com/Jarmander333/vlc-video-shuffler/main/README.md

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    for(;;) {
    	system("clear");

	    srand(time(0));

    	int r = rand() % 6;

    	printf("%d", r);

	    if(r == 0) {
	    	system("vlc video01.mp4");
	    } else if(r == 1) {
	    	system("vlc video02.mp4");
	    } else if(r == 2) {
	    	system("vlc video03.mp4");
	    } else if(r == 3) {
	    	system("vlc video04.mp4");
	    } else if(r == 4) {
	    	system("vlc video05.mp4");
	    } else if(r == 5) {
	    	system("vlc video06.mp4");
	    } else {
	    	printf("No Video Present");
	    } 
	}

    return 0;
}

