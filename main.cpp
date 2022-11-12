#include <iostream>
#include <random>

using namespace std;

int main() {
    // initialize important elements
    // character name
    string playername;
    // stats
    int confusion, damage, thinking;
    // day/night cycle, which decides whether it's day or night - "dnc" | Deciding what to do, changes depending on time of day, and also might have mastadon sit on and therefore crush you.
    int dnc, whattodo;
    // start stats at 0
    confusion = 0;
    damage = 0;
    thinking = 0;
    // start day/night cycle, 1 = day, 2 = evening
    srand(time(NULL));
	dnc = rand() % 6 + 1;

    srand(time(NULL));
	whattodo = rand() % 6 + 1;

    // ask for the user's name
    cout << "Hello! Before we begin the game, I feel I must ask, as a respectful computer, what is your name?" << endl;
    // input playername
    cin >> playername;
    cout << "Hello, " << playername <<"! It's nice to meet you. Now, let the games begin!" << endl;
        // Game title/introduction
    cout << R"(
/$$$$$$       /$$$$$$$                  /$$   /$$             /$$           /$$      /$$                       /$$                  /$$$$$$        /$$      /$$                       /$$                     /$$
|_  $$_/      | $$__  $$                | $$$ | $$            | $$          | $$  /$ | $$                      | $$                 /$$__  $$      | $$$    /$$$                      | $$                    | $$
  | $$        | $$  \ $$  /$$$$$$       | $$$$| $$  /$$$$$$  /$$$$$$        | $$ /$$$| $$  /$$$$$$  /$$$$$$$  /$$$$$$              | $$  \ $$      | $$$$  /$$$$  /$$$$$$   /$$$$$$$ /$$$$$$    /$$$$$$   /$$$$$$$  /$$$$$$  /$$$$$$$
  | $$        | $$  | $$ /$$__  $$      | $$ $$ $$ /$$__  $$|_  $$_/        | $$/$$ $$ $$ |____  $$| $$__  $$|_  $$_/              | $$$$$$$$      | $$ $$/$$ $$ |____  $$ /$$_____/|_  $$_/   |____  $$ /$$__  $$ /$$__  $$| $$__  $$
  | $$        | $$  | $$| $$  \ $$      | $$  $$$$| $$  \ $$  | $$          | $$$$_  $$$$  /$$$$$$$| $$  \ $$  | $$                | $$__  $$      | $$  $$$| $$  /$$$$$$$|  $$$$$$   | $$      /$$$$$$$| $$  | $$| $$  \ $$| $$  \ $$
  | $$        | $$  | $$| $$  | $$      | $$\  $$$| $$  | $$  | $$ /$$      | $$$/ \  $$$ /$$__  $$| $$  | $$  | $$ /$$            | $$  | $$      | $$\  $ | $$ /$$__  $$ \____  $$  | $$ /$$ /$$__  $$| $$  | $$| $$  | $$| $$  | $$
 /$$$$$$      | $$$$$$$/|  $$$$$$/      | $$ \  $$|  $$$$$$/  |  $$$$/      | $$/   \  $$|  $$$$$$$| $$  | $$  |  $$$$/            | $$  | $$      | $$ \/  | $$|  $$$$$$$ /$$$$$$$/  |  $$$$/|  $$$$$$$|  $$$$$$$|  $$$$$$/| $$  | $$
|______/      |_______/  \______/       |__/  \__/ \______/    \___/        |__/     \__/ \_______/|__/  |__/   \___/              |__/  |__/      |__/     |__/ \_______/|_______/    \___/   \_______/ \_______/ \______/ |__/  |__/

    )";
    cout << "================================================================================================================================================================================================" << endl;
    cout << "Ring! Ring! You pick up the phone, it's your aunt Gretchen calling." << endl;
    cout << "'Hey, " << playername << ", I'm really sorry to say it, but grandma died. In her will, she left you...'" << " Aunt Gretchen pauses a moment " << "'her pet mastadaon? A mastadon? I don't know what that is, a pet of some kind? In any case, you should be expecting it in about 5 minutes.'";
    cout << " You thank aunt Gretchen and put the phone down. You sit for a moment in quiet sadness, then you hear the doorbell, and a disgruntled postal worker opens the door, a mastadon quickly runnning inside your house! Congratulaions! Or sorry. Depends how you feel about mastadons, I suppose.";
    cout << R"(       ___
 .,,,,()°_,\
;|  ,,   ; '
 !_‘  |_’)" << endl;
    cout << "================================================================================================================================================================================================" << endl;


if ((confusion < 11) & (thinking < 11) & (damage < 11)) {
    if ((dnc == 1) | (dnc == 2) || (dnc == 3)) {
        switch (whattodo) {
        case 1 :
            cout << "Your mastadon tells you a secret about your family it could not possibly know." << endl;
            confusion++;
        break;

        case 2 :
            cout << "Your mastadon decentralizes all over the carpet." << endl;
            damage++;
        break;

        case 3 :
            cout << "You take the mastadon on a walk in your gated neighborhood." << endl;
            thinking++;
        break;

        case 4 :
            cout << "The mastadon federates violently through a window, which now needs replacing." << endl;
            confusion++;
            damage++;
        break;

        case 5 :
            cout << "The mastadon won't move unless you know the password. You do not know the password" << endl;
            confusion = confusion + 2;
        break;

        case 6 :
            cout << "The mastadon bashes a whole in your roof, and now claims to have a much better view of other mastadons." << endl;
            damage = damage + 2;
        break;
        }
    }
   if ((dnc == 4) | (dnc == 5)) {
        switch (whattodo) {
        case 1 :
            cout << "The mastadon trumpets 'ERROR' at you. You ponder your mistake." << endl;
            thinking++;
        break;
            cout << "It wears so many hats. How will you wash all these hats?" << endl;
            confusion++;
        case 2 :
            cout << "It reads moral philosophy and particle physics. All day. It will not let you read with it." << endl;
            confusion++;
        break;

        case 3 :
            cout << "Your friends tell you how wonderful their mastadons are. You burn with envy." << endl ;
            confusion++;
            thinking++;
        break;

        case 4 :
            cout << "Before the mastadon will you sleep, you must clean its many whistles and gears." << endl;
            confusion++;
            thinking++;
        break;

        case 5 :
            cout << "During the night, your mastadon holds not one, not two, but a third party. There is a platform. And servers." << endl;
            damage++;
        break;
        }
    }
    if (dnc == 6) {
    cout << "You anger your mastadon with your questions, and it sits on you." << endl;
    cout << R"(
  /$$$$$$                                           /$$$$$$
 /$$__  $$                                         /$$__  $$
| $$  \__/  /$$$$$$  /$$$$$$/$$$$   /$$$$$$       | $$  \ $$ /$$    /$$ /$$$$$$   /$$$$$$
| $$ /$$$$ |____  $$| $$_  $$_  $$ /$$__  $$      | $$  | $$|  $$  /$$//$$__  $$ /$$__  $$
| $$|_  $$  /$$$$$$$| $$ \ $$ \ $$| $$$$$$$$      | $$  | $$ \  $$/$$/| $$$$$$$$| $$  \__/
| $$  \ $$ /$$__  $$| $$ | $$ | $$| $$_____/      | $$  | $$  \  $$$/ | $$_____/| $$
|  $$$$$$/|  $$$$$$$| $$ | $$ | $$|  $$$$$$$      |  $$$$$$/   \  $/  |  $$$$$$$| $$
 \______/  \_______/|__/ |__/ |__/ \_______/       \______/     \_/    \_______/|__/
    )";
    }
    }
    cout << "Your confusion, damage, and thinking are " << confusion << ", " << damage << ", and " << thinking << " respectively." << endl;


	return 0;
}
