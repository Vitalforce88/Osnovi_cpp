/* Егоров А.В. Работа с файлами и памятью
1.Написать программу, которая создаст два текстовых файла,
  примерно по 50-100 символов в каждом (особого значения не имеет);
2.Написать функцию, «склеивающую» эти файлы, предварительно буферизуя
  их содержимое в динамически выделенный сегмент памяти нужного размера.
3.* Написать программу, которая проверяет присутствует ли указанное пользователем
    при запуске программы слово в указанном пользователем файле (для простоты работаем только с латиницей).
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void file2fileText(const string& from, const string& to){
    ofstream ofs(to,_S_app);
    ifstream ifs(from);

    char c;
    while(ifs.get(c) && !ifs.eof()){
        ofs << c;
    }
}
void fileprint(const string& file){
    fstream fs{file};
    char c;
    while(fs.get(c) && !fs.eof()){
        cout << c;
    }
}

//bool find(const string& file, const string word)

int main()
{
    fstream potok1("file_1.txt");
    fstream potok2("file_2.txt");

    potok1 << "C++ (/ˌsiːˌplʌsˈplʌs/) is a general-purpose programming language\n"
            "created by Bjarne Stroustrup as an extension of the C programming language,\n"
            "or << C with Classes >>. The language has expanded significantly over time,\n"
            "and modern C++ now has object-oriented, generic, and functional features\n"
            "in addition to facilities for low-level memory manipulation.\n"
            "It is almost always implemented as a compiled language, and many vendors provide C++ compilers,\n"
            "including the Free Software Foundation, LLVM, Microsoft, Intel, Oracle, and IBM,\n"
            "so it is available on many platforms\n";

    potok2 << "C++ was designed with an orientation toward system programming and embedded,\n"
            "resource-constrained software and large systems, with performance, efficiency,\n"
            "and flexibility of use as its design highlights.[10] C++ has also been found useful\n"
            "in many other contexts, with key strengths being software infrastructure and resource-constrained\n"
            "applications,[10] including desktop applications, video games, servers (e.g. e-commerce, web search,\n"
            "or SQL servers), and performance-critical applications (e.g. telephone switches or space probes).\n";

    //potok1.close();
    potok2.close();


vector <char> v;
for (char s; potok1 >> s;){
v.push_back(s);
}
//string f = "Bjarne";
// auto result = find(v.begin(),v.end(),f);
//if (result != v.end()){
//cout << "find!";
//}
//else cout << "not found";
//for(char c : v) cout << c;
    file2fileText("file_2.txt","file_1.txt");
    fileprint("file_1.txt");


//ifstream isf("file_1.txt");
//string strtext;
//getline(isf,strtext);
//cout << strtext;
//string f = "C++";

//find(strtext.begin(),strtext.end(),f);

    return 0;
}
