#include <string>
#include "Song.hpp"
#include <iostream>
using namespace std;
unsigned int Song::count_songs = 0;
string Song::get_artist(){
    return this->artist;
}
string Song::get_title(){
    return this->tittle;
}
unsigned int Song::get_duration(){
    return (this->duration).get_total_seconds();
}
void Song::set_title(string s){
    this->tittle = s;
}
void Song::set_artist(string s){
    this->artist = s;
}
void Song::set_duration(unsigned int s){
    this->duration = SongDuration(0,s);
}
void Song::print(){
    cout<<this->tittle<<" Artist: "<<this->artist<<" "<<this->duration.get_formatted()<<endl;
}
unsigned int Song::get_total_songs(){
    return count_songs;
}