#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main(){
    
    vector<int> list_of_number{1, 2, 3 , 4, 5};
    char choice{}; 
    do {
        cout << "================================" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        // search for a number in the list and if found display the number of times it occurs in the list
        cout << "H - Display how many times specify number is occurred in the list" << endl;
        cout << "X - (Shift + X) Clear list" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        cout << "\n\n\n";
        
        switch (choice) {

            //==============================================================================================            
            /* To do 3 : P - Print numbers
            If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
            If the list is empty you should display "[] - the list is empty"
            If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
            For example, [ 1 2 3 4 5 ] */
            case 'P':
            case 'p': {
                if (list_of_number.empty())
                    cout << "[] - the list is empty" << endl;
                else {
                    cout << "All element in the list is: [ "; 
                    for (auto num: list_of_number)
                        cout << num << " ";
                    cout << "]" << endl;
                }
                break;
            }
            
            //==============================================================================================
            /* To do 4: A - Add a number
            If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
            which you will add to the list and then display it was added. For example, if the user enters 5
            You should display, "5 added".
            Duplicate list entries are OK */
            case 'A':
            case 'a':{
                int new_number{};
                cout << "Plese enter number: ";
                cin >> new_number;
                
                while (true){
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "You have entered wrong input, please enter again: ";
                        cin >> new_number;
                    }
                    if (!cin.fail()){
                        cout <<  new_number << " added." << endl;
                        list_of_number.push_back(new_number);
                        cout << endl;
                        break;
                    }      
                }
                break;
            }

            //==============================================================================================
            /* To do 5: M - Display mean of the numbers
            If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
            If the list is empty you should display, "Unable to calculate the mean - no data" */               
            case 'M':
            case 'm':{
                if (list_of_number.empty())
                    cout << "Unable to calculate the mean - no data" << endl;
                else {
                    int sum_number {};                   
                    for (auto num:list_of_number)
                        sum_number += num;                   
                    cout << "Average: " << static_cast<double>(sum_number)/list_of_number.size() << endl;
                }
                break;
            }
            
            //==============================================================================================            
            /* To do 6: S - Display the smallest number
            If the user enters 'S' or 's' you should display the smallest element in the list.
            For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
            If the list is empty you should display, "Unable to determine the smallest number - list is empty" */
            case 'S':
            case 's':{
                if (list_of_number.empty())
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                else {
                    int smalest_number = list_of_number.at(0);
                    for (auto num: list_of_number){
                        if (smalest_number > num)
                            smalest_number = num;
                    }
                    cout << "The smallest number is " << smalest_number << endl;                    
                }
                break;
            }
            
            //==============================================================================================
            /* To do 7: L - Display the largest number
            If the user enters 'L' or 'l' you should display the largest element in the list
            For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
            If the list is empty you should display, "Unable to determine the largest number - list is empty" */ 
            case 'L':
            case 'l':{
                if (list_of_number.empty())
                    cout << "Unable to determine the largest number - list is empty" << endl;
                else {
                    int largest_number = list_of_number.at(0);
                    for (auto num:list_of_number){
                        if (largest_number < num)
                            largest_number = num;
                    }
                    cout << "The largest number is " << largest_number << endl;                    
                }
                break;
            }
            
            //==============================================================================================
            // To do 9: Additional functionality if you wish to extend this program.
            case 'H':
            case 'h':{
                
                int the_number_you_are_looking {};
                cout << "Enter the number you search: " << endl;
                cin >> the_number_you_are_looking;
                int amount_of_numbers{0};
                
                if (list_of_number.empty())
                        cout << "Unable to determine the largest number - list is empty" << endl;
                else{
                    for (auto num: list_of_number)
                        if (the_number_you_are_looking == num)
                            amount_of_numbers++;
                    
                }
                cout << "Number " << the_number_you_are_looking << " occurrs " << amount_of_numbers << " times in the list." << endl;
                break;
            }
            
            //==============================================================================================
            // To do 9: Additional functionality if you wish to extend this program.
            case 'X':{
                
                list_of_number.clear();
                cout << "\n\nList is cleared !!\n\n";
                
                break;
            }
            
            //==============================================================================================
            /* To do 8:  Q - Quit
            If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate. */
            
            case 'Q':
            case 'q':{
                cout << "Goodbye \n\n";
                break;
            }

            default: 
                cout << "Unknown selection, please try again \n\n";
                 
        }
    } while(choice != 'q' && choice != 'Q');
    
    return 0;
}