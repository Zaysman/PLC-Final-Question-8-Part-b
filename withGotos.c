#include <stdio.h>



int main() {
    int j;
    int i;

    j = 3;

    for(i = 0; i < 3; i++) {
        if((j+2) == 3 || (j+2) == 2) {
            goto label1;
        } else if((j+2) == 0) {
            goto label2;
        } else {
            goto label3;
        }

        if( j > 0) {
            goto finish;
        }

        j = 3 - i;
    }

    label1:
    j--;
    return; //end of label 1

    label2:
    j += 2;
    return; //end of label 2

    label3:
    j = 0;
    return; // end of default

    finish:

    return 0;
}