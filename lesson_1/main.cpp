/*
  LESSON # 1
    core concept #1:
      data structures:
        a mechanism for storing different types of
        values, e.g.
        `int x = 5;` // x will always be an integer, i.e. -∞ < x < ∞
      couple of important data structures:
        boolean => `true` or `false`
        string => a sentance like piece of data, e.g.
          "hello world", "how are you doing?", "i am 5 yrs old"
        int => a whole number that satisfies -(2^31) < x < (2^31 - 1)
        float => non-whole numbers, -1.3, 3.14, 7.51
          the issue with floats is they're very finnicky e.g.
          1.999 == 2.00 == 2.01, have to be careful with floats
        char => a single character, e.g. '1', '>', '?'
        arrays => which is a list of a specific data structure, e.g.
          `int[5] = [11, 34, -5, 0, 1];`
          `char[5] = ['h', 'e', 'l', 'l', 'o'];`
          `string[2] = ['hello', 'world'];`
      variables:
        types of data structures whos value can change, e.g.
        `x = x + 1;` // x now holds the value 6
      const data structures:
        these are data structures whos value doesnt change, useful
        when you have a piece of information you want to give a name
        and use elsewhere, e.g.
        `const float pi = 3.14;` what this allows is for the value
        to always be 3.14, no one can chagen, so you know what to
        expect

    core concept #2:
      i/o -- input output
        a mechanism for reading in values to the program
        and outputting values for the user to see
          e.g.
            writing to the console
            printing a picture
            a graphics engine

      _side_note_: output is usually easier than input,
        especially in the beginning
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {


  return 0;
}
