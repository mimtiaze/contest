#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_N 26
#define MAX_NAME_LEN 26

int N, M;
int Path[MAX_N][MAX_N];
char Name[MAX_N][MAX_NAME_LEN];
int Len;

void initPath()
{
    int i, j;
    for (i = 0; i < N; i++) for (j = 0; j < N; j++) {
        if (i == j)
            Path[i][j] = 1;
        else
            Path[i][j] = 0;
    }
}

int stringCompare(char st1[], char st2[])
{
    int i;
    for (i = 0; st1[i] && st2[i]; i++) {
        if (st1[i] != st2[i])
            return 0;
    }
    if (st1[i] != st2[i])
        return 0;
    return 1;
}

int searchString(char st[])
{
    int i;
    for (i = 0; i < Len; i++) if (stringCompare(st, Name[i]))
        return i;
    return -1;
}

void stringCopy(char dest[], char src[])
{
    int i;
    for (i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
}

void readCase()
{
    int i;
    int x, y;
    char name1[MAX_NAME_LEN];
    char name2[MAX_NAME_LEN];
    Len = 0;
    for (i = 0; i < M; i++) {
        scanf("%s %s", name1, name2);
        x = searchString(name1);
        if (-1 == x) {
            stringCopy(Name[Len], name1);
            x = Len;
            Len++;
        }
        y = searchString(name2);
        if (-1 == y) {
            stringCopy(Name[Len], name2);
            y = Len;
            Len++;
        }
        Path[x][y] = 1;
    }
}

int Case;
int Visited[MAX_N];

void initVisited()
{
    int i;
    for (i = 0; i < N; i++)
        Visited[i] = 0;
}

void printCircle()
{
    int i, j;
    if (Case > 1)
        printf("\n");
    printf("Calling circles for data set %d:\n", Case++);
    initVisited();
    for (i = 0; i < N; i++) if (0 == Visited[i]) {
        printf("%s", Name[i]);
        Visited[i] = 1;
        for (j = 0; j < N; j++) if (0 == Visited[j] && Path[i][j] && Path[j][i]) {
            printf(", %s", Name[j]);
            Visited[j] = 1;
        }
        printf("\n");
    }
}

void findAllPath(){
    for (int k = 0; k < N; k++)
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                if (Path[i][k] && Path[k][j])
                    Path[i][j] = 1;   
}

int main()
{
    //freopen("input.txt", "r", stdin);
    Case = 1;
    while (2 == scanf("%d %d", &N, &M)) {
        if (0 == N && 0 == M)
            break;
        initPath();
        readCase();
        findAllPath();
        printCircle();
    }
    return 0;
}
