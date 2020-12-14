#include "pch.h"
#include "../task6/task6.h"

TEST(task6_1, 1) {
    task6_1("in1.txt", "out1.txt");
    ifstream fin1("out1.txt");
    ifstream fin2("ans1.txt");
    while (!fin1.eof()) {
        string tmp1, tmp2;
        fin1 >> tmp1;
        fin2 >> tmp2;
        EXPECT_EQ(tmp1, tmp2);
    }
}

TEST(task6_2, 1) {
    task6_2("in2.txt", "out2.txt");
    ifstream fin1("out2.txt");
    ifstream fin2("ans2.txt");
    while (!fin1.eof()) {
        string tmp1, tmp2;
        fin1 >> tmp1;
        fin2 >> tmp2;
        EXPECT_EQ(tmp1, tmp2);
    }
}

TEST(task6_3, 1) {
    task6_3("in3_1.txt", "out3_1.txt");
    ifstream fin1("out3_1.txt");
    ifstream fin2("ans3_1.txt");
    while (!fin1.eof()) {
        string tmp1, tmp2;
        fin1 >> tmp1;
        fin2 >> tmp2;
        EXPECT_EQ(tmp1, tmp2);
    }
}

TEST(task6_3, 2) {
    task6_3("in3_2.txt", "out3_2.txt");
    ifstream fin1("out3_2.txt");
    ifstream fin2("ans3_2.txt");
    while (!fin1.eof()) {
        string tmp1, tmp2;
        fin1 >> tmp1;
        fin2 >> tmp2;
        EXPECT_EQ(tmp1, tmp2);
    }
}