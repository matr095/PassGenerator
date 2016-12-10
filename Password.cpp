
#include "Password.h"

void Password::generate(int level) {

    char *lettres[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    char *lettresalpha[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    char *lettresalphaspec[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "@", "&", "§","!" ,"€","ù" ,"$","*"};

    if (level == 1) {
        cout << "Your password:" << endl;
        for (int i=0;i<=5;i++) {
            int chiffre = rand() % (25 - 0);
            letter = lettres[chiffre];
            passwd[i] = letter[0];
            cout << passwd[i];
        }
    }
    if (level == 2) {
        cout << "Your password:" << endl;
        for (int i=0;i<=7;i++) {
            int chiffre = rand() % (35 - 0);
            letter = lettresalpha[chiffre];
            passwd[i] = letter[0];
            cout << passwd[i];
        }
    }
    if (level == 3) {
        cout << "Your password:" << endl;
        for (int i=0;i<=9;i++) {
            int chiffre = rand() % (43 - 0);
            letter = lettresalphaspec[chiffre];
            passwd[i] = letter[0];
            cout << passwd[i];
        }
    }

}