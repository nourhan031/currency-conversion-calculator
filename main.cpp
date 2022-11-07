//Assignment 1 - Currency Conversion Calculator
//Nourhan AbdAllah Noureldin 20210437
//Maria Ehab Shafik 20210312
//S11

/*
 * The supported currencies:
 * (EGP),(USD),(EUR),(SAR),(AED)
 */

#include <iostream>
using namespace std;
bool run=true;

void EGPtoUSD(){
    double EGP,USD;
    cout << "Enter EGP: ";
    cin >> EGP;
    USD = EGP*0.042;
    cout << EGP << " EGP = " << USD << " USD" << endl;
}

void USDtoEGP(){
    double EGP,USD;
    cout << "Enter USD: ";
    cin >> USD;
    EGP = USD/0.042;
    cout << USD << " USD = " << EGP << " EGP" << endl;
}

//1 EURO = 23.75
//? EURO = 6
void EGPtoEUR(){
    double EGP,EUR;
    cout << "Enter EGP: ";
    cin >> EGP;
    EUR = EGP/23.75;
    cout << EGP << " EGP = " << EUR << " EUR" << endl;
}

void EURtoEGP(){
    double EGP,EUR;
    cout << "Enter EUR: ";
    cin >> EUR;
    EGP = EUR*23.75;
    cout << EUR << " EUR = " << EGP << " EGP" << endl;
}

//1 egp = 0.16 sar
//5 egp = ? sar
void EGPtoSAR(){
    double EGP,SAR;
    cout << "Enter EGP: ";
    cin >> EGP;
    SAR = EGP*0.16;
    cout << EGP << " EGP = " << SAR << " SAR" << endl;
}

void SARtoEGP(){
    double EGP,SAR;
    cout << "Enter SAR: ";
    cin >> SAR;
    EGP = SAR/0.16;
    cout << SAR << " SAR = " << EGP << " EGP" << endl;
}

//1 egp = 0.15 aed
//? egp = 9 aed
void EGPtoAED(){
    double EGP,AED;
    cout << "Enter EGP: ";
    cin >> EGP;
    AED = EGP*0.15;
    cout << EGP << " EGP = " << AED << " AED" << endl;
}

void AEDtoEGP(){
    double EGP,AED;
    cout << "Enter AED: ";
    cin >> AED;
    EGP = AED/0.15;
    cout << AED << " AED = " << EGP << " EGP" << endl;
}

//1 usd = 1.01 eur
//?? usd = 5 eur
void USDtoEUR(){
    double USD,EUR;
    cout << "Enter USD: ";
    cin >> USD;
    EUR = USD*1.01;
    cout << USD << " USD = " << EUR << " EUR" << endl;
}

//1 usd = 3.76 sar
//5 usd = ?? sar
void USDtoSAR(){
    double USD,SAR;
    cout << "Enter USD: ";
    cin >> USD;
    SAR = USD*3.76;
    cout << USD << " USD = " << SAR << " SAR" << endl;
}

void SARtoUSD(){
    double USD,SAR;
    cout << "Enter SAR: ";
    cin >> SAR;
    USD = SAR/3.76;
    cout << SAR << " SAR = " << USD << " USD" << endl;
}

void USDtoAED(){
    double USD,AED;
    cout << "Enter USD: ";
    cin >> USD;
    AED = USD*3.67;
    cout << USD << " USD = " << AED << " AED" << endl;
}

void AEDtoUSD(){
    double USD,AED;
    cout << "Enter AED: ";
    cin >> AED;
    USD = AED/3.67;
    cout << AED << " AED = " << USD << " USD" << endl;
}

void EURtoUSD(){
    double USD,EUR;
    cout << "Enter EUR: ";
    cin >> EUR;
    USD = EUR/1.01;
    cout << EUR << " EUR = " << USD << " USD" << endl;
}

//1 EUR = 3.74 SAR
//5 EUR = ?? SAR
void EURtoSAR(){
    double EUR,SAR;
    cout << "Enter EUR: ";
    cin >> EUR;
    SAR = EUR*3.74;
    cout << EUR << " EUR = " << SAR << " SAR" << endl;
}

void SARtoEUR(){
    double EUR,SAR;
    cout << "Enter SAR: ";
    cin >> SAR;
    EUR = SAR/3.74;
    cout << SAR << " SAR = " << EUR << " EUR" << endl;
}

void EURtoAED(){
    double EUR,AED;
    cout << "Enter EUR: ";
    cin >> EUR;
    AED = EUR*3.65;
    cout << EUR << " EUR = " << AED << " AED" << endl;
}

void AEDtoEUR(){
    double EUR,AED;
    cout << "Enter AED: ";
    cin >> AED;
    EUR = AED/3.65;
    cout << AED << " AED = " << EUR << " EUR" << endl;
}

//1 sar = 0.98 aed
//5 sar = ?? aed
void SARtoAED(){
    double SAR,AED;
    cout << "Enter SAR: ";
    cin >> SAR;
    AED = SAR*0.98;
    cout << SAR << " SAR = " << AED << " AED" << endl;
}

void AEDtoSAR(){
    double SAR,AED;
    cout << "Enter AED: ";
    cin >> AED;
    SAR = AED/0.98;
    cout << AED << " AED = " << SAR << " SAR" << endl;
}

int get_choice(){
    int choice;
    cout << "1.  EGP to USD\n2.  USD to EGP\n3.  EGP to EUR\n4.  EUR to EGP\n5.  EGP to SAR\n";
    cout << "6.  SAR to EGP\n7.  EGP to AED\n8.  AED to EGP\n9.  USD to EUR\n10. EUR to USD\n";
    cout << "11. USD to SAR\n12. SAR to USD\n13. USD to AED\n14. AED to USD\n15. EUR to SAR\n";
    cout << "16. SAR to EUR\n17. EUR to AED\n18. AED to EUR\n19. SAR to AED\n20. AED to SAR\n";
    cout << "Select the number of the desired operation: \n";
    cin >> choice;
    return choice;
}

int exitorcont(){
    int choice;
    bool x = true;
    while(x) {
        cout << "1) Exit     2) continue \n";
        cin >> choice;
        if (choice == 1) {
            run = false;
            x = false;
        }
        else if (choice == 2) {
            run = true;
            x= false;
        } else {
            cout << "Invalid entry";
        }
    }
}
//bool run = true;
int main() {
    char number;
    while (run) {
        number = get_choice();
        switch (number) {
            case 1:
                EGPtoUSD();
                exitorcont();
                break;
            case 2:
                USDtoEGP();
                exitorcont();
                break;
            case 3:
                EGPtoEUR();
                exitorcont();
                break;
            case 4:
                EURtoEGP();
                exitorcont();
                break;
            case 5:
                EGPtoSAR();
                exitorcont();
                break;
            case 6:
                SARtoEGP();
                exitorcont();
                break;
            case 7:
                EGPtoAED();
                exitorcont();
                break;
            case 8:
                AEDtoEGP();
                exitorcont();
                break;
            case 9:
                USDtoEUR();
                exitorcont();
                break;
            case 10:
                EURtoUSD();
                exitorcont();
                break;
            case 11:
                USDtoSAR();
                exitorcont();
                break;
            case 12:
                SARtoUSD();
                exitorcont();
                break;
            case 13:
                USDtoAED();
                exitorcont();
                break;
            case 14:
                AEDtoUSD();
                exitorcont();
                break;
            case 15:
                EURtoSAR();
                exitorcont();
                break;
            case 16:
                SARtoEUR();
                exitorcont();
                break;
            case 17:
                EURtoAED();
                exitorcont();
                break;
            case 18:
                AEDtoEUR();
                exitorcont();
                break;
            case 19:
                SARtoAED();
                exitorcont();
                break;
            case 20:
                AEDtoSAR();
                exitorcont();
                break;
            default:
                cout << "Invalid entry";
        }
    }
}






