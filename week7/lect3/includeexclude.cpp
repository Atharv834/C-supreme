#include <iostream>
using namespace std;


void printSubsequence(string str,int index,string output){

    if(index == str.length()){  //rukna kab hai base case
        cout<<output<<endl;
        return;
    }
    //  INCLUDE EXCLUDE WALA CASE KARNA HAI

    char ch = str[index];  

    //include ka case
    printSubsequence(str,index+1,output+ch) ;   ///age bado recursion ko kam do 

    //exclude ka case
     printSubsequence(str,index+1,output) ;  //bas aaage bad jao 
}


int main(){


    string input ="Ram";
    string output ="";
    int index =0;

    printSubsequence(input ,index,output);
}