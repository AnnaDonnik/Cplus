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
int  time_present(){
time_t time_present ;
struct tm * timeinfo;
time(& time_present);
timeinfo = localtime(&time_present);
int hours = timeinfo -> tm_hour;
int minutes = timeinfo -> tm_min;
int seconds = timeinfo -> tm_sec;

cout<<setw(2)<< setfill('0') <<  hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << "\n";

int *mas_time = new int[3];
mas_time[0] = hours;
mas_time[1] = minutes;
mas_time[2] = seconds;// {hours, minutes, seconds};
return *mas_time;
}

int hours_plus( int h){

cout << setw(2) << setfill('0') << (tima[0] + 4)%24 << ":" << setw(2) << setfill('0') << tima[1] << ":" << setw(2) << setfill('0') << tima[2] << "\n";


}


};


int main(){
Time present_time;
present_time.time_present();
Time h_plus;
h_plus.hours_plus(4);

return 0;
}
