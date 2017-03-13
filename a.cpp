#include <iostream>

using namespace std;

int main (){

int input = 0;

cin >> input ;

cout << input <<" ";

while ( input != 1){
   if ( input % 2 == 1) input = input *3 + 1;
   else input = input/2 ;
   cout << input << " ";
}

cout <<endl;
return 0 ;

}



