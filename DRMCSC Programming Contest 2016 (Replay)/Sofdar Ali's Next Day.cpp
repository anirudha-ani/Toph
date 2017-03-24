#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int test_case;
    int date , month , year;
    string smonth;
    scanf("%d", &test_case);
    for(int i = 0 ; i < test_case ; i++)
    {

        bool isLeapyear = false;
        scanf("%d %d %d", &date , &month , &year);

       if ((year % 4 == 0) && (!(year % 100 == 0)|| (year % 400 == 0)))
        {
            isLeapyear = true;
        }
        if(date == 31  )
        {
            date = 1;
            month += 1;
            month = month%12;
            if(month==1) year++;
        }
        else if(date == 30&&(month == 4||month == 6||month == 9||month == 11))
        {
            month+=1;
            date = 1;
        }
        else if(date == 29 && month == 2)
        {
            month+= 1;
            date = 1;
        }
        else if (date == 28 && month == 2 && isLeapyear == false)
        {
            month+= 1;
            date = 1;
        }
        else
        {
            date++;
        }

        switch(month)
        {
            case 1:
            smonth = "Jan";
            break;
            case 2:
            smonth = "Feb";
            break;
            case 3:
            smonth = "Mar";
            break;
            case 4:
            smonth = "Apr";
            break;
            case 5:
            smonth = "May";
            break;
            case 6:
            smonth = "Jun";
            break;
            case 7:
            smonth = "Jul";
            break;
            case 8:
            smonth = "Aug";
            break;
            case 9:
            smonth = "Sep";
            break;
            case 10:
            smonth = "Oct";
            break;
            case 11:
            smonth = "Nov";
            break;
            case 12:
            smonth = "Dec";
            break;


        }
        if(date/10 == 0)
        {
            printf("0");
        }
        //cout << date <<" "<<smonth <<", "<<year<<endl;
        printf("%d %s, %d\n", date , smonth.c_str() , year);

    }
    return 0;
}
