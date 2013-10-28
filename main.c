/*  Horse - dummy school project
 *
 * This code is copyright (C) Blagovest Petrov, 2009.
 *
 * This code may distributed only under the terms of the GNU Public License
 * which can be found at http://www.gnu.org/copyleft or in the file COPYING
 * supplied with this code.
 *
 * This code is not distributed with no warranties!
 *
 * http://petrovs.info or <blagovest@petrovs.info> ;)
 */

#include <stdio.h>
#include <stdlib.h>
#include "kone.h"
#include <time.h>
// в kone.h се намират ASCII картинките.
int tropsition; //приравнява се към position.h (LN7) заради циклите.
char otgovor = ' '; //в тази променлива се въвежда отговор на въпросите от клавиатурата
int position_h=5;  //номер на реда в терминала (за коня)
int position_w=1; //номер на символа от реда в терминала (за коня)


int trop(int tropaniq){ //тази функция създана тропащия ефект на копитата. tropaniq определя броя на тропанията в цикъла
 int i, j;  //loops
         for (i = 0; i < tropaniq; i++) {
		    tropsition = position_h ; 
		    for (j = 0; j < 9; j++) { // появява се кон едно (кон в станична позиция)
 					printf("%c[%i;%if %s\n", 0x1b, tropsition, position_w, kon[1][j]);
					tropsition++;
						 }

 		    usleep(199900);
		    tropsition = position_h; 
		    for (j = 0; j < 9; j++) { // появява се втори кон (кон с вдигнато копито)
 					printf("%c[%i;%if %s\n", 0x1b, tropsition, position_w, kon[2][j]);
					tropsition++;
						 }

 		    usleep(199900);
		    tropsition = position_h;
		    for (j = 0; j < 9; j++) { // появява се трети кон (кон в позиция - тропкане с копитото)
 					printf("%c[%i;%if %s\n", 0x1b, tropsition, position_w, kon[3][j]);
					tropsition++;
						 }
		    usleep(199900);
		    tropsition = position_h;
		    for (j = 0; j < 9; j++) { //отново първи кон, за да не се развали екрана след края на цикъла
 					printf("%c[%i;%if %s\n", 0x1b, tropsition, position_w, kon[1][j]);
					tropsition++;
						 }
		    tropsition = position_h ;


} return 0; }

int hodene() //тази функция помага на коня да ходи по екрана
{
int m, j; //loops
   for( m = 0; m < 4; m++)
      {  //pri 20 povtoreniq na "position_w+5" stiga do trevata. 20/5 = 4 (5 sa vuprosite)
	  trop(2); //коня тропка 2 пъти
	  for (j = 0; j < 9; j++) { printf("%c[%i;%if", 0x1b, tropsition, position_w); printf("%s", kon[0][j]);tropsition++; } //изчиства се предишната позиция на коня с празен кон (kon[0] е масив с празни символи)
  	  position_w = position_w + 5;
 	 // trop(2); 
	  tropsition = position_h ; 
	  for (j = 0; j < 9; j++) { printf("%c[%i;%if", 0x1b, tropsition, position_w); printf("%s", kon[1][j]);tropsition++; } //появява се първи кон, за да не се разваля картината
      }
return 0;
}

int main()
{
  int j, l;
  system("clear");
  printf("|Pomognete na konq da si nameri treva!|\n"); //обяснение
  printf("---------------------------------------\n");
  printf("%c[10;123f", 0x1b);
  printf("|||||||||||||||||||\n\n\n"); //тревичка
  printf("%c[11;123f", 0x1b);
  printf("|||||||||||||||||||\n\n\n");
  //kon1 - statichen
  tropsition = position_h ;
  for (j = 0; j < 9; j++) { printf("%c[%i;%if", 0x1b, tropsition, position_w); printf("%s", kon[1][j]);tropsition++; } //при стартиране на прогпамата се появява пърни кон (кон в покой)
  tropsition = position_h ;
  //	trop(4);
srand(time(NULL));
  for(l =0; l < 5; l++) {
	    int vupr = rand()%5;
	    printf("%c[15;3f", 0x1b);
	    printf ("%c[K _ %s[d/n]_ ", 0x1b, vuprosi[vupr]);
      do { //налага се използването на "do while" заради недостатък на scanf. при второто изпълнение на цикъла се взима в предвид "enter" символа.

                scanf ("%c", &otgovor);  
        } while (otgovor < 'a' || otgovor > 'z');

    if(otgovor == otgovori[vupr] && l < 5)
      {hodene(); } //коня ходи, ако отговора е верен
    else {
//  	    for (int j = 0; j < 9; j++) { printf("%c[%i;%if", 0x1b, tropsition, position_w); printf("%s", kon[0][j]);tropsition++; }
  	    for (j = 3; j < 13; j++) { printf("%c[%i;1f", 0x1b, j); printf("%c[K", 0x1b); }
	    printf("%c[5;1f", 0x1b);
	    printf("%s\n", kon_slab);
	    printf("%c[10;123f", 0x1b);
	    printf("%c[K", 0x1b);
	    printf("%c[11;123f", 0x1b);
	    printf("%c[K", 0x1b);
            printf("%c[15;3f", 0x1b);
	    printf("%c[K SBURKAHTE I KONQ OTSLABNA!\n", 0x1b);
	    sleep(3); 	    printf("%c[2J", 0x1b);
	    printf("%c[5;50f NAPRAVENO OT:\n", 0x1b); //copyright :D
// 	    printf("%c[5;10f %s\n", 0x1b, about);
	    sleep(3);
	    break;
         }
    }         
	    system("clear");
	    printf("%c[5;50f NAPRAVENO OT:\n\n\n%s", 0x1b, about); //copyright :D
        
        return 0;
}