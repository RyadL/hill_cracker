#include <iostream>
#include <string>
#include <vector>
#include <map>

#include<stdio.h>
#include<stdlib.h>
#include <iostream>

#include <vector>
#include <math.h>
#include <iomanip>
#include <stdexcept>
#include <Eigen/Dense>

using namespace std;
float e[3][1], d[3][1], a[3][3], b[3][3], ms[3][1], m[3][3];
void getKey(char ** argv) {

    std::cout  << std::endl << "Recuperation de la matrice clef et du message à chiffrer : " << std::endl;

    std::map< float, std::string> alphabet = {
        { 8, "!"}, {42, " "}, {58, ",",},
        {6, "."}, {7, "1"}, {1, "0"},
        {34, "3"}, {37, "2"}, {3 , "5"},
        {47, "4"}, {43, "7"}, {63, "6"},
        {54, "9"}, {13, "8"}, {60, "?"},
        {35, "A"}, {57, "C"}, {16, "B"},
        {31, "E"}, {64, "D"}, {9 , "G"},
        {23, "F"}, {29, "I"}, {32, "H"},
        {55, "K"}, {53, "J"}, {21, "M"},
        {5 , "L"}, {52, "O"}, {41, "N"}, 
        {40, "Q"}, {26, "P"}, {22, "S"}, 
        {18, "R"}, {51, "U"}, {15, "T"}, 
        {17, "W"}, {62, "V"}, {45, "Y"}, 
        {66, "X"}, {50, "Z"}, {25, "a"}, 
        {38, "c"}, {0 , "b"}, {30, "e"}, 
        {33, "d"}, {14, "g"}, {2 , "f"}, 
        {10, "i"}, {4 , "h"}, {59, "k"}, 
        {39, "j"}, {11, "m"}, {28, "l"}, 
        {12, "o"}, {19, "n"}, {24, "q"}, 
        {49, "p"}, {46, "s"}, {61, "r"}, 
        {20, "u"}, {27, "t"}, {36, "w"}, 
        {44, "v"}, {56, "y"}, {48, "x"}, 
        {65, "z"} };

   int i, j;
   int k = 0;
   char me[3];

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) {
            m[i][j] = a[i][j] = argv[1][k++] - 48;
        }
    
   

    for (int i = 0; i < 3; i++)
    {
        for (std::map< float, std::string>::iterator it = alphabet.begin(); it != alphabet.end(); it++)
        {
                if (argv[2][i] == it->second[0])
                {
                    ms[i][0] = it->first;
                    std::cout << "'" << it->second  << "'" << "-> " << it->first << std::endl;
                    break;
                }
        }
    }
}

void encryption() {

   std::cout << std::endl << std::endl << "Chiffrement du message :" << std::endl;

    int i, j, k;
    std::map< float, std::string> alphabet = {
        { 8, "!"}, {42, " "}, {58, ",",},
        {6, "."}, {7, "1"}, {1, "0"},
        {34, "3"}, {37, "2"}, {3 , "5"},
        {47, "4"}, {43, "7"}, {63, "6"},
        {54, "9"}, {13, "8"}, {60, "?"},
        {35, "A"}, {57, "C"}, {16, "B"},
        {31, "E"}, {64, "D"}, {9 , "G"},
        {23, "F"}, {29, "I"}, {32, "H"},
        {55, "K"}, {53, "J"}, {21, "M"},
        {5 , "L"}, {52, "O"}, {41, "N"}, 
        {40, "Q"}, {26, "P"}, {22, "S"}, 
        {18, "R"}, {51, "U"}, {15, "T"}, 
        {17, "W"}, {62, "V"}, {45, "Y"}, 
        {66, "X"}, {50, "Z"}, {25, "a"}, 
        {38, "c"}, {0 , "b"}, {30, "e"}, 
        {33, "d"}, {14, "g"}, {2 , "f"}, 
        {10, "i"}, {4 , "h"}, {59, "k"}, 
        {39, "j"}, {11, "m"}, {28, "l"}, 
        {12, "o"}, {19, "n"}, {24, "q"}, 
        {49, "p"}, {46, "s"}, {61, "r"}, 
        {20, "u"}, {27, "t"}, {36, "w"}, 
        {44, "v"}, {56, "y"}, {48, "x"}, 
        {65, "z"} };
    
   for(i = 0; i < 3; i++)
      for(j = 0; j < 1; j++)
         for(k = 0; k < 3; k++)
            e[i][j] = e[i][j] + a[i][k] * ms[k][j];

   for(i = 0; i < 3; i++)
      for(j = 0; j < 1; j++)
         for (std::map< float, std::string>::iterator it = alphabet.begin(); it != alphabet.end(); it++)
         {
            if (((int)e[i][j])%67 == it->first){
               std::cout << it->first << " -> "<< "'" << it->second  << "'" << std::endl;
               break;
            }
         }  
}


void resolve_system()
{


    float rs_candidat[9][1];
    float rs_hill[9][1];

    rs_hill


    "Hill cipher"



    prends 3 trigram et resoue un system avec ces trigram en supposant que "hill cipher";
    

}

void inverse() {
   int i, j, k;
   float p, q;

   for(i = 0; i < 3; i++)
   for(j = 0; j < 3; j++) {
      if(i == j)
         b[i][j]=1;
      else
         b[i][j]=0;
   }
   for(k = 0; k < 3; k++) {
      for(i = 0; i < 3; i++) {
         p = m[i][k];
         q = m[k][k];
         for(j = 0; j < 3; j++) {
            if(i != k) {
               m[i][j] = m[i][j]*q - p*m[k][j];
               b[i][j] = b[i][j]*q - p*b[k][j];
            }
         }
      }
   }
   for(i = 0; i < 3; i++)
   for(j = 0; j < 3; j++)
   b[i][j] = b[i][j] / m[i][i];

   cout<<"\n\nInverse Matrix is:\n";
   for(i = 0; i < 3; i++) {
      for(j = 0; j < 3; j++)
      cout<<b[i][j]<<" ";
      cout<<"\n";
   }
}

void decryption() {
    std::map< float, std::string> alphabet = {
        { 8, "!"}, {42, " "}, {58, ",",},
        {6, "."}, {7, "1"}, {1, "0"},
        {34, "3"}, {37, "2"}, {3 , "5"},
        {47, "4"}, {43, "7"}, {63, "6"},
        {54, "9"}, {13, "8"}, {60, "?"},
        {35, "A"}, {57, "C"}, {16, "B"},
        {31, "E"}, {64, "D"}, {9 , "G"},
        {23, "F"}, {29, "I"}, {32, "H"},
        {55, "K"}, {53, "J"}, {21, "M"},
        {5 , "L"}, {52, "O"}, {41, "N"}, 
        {40, "Q"}, {26, "P"}, {22, "S"}, 
        {18, "R"}, {51, "U"}, {15, "T"}, 
        {17, "W"}, {62, "V"}, {45, "Y"}, 
        {66, "X"}, {50, "Z"}, {25, "a"}, 
        {38, "c"}, {0 , "b"}, {30, "e"}, 
        {33, "d"}, {14, "g"}, {2 , "f"}, 
        {10, "i"}, {4 , "h"}, {59, "k"}, 
        {39, "j"}, {11, "m"}, {28, "l"}, 
        {12, "o"}, {19, "n"}, {24, "q"}, 
        {49, "p"}, {46, "s"}, {61, "r"}, 
        {20, "u"}, {27, "t"}, {36, "w"}, 
        {44, "v"}, {56, "y"}, {48, "x"}, 
        {65, "z"} };

    int i, j, k;
    inverse();
    for(i = 0; i < 3; i++)
    for(j = 0; j < 1; j++)
    for(k = 0; k < 3; k++)
    d[i][j] = d[i][j] + b[i][k] * e[k][j];
    
    cout<<"\nDecrypted string is: ";

    for (int i = 0; i < 3; i++)
    {
        for (std::map< float, std::string>::iterator it = alphabet.begin(); it != alphabet.end(); it++)
        {
            if ((int)fmod(d[i][0], 67) == (int)it->first)
            {
                std::cout << it->second << std::endl;
                break;
            }
        }
    }
    cout<<"\n";
}
int main(int argc, char**argv) {
    getKey(argv);
    encryption();
    decryption();
}