#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    printf("Welcome to THP Converter!\n\rTo use this tool call it like such: thp-converter -i thp.thp thp.mp4\n\rThe file thp.thp/thp.mp4 can be any other filename.\n\n");
	if( argc < 3 ) {
        printf("Not enough arguments supplied.\n");
		exit(-1);
	}
	char cmd[512];
	sprintf(cmd, "ffmpeg -i %s %s -hide_banner -loglevel error", argv[2], argv[3]);
	system(cmd);
}