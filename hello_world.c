#include<stdio.h>

int main(){
	int i;
	char name[20];
	
	printf("Enter your name: ");
	scanf("%s", &name);
	
	printf("Hello World, ");
	for(i=0;i<20 && name[i] != '\0';i++){
		printf("%c", name[i]);
	}
	
}
