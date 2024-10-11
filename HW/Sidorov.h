#pragma once
#include <string>
using namespace std;

int Sum(int a, int b)
{
    return a + b;
}

int Minus(int a, int b)
{
    return a - b;
}

int Mult(int a, int b)
{
    return a * b;
}

float Del(float c, float d)
{
    float s = c / d;
    return s;
}

int Div(int a, int b)
{
    return a % b;
}

int Max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else if (a < b)
    {
        return b;
    }
    else
    {
        return a, b;
    }
}

int Min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else if (a > b)
    {
        return b;
    }
    else
    {
        return a, b;
    }
}

float Mid(float c, float d)
{
    float s = (c + d) / 2;
    return s;
}

int Neg(int a, int b)
{

    if (a < 0 and b < 0)
    {
        return a, b;
    }
    else if (a < 0)
    {
        return a;
    }
    else if (b < 0)
    {
        return b;
    }
    else
    {
        return 0;
    }
}