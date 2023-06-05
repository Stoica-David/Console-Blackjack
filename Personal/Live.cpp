#include<iostream>
#include<array>
#include<time.h>

const std::array<int, 56> pack = { 1,2,3,4,5,6,7,8,9,10,10,10,10,10,1,2,3,4,5,6,7,8,9,10,10,10,10,10,1,2,3,4,5,6,7,8,9,10,10,10,10,10,1,2,3,4,5,6,7,8,9,10,10,10,10,10 };

void GetInitialMoney(int& playerMoney, int& dealerMoney)
{
	std::cout << "Player money: ";
	std::cin >> playerMoney;

	std::cout << "Dealer money: ";
	std::cin >> dealerMoney;
}

int GetRandomCard()
{
	int random = rand() % 56;
	return pack[random];
}

void Game(int& playerMoney, int& dealerMoney)
{
	int currentMoney, playerCards = 0, dealerCards = 0;	char repeat = 'y', wantCard = 'y';
	bool valid = false;

	while (repeat == 'y')
	{
		srand(time(NULL));
		valid = false;

		if (playerMoney == 0)
		{
			std::cout << "You don't have money, bye!\n";
			break;
		}

		if (dealerMoney == 0)
		{
			std::cout << "The dealer has no money left, bye!\n";
			break;
		}

		while (!valid)
		{
			std::cout << "Enter the amount of money you want to bet: ";
			std::cin >> currentMoney;

			if (playerMoney < currentMoney)
			{
				std::cout << "You don't have enough money to bet!\n";
				valid = false;
			}
			else if (dealerMoney < currentMoney)
			{
				std::cout << "The dealer doesn't have enough money to bet!\n";
				valid = false;
			}
			else
			{
				playerMoney -= currentMoney;
				dealerMoney -= currentMoney;
				valid = true;
			}
		}

		playerCards += GetRandomCard();
		playerCards += GetRandomCard();

		std::cout << "Your cards: " << playerCards << std::endl;

		dealerCards += GetRandomCard();
		dealerCards += GetRandomCard();

		std::cout << "Dealer cards: " << dealerCards << std::endl;

		while (playerCards <= 21 && wantCard == 'y')
		{
			do
			{
				std::cout << "Do you want to pick another card? (y/n): ";
				std::cin >> wantCard;
			} while (wantCard != 'y' && wantCard != 'n');
			
			if (wantCard == 'y')
			{
				playerCards += GetRandomCard();

				std::cout << "Your cards: " << playerCards << std::endl;
			}
		}

		wantCard = 'y';

		while (dealerCards <= 21 && wantCard == 'y')
		{
			do
			{
				std::cout << "Does the dealer want to pick another card? (y/n): ";
				std::cin >> wantCard;
			} while (wantCard != 'y' && wantCard != 'n');

			if (wantCard == 'y')
			{
				dealerCards += GetRandomCard();

				std::cout << "Dealer cards: " << dealerCards << std::endl;
			}
		}

		wantCard = 'y';

		std::cout << "Your cards: " << playerCards << std::endl;
		std::cout << "Dealer cards: " << dealerCards << std::endl;

		if (playerCards <= 21 && dealerCards <= 21 && (playerCards > dealerCards || dealerCards > 21) )
		{
			playerMoney += currentMoney * 2;
			std::cout << "You won!\n";
		}
		else if(playerCards <= 21 && dealerCards <= 21 && ( playerCards < dealerCards || playerCards > 21) )
		{
			dealerMoney += currentMoney * 2;
			std::cout << "Dealer won!\n";
		}
		else if (playerCards == dealerCards || playerCards > 21 && dealerCards > 21)
		{
			std::cout << "Draw!\n";
			playerMoney += currentMoney;
			dealerMoney += currentMoney;
		}

		if (playerCards != 0 && dealerCards != 0)
		{
			std::cout << "The player has " << playerMoney << "$" << std::endl;
			std::cout << "The dealer has " << dealerMoney << "$" << std::endl;
		}

		playerCards = 0;
		dealerCards = 0;

		do
		{
			std::cout << "You still want to play? (y/n): ";
			std::cin >> repeat;
		} while (repeat != 'y' && repeat != 'n');
	}
}

int main()
{
	int random = 0, playerMoney = 0, dealerMoney = 0;
	
	GetInitialMoney(playerMoney, dealerMoney);
	Game(playerMoney, dealerMoney);

	return 0;
}