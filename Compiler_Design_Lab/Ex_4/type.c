'''
Write a c program to find the type of texts in the program

Example: 
1,2,3 = Integer
[a-z, A-Z] = Identifier
+,-,* = Operator

TEST CASE1:
Standard Input:
2
A
*
Expected Output:
Integer
Identifier
Operator

TEST CASE2:
Standard Input:
6
x
+
Expected Output:
Integer
Identifier
Operator
'''
#include<stdio.h>
void checknum(char ch){
   if(ch >= 65 && ch <= 122)
      printf("Identifier\n");
   else if(ch >= 48 && ch <= 57)
      printf("Integer\n");
   else
      printf("Operator\n");
    
}
int main(){
    char a,b,c;
    scanf("%c%c%c",&a,&b,&c);
    checknum(a);
    checknum(c);
    checknum(b);
   return 0;
}
