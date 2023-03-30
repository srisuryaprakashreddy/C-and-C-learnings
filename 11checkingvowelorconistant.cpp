//Check Vowel or a Consonant Manually
#include<iostream>
using namespace std;
int main()
{
	char c;
	bool isLowerCaseVowel,isUpperCaseVowel;
	cout<<"enter an alphabet  =";
	cin>>c;
	isLowerCaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	isUpperCaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(!isalpha(c))
	 cout<<"error non alphabatic charecter ";
	else if( isLowerCaseVowel||isUpperCaseVowel)
	 cout<<c<<" is a vowel";
    else
    cout<<"conistant";
return 0;
}
