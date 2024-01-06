#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[15], str2[15];
	
	printf("enter first word: ");
	gets(str1);
	printf("enter second word: ");
	gets(str2);
	
	strcat(str1,str2);
	printf("%s" ,str1);
	
	
	//or
	printf("\n\n");
	
	char str3[30]="hello ";
	char str4[]="world";
	strcat(str3,str4);
	printf("%s" ,str3);  
	
	return 0;
}
