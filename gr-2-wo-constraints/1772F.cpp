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

ops_t read_ops() {
    ops_t ops;
    cin >> ops.op;
    if (op == 1) {
        cin >> ops.x;
        cin >> ops.y;
    } else {
        cin >> ops.i;
    }
    return ops;
}

output_t read_output() {
    output_t output;
    cin >> output.startPicIndex;
    cin >> output.q;
    for (int j = 1; j <= q; j++) {
        output.ops.push_back(read_ops());
    }
}

picture_t read_picture() {
    picture_t picture;
    for (int i = 1; i <= n; ++i) {
        string tmp1;
        cin >> tmp1;
        picture.s.push_back(tmp1);
    }
    return picture;
}

input_t read_input() {
    input_t input;
    cin >> input.n;
    cin >> input.m;
    cin >> input.k;
    for (int i = 1; i <= n; i++) {
        input.pictures.push_back(read_picture(n, m));
    }
    return input;
}

void write_ops(ops_t const& ops) {
    cout << ops.op;
    cout << ' ';
    if (ops.op == 1) {
        cout << ops.x;
        cout << ' ';
        cout << ops.y;
    } else {
        cout << ops.i;
    }
}

void write_output(output_t const& output) {
    cout << output.startPicIndex;
    cout << endl;
    cout << output.q;
    cout << endl;
    for (int j = 1; j <= output.q; j++) {
        write_ops(output.ops[j]);
        cout << endl;
    }
}

int main()
{
}