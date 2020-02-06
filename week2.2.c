#include <stdio.h>
#include <stdlib.h>
void main()
{
    char hour_str[4], minstr[4];// ต้องเป้น 4 เพราะรวมค่า/0กะ/nด้วย
    int hour, minute;

    printf("Enter hour: ");
    fgets(hour_str, 4, stdin);

    printf("Enter minute: ");
    gets(minstr);

    hour = atoi(hour_str);
    minute = atoi(minstr);

    printf("Time is %02d:%02d",hour, minute); // ถ้ามี & อยู่ข้างหน้าตอนเรียก ค่าจากตัวเเปรมันจะเป็นตัวเเปรที่มาจากค่าสุ่ม
}