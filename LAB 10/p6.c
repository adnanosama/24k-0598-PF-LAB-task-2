#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

struct pointers{
    double x;
    double y;
};

double distance(struct pointers p1,struct pointers p2){
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int PointInRectangle(struct pointers p, struct pointers topLeft, struct pointers bottomRight) {
    if (p.x >= topLeft.x && p.x <= bottomRight.x && p.y <= topLeft.y && p.y >= bottomRight.y) {
        return 1; 
    }
    return 0; 
}
int main() {

    struct pointers p1 = {1.0, 2.0};
    struct pointers p2 = {4.0, 6.0};

    double dist = distance(p1, p2);
    printf("Distance between p1 and p2: %.2f\n", dist);

    struct pointers topLeft = {0.0, 5.0};
    struct pointers bottomRight = {5.0, 0.0};

    struct pointers testPoint = {3.0, 3.0};
    if (PointInRectangle(testPoint, topLeft, bottomRight)) {
        printf("pointers (%.2f, %.2f) lies within the rectangle.\n", testPoint.x, testPoint.y);
    } else {
        printf("pointers (%.2f, %.2f) is outside the rectangle.\n", testPoint.x, testPoint.y);
    }

    return 0;
}