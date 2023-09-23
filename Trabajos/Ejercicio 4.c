#include <stdio.h>
#include <conio.h>
int main()
{
    int var1, var2, var3;
    var1 = var2 = var3 = 1;
    printf("%d, %d, %d", ++var1, ++var2, ++var3);
    printf("\n\n");
    int var4, var5, var6, var7, var8;
    var4 = var5 = var6 = var7 = var8 = 1;
    var4, var5, var6, var7, var8;
    printf("%d, %d, %d, %d, %d", var4++, var5++, var6++, var7++, var8++ );
    printf("\n\n");
    printf("%d, %d, %d, %d, %d", var4, var5, var6, var7, var8);
    printf("\n\n");
    int var9, var10, var11;
    var9=var10=var11=1;
    printf("%d", ++var9+=(++var10+var11++));


}