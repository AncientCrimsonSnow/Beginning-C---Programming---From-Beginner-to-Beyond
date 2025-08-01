#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<char> vowels {'a', 'e', 'i', 'o', 'u'};
    
    cout << endl << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
    vector<int> scores {100, 98, 89};
    
    cout << endl << "First score at index 0: " << scores[0] << endl;
    cout << "Second score at index 1: " << scores[1] << endl;
    cout << "Third score at index 2: " << scores[2] << endl;
    
    cout << endl << "First score at index 0: " << scores.at(0) << endl;
    cout << "Second score at index 1: " << scores.at(1) << endl;
    cout << "Third score at index 2: " << scores.at(2) << endl;
    cout << endl << "There are " << scores.size() << " scored in the vector" << endl;
    
    cout << endl << "Enter 3 test scores: ";
    cin >> scores.at(0) >> scores.at(1) >> scores.at(2);
    
    cout << endl << "The updated array is:" << endl;
    cout << endl << "First score at index 0: " << scores.at(0) << endl;
    cout << "Second score at index 1: " << scores.at(1) << endl;
    cout << "Third score at index 2: " << scores.at(2) << endl;
    
    cout << endl << "Enter a test score to add to the vector ";
    
    int scoreToAdd {0};
    
    cin >> scoreToAdd;
    scores.push_back(scoreToAdd);
    
    cout << endl << "Enter a test score to add to the vector ";

    cin >> scoreToAdd;
    scores.push_back(scoreToAdd);
    
    cout << endl << "There are " << scores.size() << " scored in the vector" << endl;

    vector<vector<int>> movieRatings{
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };
    
    cout << endl << "Here are the movie ratings for reviewer #1 using array syntax: " << endl;
    cout << movieRatings[0][0] << endl;
    cout << movieRatings[0][1] << endl;
    cout << movieRatings[0][2] << endl;
    cout << movieRatings[0][3] << endl;

    cout << endl << "Here are the movie ratings for reviewer #1 using vector syntax: " << endl;
    cout << movieRatings.at(0).at(0) << endl;
    cout << movieRatings.at(0).at(1) << endl;
    cout << movieRatings.at(0).at(2) << endl;
    cout << movieRatings.at(0).at(3) << endl;  
    return 0;
}