#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
char str1[100],str2[100],temp[100];
int choice,i,len,flag,vowels,consonants;

do
{
printf("\n string operations menu \n");
printf("1. find string length\n");
printf("2. copy sting\n");
printf("3. concatenate string\n");
printf("4. compare strings\n");
printf("5. reverse string\n");
printf("6. convert to uppercase\n");
printf("7. convert to lowercase\n");
printf("8. count vowels and consonants\n");
printf("9. exit\n");

printf(" enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
case 1:
printf("enter a string:");
scanf("%99s", str1);
printf("length = %lu\n",(unsigned long)strlen(str1));
break;

case 2:
printf("enter a string:");
scanf("%99s", str1);
strcpy(str2,str1);
printf("copied string = %s\n,str2);
break;

case 3:
printf("enter first string:");
scanf("%99s", str1);
printf("enter second string:");
scanf("%99s", str2);

if(strlen(srt1) + strlen(str2) < size of (str1))
{
strcat(str1,str2);
printf("concatenate string = %s\n",str1);
}
else
{
printf("stirngs are too long\n");
}
break;

case 4:
printf("enter first string:");
scanf("%99s", str1);
printf("enter second string:");
scanf("%99s", str2);

if(strcmp(str1,str2)==0)
printf("strings are equal\n");
else 
printf("strings are not equal\n");
break;

case 5:
printf("enter a string:");
scanf("%99s",str1);
len = (int)strlen(str1);

for (i = 0; i< len; i++)
temp[i] = str1[len - 1 - i];
temp[len] = '\0';

printf("reversed stirng = %s\n",temp);
break;

case 6:
printf("enter a string:");
scanf("%99s",str1);

for (i=0; str1[i] != '\0'; i++)
str1[i] = (char)toupper((unsigned char)str1[i]);

printf("uppercase = %s\n", str1);
break;

case 7:
printf("enter a string:");
scanf("%99s",str1);

for(i = 0; str1[i] != '\0'; i++)
str1[i] = (char)tolower((unsigned char)str1[i]);

printf("lowercase = %s\n",str1);
break;

case 8:
printf("enter a string:");
scanf("%99s",str1);

vowels = 0;
consonants = 0;
for(i = 0;str1[i] != '\0'; i++)
{
char ch = (char)tolower((unsigned char)str1[i]);

if(ch >= 'a' && ch <= 'z')
{
if( ch == 'a' || ch == 'e' ||
    ch == 'i' || ch == 'o' ||
    ch == 'u')
vowels++;
else 
consonants;
}
}
printf("vowels = %d\n", vowels);
printf("consonants = %d\n", consonants);
break;

case 9:
printf(" exiting program \n");
break;

default:
printf(" Invalid choice\n");
}
}
while (choice != 10);
return);
}
