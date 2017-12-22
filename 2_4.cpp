//WAP to check vowel or consonant using switch case
# include <stdio.h>

main(){
	char a;
	printf("Enter a character : ");
	scanf("%c",&a);
	
	switch (a){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			{
				printf("The character you entered is vowel");
				break;
			}
		default :
			printf("The character is consonant");
			break;
	}
}
