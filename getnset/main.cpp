#include <iostream>

using namespace std;

class Game
{
    private:
        string rating;
    public:
        string title;
        string developer;

        Game(string _title, string _developer, string _rating)
        {
            title = _title;
            developer = _developer;
            SetRating(_rating);
        }

        void SetRating(string _rating)
        {
            if (_rating == "g" || _rating == "pg" || _rating == "m" || _rating == "ma15" || _rating == "r18")
            {
                rating = _rating;
            }
            else
            {
                rating = "not rated";
            }
        }

        string GetRating()
        {
            return rating;
        }
};

int main()
{
    Game titanfall2("titanfall 2", "respawn entertainment", "ma15");
    cout << titanfall2.GetRating() << endl;
    return 0;
}
