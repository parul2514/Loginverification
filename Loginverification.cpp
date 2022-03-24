#include <iostream>

#include <fstream>

#include <string>

#include <cstdlib>

using namespace std;

bool IsLoggedIn() {

string username, password, un, ps, filename;

cout << "enter Username : ";

cin >> username;

cout << "enter Password : ";

cin >> password;

filename = username + ".txt";

ifstream read(filename.c_str());

getline(read, un);

getline(read, ps);

if(un == username && ps == password) {

return true;

}else {

return false;

}

}

int main()

{

int choice;

cout << "[1] Register" <<endl;

cout << "[2] Login" << endl;

cin >> choice;

if(choice == 1) {

string username, password, filename;

cout << "select a Username : ";

cin >> username;

cout << "select a Password : ";

cin >> password;

filename = username + ".txt";

ofstream file(filename.c_str());

file << username << endl;

file << password << endl;

file.close();

main();

}else if(choice == 2){

bool status = IsLoggedIn();

if (!status) {

cout << "FALSE LOGIN" << endl;

system("PAUSE");

return 0;

}
else {

cout << "SUCCESSFULLY LOGGED IN" << endl;

system("PAUSE");

return 1;

}

}

}
