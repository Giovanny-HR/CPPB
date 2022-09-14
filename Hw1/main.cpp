#include <iostream>
#include <cmath>
#include <vector>

namespace st = std;

typedef st::vector<float> VF; // Afkorting
typedef st::vector<VF> VVF;

auto const nrOfRows = 63;
auto const nrOfCols = 3 * nrOfRows;
auto const aspectRatio = 0.65;

auto const pixelChars = " MNIL+-. "; 
auto const black = sizeof(pixelChars) / sizeof(char) - 1;

auto const aLot = 100;    
auto const gap = 0.105; 

auto const minRadius = 0.2;
auto const maxRadius = 0.4;

auto image = VVF(nrOfRows, VF(nrOfCols, black));

int main()
{
    // Build chessboard pattern
    for (auto rowIndex = 0; rowIndex < nrOfRows; rowIndex++)
    {
        auto y = (nrOfRows / 2. - rowIndex) / nrOfRows;
        int yRaw = (aLot + y) / gap;                        
        for (auto colIndex = 0; colIndex < nrOfCols; colIndex++) 
        {
            auto x = (colIndex - nrOfCols / 2) / (aspectRatio * nrOfCols);
            int xRaw = (aLot + x) / gap;                                                               
            auto brightness = (((xRaw % 2) && !(yRaw % 2)) || (!(xRaw % 2) && (yRaw % 2)) ? 2 : 1); 
            image[rowIndex][colIndex] /= brightness;
        }
    }

    // Mix in circle pattern
    for (auto rowIndex = 0; rowIndex < nrOfRows; rowIndex++) 
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