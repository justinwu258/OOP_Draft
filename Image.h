#include<vector>
using namespace std;

class Image{
    public:
        Image(int width, int height);
        void setPixel(int x, int y, int value);
        int getPixel(int x, int y) const;   
        void print() const;  
        
        void flipHorizontal();
        void flipVertical();
        
    private:
        int width;
        int height;
        
        vector<vector<int>> pixels;
};

