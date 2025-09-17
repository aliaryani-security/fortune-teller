#include <ctime>
#include <iostream>
using namespace std;

int main() {
    // in order to get different random numbers every time
    // we run our program, we use time(0) and give it to srand()
    srand(time(0));
    
    char prediction0 [] {"a lot of things are running in the background!"};
    char prediction1 [] {"a lot of empty beer bottles on your table!"};
    char prediction2 [] {"you're partying too much with kids wearing weird clothes!"};
    char prediction3 [] {"you're running away from something really scary."};
    char prediction4 [] {"you're laughing you lungs out, I've never seen this before!"};

    return 0;
}
