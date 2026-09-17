#define _CRT_SECURE_NO_WARNINGS
#define row 9
#define col 9
#define rows (row+2)
#define cols (col+2)
void Given(char arr[rows][cols], int x, int y, char set);
void print(char arr[rows][cols], int x, int y);
void put(char arr[rows][cols], int x, int y);
int find(char arr[rows][cols],char brr[rows][cols], int x, int y);
int plus(char arr[rows][cols], char brr[rows][cols], int x, int y);