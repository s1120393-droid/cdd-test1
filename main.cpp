/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    std::cout<<"Hello World";

    return 0;
}#include <iostream>

double calcuateBMI(double weight_kg, double height_cm){
    if (height_cm <= 0) return 0.0;

    double height_m = height_cm / 100.0;
    //bmi 計算
    double bmi = weight_kg / (height_m * height_m);
    return bmi;
}

int main()
{
    double weight1, weight2, height1, height2;

    weight1 = 80;
    weight2 = 70;
    height1 = 168;
    height2 = 188;

    std::cout << "your bmi is " << calcuateBMI(weight1, height1) << std::endl;
    std::cout << "another bmi is " << calcuateBMI(weight2, height2) << std::endl;

    return 0;
}
