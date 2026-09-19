class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int Nx = max(x1,min(x2,xCenter));
        int Ny = max(y1,min(y2,yCenter));
        int Dx = (Nx - xCenter)*(Nx-xCenter);
        int Dy = (Ny - yCenter)*(Ny - yCenter);
        int distance = sqrt(Dx + Dy);
        return distance<=radius;
    }
};