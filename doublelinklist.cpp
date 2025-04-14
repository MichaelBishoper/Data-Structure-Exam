#include <iostream>
using namespace std;

class Node {
    public:
         //This is what each note consist of
        int value;
        Node* next;
        Node* previous;
    };


class DLL{
    public:
        //Head and Tails are pointers of each note
        Node* head;
        Node* tail;
        //DLL head and Tail both point to 0
        DLL() : head(nullptr), tail(nullptr) {}

        //A traverser is a variable (often a pointer or iterator)
        //used to move through the elements of a data structure.
        //To Write Backward
        void printBackward() {
            Node* traverser = tail;
            while (traverser != nullptr) {
                cout << traverser->value << endl;
                traverser = traverser->previous;
            }
        }

        //To Write Forward
        void printForward() {
            Node* traverser = head;
            while (traverser != nullptr) {
                cout << traverser->value << endl;
                traverser = traverser->next;
            }
        }

        //New Note
        void addNode(int newValue) {
            Node* newNode = new Node();
            newNode->value = newValue;
            newNode->next = nullptr;

            if (head == nullptr) {
                newNode->previous = nullptr;
                head = newNode;
                tail = newNode;
            } else {
                newNode->previous = tail;
                tail->next = newNode;
                    tail = newNode;
            }
        }

};

int main() {

    //ADDING NOTE AS MUCH AS YOU CAN HAHAHAH
    DLL myList;
    int newValue;
    char continueAdding = 'y'; //The char data type is used to store a single character.

     cout << "Enter values for the doubly linked list. Enter 'n' to stop.\n";

      while (continueAdding == 'y'){
        cout << "Enter a value for the node: ";
        cin >> newValue;
        myList.addNode(newValue);

        cout << "Do you want to add another node? (y/n): ";
        cin >> continueAdding;
        cin.ignore(); // Clear the input buffer
      }

    cout << "\nPrinting Backward:" << endl;
    myList.printBackward();

    cout << "\nPrinting Forward:" << endl;
    myList.printForward();

    cin.get();
    return 0;
};