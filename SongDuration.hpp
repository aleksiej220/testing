#include <string>
using namespace std;
class SongDuration{
    private:
        unsigned int minutes;
        unsigned int seconds;
    public:
        SongDuration(unsigned int min = 0, unsigned int sec = 0){
            minutes = min + sec/60;
            seconds = sec % 60;
        }
        unsigned int get_total_seconds(){
            return seconds + (minutes*60);
        }
        string get_formatted(){
            string s = to_string(minutes) + "m " + to_string(seconds) + "s";
            return s;
        }
};