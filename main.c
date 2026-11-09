#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned char buff[10];
	FILE* fptr;


	fptr = fopen("test.txt", "rb");

	if (fptr == NULL) {
		printf("The file is not opened.");
		return -1;
	}
	fread(buff,sizeof(buff),1,fptr);
	printf(buff);


	return 0;
}
