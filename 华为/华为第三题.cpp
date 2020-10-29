/*
给出一个 n*m 的网格，每一个格子上有三个数：pD、pR、pS满足 0<=pD、pR、pS<=1,且pD+pR+pS=1.
pD 表示在当前格子，下一步移动到下方格子的概率；pR 表示下一步移动到右方格子的概率，pS 表示下一步仍然停留在原地的概率。
求从网格左上角移动到右下角所需要的步数的期望。数据保证答案存在。

输入描述：
第一行包含两个整数 n，m，表示网格的大小（0<=n*m<=100000）
接下来共n行，每行包含 3*m 个实数。
第i行的第 3*j，3*j+1, 3*j+2 个数表示第 i 行，第 j 列格子上的 pD、pR、pS。

输出描述：
输出从左上角走到右下角所需要的步数的期望。（如有 0.5 的概率可以在两步内从左上角走到右下角；有 0.3 的概率可以在三步内走到；有0.2 的概率可以在四步内走到，那么步数的期望为 0.5*2+0.3*3+0.2*4=2.7）


示例：
输入
2 2
1.0  0.0  0.0  0.5  0.0  0.5
0.0  0.5  0.5  0.5  0.5  0.0
输出
3.0
输出说明：
第一步以100%的概率从（0, 0）移动到（1， 0）；
从（1， 0）移动到（1， 1）锁期望的步数为2步，所以答案为 3 。
备注：考虑到浮点数精度问题，假设你的答案输出为yourvalue，标准答案为stdvalue，
当abs（yourvalue-stdvalue）/max（1.0，abs（stdvalue））<1e-3时，你的答案会被判定为正确。
*/
/*
一道正常的笔试题，算是难得的非常正常了…
dp转移方程如下：

d p [ G ( i , j ) ] = ( d p [ G ( i + 1 , j ) ] ∗ d [ G ( i , j ) ] + d p [ G ( i , j + 1 ) ] ∗ r [ G ( i , j ) ] + 1 ) / ( 1.0 − s [ G ( i , j ) ] ) ; dp[G(i,j)]=(dp[G(i+1,j)]*d[G(i,j)]+dp[G(i,j+1)]*r[G(i,j)]+1)/(1.0-s[G(i,j)]);dp[G(i,j)]=(dp[G(i+1,j)]∗d[G(i,j)]+dp[G(i,j+1)]∗r[G(i,j)]+1)/(1.0−s[G(i,j)]);

upd：

应评论区要求解释下1 / ( 1.0 − s [ G ( i , j ) ] ) 1/(1.0-s[G(i,j)])1/(1.0−s[G(i,j)])的含义…
比如每次有0.5的概率走出格子，那么期望需要2次才能走出这个格子。
每次有1/3的概率走出格子，期望需要3次走出该格子。（帮助大家理解举的例子…）
那么考虑每次有p的概率走出格子，则期望需要1/p次走出这个格子。
故得到上面式子的1 / ( 1.0 − s [ G ( i , j ) ] ) 1/(1.0-s[G(i,j)])1/(1.0−s[G(i,j)])
*/

/*
import java.util.*;

public class zbr01
{
public static double []d=new double[100005];
public static double []r=new double[100005];
public static double []s=new double[100005];
public static double []dp=new double[100005];
public static int n,m;

public static int G(int x,int y)
{
return m*(x-1)+y;
}

public static void main(String[] args)
{
Scanner S=new Scanner(System.in);
n=S.nextInt(); m=S.nextInt();
for(int i=1;i<=n;i++) for(int j=1;j<=m;j++)
{
d[G(i,j)]=S.nextDouble();
r[G(i,j)]=S.nextDouble();
s[G(i,j)]=S.nextDouble();
}
for(int i=n;i>=1;i--)
{
for(int j=m;j>=1;j--)
{
if(i==n&&j==m) continue;
dp[G(i,j)]=(dp[G(i+1,j)]*d[G(i,j)]+dp[G(i,j+1)]*r[G(i,j)]+1)/(1.0-s[G(i,j)]);
}
}
System.out.println(dp[1]);
}
}

*/