#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int ExitFunction() {
int Exit_Variable = 0;

string Exit_String = "";
Exit_String = "Exit?\n";

cout << Exit_String;
cin >> Exit_Variable;
return 0;
}

int OnePlayer() {
string PlayerCountTooSmallLine1 = "";
string PlayerCountTooSmallLine2 = "";
PlayerCountTooSmallLine1 = "Your Player Count Is Too Small.";
PlayerCountTooSmallLine2 = "Please Find Someone To Play With.";

cout << PlayerCountTooSmallLine1 << endl;
cout << PlayerCountTooSmallLine2 << endl;
return ExitFunction(); }

int TwoPlayers() {


string PlayerOneName = "";
string PlayerTwoName = "";

cout << "Who Is Player One?" << endl;
cin >> PlayerOneName;
cout << "Who Is Player Two?" << endl;
cin >> PlayerTwoName;

return ExitFunction();
}

int ThreePlayers() {


return ExitFunction();
}

int main() {

int Exit_Variable = 0;

int PlayerCount = 0;

int _0 = 0;
int _1 = 0;
int _2 = 0;
int _3 = 0;
int _4 = 0;
int _5 = 0;
int _6 = 0;
int _7 = 0;
int _8 = 0;
int _9 = 0;
int _10 = 0;

int A = 0;
int B = 0;
int C = 0;
int D = 0;
int E = 0;
int F = 0;
int G = 0;
int H = 0;
int I = 0;
int J = 0;
int K = 0;
int L = 0;
int M = 0;
int N = 0;
int O = 0;
int P = 0;
int Q = 0;
int R = 0;
int S = 0;
int T = 0;
int U = 0;
int V = 0;
int W = 0;
int X = 0;
int Y = 0;
int Z = 0;

string PlayerOneName = "";
string PlayerTwoName = "";
string PlayerThreeName = "";
string PlayerFourName = "";

string HowManyPeopleArePlaying = "";
string PlayerCountTooSmall = "";

string AA = "";
string AAH = "";
string AAHED = "";
string AAHING = "";
string AAHS = "";
string AAL = "";
string AALII = "";
string AALIIS = "";
string AALS = "";
string AARDVARK = "";
string AARDVARKS = "";
string AARDWOLF = "";
string AARDWOLVES = "";
string AARGH = "";
string AARRGH = "";
string AARRGHH = "";
string AARTI = "";
string AARTIS = "";
string AAS = "";
string AASVOGEL = "";
string AASVOGELS = "";

string AB = "";
string ABA = "";
string ABAC = "";
string ABACA = "";
string ABACAS = "";
string ABACI = "";
string ABACK = "";
string ABACS = "";
string ABACTERIAL = "";
string ABACTINAL = "";
string ABACTINALLY = "";
string ABACTOR = "";
string ABACTORS = "";
string ABACUS = "";
string ABACUSES = "";
string ABAFT = "";
string ABAKA = "";
string ABAKAS = "";
string ABALONE = "";
string ABALONES = "";
string ABAMP = "";
string ABAMPERE = "";
string ABAMPERES = "";
string ABAMPS = "";

string Valid_Words[] = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};

_0 = 0;
_1 = 1;
_2 = 2;
_3 = 3;
_4 = 4;
_5 = 5;
_6 = 6;
_7 = 7;
_8 = 8;
_9 = 9;
_10 = 10;

A = 1;
B = 3;
C = 3;
D = 2;
E = 1;
F = 4;
G = 2;
H = 4;
I = 1;
J = 8;
K = 5;
L = 1;
M = 3;
N = 1;
O = 1;
P = 3;
Q = 10;
R = 1;
S = 1;
T = 1;
U = 1;
V = 4;
W = 4;
X = 8;
Y = 4;
Z = 10;

HowManyPeopleArePlaying = "How Many People Are Playing?";
PlayerCountTooSmall = "Your Player Count Is Too Small.\nPlease Find Someone To Play With.";

AA = "AA";
AAH = "AAH";
AAHED = "AAHED";
AAHING = "AAHING";
AAHS = "AAHS";
AAL = "AAL";
AALII = "AALII";
AALIIS = "AALIIS";
AALS = "AALS";
AARDVARK = "AARDVARK";
AARDVARKS = "AARDVARKS";
AARDWOLF = "AARDWOLF";
AARDWOLVES = "AARDWOLVES";
AARGH = "AARGH";
AARRGH = "AARRGH";
AARRGHH = "AARRGHH";
AARTI = "AARTI";
AARTIS = "AARTIS";
AAS = "AAS";
AASVOGEL = "AASVOGEL";
AASVOGELS = "AASVOGELS";
AB = "";
ABA = "";
ABAC = "";
ABACA = "";
ABACAS = "";
ABACI = "";
ABACK = "";
ABACS = "";
ABACTERIAL = "";
ABACTINAL = "";
ABACTINALLY = "";
ABACTOR = "";
ABACTORS = "";
ABACUS = "";
ABACUSES = "";
ABAFT = "";
ABAKA = "";
ABAKAS = "";
ABALONE = "";
ABALONES = "";
ABAMP = "";
ABAMPERE = "";
ABAMPERES = "";
ABAMPS = "";

Valid_Words[0] = AA;
Valid_Words[1] = AAH;
Valid_Words[2] = AAHED;
Valid_Words[3] = AAHING;
Valid_Words[4] = AAHS;
Valid_Words[5] = AAL;
Valid_Words[6] = AALII;
Valid_Words[7] = AALIIS;
Valid_Words[8] = AALS;
Valid_Words[9] = AARDVARK;
Valid_Words[10] = AARDVARKS;
Valid_Words[11] = AARDWOLF;
Valid_Words[12] = AARDWOLVES;
Valid_Words[13] = AARGH;
Valid_Words[14] = AARRGH;
Valid_Words[15] = AARRGHH;
Valid_Words[16] = AARTI;
Valid_Words[17] = AARTIS;
Valid_Words[18] = AAS;
Valid_Words[19] = AASVOGEL;
Valid_Words[20] = AASVOGELS;

cout << HowManyPeopleArePlaying << endl;
cin >> PlayerCount;

if (PlayerCount == _1) {
OnePlayer(); }

if (PlayerCount == _2) {
TwoPlayers(); }

if (PlayerCount == _3) {
cout << "Who Is Player One?" << endl;
cin >> PlayerOneName;
cout << "Who Is Player Two?" << endl;
cin >> PlayerTwoName;
cout << "Who Is Player Three?" << endl;
cin >> PlayerThreeName; }

if (PlayerCount == _4) {
cout << "Who Is Player One?" << endl;
cin >> PlayerOneName;
cout << "Who Is Player Two?" << endl;
cin >> PlayerTwoName;
cout << "Who Is Player Three?" << endl;
cin >> PlayerThreeName;
cout << "Who Is Player Four?" << endl;
cin >> PlayerFourName; }




ExitFunction();
return 0;
}
