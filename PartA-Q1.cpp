 #includestring
#includestring.h
#includeiostream
using namespace std;

void NaiveAlgo(char , char ,int,int ) ;
int main()
{

  char Text[1000]=abbcd;  
  char Pattern[1000]=bb;
  int length = strlen(Text); 
  int plength=strlen(Pattern);
  NaiveAlgo(Text,Pattern,length,plength );
  return 0;
}

void NaiveAlgo(char Text, char Pattern,int length,int plength ) 
{ 
  int i=0;        
         while(i=length-plength)
    {
		 
  int j;
        
        for ( j = 0; j  plength; j++)
		{
		
            if ( Text[j + i] !=Pattern [j]) 
				    {
				      break;
				    }      
	   }
       if (j == plength) 
  
            {
			cout  given patern is matched at   i   indexn ; 
			i=i+plength;
	    }     else if(j==0)
            {
            j=j+1;
            }
          else
            {
            i=i+j;
            }
	    
    }

}   

