/*
��һ��
��ǰ�ж������ 0 �� 9 �����ִ��б� �ҳ����ƶ����ִ����й�������ֵ�����С�
����ֵʹ֮���ִ��бȸ����ٽ�ֵС�����ְ�˳����ɵ����ִ�������������ִ�������ֵΪ��ǰ���ִ�������ֵ�����ַ���������Ϊ��ǰ�ַ���������ַ������й�������ֵ��

����������
�������ִ�λ�������� 100��������������г��� N ��ΧΪ��2<=N<=20����������һ��Ϊ�������ַ����������ڶ��е���������
��ֵ A ����ΧΪ��1<A<=9��

���������
���ƥ������ִ����У����˳��������˳�򱣳�һ�¡�

ʾ����
���룺
135682318
23457
14282123
14231728
3
1724153

�����
135682318
14231728

˵����
���ٽ�ֵ 3 ������£���ǰ���ִ���[135682318��23457 ��14282123��14231728]������ֵ�ֱ�Ϊ 121��2, 12212��1212��
�������ַ���1724153������ֵΪ121��������ִ�135682318 ��14282123������ַ���1724153���й�������ֵ��
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