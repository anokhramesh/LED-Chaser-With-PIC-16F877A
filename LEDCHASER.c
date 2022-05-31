void main() {
TRISB = 0x00; //all bits are initialized as output
PORTB= 0x00; //by default all pin are LOW

while(1)
        {
        PORTB =0b00000001 ;//0x01;
        Delay_ms(100);
        PORTB =0b00000010 ;//0x02;
        Delay_ms(100);
        PORTB = 0b00000100;//0x04;
        Delay_ms(100);
        PORTB = 0b00001000;//0x08;
        Delay_ms(100);
        PORTB = 0b00010000;//0x10;
        Delay_ms(100);
        PORTB = 0b00100000;//0x20;
        Delay_ms(100);
        PORTB = 0b01000000;//0x40;
        Delay_ms(100);
        PORTB = 0b10000000;//0x80;
        Delay_ms(100);
        }
}