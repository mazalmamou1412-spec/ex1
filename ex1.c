/******************
Name: Mazal Mamou
ID: mamouma
Assignment: ex1
*******************/


#include <stdio.h>

int main()
{
    // Task 1 : Ascii
    
// define the data type and the variable
    char character;  
  printf("\nAscii:\n");
       // asking the user to enter a character that will later be the value of the variable "character"
printf("Please enter a character: \n"); 
    scanf ("%c", &character);
    
    //giving the numerical value from ascii table of the input
    printf("It's numerical value is : %d\n", character); 
    
    // defining if the numerical value of the input is even or odd
    printf("0 for even, 1 for odd: %d\n",(character&1) ); 



    
   // Task 2 :  2's complement and other representations
    
// defining variable
   int number=0; 
    printf("\n\n2's complement to other representations:\n"); 

    // asking the user to enter an integer that will be the value of the variable "number"    
    printf("Please enter a negative integer : \n");
    scanf("%d", &number); 

    // calculating the 1's complement value of the input
    printf("1's complement : %d\n", -(~number));
    // calculating the unsigned value of the input
    printf("Unsigned : %u\n", number);




    
// Task 3 : Shifting right and left

 // defining variables   
int first, second, third, result;
    printf("\nShifting right and left\n");
    // asking the user to enter 3 integers who's gonna be the values of the variables : first second and third    
    printf("please enter 3 integers : \n"); 
    scanf("%d%d%d", &first, &second, &third); 
    
    // calculating the shiftings and printing the final result    
    result=first>>second<<third; 
    printf("After shifting right and left : %d\n", result); 

    
    
    
    
    // Task 4 : even and odd

    //defining variables
    int one, two, three;
    printf("\nEven and Odd");

     /instructions to the user to collect the values of the variables : "one", "two" and "three"
    printf("\nplease enter 3 integers : "); 
    scanf("%d%d%d", &one, &two, &three);

    // defining if the most is even or odd
    printf("0 - most of them are even, 1 - most of them are odd: %d\n",(one&1)&(two&1)|(one&1)&(three&1)|(two&1)&(three&1) ); 

 
    
    
    
    
    // Task 5 : Different Bases

    // defining variables
    int octalNumber, hexNumber, ocNumMSB, hexNumMSB;
    printf("\nDifferent bases\n");

    // instructions to the user to collect the values of : "octalNumer" and "hexNumber"
    printf("Please enter 2 numbers in octal and hexadecimal bases : ");
    scanf("%o%x", &octalNumber, &hexNumber);

    //calculating and printing the LSBs and MSBs of the previous inputs
    printf("\nLSBs : %d, %d",octalNumber&1, hexNumber&1);
    ocNumMSB=octalNumber>>31;
    hexNumMSB=hexNumber>>31;
    printf("\nMSBs : %d, %d", ocNumMSB,hexNumMSB);

    printf("\n\nBye!\n");

    return 0;
     }
