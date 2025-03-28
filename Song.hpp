#include <string>
#include "SongDuration.hpp"
using namespace std;
class Song{
    private:
        string tittle;
        string artist;
        SongDuration duration;
        static unsigned int count_songs;
    public:
        Song() : tittle("Untitled"),artist("Unknown"),duration(SongDuration(0,0)){count_songs++;}
        Song(string tit, SongDuration dur, string aut = "Unknown"):  tittle(tit),artist(aut),duration(dur){count_songs++;}
        Song(string tit, unsigned int min = 0, unsigned int sec = 0, string aut = "Unknown"): tittle(tit),artist(aut),duration(SongDuration(min,sec)){count_songs++;}
        ~Song(){
            count_songs--;
        };
        void print();
        unsigned int get_duration();
        string get_title();
        string get_artist();
        void set_artist(string art);
        void set_title(string tit);
        void set_duration(unsigned int sec);
        static unsigned int get_total_songs();
        
};
