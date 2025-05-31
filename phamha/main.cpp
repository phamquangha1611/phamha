#include <stdio.h>
#include <stdint.h>

void printHighLowBytes(uint16_t number) {
    uint8_t highByte = (number >> 8) & 0xFF; 
    uint8_t lowByte = number & 0xFF;        

    printf("High byte: %u (0x%02X)\n", highByte, highByte);
    printf("Low byte : %u (0x%02X)\n", lowByte, lowByte);
}

int main() {
    uint16_t input = 1234; 
    printHighLowBytes(input);

    return 0;
}
