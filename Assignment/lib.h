#ifndef LIB_H
#define LIB_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

// 2.1. Map Creating
class gameMap
{
private:
    std::string** mapMat;
    int row;
    int col;

public:
    gameMap(std::string** Map, int r, int c);

    ~gameMap();

    void printMap();

    std::string*& operator[](int i); // Overloading the [] operator
};

// 2.2. Zodiac - Zodiac List
// 2.2.1. Class Zodiac and Sub-classes
class point
{
public:
    int x, y;

    point(int x2, int y2);
};

class zodiac
{
private:
    std::string ID; // ID of the zodiac in the game
    point location; // Location on the gameMap
    std::string status; // Stuck, Injured.

public:
    zodiac(const std::string& id, const point& locat);

    virtual void printInfo();

    virtual void move();

    std::string getID() const;

    point getLocation() const;
};

// 12 Zodiacs
class rat : public zodiac
{
public:
    rat(const std::string& id, const point& locat);

    void printInfo() override;

    void move() override;
};

class ox : public zodiac
{
public:
    ox(const std::string& id, const point& locat);

    void printInfo() override;

    void move() override;
};

class tiger : public zodiac
{
public:
    tiger(const std::string& id, const point& locat);

    void printInfo() override;

    void move() override;
};

class cat : public zodiac
{
public:
    cat(const std::string& id, const point& locat);

    void printInfo() override;

    void move() override;
};

class dragon : public zodiac
{
public:
    dragon(const std::string& id, const point& locat);

    void printInfo() override;

    void move() override;
};

class snake : public zodiac
{
public:
    snake(const std::string& id, const point& locat);

    void printInfo() override;

    void move() override;
};

class horse : public zodiac
{
public:
    horse(const std::string& id, const point& locat);

    void printInfo() override;

    void move() override;
};

class goat : public zodiac
{
public:
    goat(const std::string& id, const point& locat);

    void printInfo() override;

    void move() override;
};

class monkey : public zodiac
{
public:
    monkey(const std::string& id, const point& locat);

    void printInfo() override;

    void move() override;
};

class rooster : public zodiac
{
public:
    rooster(const std::string& id, const point& locat);

    void printInfo() override;

    void move() override;
};

class dog : public zodiac
{
public:
    dog(const std::string& id, const point& locat);

    void printInfo() override;

    void move() override;
};

class boar : public zodiac
{
public:
    boar(const std::string& id, const point& locat);

    void printInfo() override;

    void move() override;
};

// 2.2.2. Class zoList
class zoList
{
private:
    zodiac** zList;

public:
    zoList();

    ~zoList();

    void add(zodiac* newZodiac);

    zodiac*& operator[](int i);
};

// 2.3. Game -> Dropped

#endif LIB_H
