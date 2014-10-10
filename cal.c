// for library math , we should add -lm when we link
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double GetPower( char *str )
{
    double dNum , dBase;
    int flag = 0;
    char strbak[strlen(str)+1];

    if( str[ 0 ] == '-' )
    {
        flag = 1;
        str++;
    }

    char *tmp = strchr( str , 'e' );
    strncpy(strbak,str,tmp-str);
    dNum = atof(strbak);
    strcpy(strbak , tmp + 1);
    dBase = atof(strbak);
    double ans = pow(dNum,3);
    if(!flag)
        printf("%f  %f  %f  %f\n",dNum , dBase , ans,dBase*3.0);
    else
        printf("%f  %f  %f  %f\n",dNum , dBase , -1*ans,dBase*3.0);

}

int main()
{
    char str[] = "-12.324e34";
    GetPower( str );
    return 0;
}
