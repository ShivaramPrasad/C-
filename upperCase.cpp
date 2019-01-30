/* C++ Program - 
Convert Uppercase String to Lowercase
Convert Lowercase String to Uppercase
 */
		
#include <iostream>

using namespace std;

int main()
{
  char str[20];
  int i;
  cout<<"Enter the String (Enter First Name) in uppercase : ";
  cin>> str;
  for(i=0;i<= sizeof(str);i++)
  {
        // if lowercase to uppercase change this to 97 btw 122 and keep (-)32 inside this loop
        if(str[i]>=65 && str[i]<=92)
        {
            str[i]=str[i]+32;
        }
  }
  cout<<"The String in Lowercase = "<<str<<"\n";
  return 0;
}