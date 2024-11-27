#include<stdio.h>
#include<string.h>

void reverse_word(char *str);

int main()
{
    char str[100];
    printf("Enter the string\n");
    scanf("%[^\n]", str);
    printf("The entered string is : \n%s\n", str);
    reverse_word(str);
    printf("The reversed string is : \n%s\n", str);
    return 0;
}

void reverse_word(char *str)
{
     // initialising the variables
     int len = strlen(str);
     int start = 0;
     int end = 0;
     
     // loop to traverse through the string 
     for(int i=0; i<=len ; i++)
     {
         // if any spaces or end of string found then reverse the word
         if(str[i] == ' ' || str[i] == 0) 
         {
             end = i-1;
             // reversing the word
             while(start<end)
             {
                 char temp = str[start];
                 str[start] = str[end];
                 str[end] = temp;
                 start++;
                 end--;
             }
              start = i+1;
         }
     }
}

