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

      output: cout << message_part_1 << ... << message_last_part << endl;
        e.g.
          `cout << "Hello world!" << endl;`
      input: cin >> variable_to_store_data_in;
        e.g.
          `int x;`
          `cin >> x;` so x will be whatever the user inputs

    core concept #3:
      conditionals and loops
        a mechanism for controlling the flow of a program
        by changing what happens and how many times it happens
      couple of important conditionals and loops:
        while (some_condition) {
          do some code
        }
          the way this works, it does the code in between
          the curly brackets so long as some_condition is true
          e.g.
          ```
            bool run_while = true;
            while (run_while == true) {
              cout << "run_while is true" << endl;
              // some code
              run_while = false;
            }
          ```

        if (condition) {
          // do code
        } else if (some_other_condition) {
          // do other code
        } else {
          // do yet some other code
        }
          the way this works is if a condition is met,
          the code between the curly brackets of the condition
          is run e.g.
        ```
          int x = 3;
          int y = 3;
          int z = 3;
          if (x == 5) {
            // do code
          } else if (y == 4) {
            // do some thing else
          } else {
            // default something
          }
          // jumps to here
        ```

        for loop... this one is harder-ish
          ```
            // classically this is how its done
            int someEndValue = 10;
            for (int iterator = 0; iterator < someEndValue; iterator = iterator + 1) {
              // do some code
              // print something
            }
          ```
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

  // this is a string type data structure
  // that is also constant, its value will always
  // be "Hello, "
  const string greeting_message = "Hello, ";

  // this is a varaible string type data structure
  // its value can be anything
  string person_name = "Mahmud";

  // this is output!
  // cout ~ console out
  cout << greeting_message << person_name << endl;

  person_name = "Fatima";
  cout << greeting_message << person_name << endl;

  // this is input!
  // cin ~ console in
  cout << "Please enter your name!" << endl;
  cin >> person_name;
  cout << greeting_message << person_name << endl;

  int num1 = 5;
  int num2 = 10;
  cout << "The product of num1 and num2: " << num1 * num2 << endl;

  return 0;
}
