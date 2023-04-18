#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;


struct ops_t
{
    int op;
    int x;
    int y;
    int i;
};

struct picture_t
{
    std::vector<std::string> s;
};

struct input_t
{
    int n;
    int m;
    int k;
    std::vector<picture_t> pictures;
};

struct output_t
{
    int startPicIndex;
    int q;
    std::vector<ops_t> ops;
};

output_t read_output();
input_t read_input();
picture_t read_picture(int n, int m);
ops_t read_ops();

output_t read_output()
{
    output_t output;
    output.startPicIndex = inf.readInt();
    inf.readEoln();
    output.q = inf.readInt();
    inf.readEoln();
    for (int j = 1; j <= output.q; j++)
    {
        if (j != 1)
        {
            inf.readEoln();
        }
        ops_t tmp;
        tmp = read_ops();
        output.ops.push_back(tmp);
    }
    return output;
}

input_t read_input()
{
    input_t input;
    input.n = inf.readInt();
    inf.readSpace();
    input.m = inf.readInt();
    inf.readSpace();
    input.k = inf.readInt();
    inf.readEoln();
    inf.readEoln();
    for (int i = 1; i <= input.k + 1; i++)
    {
        if (i != 1)
        {
            inf.readEoln();
            inf.readEoln();
        }
        picture_t tmp;
        tmp = read_picture(input.n, input.m);
        input.pictures.push_back(tmp);
    }
    return input;
}

picture_t read_picture(int n, int m)
{
    picture_t picture;
    for (int i = 1; i <= n; i++)
    {
        if (i != 1)
        {
            inf.readEoln();
        }
        std::string tmp;
        tmp = inf.readToken();
        picture.s.push_back(tmp);
    }
    return picture;
}

ops_t read_ops()
{
    ops_t ops;
    ops.op = inf.readInt();
    inf.readSpace();
    if (ops.op == 1)
    {
        ops.x = inf.readInt();
        inf.readSpace();
        ops.y = inf.readInt();
    }
    else
    {
        ops.i = inf.readInt();
    }
    return ops;
}

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    read_input();
    inf.readEoln();
    inf.readEof();

    return 0;
}
