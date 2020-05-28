#include <iostream>
#include <string>

int main ()
{
  int score;
  score = 8;

  std::cout << "This is the original score!: " << score << std::endl;  // => Wouldn't you want to display the score on the line?
  
  std::cout << "What is the score you want?: ";
  std::cin >> score;
  
  std::cout << "This is the current score: " << score << std::endl;
}




