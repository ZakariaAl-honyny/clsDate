
#include <iostream>
#include "clsDate.h";
using namespace std;

int main()
{
    clsDate Date1;
    Date1.Print();

    clsDate Date2("26/3/2004");
    Date2.Print();

    clsDate Date3(13, 5, 2024);
    Date3.Print();

    clsDate Date4(250, 2022);
    Date4.Print();

    Date1.IncreaseDateByOneMonth();
    Date1.Print();


    Date3.PrintYearCalendar();
    cout << Date2.IsValid() << endl;

    cout << "\nMy Age In Days: " << clsDate::CalculateMyAgeInDays(clsDate(26, 3, 2004)) << endl;

    //You can try any method at your own

    cout << clsDate::IsValidDate(clsDate(29, 2, 2000)) << endl;

    cout << clsDate::DaysUntilTheEndOFWeek(clsDate(18, 5, 2024)) << endl;

    system("pause>0");
    return 0;
}









