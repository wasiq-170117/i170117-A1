// Efficient Naive Algorithm
#include<string>
#include<string.h>
#include<iostream>
using namespace std;

void NaiveAlgo(char* , char* ,int,int ) ;
int main()
{

  char Text[1000]="abcd";
  char Pattern[1000]="b";
  int length = strlen(Text); 
  int plength=strlen(Pattern);
 NaiveAlgo(Text,Pattern,length,plength );
  return 0;
}

void NaiveAlgo(char* Text, char* Pattern,int length,int plength ) 
{ 
    
    for (int i = 0; i <= length-plength; i++) { 
         
  int j;
        
        for ( j = 0; j < plength; j++) 
            if ( Text[j + i] !=Pattern [j]) 
				  break;              
        if (j == plength) 
            cout << "Pattern matches at " << i << " index \n"; 
    }
}



