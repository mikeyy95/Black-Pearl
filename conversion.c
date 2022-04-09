#include <stdio.h>

int main()
{
    
    float i, kms, miles, inches, foot, cms, pounds, kgs, meters;
    end:

    printf("select the conversion\n1 for kms to mile\n2 for inches to foot\n3 for cms to inches\n4 for pound to kgs\n5 for inches to meters\n0 to exit\n");
    scanf("%d", &i);

    if (i == 1)
    {
        printf("enter the kms\n");
        scanf("%f", &kms);

        kms = kms * 0.621371;
        printf("miles are %f\n", kms);
    }

    else if (i == 2)
    {
        printf("enter the inches\n");
        scanf("%f", &inches);

        inches = inches * 0.08333;
        printf("inches are %f\n", inches);
    }
    else if (i == 3)
    {
        printf("enter the cms\n");
        scanf("%f", &cms);

        cms = cms / 2.54;
        printf("inches are %f\n", cms);
    }

    else if (i == 4)
    {
        printf("enter the pounds\n");
        scanf("%f", &pounds);

        pounds = pounds * 0.453592;
        printf("kgs are %f\n", pounds);
    }

    else if (i == 5)
    {
        printf("enter the inches\n");
        scanf("%f", &meters);

        meters = meters * 0.0254;
        printf("meters are %f\n", meters);
    }

    else if (i==0)
    {
        printf("you have exited\n");
        goto end_1;
    }
    

    goto end;
    end_1:
    return 0;
}
