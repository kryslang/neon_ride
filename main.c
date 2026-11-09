#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned char buff[2];
	FILE* fptr;


	fptr = fopen("test.txt", "rb");

	if (fptr == NULL) {
		printf("The file is not opened.");
		return -1;
	}

	while(fread(buff,sizeof(buff)-1,1,fptr) > 0){
		buff[1] = '\0';
		printf(buff);
	}


	return 0;
}
