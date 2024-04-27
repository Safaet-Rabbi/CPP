#include <iostream>
#include <string>
#include <unordered_set>
#include <sstream>
#include <iomanip>

using namespace std;

// Function to calculate Jaccard similarity coefficient
double jaccard_similarity(const unordered_set<string>& set1, const unordered_set<string>& set2) {
    // Calculate the intersection of the two sets
    unordered_set<string> intersection;
    for (const string& word : set1) {
        if (set2.count(word) > 0) {
            intersection.insert(word);
        }
    }

    // Calculate the union of the two sets
    unordered_set<string> uni = set1;
    for (const string& word : set2) {
        uni.insert(word);
    }

    // Calculate the Jaccard similarity coefficient
    double similarity = static_cast<double>(intersection.size()) / uni.size();
    return similarity;
}

// Function to preprocess text into a set of words
unordered_set<string> preprocess_text(const string& text) {
    unordered_set<string> words;
    stringstream ss(text);
    string word;
    while (ss >> word) {
        // Convert word to lowercase (optional, depending on your requirements)
        // transform(word.begin(), word.end(), word.begin(), ::tolower);
        words.insert(word);
    }
    return words;
}

int main() {
    string doc1, doc2;
    cout << "Enter text for document 1: ";
    getline(cin, doc1);
    cout << "Enter text for document 2: ";
    getline(cin, doc2);

    // Preprocess the documents
    unordered_set<string> words1 = preprocess_text(doc1);
    unordered_set<string> words2 = preprocess_text(doc2);

    // Calculate Jaccard similarity coefficient
    double similarity = jaccard_similarity(words1, words2);

    // Output the similarity coefficient as a percentage
    cout << "Jaccard similarity coefficient: ";
    if (similarity == 1.0) {
        cout << "100%";
    } else {
        cout << fixed << setprecision(2) << similarity * 100 << "%";
    }
    cout << endl;

    // Determine if documents are similar or not based on a threshold
    double threshold = 0.5; // Adjust as needed
    if (similarity >= threshold) {
        cout << "The documents are similar." << endl;
    } else {
        cout << "The documents are not similar." << endl;
    }

    return 0;
}
