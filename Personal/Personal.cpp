//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include<cstring>
//using namespace std;
//int Random = rand() % 56, x, sumaJucator, sumaDealer, suma, cartiDealer = 0, cartiJucator = 0, i, jucator, dealer, y;
//char vrei = '1', repeta = '1';
//int main() {
//    cout << "Suma jucator: ";
//    cin >> sumaJucator;
//    cout << "Suma dealer: ";
//    cin >> sumaDealer;
//    while (repeta == '1')
//    {
//        srand(time(NULL));
//        const int pachet[56] = { 1,2,3,4,5,6,7,8,9,10,10,10,10,10,1,2,3,4,5,6,7,8,9,10,10,10,10,10,1,2,3,4,5,6,7,8,9,10,10,10,10,10,1,2,3,4,5,6,7,8,9,10,10,10,10,10 };
//        cout << "Ce suma vrei sa pariezi: ";
//        cin >> suma;
//        sumaJucator -= suma;
//        sumaDealer -= suma;
//        if (suma <= sumaJucator)
//            for (i = 1; i <= 2; i++)
//            {
//                Random = rand() % 56;
//                cartiJucator += pachet[Random];
//            }
//        cout << "Jucator: " << cartiJucator << endl;
//        for (i = 1; i <= 2; i++)
//        {
//            Random = rand() % 56;
//            cartiDealer += pachet[Random];
//        }
//        cout << "Dealer: " << cartiDealer << endl;
//        while (cartiJucator <= 21 && vrei == '1')
//        {
//            cout << endl << "Vrei sa mai tragi o carte? 1=da 2=nu " << endl;
//            cin >> vrei;
//            if (vrei == '1')
//            {
//                Random = rand() % 56;
//                cartiJucator += pachet[Random];
//                cout << "Carti Jucator: " << cartiJucator << endl;
//            }
//        }
//        vrei = '1';
//        while (cartiDealer <= 21 && vrei == '1')
//        {
//            cout << endl << "Vrei sa mai tragi o carte? 1=da 2=nu " << endl;
//            cin >> vrei;
//            if (vrei == '1')
//            {
//                Random = rand() % 56;
//                cartiDealer += pachet[Random];
//                cout << "Cartile Dealerului: " << cartiDealer << endl;
//            }
//        }
//        cout << "Cartile Jucatorului: " << cartiJucator << endl;
//        cout << "Cartile dealerului: " << cartiDealer << endl;
//        if (cartiJucator <= 21 && cartiDealer <= 21 && cartiJucator > cartiDealer && cartiJucator != cartiDealer || cartiJucator <= 21 && cartiDealer > 21)
//        {
//            sumaJucator += suma * 2;
//            cout << "Jucatorul a castigat" << endl;
//        }
//        if (cartiDealer <= 21 && cartiJucator <= 21 && cartiDealer > cartiJucator && cartiDealer != cartiJucator || cartiDealer <= 21 && cartiJucator > 21)
//        {
//            sumaDealer += suma * 2;
//            cout << "Dealerul a castigat" << endl;
//        }
//        if (cartiJucator == cartiDealer || cartiJucator > 21 && cartiDealer > 21)
//        {
//            cout << "Remiza" << endl;
//            sumaJucator += suma;
//            sumaDealer += suma;
//        }
//        cout << endl;
//        if (cartiJucator != 0 && cartiDealer != 0)
//        {
//            cout << "Jucatorul are " << sumaJucator << " de lei" << endl;
//            cout << "Dealerul are " << sumaDealer << " de lei" << endl;;
//            cout << "Vrei sa joci din nou? 1=da 2=nu" << endl;
//            cin >> repeta;
//        }
//        else if (repeta == '2')
//            cout << "Jocul este gata ";
//        if (sumaJucator == 0)
//        {
//            cout << "Jucatorul nu mai are bani";
//            break;
//        }
//        if (sumaDealer == 0)
//        {
//            cout << "Dealerul nu mai are bani";
//            break;
//        }
//        vrei = '1';
//        cartiJucator = 0;
//        cartiDealer = 0;
//    }
//}