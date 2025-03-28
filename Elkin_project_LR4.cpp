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
} 
int countDigits(int x){
    int count = 0;
    while(x!=0){
        x=x/10;
        count +=1;
    } 
    return count;
} 
int countDigitsX(int x,int n){
    if(n<countDigits(x)){
        return true;
    } 
    else {
        return false;
    }
}
int productOfFirstNDigits(int x, int n) {
    int numDigits = countDigits(x);
    if (n <= 0 || n > numDigits) return 0;
    
    int product = 1;
    for (int i = 0; i < n; i++) {
        int digit = x / (int)pow(10, numDigits - 1 - i) % 10;
        product *= digit;
    }
    return product;
}
int sumOfDigits(int x) {
    int sum = 0;
    while (x != 0) {
        sum += abs(x) % 10;
        x /= 10;
    }
    return sum;
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
            case 2: { 
                cout <<"Введите число X\n"; 
                cin >> x;
                cout << "Введите число N(которое меньше числа разрядов числа X)\n";
                cin >> n; 
                if (countDigitsX(x,n)){
                    cout << "Число подходит!\n";
                } 
                else {
                    cout << "Неверное число\n";
                    break;
                } 
                break;

            }
            case 3:{
                cout << "Введите число X:\n";
                cin >> x; 
                cout << "Введите цифру N (меньше количества разрядов числа X): \n"; 
                cin >> n;
                int numDigits = countDigits(x);
                if (n <= 0 || n > numDigits) {
                    cout << "Ошибка: N должно быть больше 0 и меньше количества разрядов числа X.\n" << endl;
                    return 1;
                }
                int product = productOfFirstNDigits(x, n);
                cout << "Произведение первых " << n << " цифр числа " << x << " равно: " << product << endl;
                break;
            } 
            case 4: {
                cout << "Введите число X:\n";
                cin >> x; 
                cout << sumOfDigits(x)<< endl; 
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