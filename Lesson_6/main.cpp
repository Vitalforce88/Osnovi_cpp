#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fos1("file_1.txt");
    ofstream fos2("file_2.txt");

    fos1 << "C++ (/ˌsiːˌplʌsˈplʌs/) is a general-purpose programming language "
            "created by Bjarne Stroustrup as an extension of the C programming language,"
            "or << C with Classes >>. The language has expanded significantly over time,"
            "and modern C++ now has object-oriented, generic, and functional features"
            "in addition to facilities for low-level memory manipulation."
            "It is almost always implemented as a compiled language, and many vendors provide C++ compilers,"
            "including the Free Software Foundation, LLVM, Microsoft, Intel, Oracle, and IBM,"
            "so it is available on many platforms";

    fos2 << "C++ was designed with an orientation toward system programming and embedded,"
            "resource-constrained software and large systems, with performance, efficiency,"
            "and flexibility of use as its design highlights.[10] C++ has also been found useful "
            "in many other contexts, with key strengths being software infrastructure and resource-constrained "
            "applications,[10] including desktop applications, video games, servers (e.g. e-commerce, web search, "
            "or SQL servers), and performance-critical applications (e.g. telephone switches or space probes).";
    fos1.close();
    fos2.close();

    ifstream fis1("file_1.txt");

    ifstream fis2("file_2.txt");

    string s1;
    string s2;

    getline(fis1,s1);
    getline(fis2,s2);
    string s3 = s1 + s2;
    cout << s3;
    fis1.close();
    fis2.close();


/*    char *ptr;
    ptr = new char[500];
    for(int i = 0; i < 500 ; i++){
        fis1 >> ptr[i];
    }
    for (int i = 0; i < 500; i++){
        cout << ptr[i];
    };

    char *ptr2;

    ptr2 = new char[500];
    for(int i = 0; i < 500 ; i++){
        fis2 >> ptr[i];
    }

    delete [] ptr;
    delete [] ptr2;
*/
    return 0;
}
