#include <8051.h>

int main(void) {
    while (1) {
        P2_5=1;
        for (volatile int i=0;i<30000;i++) {}
        P2_5=0;
        for (volatile int i=0;i<30000;i++) {}
    }
}