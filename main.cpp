#include <iostream>
#include<cmath>

using namespace std;

class Movie {

private:
    int rating;

public:
    string title;
    string director;


    Movie(string aTitle, string aDirector, double aRating){
        title = aTitle;
        director = aDirector;
        rating = setRating(aRating);
    }
    setRating(int rate){
        rating = rate;
    }

};





int main()
{
   Movie avengers = {"Avengers", "Tom", 4.5};

   cout << avengers.rating;


   return 0;
}





