#include <iostream>
#include <string.h>
using namespace std;
int hasil;
int testPalindrome(char*kata){
 int i = 0;
 int panjangKata = strlen(kata) - 1;
 while (i<panjangKata){
 if (kata[i++]==kata[panjangKata--]){
 return 1;}
 else{
 return 0;
 }
 }
 return 0;
}
int main()
{ char kata[100];
 cout<<("Masukkan kata : ");
 gets(kata);
 if(testPalindrome(kata)){
 cout<<("Valid Palindrome\n");}
 else{
cout<<("Bukan Palindrome\n");}
 return 0;
}
