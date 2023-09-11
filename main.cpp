#include "mbed.h"
using namespace std;

DigitalOut led(LED1);
int main(){
    int i;
    while(i<=1000000){
        i++;
        led = !led;
        ThisThread::sleep_for(1s);
    }

    return 0;
}

