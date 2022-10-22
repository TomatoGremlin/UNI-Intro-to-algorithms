#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <stdlib.h>
#include <chrono>
#include <fstream>
using namespace std;
using namespace std::chrono;

int linear_search(vector<int>, int );
int anchor_search(vector<int> , int );
bool binary_search(vector<int>, int );

int main()
{
    setlocale(LC_ALL, "Bulgarian");
    ofstream outToFile; 
    outToFile.open("NameOfFile.csv", ios::app); 
    outToFile << "Брой елементи" << ";" << "Обхождане на целия масив" << ";" << "До намиране на котва" << ";" << "Дихотомично" << endl; //endl is new row // ';' is next column (or ',' in some cases?)
   
   
    // Vector with random numbers
    srand(time(NULL));
    int find = rand() % 100000 + 1; //generate a number from 1 to 100 000 
    for (int amount_elements = 100000; amount_elements <= 2000000; amount_elements += 100000 ) //loop to get different vectors with different amounts of elements 
    {
        cout << "Elements in vector = " << amount_elements << endl;
        vector<int> numbers(amount_elements); // creating the empty vector
        for (int i = 0; i < amount_elements; i++)// filling with the random numbers
        {
            numbers[i] = rand();
        }
        
        // Measure time for Linear
        auto start_1 = high_resolution_clock::now();
        for (int i = 0; i < 10; i++){ linear_search(numbers, find); }
        auto end_1 = high_resolution_clock::now();
        auto duration_1 = duration_cast <milliseconds> (end_1 - start_1);
        cout << "Linear = " << duration_1.count();

        // Measure time for Anchor
        auto start_2 = high_resolution_clock::now();
        for (int i = 0; i < 10; i++){ anchor_search(numbers, find);}
        auto end_2 = high_resolution_clock::now();
        auto duration_2 = duration_cast <milliseconds> (end_2 - start_2);
        cout << "\t " << "Anchor = " << duration_2.count();
    
        // Measure time for Binary
        sort(numbers.begin(), numbers.end()); // sorting the vector
        auto start_3 = high_resolution_clock::now();
        for (int i = 0; i < 10; i++){ binary_search(numbers, find); }
        auto end_3 = high_resolution_clock::now();
        auto duration_3 = duration_cast <milliseconds> (end_3 - start_3);
        cout << "\t " << "Binary = " << duration_3.count() << endl << endl;

        outToFile << amount_elements << ";" << duration_1.count() << ";" << duration_2.count() << ";" << duration_3.count() << endl; //endl is new row // ';' is next column (or ',' in some cases?)
    }
    outToFile.close();
    return 0;
}

int linear_search( vector <int> arr, int find )
{
    int size = arr.size(); // get vector size
    int position = 0;
    for (int i = 0; i < size; i++)  // go through the vector
    {
        if (arr[i] == find )
        {
            position = i;
        }
    }
    return position;
}

int anchor_search( vector <int> arr, int find )
{
    int size = arr.size(); // get vector size
    arr.push_back(find); // puts the number we search for (anchor) at the back of the vector
   
    unsigned counter = 0; 
    while (arr[counter] != find) // every time the number we search is not there we increase the counter
    {
        counter++;
        // the loop stops when we find the number
    }
    if (counter != size ) // if the times we didn't find the number =/= the size of the vector     
    {  //-> we found the number
        return counter;
    } 
    return 0;
}

bool binary_search( vector <int> arr, int find )
{
    int size = arr.size(); // get vector size
    int index_beg = 0; // the start index
    int index_end = size - 1; // the end index; '- 1 ' because we start from 0, not 1
    int index_middle;

    while (index_beg <= index_end)
    {
        index_middle = (index_beg + index_end) / 2;  // find the index in the middle 
       
        if (arr[index_middle] == find) { return true; }  // if the number is at this index --> found 

        if (arr[index_middle] < find) { index_beg = index_middle + 1; } // if the number is at this index --> we move the start to the right 

        else  { index_end = index_middle - 1; } // if the number is at this index --> we move the end to the left
    }
    return false;
}
