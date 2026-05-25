#include<stdio.h>     ==
#include<stdint.h>     
#include<stdlib.h>    

// Define a structure named 'bit' to represent bit fields  
struct bit
{
    uint32_t flag :1;       // 1-bit field for 'flag'  
    uint32_t temp :2;       // 2-bit field for 'temp'  
    uint32_t mac :4;        // 4-bit field for 'mac'  
    uint32_t crc :12;       // 12-bit field for 'crc'  
    uint32_t battery :8;    // 8-bit field for 'battery'  
    uint32_t sensor :3;     // 3-bit field for 'sensor'  
    uint32_t air :2;        // 2-bit field for 'air'  
} b;                        // Create global variable 'b' of type struct bit  

int main()
{
    uint32_t bits = 0xFE3C9AD7; // Initialize a 32-bit hexadecimal value  

    // Extract each field using bit masking and shifting  
    b.flag =  ((bits) & (1<<0));             // Extract bit 0 (1 bit) for flag  
    b.temp =  ((bits>>1) & (3<<0));          // Extract bits 1-2 (2 bits) for temp  
    b.mac =   ((bits>>3) & (0xF<<0));        // Extract bits 3-6 (4 bits) for mac  
    b.crc =   ((bits>>7) & (0xFFF<<0));      // Extract bits 7-18 (12 bits) for crc  
    b.battery = ((bits>>19) & (0xFF<<0));    // Extract bits 19-26 (8 bits) for battery  
    b.sensor = ((bits>>27) & (7<<0));        // Extract bits 27-29 (3 bits) for sensor  
    b.air =    ((bits>>30) & (3<<0));        // Extract bits 30-31 (2 bits) for air  

    // Print the size of the structure  
    printf("size of structure is : %d\n", sizeof(b));

    // Print extracted bit field values in hexadecimal format  
    printf("flag address : %X\n", b.flag);
    printf("temp address : %X\n", b.temp);
    printf("mac address : %X\n", b.mac);
    printf("crc address : %X\n", b.crc);
    printf("battery address : %X\n", b.battery);
    printf("sensor address : %X\n", b.sensor);
    printf("air address : %X\n", b.air);

    // Return statement indicating successful execution  
}
