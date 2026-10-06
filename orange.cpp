#include <iostream>
#include <ctime>
#include <cstdlib>

void accountinfo(std::string name, int age, std::string gender, std::string email, std::string pass, char temp);
void post(char temp);
void friends(char temp, std::string& temp3, std::string& temp5);
void message(char temp, std::string& temp3, std::string& temp5);
void ticTacToe();
void drawBoard(char* spaces);
void playerMove(char* spaces, char player);
void computerMove(char* spaces, char computer);
bool checkWinner(char* spaces, char player, char computer);
bool checkTie(char* spaces);

// THIS IS ORANGE 🍊 A SMALL SOCIAL MEDIA
int main(){
    std::string name;
    int age;
    std::string gender;
    std::string email;
    std::string pass;
    char temp;
    std::string temp3;
    std::string temp5;
    std::cout << "*****ACCOUNT CREATION*****" << "\n";
    std::cout << "Write Your Name:- " << '\n';
    std::getline(std::cin, name);
    std::cout << "Enter Your Age:- " << '\n';
    std::cin >> age;
    std::cout << "What's your Gender?" << "\n";
    std::cin >> gender;
    std::cout << "Enter Your Email:- " << "\n";
    std::cin >> email;
    std::cout << "Set Your Password:- " << '\n';
    std::cin >> pass;
    std::cout << "*****ORANGE*****" << '\n';
    std::cout << "WELCOME TO ORANGE (-_-)" << "\n";
    while (temp != 'q'){
        std::cout << "What You Want to do? Type Following letter--\n";
        std::cout << "a = Account Info | p = Post Your Thoughts | f = Friends | m = Message | g = Game(Tic-Tac-Toe) | q = Quit\n";
        std::cin >> temp;
        if (temp == 'a'){
            accountinfo(name, age, gender, email, pass, temp);
            std::cout << "_______________________" << '\n';
        }
        else if (temp == 'p'){
            post(temp);
            std::cout << "_______________________" << '\n';
        }
        else if (temp == 'f'){
            friends(temp, temp3, temp5);
            std::cout << "_______________________" << '\n';
        }
        else if (temp == 'm'){
            message(temp, temp3, temp5);
            std::cout << "_______________________" << '\n';
        }
        else if (temp == 'g'){
            ticTacToe();
            std::cout << "_______________________" << '\n';
        }
        else if (temp == 'q'){
            std::cout << "Goodbye " << name << "\n";
            std::cout << "_______________________" << '\n';
        }
        else {
            std::cout << "INVALID OPTION" << '\n';
            std::cout << "_______________________" << '\n';
        }
    }
    std::cout << "Version- 1.3 © RAHUL DEY 2026" << "\n";
    return 0;
}
void accountinfo(std::string name, int age, std::string gender, std::string email, std::string pass, char temp){
    std::string temp1;
    if (temp == 'a'){
        std::cout << "NAME- " << name << '\n';
        std::cout << "AGE- " << age << '\n';
        std::cout << "GENDER- " << gender << '\n';
        std::cout << "E-MAIL- " << email << '\n';
        std::cout << "Password- " << "***********" << '\n';
        std::cout << "If you want to see password, type the password- \n";
        std::cin >> temp1;

        if (temp1 == pass){
            std::cout << pass << '\n';
        }
        else {
            std::cout << "YOU AREN'T " << name << "\n";
        }
    }
}
void post(char temp){
    std::string temp2;
    if (temp == 'p'){
        std::cout << "Write Here- \n";
        std::cin.ignore(1000, '\n');
        std::getline(std::cin, temp2);
        std::cout << "_______________________" << '\n';
        std::cout << "Your Post is Done, Here is it- " << "\n";
        std::cout << temp2 << "\n";
    }
}
void friends(char temp, std::string& temp3, std::string& temp5){
    char temp4;
    std::cout << "Type Your Friend Username- " << '\n';
    std::cin >> temp3;
    std::cout << "_______________________" << '\n';
    std::cout << "Your Current Friends Are- " << '\n';
    std::cout << "Rahul Dey (OWNER), " << temp3 << '\n';
    std::cout << "_______________________" << '\n';
    std::cout << "If You Want To Add More Friend, Type m. Type o for Orange Main Page" << '\n';
    std::cin >> temp4;
    if (temp4 == 'm'){
        std::cout << "Type Username- \n";
        std::cin >> temp5;
        std::cout << "Rahul Dey (OWNER), " << temp3 << ", " << temp5 << '\n';
    }
}
void message(char temp, std::string& temp3, std::string& temp5){
    std::string temp6;
    std::string temp7;
    std::cout << "If You Want To Message Your Friends, Type Their Username- \n";
    std::cin >> temp6;
    if (temp6 == temp3){
        std::cout << "Hey " << temp3 << '\n';
        std::cin.ignore(1000, '\n');
        std::getline(std::cin, temp7);
        std::cout << "Here is your message- " << temp7 << '\n';
    }
    else if (temp6 == temp5){
        std::cout << "Hey " << temp5 << '\n';
        std::cin.ignore(1000, '\n');
        std::getline(std::cin, temp7);
        std::cout << "Here is your message- " << temp7 << '\n';
    }
    else{
        std::cout << "Username Isn't In Your Friend List" << '\n';
    }
}
void ticTacToe(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    std::cout << "\n";
    std::cout << "***** TIC-TAC-TOE *****\n";
    drawBoard(spaces);
    while (running){
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if (checkTie(spaces)){
            running = false;
            break;
        }
        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if (checkTie(spaces)){
            running = false;
            break;
        }
    }
    std::cout << "Thanks for playing Tic-Tac-Toe!\n";
}
void drawBoard(char* spaces){
    std::cout << '\n';

    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}
void playerMove(char* spaces, char player){
    int number;
    while (true){
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        if (number < 1 || number > 9){
            std::cout << "Invalid spot! Choose 1-9.\n";
            continue;
        }
        number--;
        if (spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
        else{
            std::cout << "That spot is already taken!\n";
        }
    }
}
void computerMove(char* spaces, char computer){
    int number;
    while (true){
        number = std::rand() % 9;
        if (spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}
bool checkWinner(char* spaces, char player, char computer){
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
        spaces[3] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
        spaces[1] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
        spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
    }
    else{
        return false;
    }

    return true;
}
bool checkTie(char* spaces){
    for (int i = 0; i < 9; i++){
        if (spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "IT'S A TIE!\n";
    return true;
}