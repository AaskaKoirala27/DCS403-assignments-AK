// Simulate shuffling and dealing cards using arrays.
// hints: represent a deck with 52 integers (0-51).
// use array indexing and modular arithmetic to map cards to suits and ranks.
// shuffle using random swaps.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void shuffleDeck(int deck[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int randIndex = rand() % size;
        // swap deck[i] and deck[randIndex]
        int temp = deck[i];
        deck[i] = deck[randIndex];
        deck[randIndex] = temp;
    }
}
void dealCards(int deck[], int size, int numPlayers, int cardsPerPlayer)
{
    for (int i = 0; i < numPlayers; i++)
    {
        cout << "Player " << (i + 1) << "'s cards: ";
        for (int j = 0; j < cardsPerPlayer; j++)
        {
            int cardIndex = i * cardsPerPlayer + j;
            int card = deck[cardIndex];
            string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
            string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
            string suit = suits[card / 13];
            string rank = ranks[card % 13];
            cout << rank << " of " << suit;
            if (j < cardsPerPlayer - 1)
                cout << ", ";
        }
        cout << endl;
    }
}
int main()
{
    const int deckSize = 52;
    int deck[deckSize];
    for (int i = 0; i < deckSize; i++)
    {
        deck[i] = i;
    }
    srand(time(0));
    shuffleDeck(deck, deckSize);
    int numPlayers = 4;
    int cardsPerPlayer = 5;
    dealCards(deck, deckSize, numPlayers, cardsPerPlayer);
    return 0;
}