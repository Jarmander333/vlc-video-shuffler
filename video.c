//PLEASE READ THE README OVER AT THE GITHUB PAGE: https://github.com/Jarmander333/vlc-video-shuffler/main/README.md

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
 
int main(void) {
    for(;;) {
    	system("clear");

	srand(time(0));

    	int r = rand() % 6;
    	char vid1[32] = "vlc [your_video.mp4]";
    	char vid2[32] = "vlc [your_video.mp4]";
    	char vid3[32] = "vlc [your_video.mp4]";
    	char vid4[32] = "vlc [your_video.mp4]";
    	char vid5[32] = "vlc [your_video.mp4]"; 
    	char vid6[32] = "vlc [your_video.mp4]";
    	char exit;

	    if(r == 0) {
	    	printf("\nNow Playing:'%.*s'\n\n", 32, vid1 + 4);
	    	sleep(5);
	    	system(vid1);
	    	exit = getchar();
	    	if(exit == 0x0A) {
	    		break;
	    	}
	    } else if(r == 1) {
	    	printf("\nNow Playing:'%.*s'\n\n", 32, vid2 + 4);
	    	sleep(5);
	    	system(vid2);
	    	exit = getchar();
	    	if(exit == 0x0A) {
	    		break;
	    	}
	    } else if(r == 2) {
	    	printf("\nNow Playing:'%.*s'\n\n", 32, vid3 + 4);
	    	sleep(5);
	    	system(vid3);
	    	exit = getchar();
	    	if(exit == 0x0A) {
	    		break;
	    	}
	    } else if(r == 3) {
	    	printf("\nNow Playing:'%.*s'\n\n", 32, vid4 + 4);
	    	sleep(5);
	    	system(vid4);
	    	exit = getchar();
	    	if(exit == 0x0A) {
	    		break;
	    	}
	    } else if(r == 4) {
	    	printf("\nNow Playing:'%.*s'\n\n", 32, vid5 + 4);
	    	sleep(5);
	    	system(vid5);
	    	exit = getchar();
	    	if(exit == 0x0A) {
	    		break;
	    	}
	    } else if(r == 5) {
	    	printf("\nNow Playing:'%.*s'\n\n", 32, vid6 + 4);
	    	sleep(5);
	    	system(vid6);
	    	exit = getchar();
	    	if(exit == 0x0A) {
	    		break;
	    	}
	    } else {
	    	printf("No Video Present");
	    	exit = getchar();
	    	if(exit == 0x0A) {
	    		break;
	    	}
	    } 
	}

    return 0;
}
