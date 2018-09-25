#include <stdio.h>
#include <stdlib.h>

typedef struct Card_{
	char val;
	char suite;
}Card;

typedef struct Player_{
	Card cards[2];
} Player;
typedef struct Poker_hand{
	Player players[3];
	Card pot[5];
} Hand;
int main(int x, char **inp){
	//instantiate players, hand, and cards
	Hand * hand = malloc(sizeof(Hand));
	Player p1, p2, p3;
	hand->players[0] = p1; hand->players[1] = p2; hand->players[2] = p3;
	//Read from File
	char line[256];
	FILE * fp = fopen(inp[1], "r");
	//Read each line from the file and set the values for the currrent hand
	while(fgets(line, 255, fp)){
		printf("line: %s\n", line);// S D H C
		char *str = "";
		sscanf(line, "%c%c%1s%c%1s%c%1s%c%1s%c%1s%c%1s%c%1s%c%1s%c%1s%c%1s%c%1s%c",  &(p1.cards[0].val), &(p1.cards[0].suite), &(p1.cards[1].val), &(p1.cards[1].suite), &(p2.cards[0].val), &(p2.cards[0].suite), &(p2.cards[1].val), &(p2.cards[1].suite), &(p3.cards[0].val), &(p3.cards[0].suite), &(p3.cards[1].val), &(p3.cards[1].suite), &(hand->pot[0].val), &(hand->pot[0].suite), &(hand->pot[1].val), &(hand->pot[1].suite), &(hand->pot[2].val), &(hand->pot[2].suite), &(hand->pot[3].val), &(hand->pot[3].suite), &(hand->pot[4].val), &(hand->pot[4].suite),&(hand->pot[5].val), &(hand->pot[5].suite));
		printf("Vals: %c %c %c %c %c %c %c %c %c %c %c  %c %c %c %c %c  %c  %c  %c  %c  %c  %c\n", p1.cards[0].val, p1.cards[0].suite, p1.cards[1].val, p1.cards[1].suite, p2.cards[0].val, p2.cards[0].suite, p2.cards[1].val, p2.cards[1].suite, p3.cards[0].val, p3.cards[0].suite, p3.cards[1].val, p3.cards[1].suite, hand->pot[0].val, hand->pot[0].suite, hand->pot[1].val, hand->pot[1].suite, hand->pot[2].val, hand->pot[2].suite, hand->pot[3].val, hand->pot[3].suite, hand->pot[4].val, hand->pot[4].suite);
	}
}
