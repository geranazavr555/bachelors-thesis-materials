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

output_t read_output(InStream& stream);
input_t read_input(InStream& stream);
picture_t read_picture(InStream& stream, int n, int m);
ops_t read_ops(InStream& stream);

output_t read_output(InStream& stream)
{
    output_t output;
    output.startPicIndex = stream.readInt();
    output.q = stream.readInt();
    for (int j = 1; j <= output.q; j++)
    {
        ops_t tmp;
        tmp = read_ops(stream);
        output.ops.push_back(tmp);
    }
    return output;
}

input_t read_input(InStream& stream)
{
    input_t input;
    input.n = stream.readInt();
    input.m = stream.readInt();
    input.k = stream.readInt();
    for (int i = 1; i <= input.k + 1; i++)
    {
        picture_t tmp;
        tmp = read_picture(stream, input.n, input.m);
        input.pictures.push_back(tmp);
    }
    return input;
}

picture_t read_picture(InStream& stream, int n, int m)
{
    picture_t picture;
    for (int i = 1; i <= n; i++)
    {
        std::string tmp;
        tmp = stream.readToken();
        picture.s.push_back(tmp);
    }
    return picture;
}

ops_t read_ops(InStream& stream)
{
    ops_t ops;
    ops.op = stream.readInt();
    if (ops.op == 1)
    {
        ops.x = stream.readInt();
        ops.y = stream.readInt();
    }
    else
    {
        ops.i = stream.readInt();
    }
    return ops;
}

input_t input;

typedef output_t AnsType;

AnsType readAns(InStream& stream) {
    output_t output = read_output(stream);
    return output;
}

int main(int argc, char *argv[]) {
    registerTestlibCmd(argc, argv);
    input = read_input(inf);
    AnsType pa_answer = readAns(ouf);
    AnsType jury_answer = readAns(ans);

    quitf(_ok, "ok");
    return 0;
}
