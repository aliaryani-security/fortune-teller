#include <cstddef>
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

    bool end {false};
    
    const int max_length {15};
    char name[max_length]{};

    cout << "What's your name dear? => " << endl;
    cin.getline(name, max_length);

    while (!end) {
        cout << "oh dear " << name << ", I see that ";
        size_t rand_num = static_cast<size_t>((rand() % 11));
        switch (rand_num)  {
            case 0:
                cout << prediction0 << endl;
                break;
            case 1:
                cout << prediction1 << endl;
                break;
            case 2:
                cout << prediction2 << endl;
                break;
            case 3:
                cout << prediction3 << endl;
                break;
            case 4:
                cout << prediction4 << endl;
                break;
            default:
                cout << ", hmm, I don't see anything..." << endl;
                break;
        }
        cout << "Do you want me to try again? ( y | n ) : ";

        char go_on;
        cin >> go_on;
        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }

    cout << "That's all I have for you today. have a good time" << endl;

    return 0;
}
