#include "lib.h"

using namespace std;

// 2.1. Map Creating
gameMap::gameMap(string** Map, int r, int c)
{
    this->mapMat = Map;
    this->row = r;
    this->col = c;
}

gameMap::~gameMap()
{
    for (int i = 0; i < row; i++)
    {
        delete[] mapMat[i];
    }
    delete[] mapMat;
}

void gameMap::printMap()
{
    cout << " _______"; // The first long line

    for (int j = 1; j < col; j++)
    {
        cout << "________";
    }

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < 3; k++) // Add count of "|" for each row. Maximum is 2 for now according to testcases
        {
            bool hasSecondLine = false;

            if (k == 1)
            {
                for (int j = 0; j < col; j++)
                {
                    string cell = mapMat[i][j];

                    if (cell.size() > 6)
                    {
                        hasSecondLine = true;
                        break;
                    }
                }
            }

            if (k != 1 || hasSecondLine)
            {
                for (int j = 0; j < col; j++)
                {
                    string cell = mapMat[i][j];
                    string cell_filled = (cell.size() > 6) ? (cell.substr(0, 5) + "_") : cell;
                    size_t cell_filled_padding = 8 - cell_filled.size();

                    if (k == 0)
                    {
                        cout << "|" << cell_filled << setw(cell_filled_padding);
                    }
                    else if (k == 1)
                    {
                        if (cell.size() > 6)
                        {
                            size_t chars_remained = cell.size() - 5;
                            string substr_remained = cell.substr(5);

                            string underscore_padding(7 - chars_remained, ' ');
                            cout << "|" << substr_remained << underscore_padding;

                        }
                        else
                        {
                            cout << "|" << setw(8);
                        }
                    }
                    else
                    {
                        cout << "|" << "_______";
                    }
                }
                cout << "|" << endl; // Close the matrix
            }
        }
    }
}

string*& gameMap::operator[](int i) // Overloading the [] operator
{
    return mapMat[i];
}

// 2.2. Zodiac - Zodiac List
// 2.2.1. Class Zodiac and Sub-classes
point::point(int x2, int y2)
{
    this->x = x2;
    this->y = y2;
}

zodiac::zodiac(const string& id, const point& locat) : ID(id), location(locat) {} // Constructor

void zodiac::printInfo()
{
    cout << ID << " at (" << location.x << "," << location.y << ")" << endl;
}

void zodiac::move()
{

}

string zodiac::getID() const
{
    return ID;
}

point zodiac::getLocation() const
{
    return location;
}

// 12 Zodiacs
rat::rat(const string& id, const point& locat) : zodiac(id, locat) {}

void rat::printInfo()
{
    cout << "rat " << getID() << " at (" << getLocation().x << "," << getLocation().y << ")" << endl;
}

void rat::move()
{

}

ox::ox(const string& id, const point& locat) : zodiac(id, locat) {}

void ox::printInfo()
{
    cout << "ox " << getID() << " at (" << getLocation().x << "," << getLocation().y << ")" << endl;
}

void ox::move()
{

}

tiger::tiger(const string& id, const point& locat) : zodiac(id, locat) {}

void tiger::printInfo()
{
    cout << "tiger " << getID() << " at (" << getLocation().x << "," << getLocation().y << ")" << endl;
}

void tiger::move()
{

}

cat::cat(const string& id, const point& locat) : zodiac(id, locat) {}

void cat::printInfo()
{
    cout << "cat " << getID() << " at (" << getLocation().x << "," << getLocation().y << ")" << endl;
}

void cat::move()
{

}

dragon::dragon(const string& id, const point& locat) : zodiac(id, locat) {}

void dragon::printInfo()
{
    cout << "dragon " << getID() << " at (" << getLocation().x << "," << getLocation().y << ")" << endl;
}

void dragon::move()
{

}

snake::snake(const string& id, const point& locat) : zodiac(id, locat) {}

void snake::printInfo()
{
    cout << "snake " << getID() << " at (" << getLocation().x << "," << getLocation().y << ")" << endl;
}

void snake::move()
{

}

horse::horse(const string& id, const point& locat) : zodiac(id, locat) {}

void horse::printInfo()
{
    cout << "horse " << getID() << " at (" << getLocation().x << "," << getLocation().y << ")" << endl;
}

void horse::move()
{

}

goat::goat(const string& id, const point& locat) : zodiac(id, locat) {}

void goat::printInfo()
{
    cout << "goat " << getID() << " at (" << getLocation().x << "," << getLocation().y << ")" << endl;
}

void goat::move()
{

}

monkey::monkey(const string& id, const point& locat) : zodiac(id, locat) {}

void monkey::printInfo()
{
    cout << "monkey " << getID() << " at (" << getLocation().x << "," << getLocation().y << ")" << endl;
}

void monkey::move()
{

}

rooster::rooster(const string& id, const point& locat) : zodiac(id, locat) {}

void rooster::printInfo()
{
    cout << "rooster " << getID() << " at (" << getLocation().x << "," << getLocation().y << ")" << endl;
}

void rooster::move()
{

}

dog::dog(const string& id, const point& locat) : zodiac(id, locat) {}

void dog::printInfo()
{
    cout << "dog " << getID() << " at (" << getLocation().x << "," << getLocation().y << ")" << endl;
}

void dog::move()
{

}

boar::boar(const string& id, const point& locat) : zodiac(id, locat) {}

void boar::printInfo()
{
    cout << "boar " << getID() << " at (" << getLocation().x << "," << getLocation().y << ")" << endl;
}

void boar::move()
{

}

// 2.2.2. Class zoList
zoList::zoList()
{
    zList = new zodiac * [12]; // 12 Zodiacs

    for (int i = 0; i < 12; i++)
    {
        zList[i] = nullptr;
    }
}

zoList::~zoList()
{
    for (int i = 0; i < 12; i++)
    {
        // Fixed Segment Error bug by deleting [] after delete
        delete zList[i];
    }

    delete[] zList;
}

void zoList::add(zodiac* newZodiac)
{
    for (int i = 0; i < 12; i++)
    {
        if (zList[i] == nullptr)
        {
            // Add a new zodiac to the list
            zList[i] = newZodiac;
            break;
        }
    }
}

zodiac*& zoList::operator[](int i) // Overloading the [] operator
{
    return zList[i];
}

// 2.3. Game -> Dropped