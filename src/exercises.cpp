
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3){
  // TODO: YOUR CODE HERE
if(s1<s2 && s1<s3){
  cout<<s1;
} else if(s2<s1 && s2<s3){
  cout<<s2;
} else{
  cout<<s3;
}
  
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
  
}

void exercise_3(int a, int b){
  // TODO: YOUR CODE HERE
  if (b == 0){
   cout<<"Impossible"<<endl;
  }else if(a, b >= 0 && a, b <= 1000000){
   cout<< int (a / b) <<endl;
  }

}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
if(n>b){
  cout<< (n * (100 - y)) / 100 <<endl;
}else if(n>a){
  cout<< (n * (100 - x)) / 100 <<endl;
} else{
  cout<< n <<endl;
}
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  if (character >= char (65) && character <= char (90)){
   cout<< "upper-case alphabet"<<endl;
  }else if (character >= char (97) && character <= char (122)){
   cout<< "lower-case alphabet"<<endl;
  }else{
   cout<<"not an alphabet"<<endl;
  }
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
  switch(number){
   case 1:
   cout<< "Monday"<<endl;
   break;
   case 2:
   cout<<"Tuesday"<<endl;
   break;
   case 3:
   cout<< "Wednesday"<<endl;
   break;
   case 4:
   cout<<"Thursday"<<endl;
   break;
   case 5:
   cout<<"Friday"<<endl;
   break;
   case 6:
   cout<<"Saturday"<<endl;
   break;
   case 7:
   cout<<"Sunday"<<endl;
   break;
   default:
   cout<<"Invalid input"<<endl;
   break;
  }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
if(r < 0){
 cout<<"Error: Radius cannot be negative."<<endl;
}else{
 cout<< double (4 * 3.14 * (r * r)) << endl;
}
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE

}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  string fibo;
  cin>>number;
  if(number == 11235813){
    fibo= "Se encontro a Fibonacci";
  }else{
    fibo="Esto no es de Fibonacci";
  }
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  string puesto;
  if (age >= 18 && years_of_experience <= 2){
    puesto="Project coordinator";
  } else if(age >= 18 && years_of_experience >= 3 && years_of_experience < 5){
    puesto= "Project manager";
  } else if(age >= 18 && years_of_experience >= 5){
    puesto= "Senior project manager";
  } else{
    puesto="Not eligible";
  }
  return puesto;
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  string doc;
  if(number_of_docs <= 0){
    doc= "No se encontraron documentos";
  }else if(number_of_docs == 1){
    doc= "Se encontro un documento";
  }else if(number_of_docs >=2){
    string (number_of_docs);
    doc= number_ of_docs, "documentos encontrados";
  }
  return doc;
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}