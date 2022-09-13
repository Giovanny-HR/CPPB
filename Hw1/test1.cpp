#include <iostream>
#include <cmath>
#include <vector>

namespace st = std;

typedef st::vector<float> VF; // Afkorting
typedef st::vector<VF> VVF;

auto const nrOfRows = 63;//96 , 63
auto const nrOfCols = 3 * nrOfRows;
auto const aspectRatio = 0.65;

auto const pixelChars = "MNIL+-. "; // "MNIL+-. "
auto const black = sizeof(pixelChars) / sizeof(char) - 1;

auto const aLot = 1000;
auto const stride = 00.105; // Stap grotte  ==>00.105

auto const minRadius = 0.2;
auto const maxRadius = 0.4;

// ============== Werk in de juiste maat groote, miliAmpere, meter, Celius
auto image = VVF(nrOfRows, VF(nrOfCols, black));

int main()
{
    // std::cout << "Chessboard";

    // Build chessboard pattern
    for (auto rowIndex = 0; rowIndex < nrOfRows; rowIndex++)
    {
        // std::cout << "Inside for 'ChessBoard'";
        auto y = (nrOfRows / 2. - rowIndex) / nrOfRows;
        int yCrude = (aLot + y) / stride;//-
        for (auto colIndex = 0; colIndex < nrOfCols; colIndex++)//++
        {
            // std::cout << "Inside for 'ChessBoard .2' ";

            auto x = (colIndex - nrOfCols / 2) / (aspectRatio * nrOfCols);
            int xCrude = (aLot + x) / stride; //-
            auto brightness = (((xCrude % 2) && !(yCrude % 2)) || (!(xCrude % 2) && (yCrude % 2)) ? 2 : 1); //-
            image[rowIndex][colIndex] /= brightness;
        }
        // std::cout << "Outside for 'ChessBoard .1' ";
    }

    // std::cout << "Aspect Ratio";

    // Mix in circle pattern
    //  Aspect Ratio ==?
    for (auto rowIndex = 0; rowIndex < nrOfRows; rowIndex++)//++
    {
        auto y = (nrOfRows / 2. - rowIndex) / nrOfRows;
        for (auto colIndex = 0; colIndex < nrOfCols; colIndex++)
        {
            auto x = (colIndex - nrOfCols / 2) / (aspectRatio * nrOfCols);
            auto radius = sqrt(pow(x, 2) + pow(y, 2));
            auto brightness = (minRadius <= radius && radius <= maxRadius ? 2 : 1);
            image[rowIndex][colIndex] /= brightness;
        }
    }

    // std::cout << "Show on Screen";

    // Show on screen
    st::cout << '\n';
    for (auto rowIndex = 0; rowIndex < nrOfRows; rowIndex++)
    {
        st::cout << "   ";
        for (auto colIndex = 0; colIndex < nrOfCols; colIndex++)
        {
            st::cout << pixelChars[int(image[rowIndex][colIndex])];
        }
        st::cout << '\n';
    }
    st::cout << '\n';

    return 0;
}

/*
int boardSizex = 20;
    int boardSizey = 20;

    for (auto index = 0; index < boardSizex; index++){
        for (auto i = 0; i < boardSizey; i++)
        {
            int lastD = i% 10;
            if(lastD < 10){
                st::cout << "L";
            }
            else
            {
                st::cout << " ";
            }
        }
        st::cout<< '\n';
    }
*/