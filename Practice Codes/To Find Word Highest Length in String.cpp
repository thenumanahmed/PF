#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 20;
    char arr[SIZE];

    cout << "Enter a Sentence: ";
    cin.getline(arr, SIZE);

    int index = 0;
    int curLength = 0, maxlength = 0;
    int wordSt = 0,    // To hold the starting index of each word
        maxWordSt = 0; // to hold the starting index of max length word

    while (true)
    {
        if (arr[index] == ' ' || arr[index] == '\0')
        {
            if (curLength > maxlength)
            {
                maxlength = curLength;
                maxWordSt = wordSt; // if max length will change starting index will also change for max length word
            }
            curLength = 0;
            wordSt = index + 1; // will hold the index after space
        }
        else
        {
            curLength++;
        }

        if (arr[index] == '\0')
        {
            break;
        }
        index++;
    }
    cout << endl
         << "Length of longest word is: " << maxlength;
    cout << " and the word is: ";

    for (index = 0; index < maxlength; index++)
    {
        cout << arr[(index + maxWordSt)];
    }
    return 0;
}