#include <iostream>

void accountinfo(std::string name, int age, std::string gender, std::string email, int pass, char temp);
void post(char temp);
void friends(char temp, std::string& temp3, std::string& temp5);
void message(char temp, std::string& temp3, std::string& temp5);
//THIS IS ORANGE 🍊 A SMALL SOCIAL MEDIA

int main(){
    std::string name;
    int age;
    std::string gender;
    std::string email;
    int pass;
    char temp;
    std::string temp3;
    std::string temp5;
    std::cout<< "*****ACCOUNT CREATION*****"<< "\n";
    std::cout<< "Write Your Name:- "<< '\n';
    std::getline(std::cin, name);
    std::cout<< "Enter Your Age:- "<< '\n';
    std::cin>> age;
    std::cout<< "What's your Gender?" << "\n";
    std::cin>> gender;
    std::cout<< "Enter Your Email:- "<< "\n";
    std::cin>> email;
    std::cout<< "Set Your Password"<< '\n';
    std::cin>> pass;
    std::cout<< "*****ORANGE*****"<< '\n';
    std::cout<< "WELCOME TO ORANGE (-_-)" << "\n";
    while (temp != 'q'){
    std::cout<< "What You Want to do? Type Following letter--\n";
    std::cout<< "a = Account Info| p = Post Your Thoughts| f = Friends| m = Message| q = Quit| COMING SOON!! "<< "\n";
    std::cin>> temp;
    if (temp == 'a'){
        accountinfo(name,age,gender,email,pass,temp);
        std::cout<< "_______________________" << '\n';
    }
    else if (temp == 'p'){
        post(temp);
        std::cout<< "_______________________" << '\n';
    }
    else if (temp == 'f'){
        friends(temp,temp3,temp5);
        std::cout<< "_______________________" << '\n';
    }
    else if (temp == 'm'){
        message(temp,temp3,temp5);
        std::cout<< "_______________________" << '\n';
    }
    else if (temp == 'q'){
        std::cout<< "Goodbye "<< name << "\n";
        std::cout<< "_______________________" << '\n';
    }
    else {
        std::cout<< "INVALID OPTION" << '\n';
        std::cout<< "_______________________" << '\n';
    }
    }
    std::cout<< "Version- 1.2" << "© RAHUL DEY 2026"<< "\n";
    return 0;
}
void accountinfo(std::string name, int age, std::string gender, std::string email, int pass, char temp){
    int temp1;
    if (temp == 'a'){
        std::cout<< "NAME- "<< name << '\n';
        std::cout<< "AGE- "<< age << '\n';
        std::cout<< "GENDER- "<< gender << '\n';
        std::cout<< "E-MAIL- "<< email << '\n';
        std::cout<< "Password- "<< "***********"<< '\n';
        std::cout<< "If you want to see password, type the password- \n";
        std::cin>> temp1;
        if (temp1 == pass){
            std::cout<< pass << '\n';
        }
        else {
            std::cout<< "YOU AREN'T "<< name << "\n";
        }
    }
    else {
       std::cout<< "";
    }
}
void post(char temp){
    std::string temp2;
    if (temp == 'p'){
        std::cout<< "Write Here- \n";
        std::cin.ignore(1000,'\n');
        std::getline(std::cin, temp2);
        std::cout<< "_______________________" << '\n';
        std::cout<< "Your Post is Done, Here is it- "<< "\n";
        std::cout<< temp2 << "\n";
    }
    else {
        std::cout<< "";
    }
}
void friends(char temp, std::string& temp3, std::string& temp5){
    char temp4;
    std::cout<< "Type Your Friend Username- "<< '\n';
    std::cin>> temp3;
    std::cout<< "_______________________" << '\n';
    std::cout<< "Your Current Friends Are- " << '\n';
    std::cout<< "Rahul Dey (OWNER), " << temp3 << '\n';
    std::cout<< "_______________________" << '\n';
    std::cout<< "If You Want To Add More Friend, Type m. Type o for Orange Main Page" << '\n';
    std::cin>> temp4;
    if (temp4 == 'm'){
        std::cout<< "Type Username- \n";
        std::cin>> temp5;
        std::cout<< "Rahul Dey (OWNER), " << temp3 << ", " << temp5 << '\n';
    }
    else if (temp4 == 'o'){
        std::cout<< "";
    }
    else {
        std::cout<< "";
    }
}
void message(char temp, std::string& temp3, std::string& temp5){
    std::string temp6;
    std::string temp7;
    std::cout<< "If You Want To Message Your Friends, Type Their Username- \n";
    std::cin>> temp6;
    if (temp6 == temp3){
        std::cout<< "Hey "<< temp3 << '\n';
        std::cin.ignore(1000, '\n');
        std::getline(std::cin, temp7);
        std::cout<< "Here is your message- "<< temp7 << '\n';
    }
    else if (temp6 == temp5){
        std::cout<< "Hey "<< temp5 << '\n';
        std::cin.ignore(1000, '\n');
        std::getline(std::cin, temp7);
        std::cout<< "Here is your message- "<< temp7 << '\n';
    }
    else{
        std::cout<< "Username Isn't In Your Friend List" << '\n';
    }
}