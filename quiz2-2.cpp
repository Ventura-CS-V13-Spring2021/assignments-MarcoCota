#include <iosstream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    //Tells the code to pick a number between zero and 1 hundred
    cout << rand()%100;

}