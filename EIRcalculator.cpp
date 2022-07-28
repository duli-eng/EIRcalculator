#include <iostream>

using namespace std;

int main()
{
    double Power, Voltage, Amperage, Resistance;           //Assign input voltage
        cout << "Voltage: ";               
    cin >> Voltage;                       
        cout << "Amperage: ";           
    cin >> Amperage;

        cout << "    ---------------- "<< endl;

    Power = Voltage * Amperage; 
    Resistance = Voltage / Amperage;

        cout << "Voltage: " << Voltage << " Volts" << endl;           //displays voltage
        cout << "Amperage: " << Amperage << " Amps" << endl;         //displays amperage
        cout << "Resistance = " << Resistance << " Ohms" << endl;   //display resistance         
        cout << "Power = " << Power << " Watts" << endl;           //displays power

        cin.get();                                                //Keeps the DOS running until "enter" key is pressed 
    return 0;    
}