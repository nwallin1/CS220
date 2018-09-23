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
	//FILE *fp = fopen(inp[1], "r"); //fp points to input file
	char line[256];
	/*while(fgets(line, 255, fp)){
		//EX Line: QD 6H 8S QS 3D 6D 5H AH 4D 2S 7D
		sscanf(line, "%d %s %d %s", pL.pc1.val, pL.pc1.suite, pL.pc2.val, pL.pc2.suite);
		printf("Player 1's cards:%d%s + P2 = %d%s\n", pL.pc1.val, pL.pc1.suite, pL.pc2.val, pL.pc2.suite);
	}*/	
}
