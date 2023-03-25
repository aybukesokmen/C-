
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void setcursor(bool visible, DWORD size) 
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(hConsole, &lpCursor);
}

void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int main()
{
    setcursor(0, 0);
    string wolf[9] ={"         /\\_/\\       ",
                    "    ____/ o o \\       ",
                    "  /   /   \"   )       ",
                    " /___/__(__O__/\\      ",
                    " |             |       ",
                    "  \\           /       ",
                    "   /  ___   \\         ",
                    "  / /     \\   \\      ",
                    " /_/       \\___\\     " };


    string flag[9] ={"************************",
                    "*                      *",
                    "*      * *             *",
                    "*    *      *          *",
                    "*   *          *       *",
                    "*   *       *          *",
                    "*     * * *            *",
                    "*                      *",
                    "************************" };
    int length_wolf = sizeof(wolf) / sizeof(wolf[0]);
    int length_flag = sizeof(flag) / sizeof(flag[0]);
    int x = 0;
    int y = 10;
    string input;
    std::cout << "Lutfen karakter girin: ";
    getline(cin, input);

    if (input == "CCC") {
        while (true)
        {
            system("cls"); 
            int index = 0;
           for (int i = 0; i < length_flag; i++) {
                gotoxy(x, y+i);
                std::cout << flag[i] << std::endl;
            }
           HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
           for (int i = length_flag; i < length_wolf+ length_flag; i++) {
               gotoxy(x, y + i);
               std::cout << wolf[index] << std::endl;
               index++;
           }
           if (x % 10 == 0) {
               SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            }
           else {
               SetConsoleTextAttribute(hConsole, 15);
           }
   

            x++;

            if (x > 80) 
                x = 0;

            Sleep(100); 
        }

    }

    return 0;
}
