
//TODO Create a chessboard
 //FIXME Chess board:
 // - Number of Rows & Columns
 // - Calculate Stride
 // - AspectRatio
//TODO Create a circle at the center of chessboard with min & max radius


#include <iostream>
#include <cmath>
#include <vector>

namespace st = std;

typedef st::vector<float> VF; // A vector of floats
typedef st::vector<VF> VVF;   // A vector of vectors of floats

auto const nrOfRows = 63;
auto const nrOfCols = 3 * nrOfRows;
auto const aspectRatio = 0.65; //???

auto const pixelChars = "NLI +-. "; // "MNIL+-. " == "N IL+-. "
auto const black = sizeof(pixelChars) / sizeof(char) - 1;

auto const aLot = 100;
auto const stride = 0.105;

auto const minRadius = 0.2;
auto const maxRadius = 0.4;

auto image = VVF(nrOfRows, VF(nrOfCols, black));

int main(){
    //Chess Board
    for (auto rowIndex = 0; rowIndex < nrOfRows; rowIndex++){
//        st::cout<<"I am rowIndex";
        auto y = (nrOfRows / 2. - rowIndex) / nrOfRows;
        int yCrude = (aLot + y) / stride;
        for (auto colIndex = 0; colIndex < nrOfCols; colIndex++){
//            st::cout<<"I am colIndex";
            auto x = (nrOfCols / 2. - colIndex) / (aspectRatio * nrOfCols);
            int xCrude = (aLot + x) / stride;
            auto brightness = (((xCrude % 2) && !(yCrude % 2)) || (!(xCrude % 2) && (yCrude % 2)) ? 2 : 1);
            image[rowIndex][colIndex] /= brightness;
        }
    }

    //Circle
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




    // Print on screen
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
    st::cout<<" Hello World!";
}