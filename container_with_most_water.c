#include <stdio.h>
#include <stdio.h>

int maxArea(int *height, int heightSize)
{
    int max = 0;

    for (int i = 0; i < heightSize; i++)
    {

        int max_num = 0;

        for (int j = 0; j < heightSize; j++)
        {

            int minimum = height[i], position = j - i;

            if (height[i] != height[j])
            {
                if (height[i] > height[j])
                {
                    minimum = height[j];
                }
            }

            if (i != j)
            {
                if (i > j)
                {
                    position = i - j;
                }
            }

            max_num = minimum * position;

            if (max_num > max)
            {
                max = max_num;
            }
        }

    }

    return max;
}

int main()
{

    int height[] = {2, 3, 4, 5, 18, 17, 6};
    int heightSize = sizeof(height) / sizeof(int);

    printf("Maxarea: %d", maxArea(height, heightSize));

    return 0;
}