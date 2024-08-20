// Bibliografie:
// https://ro.wikipedia.org/wiki/Cod_numeric_personal_(Rom%C3%A2nia)
// In folder "Bibliography":
// Cod numeric personal (România) - Wikipedia

#include <iostream>
#include <cstring>
#include <ctime>

using std::cout;
using std::cin;

int main()
{
    char CNP[14];
    cout << "Introduceti codurile numerice personale (CNP-urile) pe rand. Programul se va incheia la introducerea valorii 0\n\n";
    cout << "CNP: ";
    cin >> CNP;
    while ( (CNP[0] != '0') || (strlen(CNP) > 1) )
    {
        if ( (strlen(CNP) != 13) || (CNP[0] < '1') || (CNP[0] > '8') || (CNP[1] < '0') || (CNP[1] > '9') || (CNP[2] < '0') || (CNP[2] > '9') || (CNP[3] < '0') || (CNP[3] > '1') ||
             (CNP[4] < '0') || (CNP[4] > '9') || ( (CNP[3] == '1') && (CNP[4] > '2') ) || (CNP[5] < '0') || (CNP[5] > '3') || (CNP[6] < '0') || (CNP[6] > '9') ||
             ( ( (CNP[4] == '1') || (CNP[4] == '3') || (CNP[4] == '5') || (CNP[4] == '7') || (CNP[4] == '9') ) && ( (CNP[5] == '3') && (CNP[6] > '1') ) ) ||
             ( ( (CNP[4] == '0') || (CNP[4] == '4') || (CNP[4] == '6') || (CNP[4] == '8') || ( (CNP[3] == '1') && (CNP[4] == '2') ) ) && ( (CNP[5] == '3') && (CNP[6] > '0') ) ) ||
             ( (CNP[3] == '0') && (CNP[4] == '2') &&
             ( ( ( ( (CNP[1] - '0') * 10 + (CNP[2] - '0') ) % 4 ) != 0 ) && ( (CNP[5] > '2') || ( (CNP[5] == '2') && (CNP[6] > '8') ) ) ||
             ( ( ( ( (CNP[1] - '0') * 10 + (CNP[2] - '0') ) % 4 ) == 0 ) && (CNP[5] > '2') ) ) ) ||
             (CNP[7] < '0') || (CNP[7] > '4') || (CNP[8] < '0') || (CNP[8] > '9') || ( (CNP[7] == '4') && (CNP[8] > '8') ) || (CNP[9] < '0') || (CNP[9] > '9') || (CNP[10] < '0') ||
             (CNP[10] > '9') || (CNP[11] < '0') || (CNP[11] > '9') || (CNP[12] < '0') || (CNP[12] > '9') )
        {
            cout << "CNP-ul introdus nu respecta formatul\n\n";
            cout << "CNP: ";
            cin >> CNP;
            continue;
        }
        cout << "Cifra de control valida: ";
        if ( ( ( (CNP[0] - '0') * 2 + (CNP[1] - '0') * 7 + (CNP[2] - '0') * 9 + (CNP[3] - '0') + (CNP[4] - '0') * 4 + (CNP[5] - '0') * 6 + (CNP[6] - '0') * 3 + (CNP[7] - '0') * 5 +
             (CNP[8] - '0') * 8 + (CNP[9] - '0') * 2 + (CNP[10] - '0') * 7 + (CNP[11] - '0') * 9 ) % 11 ) < 10 )
        {
            if ( ( (CNP[12] - '0') == ( (CNP[0] - '0') * 2 + (CNP[1] - '0') * 7 + (CNP[2] - '0') * 9 + (CNP[3] - '0') + (CNP[4] - '0') * 4 + (CNP[5] - '0') * 6 +
                 (CNP[6] - '0') * 3 + (CNP[7] - '0') * 5 + (CNP[8] - '0') * 8 + (CNP[9] - '0') * 2 + (CNP[10]-'0') * 7 + (CNP[11] - '0') * 9 ) % 11 ) )
            {
                cout << "Da\n";
            }
            else
            {
                cout << "Nu\n";
            }
        }
        else
        {
            if ( (CNP[12] - '0') == 1 )
            {
                cout << "Da\n";
            }
            else
            {
                cout << "Nu\n";
            }
        }
        cout << "Cifra de control: " << CNP[12]
             << "\nData nasterii: " << CNP[5] << CNP[6] << " ";
        if ( (CNP[3] == '0') && (CNP[4] == '1') )
        {
            cout << "ianuarie";
        }
        else
        if ( (CNP[3] == '0') && (CNP[4] == '2') )
        {
            cout << "februarie";
        }
        else
        if ( (CNP[3] == '0') && (CNP[4] == '3') )
        {
            cout << "martie";
        }
        else
        if ( (CNP[3] == '0') && (CNP[4] == '4') )
        {
            cout << "aprilie";
        }
        else
        if ( (CNP[3] == '0') && (CNP[4] == '5') )
        {
            cout << "mai";
        }
        else
        if ( (CNP[3] == '0') && (CNP[4] == '6') )
        {
            cout << "iunie";
        }
        else
        if ( (CNP[3] == '0') && (CNP[4] == '7') )
        {
            cout << "iulie";
        }
        else
        if ( (CNP[3] == '0') && (CNP[4] == '8') )
        {
            cout << "august";
        }
        else
        if ( (CNP[3] == '0') && (CNP[4] == '9') )
        {
            cout << "septembrie";
        }
        else
        if ( (CNP[3] == '1') && (CNP[4] == '0') )
        {
            cout << "octombrie";
        }
        else
        if ( (CNP[3] == '1') && (CNP[4] == '1') )
        {
            cout << "noiembrie";
        }
        else
        if ( (CNP[3] == '1') && (CNP[4] == '2') )
        {
            cout << "decembrie";
        }
        cout << " ";
        switch (CNP[0])
        {
            case '1': case '2':
            {
                cout << 19;
                break;
            }
            case '3': case '4':
            {
                cout << 18;
                break;
            }
            case '5': case '6':
            {
                cout << 20;
                break;
            }
            case '7': case '8':
            {
                cout << "xx";
            }
        }
        cout << CNP[1] << CNP[2] << " / " << CNP[5] << CNP[6] << "." << CNP[3] << CNP[4] << ".";
        switch (CNP[0])
        {
            case '1': case '2':
            {
                cout << 19;
                break;
            }
            case '3': case '4':
            {
                cout << 18;
                break;
            }
            case '5': case '6':
            {
                cout << 20;
                break;
            }
            case '7': case '8':
            {
                cout << "xx";
            }
        }
        cout << CNP[1] << CNP[2];
        if ( (CNP[0] == '7') || (CNP[0] == '8') )
        {
            cout << " (rezident)";
        }
        cout << "\nVarsta: ";
        if ( (CNP[0] == '7') || (CNP[0] == '8') )
        {
            cout << "(rezident)";
        }
        else
        {
            time_t t = time(0);
            tm* acum = localtime(&t);
            int ziua_curenta = acum->tm_mday;
            int luna_curenta = acum->tm_mon+1;
            int anul_curent = acum->tm_year + 1900;
            int ziua_nasterii = (CNP[5] - '0') * 10 + (CNP[6] - '0');
            int luna_nasterii = (CNP[3] - '0') * 10 + (CNP[4] - '0');
            int anul_nasterii;
            switch (CNP[0])
            {
                case '1': case '2':
                {
                    anul_nasterii = 1900;
                    break;
                }
                case '3': case '4':
                {
                    anul_nasterii = 1800;
                    break;
                }
                case '5': case '6':
                {
                    anul_nasterii = 2000;
                }
            }
            anul_nasterii += (CNP[1] - '0') * 10 + (CNP[2] - '0');
            int zilele_lunilor[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            if (ziua_nasterii > ziua_curenta)
            {
                ziua_curenta = ziua_curenta + zilele_lunilor[luna_nasterii - 1];
                luna_curenta = luna_curenta - 1;
            }
            if (luna_nasterii > luna_curenta)
            {
                anul_curent = anul_curent - 1;
                luna_curenta = luna_curenta + 12;
            }
            int zile_calculate = ziua_curenta - ziua_nasterii;
            int luni_calculate = luna_curenta - luna_nasterii;
            int ani_calculati = anul_curent - anul_nasterii;
            cout << ani_calculati << " ";
            if (ani_calculati == 1)
            {
                cout << "an";
            }
            else
            {
                cout << "ani";
            }
            cout << ", " << luni_calculate << " ";
            if (luni_calculate == 1)
            {
                cout << "luna";
            }
            else
            {
                cout << "luni";
            }
            cout << " si " << zile_calculate <<" ";
            if (zile_calculate == 1)
            {
                cout << "zi";
            }
            else
            {
                cout << "zile";
            }
        }
        cout << "\nGen: ";
        switch (CNP[0])
        {
            case '1': case '3': case '5': case '7':
            {
                cout << "Masculin";
                break;
            }
            case '2': case '4': case '6': case '8':
            {
                cout << "Feminin";
            }
        }
        cout << "\nJudet: ";
        if ( (CNP[7] == '0') && (CNP[8] == '1') )
        {
            cout << "Alba";
        }
        else
        if ( (CNP[7] == '0') && (CNP[8] == '2') )
        {
            cout << "Arad";
        }
        else
        if ( (CNP[7] == '0') && (CNP[8] == '3') )
        {
            cout << "Arges";
        }
        else
        if ( (CNP[7] == '0') && (CNP[8] == '4') )
        {
            cout << "Bacau";
        }
        else
        if ( (CNP[7] == '0') && (CNP[8] == '5') )
        {
            cout << "Bihor";
        }
        else
        if ( (CNP[7] == '0') && (CNP[8] == '6') )
        {
            cout << "Bistrita-Nasaud";
        }
        else
        if ( (CNP[7] == '0') && (CNP[8] == '7') )
        {
            cout << "Botosani";
        }
        else
        if ( (CNP[7] == '0') && (CNP[8] == '8') )
        {
            cout << "Brasov";
        }
        else
        if ( (CNP[7] == '0') && (CNP[8] == '9') )
        {
            cout << "Braila";
        }
        else
        if ( (CNP[7] == '1') && (CNP[8] == '0') )
        {
            cout << "Buzau";
        }
        else
        if ( (CNP[7] == '1') && (CNP[8] == '1') )
        {
            cout << "Caras-Severin";
        }
        else
        if ( (CNP[7] == '1') && (CNP[8] == '2') )
        {
            cout << "Cluj";
        }
        else
        if ( (CNP[7] == '1') && (CNP[8] == '3') )
        {
            cout << "Constanta";
        }
        else
        if ( (CNP[7] == '1') && (CNP[8] == '4') )
        {
            cout << "Covasna";
        }
        else
        if ( (CNP[7] == '1') && (CNP[8] == '5') )
        {
            cout << "Dambovita";
        }
        else
        if ( (CNP[7] == '1') && (CNP[8] == '6') )
        {
            cout << "Dolj";
        }
        else
        if ( (CNP[7] == '1') && (CNP[8] == '7') )
        {
            cout << "Galati";
        }
        else
        if ( (CNP[7] == '1') && (CNP[8] == '8') )
        {
            cout << "Gorj";
        }
        else
        if ( (CNP[7] == '1') && (CNP[8] == '9') )
        {
            cout << "Harghita";
        }
        else
        if ( (CNP[7] == '2') && (CNP[8] == '0') )
        {
            cout << "Hunedoara";
        }
        else
        if ( (CNP[7] == '2') && (CNP[8] == '1') )
        {
            cout << "Ialomita";
        }
        else
        if ( (CNP[7] == '2') && (CNP[8] == '2') )
        {
            cout << "Iasi";
        }
        else
        if ( (CNP[7] == '2') && (CNP[8] == '3') )
        {
            cout << "Ilfov";
        }
        else
        if ( (CNP[7] == '2') && (CNP[8] == '4') )
        {
            cout << "Maramures";
        }
        else
        if ( (CNP[7] == '2') && (CNP[8] == '5') )
        {
            cout << "Mehedinti";
        }
        else
        if ( (CNP[7] == '2') && (CNP[8] == '6') )
        {
            cout << "Mures";
        }
        else
        if ( (CNP[7] == '2') && (CNP[8] == '7') )
        {
            cout << "Neamt";
        }
        else
        if ( (CNP[7] == '2') && (CNP[8] == '8') )
        {
            cout << "Olt";
        }
        else
        if ( (CNP[7] == '2') && (CNP[8] == '9') )
        {
            cout << "Prahova";
        }
        else
        if ( (CNP[7] == '3') && (CNP[8] == '0') )
        {
            cout << "Satu Mare";
        }
        else
        if ( (CNP[7] == '3') && (CNP[8] == '1') )
        {
            cout << "Salaj";
        }
        else
        if ( (CNP[7] == '3') && (CNP[8] == '2') )
        {
            cout << "Sibiu";
        }
        else
        if ( (CNP[7] == '3') && (CNP[8] == '3') )
        {
            cout << "Suceava";
        }
        else
        if (( CNP[7] == '3') && (CNP[8] == '4') )
        {
            cout << "Teleorman";
        }
        else
        if ( (CNP[7] == '3') && (CNP[8] == '5') )
        {
            cout << "Timis";
        }
        else
        if ( (CNP[7] == '3') && (CNP[8] == '6') )
        {
            cout << "Tulcea";
        }
        else
        if ( (CNP[7] == '3') && (CNP[8] == '7') )
        {
            cout << "Vaslui";
        }
        else
        if ( (CNP[7] == '3') && (CNP[8] == '8') )
        {
            cout << "Valcea";
        }
        else
        if ( (CNP[7] == '3') && (CNP[8] == '9') )
        {
            cout << "Vrancea";
        }
        else
        if ( (CNP[7] == '4') && (CNP[8] == '0') )
        {
            cout << "Bucuresti";
        }
        else
        if ( (CNP[7] == '4') && (CNP[8] == '1') )
        {
            cout << "Bucuresti, sector 1";
        }
        else
        if ( (CNP[7] == '4') && (CNP[8] == '2') )
        {
            cout << "Bucuresti, sector 2";
        }
        else
        if ( (CNP[7] == '4') && (CNP[8] == '3') )
        {
            cout << "Bucuresti, sector 3";
        }
        else
        if ( (CNP[7] == '4') && (CNP[8] == '4') )
        {
            cout << "Bucuresti, sector 4";
        }
        else
        if ( (CNP[7] == '4') && (CNP[8] == '5') )
        {
            cout << "Bucuresti, sector 5";
        }
        else
        if ( (CNP[7] == '4') && (CNP[8] == '6') )
        {
            cout << "Bucuresti, sector 6";
        }
        else
        if ( (CNP[7] == '4') && (CNP[8] == '7') )
        {
            cout << "Bucuresti, sector 7 (desfiintat)";
        }
        else
        if ( (CNP[7] == '4') && (CNP[8] == '8') )
        {
            cout << "Bucuresti, sector 8 (desfiintat)";
        }
        cout << "\nNumar de ordine: " << CNP[9] << CNP[10] << CNP[11];
        cout << "\n\nCNP: ";
        cin >> CNP;
    }
    cout << "\nAi inchis programul.\n";

    return 0;
}
