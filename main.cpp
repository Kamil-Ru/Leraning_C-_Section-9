#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    // To do 1: Wihile loop
    vector<int> list{};
    
    bool game_on = true;
    do {
        char choice{};
        cout << "================================" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 'P':
            case 'p': {
                cout << "P - PPPPPPPPP" << endl;
                break;
            /* To do 3 : P - Print numbers
            If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
            If the list is empty you should display "[] - the list is empty"
            If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
            For example, [ 1 2 3 4 5 ] */
            }
            
            case 'A':
            case 'a':{
                cout << "A - AAAAAAAAA" << endl;
                break;
            /* To do 4: A - Add a number
            If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
            which you will add to the list and then display it was added. For example, if the user enters 5
            You should display, "5 added".
            Duplicate list entries are OK */
            }
            
            case 'M':
            case 'm':{
                cout << "M - MMMMMMMMM" << endl;
                break;
            /* To do 5: M - Display mean of the numbers
            If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
            If the list is empty you should display, "Unable to calculate the mean - no data" */   
            }
            
            case 'S':
            case 's':{
                cout << "S - SSSSSSSSS" << endl;
                break;
            /* To do 6: S - Display the smallest number
            If the user enters 'S' or 's' you should display the smallest element in the list.
            For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
            If the list is empty you should display, "Unable to determine the smallest number - list is empty" */
            }
            
            case 'L':
            case 'l':{
                cout << "L - LLLLLLLLLL" << endl;
                break;
            /* To do 7: L - Display the largest number
            If the user enters 'L' or 'l' you should display the largest element in the list
            For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
            If the list is empty you should display, "Unable to determine the largest number - list is empty" */  
            }
            
            case 'Q':
            case 'q':{
                game_on = false;
                break;
            /* To do 8:  Q - Quit
            If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate. */
            }
            
            default: 
                cout << "Unknown selection, please try again" << endl;
            
            
            
            
            
        }
    
        
    } while(game_on);


    /* To do 9: Additional functionality if you wish to extend this program.

        - search for a number in the list and if found display the number of times it occurs in the list
        - clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
        - don't allow duplicate entries
        - come up with your own ideas! */
    
    return 0;
}