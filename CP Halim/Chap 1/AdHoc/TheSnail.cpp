//
// Created by Student on 10/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    float H, U, D, F;
    while(scanf("%f %f %f %f", &H, &U, &D, &F), D) {
        float height = 0;
        F = U * F / 100;
        int day = 1;
        while((height >= 0 && height < H)) {
            height += U;
            if (U > 0) U -= F;
            if (height > H) { break; }
            height -= D;
            if (height < 0) { break; }
//            cout << "height :" << height << " at day" << day << endl;
            ++day;
        }
        if (height < 0) printf("failure on day %d\n", day);
        else printf("success on day %d\n", day);
    }
    return 0;
}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main(void)
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    // Data of the snail.
//    float height;
//    float up;
//    float down;
//    float fatigue;
//    // Read while not EOF.
//    while(cin >> height >> up >> down >> fatigue && height)
//    {
//        // Current position of the snail.
//        float currentPosition = 0;
//        // Current day.
//        int day = 1;
//        fatigue = up * fatigue / 100;
//        // Execute while the snail is om the enable range.
//        while(currentPosition < height && currentPosition >= 0)
//        {
//            // At the day the snail rises.
//            currentPosition += up;
//            // If the snail continues to rise then decrease.
//            if(up > 0)
//                up -= fatigue;
//            // If the snail reach the top.
//            if(currentPosition > height)
//                break;
//            // At the night the snail goes down.
//            currentPosition -= down;
//            // If the snail could not rise.
//            if(currentPosition < 0)
//                break;
//            // Next day.
//            ++day;
//        }
//        // If the snail could not rise.
//        if(currentPosition < 0)
//            cout << "failure on day " << day << "\n";
//            // If the snail could reach the top.
//        else
//            cout << "success on day " << day << "\n";
//    }
//    return 0;
//}