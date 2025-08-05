#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void reverse(vector <int> &v);
int add(vector <int> v);
double mean(vector <int> v);
void add_in(vector <int> &List);
int smallest(vector <int> v);
int largest(vector <int> v);
void display(vector <int> v);
int main(){
    cout<<"                   WELCOME TO THE MENU         "<<endl;
        char selection{};
        vector <int>List  {};

    do{
        cout<<endl;

        cout<<"Choose an option"<<endl;
        cout<<"D. Display the list "<<endl;
        cout<<"A. Add the numbers "<<endl;
        cout<<"M. Mean of the integers "<<endl;
        cout<<"I. add in a number "<<endl;
        cout<<"S. Smallest "<<endl;
        cout<<"L. largest "<<endl;
        cout<<"R. Reverse the whole list"<<endl;
        cout<<"Q. Quit "<<endl;
        cin>>selection;


        switch(selection){
            case 'A':
            case 'a':add(List);break;
            case 'I':
            case 'i':add_in(List);break;
            case 'D':
            case 'd':display(List);break;
            case 'M':
            case 'm':mean(List);break;
            case 'S':
            case 's':smallest(List);break;
            case 'L':
            case 'l':largest(List);break;
            case 'R':
            case 'r':reverse(List);break;
         }


    }while(selection!='q'&&selection!='Q');
}
int add(vector <int> v){
    int result{};
    for(auto vec:v){
        result+=vec;

    }
    cout<<"The sum of intergers in the vector is "<<result<<endl;
    return result;
}
void add_in(vector < int> &List){
    int add;
cout<<"Which number you wanna add "<<endl;
cin>>add;
List.push_back(add);
cout<<"Your number has been added in "<<endl;
}
void display(vector <int> v){
 cout<<" [ ";
    for(auto vec:v){
        cout<< vec<<" ";
    }
    cout<<" ]";
}
double mean(vector <int> v){
    double result{};
    double mean{};
    for(auto vec:v){
        result+=vec;
    }
 mean=result/v.size();
 cout<<"The mean of the least is "<<mean<<endl;
 return mean;
}
int smallest(vector <int> v){
int smallest=v.at(0);
for(int i{0};i<v.size();i++){
if (v.at(i)<smallest){
    smallest=v.at(i);
}
}
cout<<"Smallest number in the list is "<<smallest<<endl;
return smallest;
}
int largest(vector <int> v){
int largest=v.at(0);
for(int i{0};i<v.size();i++){
if (v.at(i)>largest){
    largest=v.at(i);
}
}
cout<<"Largest number in the list is "<<largest<<endl;
return largest;
}
void reverse(vector <int> &v){
   reverse(v.begin(),v.end());
}