/*
第一题
当前有多个包含 0 到 9 的数字串列表， 找出与制定数字串具有关联特征值的序列。
特征值使之数字串中比给定临界值小的数字按顺序组成的数字串。如果给定数字串的特征值为当前数字串的特征值的子字符串，则认为当前字符串与给定字符串具有关联特征值。

输入描述：
单个数字串位数不超过 100，输入的数字序列长度 N 范围为（2<=N<=20）。倒数第一行为给定的字符串，倒数第二行的数字是临
界值 A ，范围为（1<A<=9）

输出描述：
输出匹配的数字串序列，输出顺序与输入顺序保持一致。

示例：
输入：
135682318
23457
14282123
14231728
3
1724153

输出：
135682318
14231728

说明：
在临界值 3 的情况下，当前数字串：[135682318，23457 ，14282123，14231728]的特征值分别为 121，2, 12212，1212，
而给定字符串1724153的特征值为121。因此数字串135682318 ，14282123与给定字符串1724153具有关联特征值。
*/

/*java
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
while (sc.hasNext()){
ArrayList<String> arrayList = new ArrayList<>();
int bound =0;
while(sc.hasNext()){
String str = sc.nextLine();
if(str.length()==1){
bound= Integer.parseInt(str);
break;
}
arrayList.add(str);
}
String Strg = sc.nextLine();
String Val = solveFunc(Strg,bound);
for (int i = 0; i < arrayList.size(); i++) {
String comp = solveFunc(arrayList.get(i),bound);
if (checkSub(comp,Val))
System.out.println(arrayList.get(i));
}
}
}

public static boolean checkSub(String comp, String val){
for (int i = 0,j=val.length(); j <= comp.length(); i++,j++) {
if (comp.substring(i,j).equals(val)) {
return true;
}
}
return false;
}

public static String solveFunc(String Str, int bound){
char[] charArray = Str.toCharArray();
String result = "";
for (int i = 0; i < charArray.length; i++) {
String tmp = charArray[i]+"";
if(Integer.parseInt(tmp)<bound)
result= result+tmp;
}
return result;
}
}
*/

/*
import java.util.*;

public class zbr01
{
public static String s[]=new String[100005];
public static String t[]=new String[100005];

public static void main(String[] args)
{
Scanner S=new Scanner(System.in);
int cnt=0;
while(true)
{
s[++cnt]=S.nextLine();
if(s[cnt].length()==1) break;
}
char q=s[cnt].charAt(0);

for(int i=1;i<=cnt-1;i++)
{
String tmp="";
int len=s[i].length();
for(int j=0;j<len;j++)
{
char p=s[i].charAt(j);
if(p<q) tmp+=p;
}
t[i]=tmp;
}
String p2=S.nextLine(),p3="";
int l=p2.length();
for(int i=0;i<l;i++)
{
char p=p2.charAt(i);
if(p<q) p3+=p;
}
for(int i=1;i<=cnt-1;i++)
{
if(t[i].contains(p3))
System.out.println(s[i]);
}
}
}

*/