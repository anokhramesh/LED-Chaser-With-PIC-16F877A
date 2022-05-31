//anokhautomation
//16LED CHASER with pic 16f877A
//set crystal frequency to 8 Mhz
//Connect LEDs to Port RB and RC (PIN #26 to 33) of PIC16F877A
void main() {

TRISB = 0x00; //all bits in port B are initialized as output
TRISC = 0x00; //all bits in port C are initialized as output
PORTB = 0x00; //by default all pins of portB are LOW
PORTC = 0x00; //by default all pins of PortC are LOW
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
        PORTC = 0b00000001;//0x01;
        Delay_ms(100);
        PORTC = 0b00000010;//0x02;
        Delay_ms(100);
        PORTC = 0b00000100;//0x04;
        Delay_ms(100);
        PORTC = 0b00001000;//0x08;
        Delay_ms(100);
        PORTC = 0b00010000;//0x10;
        Delay_ms(100);
        PORTC = 0b00100000;//0x20;
        Delay_ms(100);
        PORTC = 0b01000000;//0x40;
        Delay_ms(100);
        PORTC = 0b10000000;//0x80;
        Delay_ms(100);
        }
}
