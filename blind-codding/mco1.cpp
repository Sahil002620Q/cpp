#include <iostream>
using namespace std;

int main() {
  int peopleInRoom = 0;

  cout << "People in room: " << peopleInRoom << "\n";

  // 3 people enter
  peopleInRoom++;
  cout << "One person entered. People in room: " << peopleInRoom << "\n";
  peopleInRoom++;
  cout << "One person entered. People in room: " << peopleInRoom << "\n";
  peopleInRoom++;
  cout << "One person entered. People in room: " << peopleInRoom << "\n";

  // 1 person leaves
  peopleInRoom--;
  cout << "One person left. People in room: " << peopleInRoom << "\n";

  return 0;
}
