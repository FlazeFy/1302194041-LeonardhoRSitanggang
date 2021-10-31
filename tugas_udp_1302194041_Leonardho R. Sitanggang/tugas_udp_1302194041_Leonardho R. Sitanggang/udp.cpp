#include "udp.h"
#include<iostream>
#include<string.h>
#include<math.h>
//1302194041 Leonardho R Sitanggang

using namespace std;

void scNumber(char num[20]){
    //Menggunakan 4 digit pertama dari udp
    int i, r, len, hex = 0;
    len = 4;
    i = 0;
    while (num[i] != '\0'){
        len--;
        if(num[i] >= '0' && num[i] <= '9'){
            r = num[i] - 48;
        } else if(num[i] >= 'a' && num[i] <= 'f'){
                r = num[i] - 87;
        } else if(num[i] >= 'A' && num[i] <= 'F'){
                    r = num[i] - 55;
        }
        hex += r * pow(16,len);
        i++;
    }
    cout << "Source port number: " << hex << endl;
}

void desNumber(char num[20]){
    //Menggunakan 4 digit kedua dari udp
    int i, r, len, hex = 0;
    len = 4;
    i = 4;
    while (num[i] != '\0'){
        len--;
        if(num[i] >= '0' && num[i] <= '9'){
            r = num[i] - 48;
        } else if(num[i] >= 'a' && num[i] <= 'f'){
                r = num[i] - 87;
        } else if(num[i] >= 'A' && num[i] <= 'F'){
                    r = num[i] - 55;
        }
        hex += r * pow(16,len);
        i++;
    }
    cout << "Destination port number: " << hex << endl;
}

void totLength(char num[20]){
    //Menggunakan 4 digit terakhir dari udp
    int i, r, len, hex = 0;
    len = 4;
    i = 12;
    while (num[i] != '\0'){
        len--;
        if(num[i] >= '0' && num[i] <= '9'){
            r = num[i] - 48;
        } else if(num[i] >= 'a' && num[i] <= 'f'){
                r = num[i] - 87;
        } else if(num[i] >= 'A' && num[i] <= 'F'){
                    r = num[i] - 55;
        }
        hex += r * pow(16,len);
        i++;
    }
    cout << "Total length: " << hex << " bytes" << endl;
    cout << "Length of data: " << hex - 8 << " bytes" << endl;
}

void directed(char num[20]){
    //Menggunakan 4 digit kedua dari udp
    int i, r, len, hex = 0;
    len = 4;
    i = 4;
    while (num[i] != '\0'){
        len--;
        if(num[i] >= '0' && num[i] <= '9'){
            r = num[i] - 48;
        } else if(num[i] >= 'a' && num[i] <= 'f'){
                r = num[i] - 87;
        } else if(num[i] >= 'A' && num[i] <= 'F'){
                    r = num[i] - 55;
        }
        hex += r * pow(16,len);
        i++;
    }

    //Registered port
    if (hex == 7){
        cout << "Client to server" << endl;
        cout << "Client process: Echo" << endl;
    } else if(hex == 9){
        cout << "Client to server" << endl;
        cout << "Client process: Discard" << endl;
    } else if(hex == 13){
        cout << "Client to server" << endl;
        cout << "Client process: Daytime" << endl;
    } else if(hex == 17){
        cout << "Client to server" << endl;
        cout << "Client process: Quote" << endl;
    } else if(hex == 19){
        cout << "Client to server" << endl;
        cout << "Client process: Chagen" << endl;
    } else if(hex == 53){
        cout << "Client to server" << endl;
        cout << "Client process: DNS" << endl;
    } else if(hex == 67){
        cout << "Client to server" << endl;
        cout << "Client process: DHCP server / Bootps" << endl;
    } else if(hex == 68){
        cout << "Client to server" << endl;
        cout << "Client process: DHCP client / Bootpc" << endl;
    } else if(hex == 69){
        cout << "Client to server" << endl;
        cout << "Client process: TFTP" << endl;
    } else if(hex == 111){
        cout << "Client to server" << endl;
        cout << "Client process: RPC" << endl;
    } else if(hex == 123){
        cout << "Client to server" << endl;
        cout << "Client process: NTP" << endl;
    } else if(hex == 161){
        cout << "Client to server" << endl;
        cout << "Client process: SNMP" << endl;
    } else if(hex == 162){
        cout << "Client to server" << endl;
        cout << "Client process: SNMP traps" << endl;
    } else if(hex >= 1011 && hex <= 1023){
        cout << "Client to server" << endl;
        cout << "Client process: Reserved" << endl;
    } else if(hex == 1024){
        cout << "User / Registered Port" << endl;
        cout << "Client process: Reserved" << endl;
    } else if(hex == 1025){
        cout << "User / Registered Port" << endl;
        cout << "Client process: Blackjack" << endl;
    } else if(hex == 1026){
        cout << "User / Registered Port" << endl;
        cout << "Client process: CAP" << endl;
    } else if(hex == 1027){
        cout << "User / Registered Port" << endl;
        cout << "Client process: Exosee" << endl;
    } else if(hex == 1029){
        cout << "User / Registered Port" << endl;
        cout << "Client process: Solidmux" << endl;
    } else if(hex == 1102){
        cout << "User / Registered Port" << endl;
        cout << "Client process: Adobe 1" << endl;
    } else if(hex == 1103){
        cout << "User / Registered Port" << endl;
        cout << "Client process: Adobe 2" << endl;
    } else if(hex == 44553){
        cout << "User / Registered Port" << endl;
        cout << "Client process: Rbr-debug" << endl;
    } else if(hex == 46999){
        cout << "User / Registered Port" << endl;
        cout << "Client process: Mediabox" << endl;
    } else if(hex == 47557){
        cout << "User / Registered Port" << endl;
        cout << "Client process: Dbbrowse" << endl;
    } else if(hex >= 48620 && hex <= 49150){
        cout << "User / Registered Port" << endl;
        cout << "Client process: Unassigned" << endl;
    } else if(hex == 49151){
        cout << "User / Registered Port" << endl;
        cout << "Client process: Reserved" << endl;
    } else if(hex >= 49152 && hex <= 65535){
        cout << "Dynamic / Private / Ephemeral Port" << endl;
    } else {
        cout << "Not registered port" << endl;
    }
}
