double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    float median;
    int newArr[nums1Size + nums2Size];
    int numSizing = nums1Size;
    for (int i = 0; i < nums1Size; i++)
    {
        newArr[i] = nums1[i];
    }

    for (int i = 0; i < nums2Size; i++)
    {
        newArr[numSizing] = nums2[i];
        numSizing++;
    }

    int newArrSize = sizeof(newArr) / sizeof(int);

    int temp;
    for (int i = 0; i < nums1Size + nums2Size; i++)
    {
        for (int j = 0; j < nums1Size + nums2Size; j++)
        {
            if (newArr[i] > newArr[j])
            {

                temp = newArr[i];
                newArr[i] = newArr[j];
                newArr[j] = temp;
            }
        }
    }

    if ((newArrSize) % 2 != 0)
    {
        float mid = (float)((float)newArrSize / 2) + 0.5;
        int int_mid = mid;
        median = newArr[int_mid - 1];
    }
    else
    {
        float mid = (float)((float)newArrSize / 2);
        int int_mid = mid - 1;
        int next_int = int_mid + 1;
        float value_calc = (float)(newArr[int_mid] + newArr[next_int]) / 2;
        median = value_calc;
    }

    return median;
}