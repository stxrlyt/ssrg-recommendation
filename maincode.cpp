#include <iostream>

using namespace std;

int main ()
{
  //Define length and note amount in int
  int lm, ls, ts, n;

  //Insert beatmap length
  cout << "Insert length of beatmap (in minutes and seconds): " << endl;
  cin >> lm >> ls;
  ts = (lm * 60) + ls;

  //Insert note amount
  cout << "Insert the amount of notes of the song in Hard Mode: " << endl;
  cin >> n;

  //Time conditionals
  if (ts < 60)
    cout << "Invalid. ";
  else if ((60 <= ts) && (ts <= 80))
    cout << "Very grindable. ";
  else if ((80 < ts) && (ts <= 100))
    cout << "Grindable, but not recommended. ";
  else
    cout << "Please avoid grinding. ";

  //Note amount conditionals
  if (n < 200)
    cout << "Invalid.";
  else if ((200 <= n) && (n <= 400))
    cout << "Lots of time to rest.";
  else if ((400 < n) && (n <= 550))
    cout << "So-so.";
  else
    cout << "Very tiring.";

  return 0;
}
