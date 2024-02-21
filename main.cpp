#include <iostream> 
#include <string> 
using namespace std; 
string word, wordcl; 
char guess; 
bool incorrectGuess; 
int count; 
string wordList[5] = {"plastic", "engine", "happen", "solid", "banana"}; 
 
void displayLogo(){ 
 cout << "        _   _                   __   __        " << endl; 
 cout << "       | | | |                 |  \\/  |            " << endl; 
 cout << "       | |_| |  _ _ _   _   __ |      | _  _ _  _" << endl; 
 cout << "       |  _  |/ _` | '_ \\ / _` | |\\/| |/ _` | '_ \\ " << endl; 
 cout << "       | | | | (_| | | | | (_| | |  | | (_| | | | |" << endl; 
 cout << "       \\_| |_/\\__,_|_| |_|\\__, \\_|  |_/\\__,_|_| |_|" << endl; 
 cout << "                           __/ |                   " << endl; 
 cout << "                          |___/                    " << endl;     
} 
void displayHangman(int count){ 
switch (count){ 
  case 0: 
   cout << "  +----+" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  +=========" <<endl; 
  break; 
  case 1: 
   cout << "  +----+" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |    O" <<endl; 
   cout << "  |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  +=========" <<endl; 
  break; 
  case 2: 
   cout << "  +----+" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |    O" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  |" <<endl; 
   cout << "  +=========" <<endl; 
  break; 
  case 3: 
   cout << "  +----+" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |    O" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |     \\" <<endl; 
   cout << "  |      \\" <<endl; 
   cout << "  |" <<endl; 
   cout << "  +=========" <<endl; 
  break; 
  case 4: 
   cout << "  +----+" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |    O" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |   / \\" <<endl; 
   cout << "  |  /   \\" <<endl; 
   cout << "  |" <<endl; 
   cout << "  +=========" <<endl; 
  break; 
  case 5: 
   cout << "  +----+" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |    O" <<endl; 
   cout << "  |   /|" <<endl; 
   cout << "  |  / |" <<endl; 
   cout << "  |   / \\" <<endl; 
   cout << "  |  /   \\" <<endl; 
   cout << "  |" <<endl; 
   cout << "  +=========" <<endl; 
  break; 
  default: 
   cout << "  +----+" <<endl; 
   cout << "  |    |" <<endl; 
   cout << "  |    O" <<endl; 
   cout << "  |   /|\\" <<endl; 
   cout << "  |  / | \\" <<endl; 
   cout << "  |   / \\" <<endl; 
   cout << "  |  /   \\" <<endl; 
   cout << "  |" <<endl; 
   cout << "  +=========" <<endl; 
  break; 
 }     
} 
 
void Guess(){ 
    string cnWord; 
    cin>>cnWord; 
    if(cnWord.size()<2){ 
    guess=cnWord[0];     
    for(int i=0;i<word.size();i++){ 
        if(word[i]==guess){ 
            wordcl[i]=word[i]; 
         incorrectGuess=false;      
        } 
    } 
    if(incorrectGuess) 
        count++; 
    } 
    else{ 
        if(word==cnWord){ 
            incorrectGuess=false; 
            wordcl=cnWord; 
        } 
    } 
} 
void chooseWord(){ 
    word=wordList[rand() % 5]; 
    for(int i=0;i<word.size(); i++){ 
    wordcl+="#";     
    } 
} 
 
int main() 
{    
    wordcl=""; 
    srand((unsigned) time(NULL)); 
    bool alive=true; 
    chooseWord(); 
    count=0; 
    displayLogo(); 
        while(alive){ 
            incorrectGuess=true; 
         cout << "Type a letter" << endl; 
            Guess(); 
            system("clear"); 
            displayLogo(); 
            displayHangman(count); 
         if(count>5){ 
             cout<<"you lost, LOOOOOSER!!!!"; 
             break; 
         }  
         else if(word==wordcl){ 
             cout<<"Congratulations you won!!!  Word is: "; 
             cout<<word; 
             break;
}
    cout<<wordcl<<endl;;   
} 
    return 0; 
}

