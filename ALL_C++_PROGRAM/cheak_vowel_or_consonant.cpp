// this program for find the vowel and consonant manually.
#include <iostream>
using namespace std;
int main()
{
    char c; //this is character datatype // only accept charater data.
    bool islowercasevowel,isuppercasevowel; // two cases.
    cout<<"enter an alphabet  : ";
    cin>>c;
      
    islowercasevowel = (c =='a'||c=='u'||c=='i'||c=='o'||c== 'e' ); // value assign.
    isuppercasevowel = (c == 'A'||c=='U'||c=='I'||c=='O'||c=='E');

   // this program use if elseif ladder
    if(!isalpha(c)) // if any numeric character then it is give an error.
          printf("error! this is not alphabetic character.");
    else if(islowercasevowel||isuppercasevowel)
          cout<<"  is vowel.";  // || is symbol of "and"
    else
         cout<<" is consonant.";
    return 0;            
       
}