#include <bits/stdc++.h>

using namespace std;

struct picture_t {
    vector<string> s;
};

struct input_t {
    int n;
    int m;
    int k;
    vector<picture_t> pictures;
};

struct ops_t {
    int op;
    int x;
    int y;
    int i;
};

struct output_t {
    int startPicIndex;
    unsigned int q;
    vector<ops_t> ops;
};

output_t solve(input_t const& input) {
    // write code here
}

int main()
{
    input_t input;
    cin >> input.n >> input.m >> input.k;
    for (int i = 1; i <= input.n; ++i)
    {
        picture_t picture;
        for (int j = 1; j <= input.n; j++) 
        {
            string tmp;
            cin >> tmp;
            picture.s.push_back(tmp);
        }
        input.pictures.push_back(picture);
    }

    output_t output = solve(input);

    cout << output.startPicIndex << endl << output.q << endl;
    for (int i = 0; i < output.q; ++i)
    {
        cout << output.ops[i].op << ' ';
        if (output.ops[i].op == 1)
        {
            cout << output.ops[i].x << ' ' << output.ops[i].y;
        }
        else 
        {
            cout << output.ops[i].i;
        }
        cout << endl;
    }
}