#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct Person
{
string name; // The name of record management system
string addr; // The number of contacts
};

// functin prototypes
void addData(AddressBook list[], int& size);
void dispData(const AddressBook list[], int size);
void saveFile(const AddressBook list[], int size);
void openFile(AddressBook list[], int& size);
char getMenuResponse();
int main(int argc, char *argv[])
{
AddressBook contactList[MAX_SIZE];
int numOfContacts = 0;
bool run = true;
do
{
cout << "Address Book - " << numOfRecs << " Number of Contacts" << endl;
switch ( getMenuResponse() )
{
case 'A': addData(contactList, numOfContacts); break;
case 'D': dispData(contactList, numOfContacts); break;
case 'O': openFile(contactList, numOfContacts); break;
case 'S': saveFile(contactList, numOfContacts); break;
case 'Q': run = false; break;
default : cout << "That is NOT a valid choice" << endl;
}
} while (run);
cout << endl << "Program Terminated" << endl;

// system("PAUSE"); // Commented out so the program exits upon request
return EXIT_SUCCESS;
}

void addData(AddressBook list[], int& size)
{
AddressBook tmp; // declare a temp contact that we will load before putting in the array
char response;
char str[256]; // needed for cin.getline; we are going to use a char array
if (size < MAX_SIZE) {
system("cls");
cout << "Enter Contact Information" << endl << endl;
cout << "Name: ";
// Get up to 256 characters from the keyboard including white space.
// Stop reading if encounter the \n first. If there's any chance of
// more than 256 characters you will have to clean up cin with
// cin.ignore before the next input.
cin.getline(str, 256, '\n'); // for char arrays; different from the other getline
tmp.name = str;
cout << "Address: ";
cin.getline(str, 256, '\n');
tmp.addr = str;
cout << endl;
cout << "Phone Number: ";
cin.getline(str, 256, '\n');
tmp.addr = str;
cout << endl;
cout << "E-mail Address: ";
cin.getline(str, 256, '\n');
tmp.addr = str;
cout << endl;
// see if this record should be added to the array
cout << "Add Contact to Address Book? (y/n) ";
cin >> response;
if (toupper(response) == 'Y')
list[size++] = tmp;
} else {
cout << "Sorry, Address Book is currently full." << endl;
system("pause");
}
system("cls");
}

void dispData(const Address Book list[], int size)
{
system("cls");

if(size < 1) {
cout << "Nothing to display" << endl;
} else {
cout << "Contacts :" << endl << endl;
cout << fixed << setprecision(2);
cout << "Contact Name Address Phone No. Email" << endl;
cout << "*******************************************" << endl;

cout << left;
for (int i = 0; i < size; i++) {
cout << setw(21) << list[i].name << right
<< setw(10) << list[i].addr<<left<<endl;
}

cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cout << right << setw(3) << size;
cout << " Contacts"<< endl;
}

system("PAUSE");
system("cls");
}

// Save records to disc
void saveFile(const AddressBook list[], int size) {
string fileName;
ofstream outfi;
cout<<"Enter file name: ";
getline(cin,fileName);
outfi.open(fileName.c_str());

// to make sure the file stream is open before doing IO
if (!outfi.fail()) {
system("cls");
cout << "Saving Address Book to the disc ";

for(int i = 0; i < size; i++) {
outfi << list[i].name << ';'
<< list[i].addr<< ';';
// Start a new line after all but the last record
// Simplifies reading the file as EOF is at end of last line
if (i < size-1) outfi << endl;
}
cout << endl << size << " Address Book written to the disc." << endl;
outfi.close();
system("PAUSE");
system("cls");
}
else {
cout << "ERROR: problem with file" << endl;
system("PAUSE");
system("cls");
}
}

// Open file and load array
void openFile(AddressBook list[], int& size)
{
ifstream infi("AddressBook.txt");
string str;
stringstream strstrm;

// make sure the file stream is open before doing IO
if (!infi.fail()) {

system("cls");
cout << "Reading Address Book from the disc ";

size = 0; // overwrite any existing records
while(!infi.eof() && size < MAX_SIZE) {
// get and store the name
getline(infi, str, ';');
list[size].name = str;

// get, convert and store the quantity
getline(infi, str, ';');
strstrm.str(""); strstrm.clear(); // empty and clear the stringstream
strstrm << str;
strstrm >> list[size].addr;

}
cout << endl << size << " Contacts read from the disc." << endl;


system("PAUSE");
system("cls");
}
else { // something went wrong with opening the file
cout << "ERROR: problem with file" << endl;
system("PAUSE");
system("cls");
}

}

char getMenuResponse()
// Task: Put the menu on screen and get a response
// Accepts: Nothing
// Returns: The users response
// Modifies: Nothing
// NOTE: Characters are far more intuitive at the command
// line than numbers; avoid using numbers.
{
char response;
cout << endl << "Make your selection" << endl
<< "(A)dd contact, (D)isplay contact0, (O)pen File, (S)ave File, (Q)uit" << endl
<< "> ";
cin >> response;
cin.ignore(256, '\n');
// clean-up up to 256 chars including the delimiter specified (\n, the endl)
// OR stop when the \n is encountered after removing it.
return toupper(response);
// note the use of toupper, why?
}
