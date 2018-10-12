/********DO NOT MODIFY THIS SECTION************
 * 
 * EECS 22 : Advanced C Programming
 * Fall 2018, Prof. Quoc-Viet Dang
 * 
 * HW1  : ConnectFour game
 * Template file : ConnectFour.c
 * 
 * Created on September 26, 2018, 12:06 AM by Ali Nickparsa <anickpar@uci.edu>
 */
/**********************************************
 
// Enter your name, last name and UCInet ID below://
 * 
 * *****************************
 * First Name : Austin 
 * Last Name: Zwirn
 * UCInet ID: 43526873 
 *
 */

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int PrintBoard();
int RegularGame();

/*Declare your function definitions in the section below*/
/*Mandatory Options : 1-DisplayMenu 2- RegularGame 3-AnvilGame 4-CheckConnect 5-PrintBoard*/
/*You may add other functions if needed*/
/*********************************************************/
 
  /*Function 1: DisplayMenu */
  int DisplayMenu(char input,char color, int startgame) {
    int GameMode;
    printf("Welcome to Connect 4 Game: EECS 22 HW 1\n");
    printf("Please select the type of game you want to play\n");
    printf("1 - (R) Regular\n");
    printf("2 - (A) Anvil Variation\n");
    printf("Enter 'R' or 'A': \n");

    scanf(" %c", &input);	
      if (input == 'R') {
          printf("Regular Mode Selected\n");
          GameMode = 0; }
      else if (input == 'A') {
          printf("Anvil Mode Selected\n");
          GameMode = 1; }
      else {   
          printf("please try again");
    }
    
    printf("\nPlease Enter: \n");
    printf("'n' for normal game\n");
    printf("'c' for colored game\n");
    
    scanf(" %c", &color);
      if (input == 'n') {
          printf("Normal Game Selected"); }
      else if (input == 'c') {
          printf("Color Game Selected"); }

     RegularGame(startgame);
     return 0;
}

/* End of Function 1 */

/*Function 2:RegularGame */ 

  int RegularGame(int Pizza) {
    int Reg = 0;
    printf("you are in regular game\n");
    PrintBoard(Reg);

    /*Array for Game Pieces*/
    int GamePieces[6][7] = {0};
    int BoardRow = 0;
    int p1pieces;
    int p2pieces;

    /*Ready Player One*/
    /* printf("Choose a row: \n");
    scanf("%d", &p1pieces);
    printf("Row %d selected\n", p1pieces);
    GamePieces [p1pieces][BoardRow] = 1; */
    return(0);

}
/*Function 3:AnvilGame */

/*Function 4:CheckConnect */

//Checks needed: diagonals, vertical, horizontal, check full
//If tie, player 2 wins by default

/*Function 5:PrintBoard */
  int PrintBoard(int Printtheboard) {
    printf("now printing the board\n");
    char GamePieces[7][8];
  for (int Rows = 0; Rows <8; Rows++) {
    for (int Cols = 0; Cols<9; Cols++)
    GamePieces[Rows][Cols] = '_';
}
}
}
    char Vertical = '|';
    char Horizontal = '_';
/*  for (int BoardJump = 0; BoardJump<8; BoardJump++) {
      for (int CountBoard = 0; CountBoard<7; CountBoard++) {
        printf("%2c", Vertical);
        printf("%2d", GamePieces[CountBoard][BoardJump]);
     // printf("%2c", Vertical);
     // printf("%2c", Horizontal);
}
  printf("\n");  */
//}
    printf("  1   2   3   4   5   6   7\n");
    return(0);
}

/************************************************************/

/*Declare your global variables below (if any)*/
/**************************************************/
int GameMode;
int GameColor;


/**************************************************/

/*Colors (you can add or remove from this list*/
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"


/*Main function*/
int main(int argc, char** argv) {


int selection;
int in = 0;
int clr = 0;
int Printtheboard = 0;
selection = DisplayMenu(in, clr, Printtheboard);

return(0);
}
/* EOF */

