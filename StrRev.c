/*
    Problem statement : Accept string from user and reverse the contents of that sting inplace
 
 Input : "Hello"
 Output : "olleH"

 Input : "abcd"
 Output : "dcba"
 */
 
 #include<stdio.h>
 
 void StrRev(char str[])
 {
    int iStart = 0;
	int iEnd = 0;
	char temp = '\0';
	
	if(str == NULL)
	{
		return;
	}
	
	//travel the string till the end
	
    while(str[iEnd] != '\0')
    {
	   iEnd++; 
    }
     iEnd--;
	 
	while(iStart < iEnd)
	{
		temp = str[iStart];
		str[iStart] = str[iEnd];
		str[iEnd] = temp;
		
		iStart++;
		iEnd--;
	}
 
 }
 
 
 /*
 
 output
 
 D:\ProgramTopicWise\LB\4ProblemsOnString\StringReverse>myexe
Enter The string
babita
Reverse string are atibab

*/
 int main()
 {
   char carr[30];
   
   printf("Enter The string \n");
   scanf("%[^'\n']s", carr);
   
   StrRev(carr);
   
   printf("Reverse string are %s\n", carr);
 
 return 0;
 }