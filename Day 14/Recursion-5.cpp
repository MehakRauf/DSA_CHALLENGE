#include <iostream>
#include <algorithm>
using namespace std;

// number of ways to place 2*1 (row*col) tile on a 2*n tile board.
// Find the number of ways to tile the floor with 1x2 and 1x1 tiles.
// Idea: Tile[i] = Tile[i-1] (1x1) + Tile[i-2](1x2)
int tillingWays(int n)
{
    // if there isonly column or row then only 1 way and no row or column then 0 ways
    if (n == 0 || n == 1)
    {
        return n;
    }
    // n-1 when placed vertically andn-2 when placed horizontally
    return (tillingWays(n - 1) + tillingWays(n - 2));
}

// There are n friends, we have to find all the pairings possible. Each person can be
// paired with only one person or does not pair with anyone.
// Idea: we have two options, i’th friend does not get paired or we have n-1 options
// to pair it with anyone.
int friendsPair(int n)
{
    // if no friends then 0 ways
    //  if only one friend then can't pair it
    //  if two friends then two options left them single or pair them up that is why 2 ways
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }
    // if first one is left alone then n-1 ways and if two are paired then n-1 friends left with
    // n-1 ways to pair them
    return (friendsPair(n - 1) + friendsPair(n - 2) * (n - 1));
}

// Given n items, each item has a certain value and weight. We have to maximize the
//  value of the objects we can accommodate in a bag of weight W.
//  Idea: For each item, we have two choices, either to include it or exclude it.

// value[]->value of each item
// weight[]-> weight of each item
//  n-> no of itmes
//  W-> weight of the knapsack

int knapsack(int value[], int weight[], int n, int W)
{
    // when all items are selected or the knapsack is full
    if (n == 0 || W == 0)
    {
        return 0;
    }

    if (weight[n - 1] > W)
    {
        return knapsack(value, weight, n - 1, W);
    }
    return max(knapsack(value, weight, n - 1, W - weight[n - 1]) + value[n - 1], knapsack(value, weight, n - 1, W));
}
int main()
{
    int value[3] = {100, 50, 150};
    int weight[3] = {10, 20, 30};
    int W = 50;
    cout << knapsack(value, weight, 3, W) << endl;
    return 0;
}