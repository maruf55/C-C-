#include<iostream>
using namespace std;
class movie{
    string rating;
    public:
    string title;
    string director;
    movie(string atitle,string adirctor,string arating){
        title=atitle;
        director=adirctor;
        setRating(arating);
    }
    void setRating(string arating){
        if(arating=="G"|| arating=="PG"|| arating=="R"||arating=="NR"){
            rating = arating;
        }
        else rating="NR";
    }
    string getRating(){
        return rating;
    }
};
int main()
{
    movie avg("Assassin","Joss mos","DOG");
    cout<<avg.getRating();  
    return 0;
}
