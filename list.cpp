#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

//void time_present();
class Time{


public:

	int hours;
	int minutes;
	int seconds;

//function that returns the current time
void time_present(){
time_t time_present ;
struct tm * timeinfo;
time(& time_present);
timeinfo = localtime(&time_present);
hours = timeinfo -> tm_hour;
minutes = timeinfo -> tm_min;
seconds = timeinfo -> tm_sec;

cout<<setw(2)<< setfill('0') <<  hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << "\n";

}


void hours_plus( int h) 
{
time_t plus;
time(&plus);
hours = localtime(&plus)->tm_hour;
minutes = localtime(&plus)->tm_min;
seconds = localtime(&plus)->tm_sec;

cout << setw(2) << setfill('0') << (hours + h)%24 << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << "\n";

}

void minutes_plus( int h)
{
time_t plus;
time(&plus);
hours = localtime(&plus)->tm_hour;
minutes = localtime(&plus)->tm_min;
seconds = localtime(&plus)->tm_sec;

minutes = minutes +h;
if (minutes >=60 ){
	hours = hours + minutes/60;
	minutes = minutes%60;
}

cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << "\n";

}


void seconds_plus( int h)
{
time_t plus;
time(&plus);
hours = localtime(&plus)->tm_hour;
minutes = localtime(&plus)->tm_min;
seconds = localtime(&plus)->tm_sec;

seconds = seconds + h;
hours = (hours + seconds/3600)%24;
minutes = minutes + (seconds%3600)/60;
seconds = (seconds + seconds%3600)%60;

cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << "\n";

}


};


int main(){
Time present_time;
present_time.time_present();
Time h_plus;
h_plus.hours_plus(4);
Time m_plus;
m_plus.minutes_plus(30);
Time s_plus;
s_plus.seconds_plus(3761);

return 0;





}
