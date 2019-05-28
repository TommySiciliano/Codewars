
#include <iostream>
#include <cstring>
using namespace std;

/*
 * 	Task::
	Write a function that accepts fight string consists of only small letters and return who wins the fight. When the left side wins return Left side wins!, when the right side wins return Right side wins!, in other case return Let's fight again!.

	The left side letters and their power:
	 w - 4
	 p - 3
	 b - 2
	 s - 1
	The right side letters and their power:
	 m - 4
	 q - 3
	 d - 2
	 z - 1

	*******************************
 */


std::string alphabetWar(std::string fight)
{

  int right_side_ctr=0;
  int lef_side_ctr=0;
  std::string result;

  char str_letter[fight.length()];
  strcpy(str_letter, fight.c_str());

  for(unsigned int i=0; i<fight.length(); ++i) {
	  switch (str_letter[i]) {
		case 'w': lef_side_ctr += 4; break;
		case 'p': lef_side_ctr += 3; break;
		case 'b': lef_side_ctr += 2; break;
		case 's': lef_side_ctr += 1; break;
		/***********************************/
		case 'm': right_side_ctr += 4; break;
		case 'q': right_side_ctr += 3; break;
		case 'd': right_side_ctr += 2; break;
		case 'z': right_side_ctr += 1; break;
		}
  }

  std::cout<<lef_side_ctr<<std::endl;
  std::cout<<right_side_ctr<<std::endl;

  if(lef_side_ctr > right_side_ctr)			result = "Left side wins!";
  else if (lef_side_ctr < right_side_ctr)	result = "Right side wins!";
  else 										result = "Let's fight again!";

  std::cout<<result<<std::endl;

  return result;
}

int main() {

	alphabetWar("zds");

}
