#include <iostream>
#include <cmath>
using namespace std;
int naturalNumber(int x){
    if(x>0){
        return true;
    } 
    else{ 
        return false;
    }
    // Разрабатывался Елькиным Николаем 
} 

int main(){ 
    while(true){
        int choice=0; 
        int x=0;
        int n=0;
        cout << "Выберите действие: \n";
        cout << "1. Введите натурально число x \n"; 
        cout << "2. Ввести цифру N (которая меньше числа разрядов числа X)\n";
        cout << "3. Определить произведение первых N цифр натурального числа X\n"; 
        cout << "4. Определить сумму цифр введенного числа X\n"; 
        cin >> choice;
        switch(choice){
            case 1:{
                cout << "Введите натурально число x:";
                cin >> x; 
                if (naturalNumber(x)){
                    cout << "Число натуральное\n";
                } 
                else { 
                    cout << "Число не подходит\n";
                } 
                break;
            } 
            
            case 5: 
                return 0;
            default: 
                cout << "Неверный выбор операции\n";
        }

    }
    

    return 0;
}