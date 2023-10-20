/*
    จงเขียนโปรแกรมเพื่อรับค่า String ที่สามารถรับชื่อและนามสกุลไว้ในตัวแปรเดียวกันได้ พร้อมกับแสดงผลบนหน้าจอคอมพิวเตอร์

    Test case:
        Kittinan Noimanee
    Output:
        Name: Kittinan Noimanee

    Test case:
        Visual Studio Code
    Output:
        Name: Visual Studio Code

*/
#include <stdio.h>

int main() {
    char fullname[50]; //เก็บตัวอักษร

    printf("Please enter your Fristname and Lastname: ");
    fgets(fullname, sizeof(fullname), stdin); //รับข้อมูลจากผู้ใช้

    printf("Name: %s", fullname); //แสดงค่า

    return 0;
}


