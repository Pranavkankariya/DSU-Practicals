#include <stdio.h>

int main()
{
    int a[100], n, i, choice;
    int pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n1. Display");
        printf("\n2. Insert");
        printf("\n3. Delete");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                break;

            case 2:
                printf("Enter position: ");
                scanf("%d", &pos);

                printf("Enter value: ");
                scanf("%d", &value);

                for(i = n; i >= pos; i--)
                {
                    a[i] = a[i-1];
                }

                a[pos-1] = value;
                n++;

                printf("Element Inserted.");
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                for(i = pos-1; i < n-1; i++)
                {
                    a[i] = a[i+1];
                }

                n--;

                printf("Element Deleted.");
                break;

            case 4:
                printf("Program Ended.");
                break;

            default:
                printf("Invalid Choice.");
        }

    } while(choice != 4);

    return 0;
}
