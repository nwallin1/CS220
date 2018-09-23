#include <stdio.h>
#include <stdlib.h>

typedef struct Card_{
	int val;
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
}
