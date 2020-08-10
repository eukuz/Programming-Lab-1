// Example program
#include <iostream>
#include <string>

float lenght(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

bool existanceOfATriangle(float x1, float y1, float x2, float y2, float x3, float y3)
{

    float c = lenght(x1, y1, x2, y2);
    float b = lenght(x1, y1, x3, y3);
    float a = lenght(x2, y2, x3, y3);
    if (c + b > a && a + b > c && c + a > b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    float x1, y1, x2, y2, x3, y3;
    std::cout << "input x1,y1,x2,y2,x3,y3 separated with space symbols: ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    bool ex = existanceOfATriangle(x1, y1, x2, y2, x3, y3);
    if (ex) {

        float c = lenght(x1, y1, x2, y2);
        float b = lenght(x1, y1, x3, y3);
        float a = lenght(x2, y2, x3, y3);

        float p = (c + b + a) / 2;
        std::cout << sqrt(p * (p - a) * (p - b) * (p - c));

    }
    else {
        std::cout << "Such a triangle cannot exist";
    }
}

