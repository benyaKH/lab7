#include<iostream>
#include<string>
using namespace std;


int main(){
    string result ;
    int age ;
    cout << "Enter your age: " ;
    cin >> age ;
    if(age<=20){
        int h ;
        cout << "Enter your height: " ;
        cin >> h ;
        if(h<160)
            result = "UNFRIEND" ;
        else if(h<175)
            result = "FRIEND" ;
        else{
            int m ;
            cout << "Enter your property: " ;
            cin >> m ;
            if(m>69000000)
                result = "MARRIED" ;
            else
               result = "ONE-NIGHT-STAND" ; 
        }
        
        
    }
    else if(age<30){
        int m ;
        cout << "Enter your property: " ;
        cin >> m ;
        if(m>10000000)
            result = "BEST FRIEND" ;
        else
            result = "UNFRIEND" ; 
        
    }
    else
    result = "UNFRIEND" ;
cout << "Your status = " << result ;
	return 0;
}
