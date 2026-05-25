#include<stdio.h>     
#include<stdint.h>     
#include<stdlib.h>      

// Define a union  
union union_bit
{
    uint32_t union_bits;   // 32-bit unsigned integer to hold all bits together  

    // Define a structure inside the union to represent individual bit fields  
    struct bit
    {
        uint32_t flag :1;       // 1-bit field for 'flag'  
        uint32_t temp :2;       // 2-bit field for 'temp'  
        uint32_t mac :4;        // 4-bit field for 'mac'  
        uint32_t crc :12;       // 12-bit field for 'crc'  
        uint32_t battery :8;    // 8-bit field for 'battery'  
        uint32_t sensor :3;     // 3-bit field for 'sensor'  
        uint32_t air :2;        // 2-bit field for 'air'  
    } b;                        // Structure variable name 'b'  
} u;                            // Union variable 'u'  

int main()
{
    uint32_t bits = 0xFE3C9AD7;      // Initialize a 32-bit variable with hexadecimal value  
    u.union_bits = bits;             // Assign value to the union  

    printf("size of structure is : %d\n",sizeof(u));     // Print size of the union  

    // Print values of each bit field in hexadecimal format  
    printf("flag address : %X\n",u.b.flag);      
    printf("temp address : %X\n",u.b.temp);      
    printf("mac address : %X\n",u.b.mac);        
    printf("crc address : %X\n",u.b.crc);        
    printf("battery address : %X\n",u.b.battery);
    printf("sensor address : %X\n",u.b.sensor);  
    printf("air address : %X\n",u.b.air);        

    // Return statement to indicate successful program termination  
}
