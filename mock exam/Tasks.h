#pragma once
#include <iostream>
#include<conio.h>
#include<ctime>
#include"Tasks.h"
#include<time.h>
#include<conio.h>
#include<random>
#include<vector>
#include <algorithm>

int dice;
int dice1;
int dice2;
int dice3;
int dice4;
int dice5;
int dice6;


const int width = 20;
const int height = 20;
int x, y;


void menu();
void task1();

void task2();

void task3();
void Draw();
void setup();



void menu()
{
    char task;
    std::cout << "welocme to task selector: please choose a task! \n";
    std::cout << " task 1 \n task 2 \n task 3 \n";
    std::cin >> task;

    do
    {
        switch (task)
        {
        case '1':
            task1();
            break;

        case '2':
            task2();
            break;

        case '3':
            task3();
            break;

       

        default:
            break;

        }

    } while (false);

}
void task1()
{

    std::cout << "this tasks throws dice(1-6) 2000 times, it will count how many times it got each number and display them \n ";
    std::cout << "press any key to throw the dice \n";
    _getch();

    for (int i = 0; i < 2000; i++)
    {


        dice = rand() % 6 + 1;
        if (dice == 1)
        {
            dice1 += 1;
        }
        else if (dice == 2)
        {
            dice2 += 1;
        }
        else if (dice == 3)
        {
            dice3 += 1;
        }
        else if (dice == 4)
        {
            dice4 += 1;
        }
        else if (dice == 5)
        {
            dice5 += 1;
        }
        else if (dice == 6)
        {
            dice6 += 1;
        }

    }
    std::cout << "1: " << dice1 << " Times.\n\n";
    std::cout << "2: " << dice2 << " Times.\n\n";
    std::cout << "3: " << dice3 << " Times.\n\n";
    std::cout << "4: " << dice4 << " Times.\n\n";
    std::cout << "5: " << dice5 << " Times.\n\n";
    std::cout << "6: " << dice6 << " Times.\n\n";

}

void task2()
{
    std::cout << "test task2";
    std::cout << "\n";

    std::vector<int> value;
    srand(time(0));
    int c = 10;
    for (int i = 0; i < c; i++)
    {
        int b = rand() % 20 + 1;
             value.push_back(b);

    }
    std::vector<char> name{ 'A','B','C','D','F','G','H','I','J','K'};
    std::vector<int> numb{ 10 };

    std::cout << "vector before sorting" << std::endl;

    for (const auto& i : value)
        std::cout << i << ' ' << std::endl;

    std::cout << "vector after sorting" << std::endl;
    sort(value.begin(), value.end(), std::greater <>());

    for (const auto& i : value)
        std::cout << i << ' ' << std::endl;
    
    std::cout << "_______________________" << std::endl;
    for (int k = 0; k < value.size(); k++)
        
    {
        std::cout << name[k] << "\t" << value[k] << "\t" << "\n";
    }
    

}

void task3() 
{
   
    Draw();
    
}

void setup()
{
    //x = width / 2;
    //y = height / 2;

}
void Draw()
{
    system("cls");
    for (int i = 0; i < width+2; i++)
        std::cout << "_";
    std::cout << std::endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                std::cout << "|";
            if (i == y && j == x)
                std::cout << "*";
            else
                std::cout << " ";

            if (j == width - 1)
                std::cout << "|";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < width+2; i++)
        std::cout << "_";
    std::cout << std::endl;
        
          
}
