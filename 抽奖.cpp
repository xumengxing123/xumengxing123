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
    SetConsoleTitle("�齱");
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
	c(240),system("cls"),c(243),e("������֤��"),ya=false,cout<<endl<<endl;
	long long lh=rm(0,1);
	string yw=((lh==1)?(pn()):(np(rm(0,1),rm(1,10)))),hg;
	e("Ŀ����֤�룺"+yw),cout<<endl<<endl<<endl<<endl,p("��������֤�룺"),cin>>hg;
	if(yw==hg) MessageBox(__null,__TEXT("���������֤����ȷ��"),"�齱",MB_ICONASTERISK),ya=true;
	return;
}
void r(){
	c(240),system("cls");
	ifstream fin("userdata.cjdata");
	c(252),e("��¼/ע��"),cout<<endl<<endl<<endl<<endl,c(240),e("A-��¼"),cout<<endl<<endl<<endl<<endl,c(243),e("û���˺ţ�B-ȥע��"),c(240);
	z=getch();
	if(z=='A'or z=='a'){
		fin>>o>>s;
		if(o=="") MessageBox(__null,__TEXT("�û������ڣ�����ע�ᣡ"),"�齱",MB_ICONSTOP),l();
		else{
			c(240),system("cls"),c(243),e("��¼"),cout<<endl<<endl<<endl<<endl<<"                                   �û�����"<<o<<endl<<endl,p("���������룺"),cin>>m;
			if(m==s){
				MessageBox(__null,__TEXT("�齱ϵͳ��⵽������ͨ���鿴�ļ��ķ�ʽ��ͼ��ȡ�˺����룬ϣ������֮���ʱ��淶�Լ�����Ϊ����ȷ�ĵ�¼���۳� 0.05 Ԫ����¼ʧ�ܣ� "),"�齱",MB_ICONASTERISK);
				if(v>=0.05) v-=0.05;
				else if(v>0) qf+=(0.05-v),v=0;
				else qf+=0.05;
			}
			else if(m!=mj(s)) MessageBox(__null,__TEXT("������󣬵�¼ʧ�ܣ�"),"�齱",MB_ICONSTOP),l();
			else{
				ip(),c(240),system("cls");
				if(!ya) MessageBox(__null,__TEXT("��֤����󣬵�¼ʧ�ܣ�"),"�齱",MB_ICONSTOP),l();
				else MessageBox(__null,__TEXT("��¼�ɹ���"),"�齱",MB_ICONASTERISK),k=true;
			}
		}
	}
	else if(z=='B'or z=='b'){
		string gs; 
		c(240),system("cls"),c(252),p("�����û�����"),cin>>n,c(240),system("cls"),c(252),p("�������룺"),cin>>t,p("������һ������"),cin>>gs;
		if(t!=gs) MessageBox(__null,__TEXT("�������벻һ�£�ע��ʧ�ܣ�"),"�齱",MB_ICONSTOP),l();
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
	MessageBox(__null,__TEXT("����\n�齱 1.8.0.2\n������Դ�����ص�ַΪ http://zuoye.free.fr/files/�齱.zip/������ַ https://985.so/brrvk��\n���õ�ַ 1 Ϊ https://tntfiles.com/te3m7dboyf/zip������ַ https://985.so/brr1m��\n���õ�ַ 2 Ϊ https://files.catbox.moe/z5vzpu.zip���Ƽ�������ַ https://985.so/brr1b��\n�ٷ�������ַΪ https://xumengxing123.github.io/d/uQw5j0/���Ƽ�������ַ https://985.so/br2tf������ 4762��\n�nCopyright Don't distribute!"),"�齱",MB_ICONASTERISK);
	return;
}
void ad(){
	c(240),system("cls"),e("�����"),cout<<endl<<endl<<endl<<endl,e("A-����          B-VIP"),z=getch();
	if(z=='a'or z=='A'){
		if(!k) MessageBox(__null,__TEXT("���¼���ٲ���Ŷ��"),"�齱",MB_ICONSTOP),z='?';
		c(240),system("cls"),c(252),e("����"),cout<<endl<<endl<<endl<<endl,e("C-ȫ������");
		if(!vp) cout<<endl<<endl,e("����ʾ����ϵ�˹�   [email]   xumengxing123@163.com");
		z=getch();
		if(z=='c'or z=='C'){
			v=0,MessageBox(__null,__TEXT("���ѳɹ����֣�"),"�齱",MB_OK);
			ofstream fout("moneydata.cjdata");
			fout<<v<<endl<<fj<<endl<<qf<<endl<<h<<endl<<vp,fout.close();
		}
	}
	else if(z=='b'or z=='B'){
		if(!k) MessageBox(__null,__TEXT("���¼���ٲ���Ŷ��"),"�齱",MB_ICONSTOP),z='?';
		c(240),system("cls"),c(252),e("VIP"),cout<<endl<<endl<<endl<<endl,e("D-��ͨ      E-ȡ��"),z=getch();
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
	if(h>99 and!q[1]) MessageBox(__null,__TEXT("���ѳ齱 100 �Σ����� 50 ���֣�\n���ͳ齱 cpp �ļ�����Ҫ���룬����齱 8000 �ι������ļ���С 13.02 KB �� 13335 �ֽڣ���http://fannao.free.fr/down.php/18df4a9c07724206720524af0088642d.cpp/"),"�齱",MB_OK),fj+=50,q[1]=true;
    if(h>199 and!q[2]) MessageBox(__null,__TEXT("���ѳ齱 200 �Σ����� 100 ���֣�\n��������� HTML ���룺https://xumengxing123.github.io/����� HTML.txt"),"�齱",MB_OK),fj+=100,q[2]=true;
    if(h>299 and!q[3]) MessageBox(__null,__TEXT("���ѳ齱 300 �Σ����� 200 ���֣�"),"�齱",MB_OK),fj+=200,q[3]=true;
    if(h>399 and!q[4]) MessageBox(__null,__TEXT("���ѳ齱 400 �Σ����� 400 ���֣�"),"�齱",MB_OK),fj+=400,q[4]=true;
	if(h>499 and!q[5]) MessageBox(__null,__TEXT("���ѳ齱 500 �Σ����� 500 ���֣�\n����ʱ����ʾ��ַ��https://xumengxing123.github.io/d/H9e38g/"),"�齱",MB_OK),fj+=500,q[5]=true;
    if(h>999 and!q[6]) MessageBox(__null,__TEXT("���ѳ齱 1000 �Σ����� 650 ���֣�\n����ӡ����Ƶ 1 ��ʾ��ַ��https://q01.yinge.cc/resource/2021/11/16/87dce669-6eb7-48a2-be77-efcb7d029097.mp4������ַ��https://985.so/brr6e��"),"�齱",MB_OK),fj+=650,q[6]=true;
    if(h>1499 and!q[7]) MessageBox(__null,__TEXT("���ѳ齱 1500 �Σ����� 700 ���֣�"),"�齱",MB_OK),fj+=700,q[7]=true;
    if(h>1999 and!q[8]) MessageBox(__null,__TEXT("���ѳ齱 2000 �Σ����� 725 ���֣�\n����ӡ����Ƶ 2 ��ʾ��ַ��https://q01.yinge.cc/resource/01/2021/11/09/2c771bfb-d2d2-4d40-bb70-d4a93a0bab66.mp4������ַ��https://985.so/brr6j��"),"�齱",MB_OK),fj+=725,q[8]=true;
    if(h>2499 and!q[9]) MessageBox(__null,__TEXT("���ѳ齱 2500 �Σ����� 750 ���֣�"),"�齱",MB_OK),fj+=750,q[9]=true;
	if(h>2999 and!q[10]) MessageBox(__null,__TEXT("���ѳ齱 3000 �Σ����� 775 ���֣�"),"�齱",MB_OK),fj+=775,q[10]=true;
    if(h>3499 and!q[11]) MessageBox(__null,__TEXT("���ѳ齱 3500 �Σ����� 800 ���֣�"),"�齱",MB_OK),fj+=800,q[11]=true;
    if(h>3999 and!q[12]) MessageBox(__null,__TEXT("���ѳ齱 4000 �Σ����� 810 ���֣�\n���Ͷ���ַͳ�ƣ�https://www.985.so/tj.html�����롰https://985.so/br2tf��"),"�齱",MB_OK),fj+=810,q[12]=true;
    if(h>4499 and!q[13]) MessageBox(__null,__TEXT("���ѳ齱 4500 �Σ����� 820 ���֣�"),"�齱",MB_OK),fj+=820,q[13]=true;
    if(h>4999 and!q[14]) MessageBox(__null,__TEXT("���ѳ齱 5000 �Σ����� 840 ���֣�\n����ӡ����ַ��https://www.songzhaopian.com/������ַ https://985.so/brrfc��"),"�齱",MB_OK),fj+=840,q[14]=true;
    if(h>5499 and!q[15]) MessageBox(__null,__TEXT("���ѳ齱 5500 �Σ����� 880 ���֣�"),"�齱",MB_OK),fj+=880,q[15]=true;
    if(h>5999 and!q[16]) MessageBox(__null,__TEXT("���ѳ齱 6000 �Σ����� 890 ���֣�\n����������ʾ��ַ��https://www.naozhong.net/������ַ��https://985.so/brwns��"),"�齱",MB_OK),fj+=890,q[16]=true;
    if(h>6499 and!q[17]) MessageBox(__null,__TEXT("���ѳ齱 6500 �Σ����� 900 ���֣�"),"�齱",MB_OK),fj+=900,q[17]=true;
    if(h>6999 and!q[18]) MessageBox(__null,__TEXT("���ѳ齱 7000 �Σ����� 915 ���֣�"),"�齱",MB_OK),fj+=915,q[18]=true;
    if(h>7499 and!q[19]) MessageBox(__null,__TEXT("���ѳ齱 7500 �Σ����� 930 ���֣�"),"�齱",MB_OK),fj+=930,q[19]=true;
    if(h>7999 and!q[20]) MessageBox(__null,__TEXT("���ѳ齱 8000 �Σ����� 940 ���֣�\n���ͳ齱 cpp �ļ����룺6079���ļ���С 13.02 KB �� 13335 �ֽڣ�"),"�齱",MB_OK),fj+=940,q[20]=true;
    if(h>8499 and!q[21]) MessageBox(__null,__TEXT("���ѳ齱 8500 �Σ����� 950 ���֣�"),"�齱",MB_OK),fj+=950,q[21]=true;
    if(h>8999 and!q[22]) MessageBox(__null,__TEXT("���ѳ齱 9000 �Σ����� 965 ���֣�\n���� C++ ������ά�루��ά��ˢ�¼�ʧЧ����ַ��http://zuoye.free.fr/qr/?m=2&e=H&p=7&url=http://zuoye.free.fr/files/C++%20v1.zip������ַ https://985.so/brrvs��"),"�齱",MB_OK),fj+=965,q[22]=true;
    if(h>9499 and!q[23]) MessageBox(__null,__TEXT("���ѳ齱 9500 �Σ����� 980 ���֣�"),"�齱",MB_OK),fj+=980,q[23]=true;
    if(h>9999 and!q[24]) MessageBox(__null,__TEXT("���ѳ齱 10000 �Σ����� 1000 ���֣�\n���� C++ ������ַ���ļ���С 8098516 �ֽ� �� 7.72 MB����http://zuoye.free.fr/files/C++%20v1.zip0/������ַ https://985.so/brr69��"),"�齱",MB_OK),fj+=1000,q[24]=true;
	return;
}
void wt(){
	c(242);
	for(i=0;i<6;i++){
		cout<<"����׼����ʼ��......";
		for(long long j=0;j<i;j++) cout<<".";
		puts("");
		for(long long k=0;k<=i;k++) cout<<"�~�~�~�~";
		Sleep(100),system("cls");
	}
	for(i=0;i<22;i++){
		for(long long j=1;j<52;j++){
			srand((long long)time(__null));
			puts("����ʶ�����......");
			long long ny=0;
			for(long long k=0;k<=i;k++) cout<<"�~�~",ny+=2;
			puts("");
			for(long long k=0;k<ny-2;k++) cout<<" ";
			cout<<wg[i]<<"%"<<b  endl<<"�������г�ʼ����Ŀ�� "<<wd[i]<<" ������ 4 ������"<<gw[i]<<"("<<j-((long long)(j==51))<<"%)";
			long long wm=rm(1,3);
			Sleep(wm),cout<<endl<<"ʱ�䣺"<<wm,system("cls");
		}
		if(!vp) cout<<endl<<endl,e("����桿��վ����ַ��1 �� 1 Ԫ    https://xumengxing123.github.io/d.html������ַ��https://985.so/brr6f��");
		Sleep(225),system("cls");
	}
	cout<<"ʶ��ɹ���",Sleep(525),system("cls");
	return;
}
int main(){
	c(240),system("cls"),wt(),d();
	if(MessageBox(__null,__TEXT("�齱��֪\n1.����رմ��ڣ�����ر��밴 P��\n2.��ֵ��������ϵ�˹���\n3.VIP �齱�����ӻ��֣�\n4.������ 1 ��δ�齱��VIP �Զ�ʧЧ��\n\n�����������ȷ��������Ϊͬ��������֪�������ȡ��������ͻ������"),"�齱",MB_OKCANCEL|MB_ICONASTERISK|MB_HELP)==IDCANCEL){
		c(240);
		return 0;
	}
	while(z!='P'and z!='p'){
    	c(240),system("cls"),ey(),c(252);
		if(k) g(o+",��ӭ�㣡  D-����");
    	else g("A-��¼  D-����"); 
		c(243),e("�齱"),puts(""),p(""),c(242);
		if(!k) printf("�������� --.-- Ԫ�� -- ���֡�--.-- Ԫ��Ƿ�� --.-- Ԫ���ѳ齱 -- �Σ�(??) VIP ��Ա");
		else printf("�������� %.2f Ԫ�� %.0f ���֡�%.2f Ԫ��Ƿ�� %.2f Ԫ���ѳ齱 %d �Σ�%s VIP ��Ա",v,fj,fj/1000,qf,h,(vp?"��":"����"));
		cout<<endl<<endl,c(240),puts("                  _______________________________________________"),puts("                 |    ��������   |               |               |"),puts("                 |    �´�����   |    0.1 Ԫ     |     15 ����   |"),puts("                 |_______________|_______________|_______________|"),puts("                 |               |  0.02 Ԫ 1 �� |               |"),puts("                 |    20 ����    |�� B ����ʼ�齱|     30 ����   |"),puts("                 |_______________|_______________|_______________|"),puts("                 |               |               |               |"),puts("                 |   -0.11 Ԫ    |   40 ����     |    -0.11 Ԫ   |"),puts("                 |_______________|_______________|_______________|"),c(252),cout<<endl<<endl<<"                          ֪ͨ    ����رմ��ڣ������˳��밴 P";
		if(!vp) cout<<endl<<endl,e("����桿��ӡ�룬ǧ����� 0 Ԫ��    https://xumengxing123.github.io/d/yg8Ef5/"),e("ӡ�����ַ��https://985.so/brwn8");
		c(240),z=getch();
		if((z=='a'or z=='A')and!k) l();
		else if(k and(z=='b'or z=='B')){
			srand((long long)time(__null));
			if(v>=0.02) v-=0.02;
			else if(v>0) qf+=(0.02-v),v=0;
			else if(fj==0) qf+=0.02;
			else fj-=20;
			long long tn=rm(0,8);
			if(tn==0) MessageBox(__null,__TEXT("û�鵽Ŷ��"),"�齱",MB_ICONASTERISK);
			else{
				if(tn==1){
					MessageBox(__null,__TEXT("��ϲ�鵽 0.1 Ԫ��"),"�齱",MB_ICONASTERISK);
					if(qf>=0.1) qf-=0.1;
					else if(qf>0) v+=(0.1-qf),qf=0;
					else v+=0.1;
				}
				else if(tn==2) MessageBox(__null,__TEXT("�鵽 15 ���֣�"),"�齱",MB_ICONASTERISK),fj+=(15+(vp?15:0));
				else if(tn==3) MessageBox(__null,__TEXT("�鵽 20 ���֣�"),"�齱",MB_ICONASTERISK),fj+=(20+(vp?10:0));
				else if(tn==4) MessageBox(__null,__TEXT("�鵽 30 ���֣�"),"�齱",MB_ICONASTERISK),fj+=(30+(vp?5:0));
				else if(tn==5 or tn==7){
					MessageBox(__null,__TEXT("�����������ã���ʧ�� 0.11 Ԫ��"),"�齱",MB_ICONASTERISK);
					if(v>=0.11) v-=0.11;
					else if(v>0) qf+=(0.11-v),v=0;
					else qf+=0.11;
				}
				else if(tn==6) MessageBox(__null,__TEXT("�鵽 40 ���֣�"),"�齱",MB_ICONASTERISK),fj+=(40+((bool)(vp)));
			}
			h++;
			ofstream fout("moneydata.cjdata");
			fout<<v<<endl<<fj<<endl<<qf<<endl<<h<<endl<<vp,fout.close();
		}
		else if((z=='b'or z=='B')and!k) MessageBox(__null,__TEXT("���¼���ٲ���Ŷ��"),"�齱",MB_ICONSTOP);
		else if(z=='d'or z=='D') b();
		else if(z=='#') ad();
	}
	ofstream fout("moneydata.cjdata");
	fout<<v<<endl<<fj<<endl<<qf<<endl<<h<<endl<<vp,fout.close();
    return 0;
}
