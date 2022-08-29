#include<conio.h>
#include<windows.h>
#include<bits/stdc++.h>
using namespace std;
char z;
void l();
double v,qf,fj;
bool k,vp,q[25],ya;
string n,m,o,s,t,gw[22]={"Save.","Save..","Save...","Save.","Save..","Save...","Save.","Save..","Save...","Save.","Save..","Save...","initialization.","initialization..","initialization...","initialization.","initialization..","initialization...","Buffer file  .","Buffer file  ..","Buffer file  ...","The name of the window is changed to 'Lottery'"};
long long i,h,wg[22]={10,12,15,20,21,22,24,25,28,30,35,40,43,47,50,58,63,71,82,91,95,99},wd[22]={1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,3,3,3,4};
void c(long long a){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
	return;
}
void d(){
    HANDLE lk=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO b;
    GetConsoleScreenBufferInfo(lk,&b);
    SetConsoleTitle("抽奖");
    return;
}
long long rm(long long aa,long long bb){
	srand((long long)time(__null));
	if(aa>bb) swap(aa,bb);
    return rand()%(bb-aa+1)+aa;
}
void p(string f){
    for(i=0;i<(80-f.size())/2;i++) cout<<" "; 
    cout<<f;
    return;
}
void e(string f){
    p(f),puts("");
    return;
}
void g(string f){
	for(i=0;i<80-f.size();i++) cout<<" "; 
    cout<<f<<endl;
    return; 
}
string jm(string a){
	char b;
	string y;
	for(i=0;i<a.size();i++) b=char(((long long)a[i])+4),y.push_back(b);
	return y;
}
string mj(string a){
	char b;
	string y;
	for(i=0;i<a.size();i++) b=char(((long long)a[i])-4),y.push_back(b);
	return y;
}
char ca(string x){
	long long rj;
	if(x==":"or x==";"or x=="<"or x==">") rj=rm(48,57); 
	else if(x=="?"or x=="@"or x=="`"or x=="_"or x=="=") rj=rm(97,122);
	else if(x=="["or x=="\\"or x=="]"or x=="^") rj=rm(66,90);
	return(char)rj;
}
string pn(){
	srand((long long)time(__null));
	string ma,mb,mc,md;
	long long na,nb,nc,nd;
	na=rm(48,122),nb=rm(48,122),nc=rm(48,122),nd=rm(48,122),ma=(char)na,mb=(char)nb,mc=(char)nc,md=(char)nd;
	if(ma==":"or ma==";"or ma=="<"or ma==">"or ma=="?"or ma=="@"or ma=="`"or ma=="_"or ma=="["or ma=="\\"or ma=="]"or ma=="^"or ma=="=") ma=ca(ma);
	if(mb==":"or mb==";"or mb=="<"or mb==">"or mb=="?"or mb=="@"or mb=="`"or mb=="_"or mb=="["or mb=="\\"or mb=="]"or mb=="^"or mb=="=") mb=ca(mb);
	if(mc==":"or mc==";"or mc=="<"or mc==">"or mc=="?"or mc=="@"or mc=="`"or mc=="_"or mc=="["or mc=="\\"or mc=="]"or mc=="^"or mc=="=") mc=ca(mc);
	if(md==":"or md==";"or md=="<"or md==">"or md=="?"or md=="@"or md=="`"or md=="_"or md=="["or md=="\\"or md=="]"or md=="^"or md=="=") md=ca(md);
	return ma+mb+mc+md;
}
string np(long long to,long long fe){
	string yz[3][11]={
		"","ebRe","vjkK","758d","jhch","hghv","he42","vrE4","bt45","bb56","ger4",
		"","Dchj","jhkv","bHrm","j8jv","jbrr","cbJh","yu3t","gu54","jvhE","hgTj"
	};
	return yz[to][fe];
}
void ip(){
	c(240),system("cls"),c(243),e("输入验证码"),ya=false,cout<<endl<<endl;
	long long lh=rm(0,1);
	string yw=((lh==1)?(pn()):(np(rm(0,1),rm(1,10)))),hg;
	e("目标验证码："+yw),cout<<endl<<endl<<endl<<endl,p("请输入验证码："),cin>>hg;
	if(yw==hg) MessageBox(__null,__TEXT("您输入的验证码正确！"),"抽奖",MB_ICONASTERISK),ya=true;
	return;
}
void r(){
	c(240),system("cls");
	ifstream fin("userdata.cjdata");
	c(252),e("登录/注册"),cout<<endl<<endl<<endl<<endl,c(240),e("A-登录"),cout<<endl<<endl<<endl<<endl,c(243),e("没有账号？B-去注册"),c(240);
	z=getch();
	if(z=='A'or z=='a'){
		fin>>o>>s;
		if(o=="") MessageBox(__null,__TEXT("用户不存在，请先注册！"),"抽奖",MB_ICONSTOP),l();
		else{
			c(240),system("cls"),c(243),e("登录"),cout<<endl<<endl<<endl<<endl<<"                                   用户名："<<o<<endl<<endl,p("请输入密码："),cin>>m;
			if(m==s){
				MessageBox(__null,__TEXT("抽奖系统检测到您正在通过查看文件的方式试图获取账号密码，希望您在之后的时间规范自己的行为，正确的登录！扣除 0.05 元，登录失败！ "),"抽奖",MB_ICONASTERISK);
				if(v>=0.05) v-=0.05;
				else if(v>0) qf+=(0.05-v),v=0;
				else qf+=0.05;
			}
			else if(m!=mj(s)) MessageBox(__null,__TEXT("密码错误，登录失败！"),"抽奖",MB_ICONSTOP),l();
			else{
				ip(),c(240),system("cls");
				if(!ya) MessageBox(__null,__TEXT("验证码错误，登录失败！"),"抽奖",MB_ICONSTOP),l();
				else MessageBox(__null,__TEXT("登录成功！"),"抽奖",MB_ICONASTERISK),k=true;
			}
		}
	}
	else if(z=='B'or z=='b'){
		string gs; 
		c(240),system("cls"),c(252),p("设置用户名："),cin>>n,c(240),system("cls"),c(252),p("设置密码："),cin>>t,p("再输入一次密码"),cin>>gs;
		if(t!=gs) MessageBox(__null,__TEXT("两次输入不一致，注册失败！"),"抽奖",MB_ICONSTOP),l();
		else o=n,s=jm(t);
	}
	return;
}
void l(){
	r();
	ofstream fout("userdata.cjdata");
	fout<<o<<endl<<s,fout.close();
	return;
}
void b(){
	MessageBox(__null,__TEXT("关于\n抽奖 1.8.0.2\n本程序开源，下载地址为 http://zuoye.free.fr/files/抽奖.zip/（短网址 https://985.so/brrvk）\n备用地址 1 为 https://tntfiles.com/te3m7dboyf/zip（短网址 https://985.so/brr1m）\n备用地址 2 为 https://files.catbox.moe/z5vzpu.zip（推荐，短网址 https://985.so/brr1b）\n官方下载网址为 https://xumengxing123.github.io/d/uQw5j0/（推荐，短网址 https://985.so/br2tf，密码 4762）\nCopyright Don't distribute!"),"抽奖",MB_ICONASTERISK);
	return;
}
void ad(){
	c(240),system("cls"),e("管理端"),cout<<endl<<endl<<endl<<endl,e("A-提现          B-VIP"),z=getch();
	if(z=='a'or z=='A'){
		if(!k) MessageBox(__null,__TEXT("请登录后再操作哦！"),"抽奖",MB_ICONSTOP),z='?';
		c(240),system("cls"),c(252),e("提现"),cout<<endl<<endl<<endl<<endl,e("C-全部提现");
		if(!vp) cout<<endl<<endl,e("【提示】联系人工   [email]   xumengxing123@163.com");
		z=getch();
		if(z=='c'or z=='C'){
			v=0,MessageBox(__null,__TEXT("您已成功提现！"),"抽奖",MB_OK);
			ofstream fout("moneydata.cjdata");
			fout<<v<<endl<<fj<<endl<<qf<<endl<<h<<endl<<vp,fout.close();
		}
	}
	else if(z=='b'or z=='B'){
		if(!k) MessageBox(__null,__TEXT("请登录后再操作哦！"),"抽奖",MB_ICONSTOP),z='?';
		c(240),system("cls"),c(252),e("VIP"),cout<<endl<<endl<<endl<<endl,e("D-开通      E-取消"),z=getch();
		if(z=='d'or z=='D'){
			vp=true;
			ofstream fout("moneydata.cjdata");
			fout<<v<<endl<<fj<<endl<<qf<<endl<<h<<endl<<vp,fout.close();
		}
		else if(z=='E'or z=='e'){
			vp=false;
			ofstream fout("moneydata.cjdata");
			fout<<v<<endl<<fj<<endl<<qf<<endl<<h<<endl<<vp,fout.close();
		}
	}
	return;
}
void ey(){
	if(h>99 and!q[1]) MessageBox(__null,__TEXT("您已抽奖 100 次，奖励 50 积分！\n赠送抽奖 cpp 文件（需要密码，密码抽奖 8000 次公布，文件大小 13.02 KB 共 13335 字节）：http://fannao.free.fr/down.php/18df4a9c07724206720524af0088642d.cpp/"),"抽奖",MB_OK),fj+=50,q[1]=true;
    if(h>199 and!q[2]) MessageBox(__null,__TEXT("您已抽奖 200 次，奖励 100 积分！\n赠送中秋节 HTML 代码：https://xumengxing123.github.io/中秋节 HTML.txt"),"抽奖",MB_OK),fj+=100,q[2]=true;
    if(h>299 and!q[3]) MessageBox(__null,__TEXT("您已抽奖 300 次，奖励 200 积分！"),"抽奖",MB_OK),fj+=200,q[3]=true;
    if(h>399 and!q[4]) MessageBox(__null,__TEXT("您已抽奖 400 次，奖励 400 积分！"),"抽奖",MB_OK),fj+=400,q[4]=true;
	if(h>499 and!q[5]) MessageBox(__null,__TEXT("您已抽奖 500 次，奖励 500 积分！\n赠送时间显示网址：https://xumengxing123.github.io/d/H9e38g/"),"抽奖",MB_OK),fj+=500,q[5]=true;
    if(h>999 and!q[6]) MessageBox(__null,__TEXT("您已抽奖 1000 次，奖励 650 积分！\n赠送印鸽视频 1 显示网址：https://q01.yinge.cc/resource/2021/11/16/87dce669-6eb7-48a2-be77-efcb7d029097.mp4（短网址：https://985.so/brr6e）"),"抽奖",MB_OK),fj+=650,q[6]=true;
    if(h>1499 and!q[7]) MessageBox(__null,__TEXT("您已抽奖 1500 次，奖励 700 积分！"),"抽奖",MB_OK),fj+=700,q[7]=true;
    if(h>1999 and!q[8]) MessageBox(__null,__TEXT("您已抽奖 2000 次，奖励 725 积分！\n赠送印鸽视频 2 显示网址：https://q01.yinge.cc/resource/01/2021/11/09/2c771bfb-d2d2-4d40-bb70-d4a93a0bab66.mp4（短网址：https://985.so/brr6j）"),"抽奖",MB_OK),fj+=725,q[8]=true;
    if(h>2499 and!q[9]) MessageBox(__null,__TEXT("您已抽奖 2500 次，奖励 750 积分！"),"抽奖",MB_OK),fj+=750,q[9]=true;
	if(h>2999 and!q[10]) MessageBox(__null,__TEXT("您已抽奖 3000 次，奖励 775 积分！"),"抽奖",MB_OK),fj+=775,q[10]=true;
    if(h>3499 and!q[11]) MessageBox(__null,__TEXT("您已抽奖 3500 次，奖励 800 积分！"),"抽奖",MB_OK),fj+=800,q[11]=true;
    if(h>3999 and!q[12]) MessageBox(__null,__TEXT("您已抽奖 4000 次，奖励 810 积分！\n赠送短网址统计：https://www.985.so/tj.html，输入“https://985.so/br2tf”"),"抽奖",MB_OK),fj+=810,q[12]=true;
    if(h>4499 and!q[13]) MessageBox(__null,__TEXT("您已抽奖 4500 次，奖励 820 积分！"),"抽奖",MB_OK),fj+=820,q[13]=true;
    if(h>4999 and!q[14]) MessageBox(__null,__TEXT("您已抽奖 5000 次，奖励 840 积分！\n赠送印鸽网址：https://www.songzhaopian.com/（短网址 https://985.so/brrfc）"),"抽奖",MB_OK),fj+=840,q[14]=true;
    if(h>5499 and!q[15]) MessageBox(__null,__TEXT("您已抽奖 5500 次，奖励 880 积分！"),"抽奖",MB_OK),fj+=880,q[15]=true;
    if(h>5999 and!q[16]) MessageBox(__null,__TEXT("您已抽奖 6000 次，奖励 890 积分！\n赠送闹钟显示网址：https://www.naozhong.net/（短网址：https://985.so/brwns）"),"抽奖",MB_OK),fj+=890,q[16]=true;
    if(h>6499 and!q[17]) MessageBox(__null,__TEXT("您已抽奖 6500 次，奖励 900 积分！"),"抽奖",MB_OK),fj+=900,q[17]=true;
    if(h>6999 and!q[18]) MessageBox(__null,__TEXT("您已抽奖 7000 次，奖励 915 积分！"),"抽奖",MB_OK),fj+=915,q[18]=true;
    if(h>7499 and!q[19]) MessageBox(__null,__TEXT("您已抽奖 7500 次，奖励 930 积分！"),"抽奖",MB_OK),fj+=930,q[19]=true;
    if(h>7999 and!q[20]) MessageBox(__null,__TEXT("您已抽奖 8000 次，奖励 940 积分！\n赠送抽奖 cpp 文件密码：6079（文件大小 13.02 KB 共 13335 字节）"),"抽奖",MB_OK),fj+=940,q[20]=true;
    if(h>8499 and!q[21]) MessageBox(__null,__TEXT("您已抽奖 8500 次，奖励 950 积分！"),"抽奖",MB_OK),fj+=950,q[21]=true;
    if(h>8999 and!q[22]) MessageBox(__null,__TEXT("您已抽奖 9000 次，奖励 965 积分！\n赠送 C++ 基础二维码（二维码刷新即失效）网址：http://zuoye.free.fr/qr/?m=2&e=H&p=7&url=http://zuoye.free.fr/files/C++%20v1.zip（短网址 https://985.so/brrvs）"),"抽奖",MB_OK),fj+=965,q[22]=true;
    if(h>9499 and!q[23]) MessageBox(__null,__TEXT("您已抽奖 9500 次，奖励 980 积分！"),"抽奖",MB_OK),fj+=980,q[23]=true;
    if(h>9999 and!q[24]) MessageBox(__null,__TEXT("您已抽奖 10000 次，奖励 1000 积分！\n赠送 C++ 基础网址（文件大小 8098516 字节 共 7.72 MB）：http://zuoye.free.fr/files/C++%20v1.zip0/（短网址 https://985.so/brr69）"),"抽奖",MB_OK),fj+=1000,q[24]=true;
	return;
}
void wt(){
	c(242);
	for(i=0;i<6;i++){
		cout<<"正在准备初始化......";
		for(long long j=0;j<i;j++) cout<<".";
		puts("");
		for(long long k=0;k<=i;k++) cout<<"▇▇▇▇";
		Sleep(100),system("cls");
	}
	for(i=0;i<22;i++){
		for(long long j=1;j<52;j++){
			srand((long long)time(__null));
			puts("正在识别程序......");
			long long ny=0;
			for(long long k=0;k<=i;k++) cout<<"▇▇",ny+=2;
			puts("");
			for(long long k=0;k<ny-2;k++) cout<<" ";
			cout<<wg[i]<<"%"<<b  endl<<"正在运行初始化项目第 "<<wd[i]<<" 个（共 4 个）："<<gw[i]<<"("<<j-((long long)(j==51))<<"%)";
			long long wm=rm(1,3);
			Sleep(wm),cout<<endl<<"时间："<<wm,system("cls");
		}
		if(!vp) cout<<endl<<endl,e("【广告】网站短网址，1 年 1 元    https://xumengxing123.github.io/d.html（短网址：https://985.so/brr6f）");
		Sleep(225),system("cls");
	}
	cout<<"识别成功！",Sleep(525),system("cls");
	return;
}
int main(){
	c(240),system("cls"),wt(),d();
	if(MessageBox(__null,__TEXT("抽奖须知\n1.无需关闭窗口，如需关闭请按 P；\n2.充值提现请联系人工；\n3.VIP 抽奖会增加积分；\n4.若连续 1 天未抽奖，VIP 自动失效。\n\n帮助：点击“确定”即视为同意以上须知，点击“取消”程序就会结束！"),"抽奖",MB_OKCANCEL|MB_ICONASTERISK|MB_HELP)==IDCANCEL){
		c(240);
		return 0;
	}
	while(z!='P'and z!='p'){
    	c(240),system("cls"),ey(),c(252);
		if(k) g(o+",欢迎你！  D-关于");
    	else g("A-登录  D-关于"); 
		c(243),e("抽奖"),puts(""),p(""),c(242);
		if(!k) printf("您现在有 --.-- 元和 -- 积分≈--.-- 元，欠费 --.-- 元，已抽奖 -- 次，(??) VIP 会员");
		else printf("您现在有 %.2f 元和 %.0f 积分≈%.2f 元，欠费 %.2f 元，已抽奖 %d 次，%s VIP 会员",v,fj,fj/1000,qf,h,(vp?"是":"不是"));
		cout<<endl<<endl,c(240),puts("                  _______________________________________________"),puts("                 |    手气不好   |               |               |"),puts("                 |    下次再来   |    0.1 元     |     15 积分   |"),puts("                 |_______________|_______________|_______________|"),puts("                 |               |  0.02 元 1 次 |               |"),puts("                 |    20 积分    |按 B 键开始抽奖|     30 积分   |"),puts("                 |_______________|_______________|_______________|"),puts("                 |               |               |               |"),puts("                 |   -0.11 元    |   40 积分     |    -0.11 元   |"),puts("                 |_______________|_______________|_______________|"),c(252),cout<<endl<<endl<<"                          通知    请勿关闭窗口！如需退出请按 P";
		if(!vp) cout<<endl<<endl,e("【广告】来印鸽，千万好礼 0 元领    https://xumengxing123.github.io/d/yg8Ef5/"),e("印鸽短网址：https://985.so/brwn8");
		c(240),z=getch();
		if((z=='a'or z=='A')and!k) l();
		else if(k and(z=='b'or z=='B')){
			srand((long long)time(__null));
			if(v>=0.02) v-=0.02;
			else if(v>0) qf+=(0.02-v),v=0;
			else if(fj==0) qf+=0.02;
			else fj-=20;
			long long tn=rm(0,8);
			if(tn==0) MessageBox(__null,__TEXT("没抽到哦！"),"抽奖",MB_ICONASTERISK);
			else{
				if(tn==1){
					MessageBox(__null,__TEXT("恭喜抽到 0.1 元！"),"抽奖",MB_ICONASTERISK);
					if(qf>=0.1) qf-=0.1;
					else if(qf>0) v+=(0.1-qf),qf=0;
					else v+=0.1;
				}
				else if(tn==2) MessageBox(__null,__TEXT("抽到 15 积分！"),"抽奖",MB_ICONASTERISK),fj+=(15+(vp?15:0));
				else if(tn==3) MessageBox(__null,__TEXT("抽到 20 积分！"),"抽奖",MB_ICONASTERISK),fj+=(20+(vp?10:0));
				else if(tn==4) MessageBox(__null,__TEXT("抽到 30 积分！"),"抽奖",MB_ICONASTERISK),fj+=(30+(vp?5:0));
				else if(tn==5 or tn==7){
					MessageBox(__null,__TEXT("您的手气不好，损失了 0.11 元！"),"抽奖",MB_ICONASTERISK);
					if(v>=0.11) v-=0.11;
					else if(v>0) qf+=(0.11-v),v=0;
					else qf+=0.11;
				}
				else if(tn==6) MessageBox(__null,__TEXT("抽到 40 积分！"),"抽奖",MB_ICONASTERISK),fj+=(40+((bool)(vp)));
			}
			h++;
			ofstream fout("moneydata.cjdata");
			fout<<v<<endl<<fj<<endl<<qf<<endl<<h<<endl<<vp,fout.close();
		}
		else if((z=='b'or z=='B')and!k) MessageBox(__null,__TEXT("请登录后再操作哦！"),"抽奖",MB_ICONSTOP);
		else if(z=='d'or z=='D') b();
		else if(z=='#') ad();
	}
	ofstream fout("moneydata.cjdata");
	fout<<v<<endl<<fj<<endl<<qf<<endl<<h<<endl<<vp,fout.close();
    return 0;
}
