#include <stdio.h>
#include <school.h>

/*
 * Returns element index if found, else returns -1
 */
int bsearch(int array[], int n, int el)
{
        int low  = 0;
        int high = n - 1;
        int mid;

        while (low <= high) {
                mid = (low + high) / 2;
                if (array[mid] == el)
                        return mid;
                else if (array[mid] < el)
                        low = mid + 1;
                else
                        high = mid - 1;
        }

        return -1;
}

int rec_bsearch(int array[], int el, int low, int high)
{
        if (low > high)
                return -1;

        int mid = (low + high) / 2;
        if (array[mid] == el)
                return mid;
        else if (array[mid] < el)
                return rec_bsearch(array, el, mid + 1, high);
        else
                return rec_bsearch(array, el, low, mid - 1);
}


int main(void)
{
        int search;
        scanf("%d", &search);

        int data[1000];
        for (int i = 0; i < 1000; ++i)
                data[i] = i + 1;

        if (rec_bsearch(data, search, 0, 1000) != -1)
                printf("Found\n");
        else
                printf("Not found\n");
}

