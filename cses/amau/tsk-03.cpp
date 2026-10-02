 //repetitions: the input is a string on n char (A,C,G). the output should be the max char repetitions.
 #include <iostream>

    using namespace std;

 int main(){
     string dna;
      long long c=0;

     cin >> dna;
      int i=0;
      while(i<dna.size()-1){
         if (toupper(dna[i]) == toupper(dna[i+1])){
             c+=1;
         }
         i++;
      }
     cout<< c;
    return 0;
 }