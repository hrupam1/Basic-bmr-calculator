//THIS a small tool tool calculate bmr
//date--10/04/2024
#include<iostream>
using namespace std;
int main(){

cout<<"BMR CALCULATOR"<<endl<<endl;
cout<<"please input your weight,height,age and your gender\n"<<endl;
cout<<"select your gender frist"<<endl<<endl;   //This is  available only for two gender Male and Female
cout<< "if you are a male then select M and if you are a female then select F"<<endl;

char gender;


cin>>gender;

if(gender ='M') {
float weightm,heightm,agem,bmrm;
cout<<"ENTER YOUR AGE HERE ::"<<endl;
cin>>agem;
cout<<"ENTER YOUR HEIGHT(IN CENTEMETRE) ::"<<endl;
cin>>heightm;
cout<<"ENTER YOUR WEIGHT(IN KILOGRAMS) ::"<<endl;
cin>>weightm;
bmrm = (10*weightm) + (6.25*heightm) - (5*agem) + 5;

cout<<"YOUR BMR (BASAL METABOLIC RATE) IS ::"<<bmrm<<"CALORIES/DAY"<<endl;


}

if(gender == 'F') {
float weightf,heightf,agef,bmrf;
cout<<"ENTER YOUR AGE HERE ::"<<endl;
cin>>agef;
cout<<"ENTER YOUR HEIGHT(IN CENTEMETRE) ::"<<endl;
cin>>heightf;
cout<<"ENTER YOUR WEIGHT(IN KILOGRAMS) ::"<<endl;
cin>>weightf;
bmrf = (10*weightf) + (6.25*heightf) - (5*agef) - 161;

cout<<"YOUR BMR (BASAL METABOLIC RATE) IS ::"<<bmrf<<"CALORIES/DAY"<<endl;


}



return 0;



}