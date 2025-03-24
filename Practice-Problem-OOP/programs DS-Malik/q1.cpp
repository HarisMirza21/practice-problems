#include <iostream>
using namespace std;
class romanType{
    string roman;
    int decimal=0;
    int arr[128]={0};
    public:
    romanType(){
        cout<<"Enter the roman number: ";
        cin>>roman;
        arr['M']=1000;
        arr['D']=500;
        arr['C']=100;
        arr['L']=50;
        arr['X']=10;
        arr['V']=5;
        arr['I']=1;
    }
    void convertToDecimal(){
        for(int i=0;i<roman.length();i++){
            if(arr[roman[i]]<arr[roman[i+1]]){
                decimal-=arr[roman[i]];
            }else{
                decimal+=arr[roman[i]];
            }
        }
    }
    int getDecimal(){
        return decimal;
    }
    string getRoman(){
        return roman;
    }
};
int main(){
    romanType r;
    r.convertToDecimal();
    cout<<"what yout want to print r/d: ";
    char ch;
    cin>>ch;
    if(ch=='r'){
        cout<<"The roman entered is: "<<r.getRoman()<<endl;
    }else if(ch=='d'){
        cout<<"The decimal value of "<<r.getRoman()<<" is "<<r.getDecimal()<<endl;
    }else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}