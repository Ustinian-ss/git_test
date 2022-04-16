#include<stdio.h>
int main()
{ 
    char a1;
char flag0;//是否识别出动物的标志
char *str0="本系统可识别七种动物，请用Y和N表示是和否\n";
char *str1="这个动物有毛发吗?";
char *str2="这个动物有奶吗?";
char *str3="这个动物有羽毛吗?";
char *str4="这个动物会下蛋吗?";
char *str5="这个动物吃肉吗?";
char *str6="这个动物有犬齿有爪吗?";
char *str7="这个动物有蹄吗?";
char *str8="这个动物是嚼反刍动物吗?";
char *str9="这个动物身上是黄褐色而且有暗斑点吗?";
char *str10="这个动物身上是黄褐色而且有黑色条纹？";
char *str11="这个动物长腿长脖子且身上有暗斑点吗？";
char *str12="这个动物身上有黑色条纹吗？";
char *str13="这个动物长腿长脖子？";
char *str14="这个动物会游泳并有黑白两色\t";
char *str15="这个动物擅飞";
char *str16="这个动物会不会飞";
char *ans0="抱歉，我也不知道这是什么动物";
char *ans1="这个动物是金钱豹";
char *ans2="这个动物是老虎";
char *ans3="这个动物是长颈鹿";
char *ans4="这个动物有斑马";
char *ans5="这个动物是企鹅";
char *ans6="这个动物是鸵鸟";
char *ans7="这个动物是信天翁";
char *a[4]={str1,str2,str3,str4};//判断哺乳动物和鸟类
char *bl[4]={str5,str6,str7,str8};//bL判断是食草动物还是食肉动物
char *b2[1]={str16};//判断鸟类会不会飞
//＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊判断具体是那种动物
char*cl[]={str9,str10};//CL判断金钱豹和老虎
char*c2[]={str11,str12};//判断长颈鹿和斑马
char*c3[]={str13,str14};//判断企鹅和鸵鸟
char*c4[]={str15};//判断是不是信天翁
puts(str0);
{
int k;
for(k=0;k<4;k++){
puts(a[k]);
scanf("%c",&a1,1);
getchar();
if(a1=='Y')//区分哺乳动物和鸟类
{
if(k==1){
printf("初步判定是哺乳动物\n");flag0=0;break;
}
else if(k>2){
printf("初步判定是鸟类\n");flag0=1;break;
}
}
}
if(flag0==0){//判定是哺乳动物
for(k=0;k<4;k++){
puts(bl[k]);
scanf("%c",&a1,1);
getchar();
if(a1=='Y')//区分食肉动物和食草类动物
{
if(k==1){
printf("初步判定是食肉动物\n");
for(k=0;k<2;k++){
puts(cl[k]);
scanf("%c",&a1,1);
getchar();
if(a1=='Y')//区分金钱豹和老虎
{
printf("这是金钱豹");break;
}
 if(a1=='N'&&k==1){
printf("这是老虎");break;
}
}
break;
}
else if(k>2){
printf("初步判定是食草类动物\n");
for(k=0;k<2;k++){
puts(c2[k]);
scanf("%c",&a1,1);
getchar();
if(a1=='Y')//确定是长颈鹿还是斑马
{
printf("这是长颈鹿");break;
}
else if(a1=='N'&&k==1){
printf("这是斑马");break;
}
}
break;
}
}
}
}
else if(flag0==1){//判定是鸟类
puts(b2[0]);
scanf("%c",&a1,1);
getchar();
if(a1=='Y')//判断鸟类会不会飞
{

	puts(c4[0]);
scanf("%c",&a1,1);
getchar();
if(a1=='Y'){//判断是不是信天翁
printf("这是信天翁");
}
else if(a1=='N'){
puts(ans0);
}
}
else if(a1=='N'){
for(k=0;k<2;k++){
puts(c3[k]);
scanf("%c",&a1,1);
getchar();
if(a1=='Y')//确定是企鹅和鸵鸟
{
printf("这是鸵鸟");break;
}
else if(a1=='N'&&k==1){
printf("这是企鹅");break;
}
}
}
}
getchar();
return 0;
}
}
