#include <iostream>
///#include <string>
#include <fstream>
using namespace std;

int main()
{
 char user[100] = {' '},ch,userout[100] = {' '};
 int counter=0,cntr;
 int i=0,a=0;
 cout<<"Enter Word\nNo Spaces! \n> ";
 cin >> user;
 cout<<"Enter move count\n1-25 only\n> ";
 cin >>counter;
 cntr=counter;
 do
 {
	ch = user[i];
	if ( ch >= 97)
	 user[i] = (user[i] + counter - 97) % 26 + 97;
	else
	 user[i] = (user[i] + counter - 65) % 26 + 65;
	i++;
 } while ( user[i] != '\0');
 cout<<endl <<user <<" <Here is the encoded output\n\n";
 counter=26-cntr;
 ofstream myfile;
  myfile.open ("encoded.txt");
  myfile << user[i];
  myfile.close();

do
{
	ch = user[a];
	if ( ch >= 97)
	 userout[a] = (user[a] + counter - 97) % 26 + 97;
	else
   userout[a] = (user[a] + counter - 65) % 26 + 65;
a++;
}while ( user[a] != '\0');
 cout<<endl<<userout<<" <Here is the decoded output\n\n";
  myfile.open ("decoded.txt");
  myfile << userout[a];
  myfile.close();
return 0;
}
