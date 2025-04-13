#include <iostream>
#include <fstream>
using namespace std;


class temp {
    string userName,Email,password;
    string searchName,searchPassword,searchEmail;
    fstream file;
public:
    void login();
    void signUP();
    void forgot();
}obj;
//

int main(){

    char choice;
    cout<<"\n1- Login";
    cout<<"\n2- Sign-Up";
    cout<<"\n3- Forgot Password";
    cout<<"\n4- Exit";
    cout<<"\nEnter your choice: ";
    cin>>choice;
    cin.ignore();

    switch(choice) {
        case '1':
            obj.login();
        break;
        case '2':
            obj.signUP();
            break;
        case '3':
            obj.forgot();
            break;
        case '4':
            return 0;
            break;
        default:
            cout<<"Invalid choice";

    }



}

void temp :: signUP() {
    cout<<"\nEnter your username: ";
    getline(cin,userName);
    cout<<"\nEnter your email: ";
    getline(cin,Email);
    cout<<"\nEnter your password: ";
    getline(cin,password);


//open the input file and writes the username,email and password to the file
    file.open("loginData.txt",ios :: out | ios :: app);
    file<<userName<<"*"<<Email<<"*"<<password<<endl;
    file.close();
}
void temp::login() {

    //string searchName, searchPassword;
    cout<<"-----------LOGIN----------- "<<endl;
    cout<<"\nEnter your username:: "<<endl;
    getline(cin,searchName);
    cout<<"\nEnter your password:: "<<endl;
    getline(cin,searchPassword);

//opens the file and looks for the username, email and password in order to log in
    file.open("loginData.txt",ios:: in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    // uses the information to login the user with the correct information
    while (!file.eof()) {
        if (userName == searchName) {
            if (password == searchPassword) {
                cout<<"\nLogin successfully!"<<endl;
                cout<<"\nUsername :: "<<userName<<endl;
                cout<<"\nEmail :: "<<Email<<endl;
            } else {
                cout<<"\nPassword wrong!"<<endl;
            }
        }
        getline(file,userName,'*');
        getline(file,Email,'*');
        getline(file,password,'\n');
    }
    file.close();

}
void temp:: forgot() {
    cout<<"\nEnter your username:: "<<endl;
    getline(cin,searchName);
    cout<<"\nEnter your email:: "<<endl;
    getline(cin,searchEmail);

    file.open("loginData.txt",ios:: in);
    bool found = false;
    //if the user forgot the passward; uses email and username to retrive password
    while(getline(file,userName,'*')&&getline(file,Email,'*')&&getline(file,password,'\n')) {
        if (userName==searchName) {
            if (Email == searchEmail) {
                cout<<"Account Found!"<<endl;
                cout<<"\nYour password :: "<<password<<endl;
                found = true;
            }else {
                cout<<"Not Found! \n";
            }
        }
    else {
            cout<<"Not Found "<<endl;
        }
  }
    file.close();
}