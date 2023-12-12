#include <iostream>
using namespace std;

int main (){
    int age, bounty, height ;
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    if (age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        cin.ignore();
        if (height >= 100){
            if (height >= 180){
                cout << "Enter your bounty: ";
                cin >> bounty;
                cin.ignore();
                if (bounty > 1100000000){
                    cout << "Your character = Zoro";
                    return 0 ;
                }
                else{
                    cout << "Your character = Sanji";
                    return 0 ;
                }
            }
            else{
            cout << "Your character = Usopp";
            return 0 ;
            }
        }
        else{
        cout << "Your character = Chopper";
        return 0 ;
        }
    }
    else if (age <= 60){
        cout << "Enter your bounty: ";
            cin >> bounty ;
            cin.ignore();
        if (bounty > 500000000){
            cout <<"Your character = Jinbe";
            return 0 ;
        }
        else{
            cout <<"Your character = Franky";
            return 0 ;
        }
    }
    else{
        cout << "Your character = Brook";
        return 0 ;
        }
}