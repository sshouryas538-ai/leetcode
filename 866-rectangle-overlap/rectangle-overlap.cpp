class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1 = rec1[0], x2 = rec1[2], x3 = rec2[0], x4 = rec2[2];
        int y1 = rec1[1], y2 = rec1[3], y3 = rec2[1], y4 = rec2[3];
        bool  check1 = x1 < x4 && x3 < x2;
        bool  check2 = y1 < y4 && y3 < y2;
        return check1 && check2;
    }
};