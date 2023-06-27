/*

### QUESTION : 09 Reverse the string
input: "Hi am Raju"
output: "Raju am Hi"

*/

#include<stdio.h>
#include<string.h>



int main(void)
{
    char str[] = "Hi I am Hero";
    char *tok;
    printf("%s\n",str);

    tok = strtok(str," ");
    //printf("%s\n",str);
    //printf("%s\n",);


    while (tok != NULL)
    {
        printf("%s\n",tok);
        tok = strtok(NULL," ");

    }
    
    


    return 0;
}