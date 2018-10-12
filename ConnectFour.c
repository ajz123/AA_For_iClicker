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

int PrintBoard();
int RegularGame();
int AnvilGame();
int CheckConnect();

/*Declare your function definitions in the section below*/
/*Mandatory Options : 1-DisplayMenu 2- RegularGame 3-AnvilGame 4-CheckConnect 5-PrintBoard*/
/*You may add other functions if needed*/
/*********************************************************/
 
  /*Function 1: DisplayMenu */
  int DisplayMenu(char input,char color, int startgame) {
    int GameMode;
    printf("Welcome to Connect 4 Game: EECS 22 HW 1\n");

    printf("\nPlease Enter: \n");
    printf("(n) for normal game\n");
    printf("(c) for colored game\n");
  
    scanf(" %c", &color);
      if ((color == 'n') || (color == 'N')) {
          printf("Normal Game Selected\n");
           }
      else if ((color == 'c') || (color == 'C')) {
          printf("Color Game Selected\n");
      }
      else {
          printf("invalid entry: please try again\n");
      }
    
    printf("Please select the type of game you want to play\n");
    printf("1 - (R) Regular\n");
    printf("2 - (A) Anvil Variation\n");
    printf("Enter 'R' or 'A': \n");

    scanf(" %c", &input);	
      if ((input == 'R') || (input == 'r')) {
          printf("Regular Mode Selected\n");
          int default_player = 1;
          RegularGame(default_player); }
      else if ((input == 'A') || (input == 'a')) {
          printf("Anvil Mode Selected\n");
          GameMode = 1;
          AnvilGame(GameMode);
           }
      else {   
          printf("please try again");
           }

     //go to game select function to select regular game, then go to print!
     return 0;
}

/* End of Function 1 */

/*Function 2:RegularGame */ 

int RegularGame(int playervalue) {
  
  /*Gameplay Arrays*/
  int RowCount[7] = {5,5,5,5,5,5,5};
  printf("you are in regular game\n");
  int p1piece;
  int p2piece;


  switch (playervalue)
  {
  case 1:
  // This is player 1's turn
  playervalue = 1;
  //int defmode = 1;
  printf("Please select a column:  \n");
  scanf("%d", &p1piece);
  printf("Piece placed in row %d\n", RowCount[p1piece]);
  printf("Piece placed in column %d\n", p1piece);
  CheckConnect(playervalue, RowCount[p1piece], p1piece);
  //GamePlayTrack[RowCount[p1piece]][p1piece] = 1;
 
  break;


  case 2:
   
  // This is player 2's turn
  playervalue = 2;
  printf("it's player 2's turn now\n");
  printf("Please select a column:  \n");
  scanf("%d", &p2piece);
  printf("Piece placed in row %d\n", RowCount[p2piece]);
  printf("Piece placed in column %d\n", p2piece);
  //GamePlayTrack[RowCount[p2piece]][p2piece] = 1;
  assert(p2piece >=1 ||  p2piece <=7);
  // printf("%d\n", RowCount[p1piece]);
  
/*FIND A WAY TO HANDLE THIS LATER! */
  if (RowCount[p2piece] >6) {
    printf("Row full! Please choose another.\n");
  }
/**************************************/  
  
  PrintBoard(playervalue, RowCount[p2piece], p2piece);
  break;
}

return(0);

}
/*Function 3:AnvilGame */
int AnvilGame() {
    printf("you are in anvil mode\n");
    return(0);
}

/*Function 4:CheckConnect */

CheckConnect(int playervalue, int row, int column) {
  int GamePlay[6][7];
  if (playervalue == 1){
  GamePlay[row][column] = 1;

  }

  else if (playervalue == 2){
    GamePlay[row][column] = 2;
  }
  else {
    GamePlay[row][column] = 0;
  }
   
   
assert(column>=1 ||  column <=7);
  
//FIND A WAY TO HANDLE THIS LATER! 
  if (row >=6) {
    printf("Row full! Please choose another.\n");
  } 
/**************************************/  
  
PrintBoard(playervalue, row, column);
row--;
}
//Checks needed: diagonals, vertical, horizontal, check full
//If tie, player 2 wins by default

/*Function 5:PrintBoard */
/*Function calls values: Current Player, Row Selected, Column Selected*/
  int PrintBoard(int pvalue, int rowret, int colret) {
    printf("Value retrieved from gameplay: row %d\n", rowret);
    printf("Value retrieved from gameplay: column %d\n", colret);
    char Vertical = '|';
    char GamePieces[6][7];
    int GamePlay[6][7]; 
 
  for (int Rows = 0; Rows <6; Rows++) {
      for (int Cols = 0; Cols<7; Cols++) {
	    if (((pvalue == 1) && (Rows == rowret) && (Cols == colret)) || ((GamePlay[Rows][Cols] == 1))) {
         GamePieces[Rows][Cols] = 'X';
         } 
        else if (((pvalue == 2) && (Rows == rowret) && (Cols == colret)) || ((GamePlay[Rows][Cols] == 2))) {
         GamePieces[Rows][Cols] = 'O';
         }
        else {
         GamePieces[Rows][Cols] = '_';
         }
         printf("%2c", Vertical);

         /*Note: this part may need changes to accomidate for both players */
         printf("%2c", GamePieces[Rows][Cols]); 
    }
     printf("\n");
}

    printf("   0   1   2   3   4   5   6\n");

    /*Need a way to update gamepiece array*/
    


    //Changes Current Player
    if (pvalue == 1) {
        pvalue++;
        RegularGame(pvalue);
    }
    else if (pvalue == 2) {
	      pvalue--;
        RegularGame(pvalue);
    }
    
    return(0);
}

/************************************************************/

/*Declare your global variables below (if any)*/
/**************************************************/
int GameMode;
int GameColor;
int GamePlay[6][7];

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


char in = 'a'; 
char clr = 'a';
int go = 0;
DisplayMenu(in, clr, go);

return(0);
}
/* EOF */

