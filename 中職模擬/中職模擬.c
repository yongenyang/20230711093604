#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<math.h>
#define MAX_LINE_SIZE 1000
void color(unsigned short color_index){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_index);
}
int p=0,q=-1;
int x,ateam[10],ayear[10],aplayer[10],hteam[10],hyear[10],hplayer[10],playerfound=0;
char nowbatting[50]="",ab1[50]="",ab2[50]="",ab3[50]="",ab4[50]="",ab5[50]="",ab6[50]="",ab7[50]="",ab8[50]="",ab9[50]="",hb1[50]="",hb2[50]="",hb3[50]="",hb4[50]="",hb5[50]="",hb6[50]="",hb7[50]="",hb8[50]="",hb9[50]="",homerun[1000]="",hrdetail[5]="";
int gamemode=1,aab=1,hab=1,out=0,inning=1,ascore=0,hscore=0,getscore=0,b1=0,b2=0,b3=0,gameset=0,inningscore[25],aruns=0,hruns=0,ahits=0,hhits=0,abb=0,hbb=0;
int a,b,c,d,e,f,g,h,i,all,r,j,dpr,k,sfr,l,m,gor,aor;
int main(){
	FILE *fp;
	char line[MAX_LINE_SIZE];
	char *result = NULL;
	fp=fopen("90UL.csv","r");
	char *UL90[]={"吳思賢","湯尼","王傳家","張文宗","許\聖杰","阿洛瑪"};
	int dataUL90[6][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataUL90[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("08UL.csv","r");
	char *UL08[]={"莊景賀"};
	int dataUL08[1][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataUL08[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("90BE.csv","r");
	char *BE90[]={"張民諺","王俊郎","郭一峰","陳瑞昌","吳俊達","洪一中","查維","林易增","吳復連","黃廣琪","克魯茲","陳義信","帝波","陳琦豐","努那","路易士","周惠盛","李文傳","王光輝","葛雷諾","江仲豪","吳英偉","李居明","吳聲武","姚百川","陳彥成",
	"陳懷山","彭裕國","林百亨","巴比諾","愛迪生","董永興","雷克","強尼","邱麒璋","吳俊億","祈美力","德伍","奧力偉","戴于程","陳建村","陳瑞振","陳谷源","洪德芳","艾德","大德","豪威","吳柏勳","約瑟","朋馳","林明憲","許\皓銘",
	"張士凱","陳俊義","馮勝賢","蒲慶哲","王金勇","許\閔嵐","李志傑","彭政閔","陳致遠","鄭漢禮","朱鴻森","彭政欣","林馴偉","陳智弘","田顯明","東尼","阿布多","黃志祥","霸茲","陳弘桂","黃泰龍","陳致鵬"};
	int dataBE90[74][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataBE90[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("14CB.csv","r");
	char *CB14[]={"林威助","羅培茲","耐克","周聖訓","佩卓","陳子鴻"};
	int dataCB14[6][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataCB14[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("03FA.csv","r");
	char *FA03[]={"王俊文","葉成龍","蔡昱詳","邱新勇","陳志明","李以寶","許\堯淵","蔡士凡","歐斯納","馬丁"};
	int dataFA03[10][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataFA03[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("04LB.csv","r");
	char *LB04[]={"陳峰民","陳昭穎","潘忠韋","郭昌庭","呂俊雄","黃龍義","林建宏","石志偉","艾弗勒斯","蔡建偉","曾豪駒","沈亞倫","許\傳誠","羅德里茲","王建強","黃小偉","石彥緯","陳金鋒","貝茲","卡猛士","剛力士","霸龍","霸漢","戈登","雷恩斯","酷力士",
	"余進德"};
	int dataLB04[27][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataLB04[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("11LM.csv","r");
	char *LM11[]={"洪宸宇","猛德拉","張煒謙"};
	int dataLM11[3][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataLM11[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("20RM.csv","r");
	char *RM20[]={"董子浩"};
	int dataRM20[1][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataRM20[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("93JB.csv","r");
	char *JB93[]={"希斯","陳威成","張耀騰","金子勝裕","黃文明","凱文","白昆弘","張天麟","邦尼","劉炳宣","羅強","詹姆士","朴仁球","立花義家"};
	int dataJB93[14][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataJB93[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("96TSB.csv","r");
	char *SB96T[]={"開農"};
	int dataSB96T[1][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataSB96T[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("96BSB.csv","r");
	char *SB96B[]={"張建勳","黃忠義","吳哲宗","張協進","張家豪","麥海奇","鐵布衫","帝多","神真水","陳宗男","歐峻男","奇威","怪力男","安收多","陳昭銘","葉高立","葉泳麟","王崇耀","劉忠岳","羅松永","陳宗甫","羅尼","鄭兆行","曾華偉","張家浩","高健龍",
	"施昭同","曾揚岳","安生","邱敏舜","楊進雄","張建銘","王世驊","許\國隆","鄭達鴻","余賢明","陳志偉","蘇建榮","凡托","古茲曼","陳俊和","葉君璋","張泰山","威納斯"};
	int dataSB96B[44][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataSB96B[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("13ER.csv","r");
	char *ER13[]={"曼尼","李那瑞"};
	int dataER13[2][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataER13[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("17FG.csv","r");
	char *FG17[]={"蔡友達"};
	int dataFG17[1][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataFG17[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("90WD.csv","r");
	char *WD90[]={"麥克","呂明賜","郭建霖","吉彌","羅世幸","蕭浚濠","孫昭立","黃煚隆","李安熙","林光中","大帝士","陽介仁","洪正欽","林俊賢","史塔克","黃平洋","林光宏","黃清文","馬斯","法蘭克","凱斯","威勒","席古拉","艾勃","坎沙諾","麥雷諾",
	"湯興佐","鈴木俊雄","廖述仁","陳金茂","大威","鄭文賢","陳炳男","陳大順","蔡昆祥","喬坎那","武建州","李明勳","馮文龍","多力士","克拉克","任志偉","蕭雲東","布魯諾","羅貝托","羅培茲","巴威特","盧詩清","勃朗"};
	int dataWD90[49][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataWD90[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("03MS.csv","r");
	char *MS03[]={"許\志豪","柯良宗","陳世峰","林義翔","張琮貴","陳柏勳","林建良","鄞明村","陳保宏","湯登凱","野野垣武","亞士達","卡巴傑洛"};
	int dataMS03[13][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataMS03[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("04MC.csv","r");
	char *MC04[]={"豐偌暉","謝佳賢","鄭景益","丘昌榮","黃高俊","吳承翰","楊睿智","威力斯","米西亞","汪天祥","納瓦","鄧蒔陽","魔拉","賈西亞","陳元甲","陳克帆","施翔凱","桑坦那","郭銘仁","馬力歐","高瑋","賈西亞","柏頓","湯姆","考菲"};
	int dataMC04[25][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataMC04[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("08DT.csv","r");
	char *DT08[]={"胡仁偉","艾力士","拿破崙","力歐"};
	int dataDT08[4][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataDT08[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("90MT.csv","r");
	char *MT90[]={"沈俊忠","涂\忠男","黃世明","林正偉"};
	int dataMT90[4][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataMT90[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("93CE.csv","r");
	char *CE93[]={"陳慶國","楊章鑫","王光熙","曾貴章","吳俊賢","祕雷","多情","翔鷹","路易","郭建成","廖敏雄","李聰富","陳執信","尤伸評","古勝吉","查力士","謝奇勳","美樂黑","愛快","辣銳","喬治","褚志遠","阿諾","馬丁","張正憲","雷蒙",
	"丹尼歐","伯納德","飛力","千代丸亮彥","威格","傑恩","卡瑞拉","魯賓","王保文","趙子傑","卜南波","黃俊傑","張瑋"};
	int dataCE93[39][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataCE93[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("UL2016.csv","r");
	char *ul2016[]={"郭峻偉","劉育辰","吳國豪","郭阜林","唐肇廷","黃恩賜","羅國龍","周廣勝","陳鏞基","郭岱琦","蔡奕玄","鄭鎧文","林志賢","蘇智傑","鄧志偉","高志綱","潘彥廷","飛力士","陳傑憲","買嘉儀","潘武雄","劉芙豪","方昶詠","朱元勤","薛惟中","高國慶","林志祥"};
	int dataul2016[27][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataul2016[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("CB2016.csv","r");
	char *cb2016[]={"陳子豪","潘萣翔","張正偉","張志豪","王威晨","蔣智賢","王勝偉","周思齊","彭政閔","林威助","周聖訓","黃鈞聲","林明杰","陳江和","林智勝","詹子賢","王峻杰","林王啟瑋","陳皓然","曾陶鎔","吳東融","張志強","許\基宏","鄭達鴻","陳家駒","蘇緯達"};
	int datacb2016[26][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datacb2016[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("UL2017.csv","r");
	char *ul2017[]={"郭峻偉","吳國豪","郭阜林","唐肇廷","黃恩賜","羅國龍","周廣勝","陳鏞基","徐政斌","楊家維","陳傑憲","鄧志偉","鄭鎧文","林祐樂","蘇智傑","高志綱","潘彥廷","蔡奕玄","買嘉儀","潘武雄","劉芙豪","方昶詠","莊駿凱","朱元勤","吳桀睿","陳重羽","陳重廷","高國慶","林志祥","薛惟中"};
	int dataul2017[30][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataul2017[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("CB2017.csv","r");
	char *cb2017[]={"陳子豪","潘萣翔","陳文杰","張正偉","張志豪","王威晨","蔣智賢","林明杰","王勝偉","周思齊","彭政閔","林威助","黃鈞聲","陳江和","林智勝","詹子賢","林書逸","陳皓然","曾陶鎔","吳東融","張志強","陳子鴻","許\基宏","鄭達鴻","陳家駒","蘇緯達","岳東華"};
	int datacb2017[27][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datacb2017[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("LM2017.csv","r");
	char *lm2017[]={"葉竹軒","林承飛","郭永維","詹智堯","王柏融","林泓育","郭嚴文","陽耀勳","楊岱均","黃浩然","董子浩","陳俊秀","林立","馮健庭","陳雁風","鍾承祐","廖健富","劉時豪","余德龍","嚴宏鈞","林智平","朱育賢","張閔勛","藍寅倫","紀品宏","梁家榮","林政億"};
	int datalm2017[27][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datalm2017[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("FG2017.csv","r");
	char *fg2017[]={"林哲瑄","方克偉","申皓瑋","張淯虎","林益全","胡金龍","黃智培","林琨笙","張冠廷","李宗賢","陳凱倫","高國輝","陽冠威","高孝儀","楊承駿","范國宸","吳睿勝","張詠漢","于孟馗","林旺衛","林瑋恩","蔡友達","石翔宇","吳宗峻","林威廷","張建銘","陳品捷","高國麟"};
	int datafg2017[28][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datafg2017[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("UL2018.csv","r");
	char *ul2018[]={"吳國豪","郭阜林","唐肇廷","黃恩賜","羅國龍","陳鏞基","郭峻偉","楊家維","陳傑憲","鄧志偉","江亮緯","鄭鎧文","林祐樂","蘇智傑","高志綱","潘彥廷","蔡奕玄","買嘉儀","張偉聖","潘武雄","劉芙豪","張竣凱","方昶詠","莊駿凱","朱元勤","吳桀睿","陳重羽","陳重廷","高國慶","薛惟中"};
	int dataul2018[30][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataul2018[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("CB2018.csv","r");
	char *cb2018[]={"陳子豪","潘志芳","陳文杰","張志豪","王威晨","林明杰","陳偉漢","王勝偉","周思齊","彭政閔","黃鈞聲","黃稚峰","陳江和","林智勝","詹子賢","林書逸","王峻杰","曾陶鎔","吳東融","陳琥","張志強","許\基宏","吳明鴻","陳家駒","蘇緯達","岳東華"};
	int datacb2018[26][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datacb2018[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("LM2018.csv","r");
	char *lm2018[]={"葉竹軒","林承飛","郭永維","詹智堯","王柏融","林泓育","郭嚴文","陽耀勳","楊岱均","黃浩然","陳俊秀","林知譽","成晉","余德龍","林立","馮健庭","許\禹壕","鍾承祐","廖健富","劉時豪","嚴宏鈞","林智平","黃敬瑋","朱育賢","張閔勛","藍寅倫","梁家榮","陳晨威","林政億"};
	int datalm2018[29][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datalm2018[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("FG2018.csv","r");
	char *fg2018[]={"林哲瑄","方克偉","申皓瑋","林威廷","張正偉","林益全","胡金龍","林宥穎","李宗賢","陳凱倫","林旺衛","高國輝","高孝儀","蔣智賢","范國宸","于孟馗","王正棠","林瑋恩","蔡友達","石翔宇","吳宗峻","張建銘","張瑞麟","陳勤宗","林志洋","陳品捷","高國麟"};
	int datafg2018[27][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datafg2018[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("UL2019.csv","r");
	char *ul2019[]={"徐政斌","施冠宇","郭阜林","唐肇廷","黃恩賜","羅國龍","陳鏞基","郭峻偉","楊家維","陳傑憲","鄧志偉","江亮緯","鄭鎧文","林祐樂","蘇智傑","林勝傑","潘彥廷","柯育民","蔡奕玄","林祖傑","買嘉儀","張偉聖","潘武雄","方昶詠","莊駿凱","朱元勤","吳桀睿","林靖凱","陳重羽","陳重廷","姚雨翔","高國慶","林安可","薛种帷"};
	int dataul2019[34][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataul2019[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("CB2019.csv","r");
	char *cb2019[]={"陳子豪","潘志芳","陳文杰","張志豪","王威晨","林明杰","陳偉漢","王勝偉","周思齊","里迪","彭政閔","黃鈞聲","艾銳克","陳江和","林智勝","詹子賢","林書逸","曾陶鎔","吳東融","高宇杰","張志強","陳子鴻","許\基宏","江坤宇","蘇緯達","岳東華"};
	int datacb2019[26][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datacb2019[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("LM2019.csv","r");
	char *lm2019[]={"葉竹軒","林承飛","郭永維","詹智堯","林泓育","郭嚴文","陽耀勳","柏納帝那","陳俊秀","成晉","余德龍","林立","許\禹壕","邱丹","鍾承祐","廖健富","劉時豪","楊瑞承","林智平","黃敬瑋","朱育賢","張閔勛","藍寅倫","梁家榮","陳晨威"};
	int datalm2019[25][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datalm2019[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("FG2019.csv","r");
	char *fg2019[]={"林哲瑄","方克偉","申皓瑋","張正偉","石翔宇","林益全","胡金龍","林宥穎","李宗賢","楊晉豪","陳凱倫","高國輝","高孝儀","蔣智賢","范國宸","張詠漢","于孟馗","王正棠","蔡友達","林威廷","張瑞麟","林志洋","陳品捷","戴培峰","高國麟"};
	int datafg2019[25][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datafg2019[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("UL2020.csv","r");
	char *ul2020[]={"郭阜林","唐肇廷","黃恩賜","羅國龍","陳鏞基","邱智呈","郭峻偉","楊家維","陳傑憲","鄧志偉","江亮緯","鄭鎧文","林祐樂","蘇智傑","潘傑楷","蔡奕玄","林祖傑","羅暐捷","吳國豪","張偉聖","潘武雄","吳桀睿","林靖凱","陳重羽","陳重廷","高國慶","林安可","許\哲晏"};
	int dataul2020[28][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataul2020[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("CB2020.csv","r");
	char *cb2020[]={"陳子豪","林智勝","陳文杰","張志豪","王威晨","林明杰","王勝偉","周思齊","黃鈞聲","詹子賢","陳家駒","林書逸","吳東融","潘志芳","高宇杰","張志強","杜家明","許\基宏","江坤宇","岳政華","蘇緯達","岳東華"};
	int datacb2020[22][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datacb2020[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("RM2020.csv","r");
	char *rm2020[]={"陽耀勳","葉竹軒","梁家榮","林承飛","郭永維","詹智堯","林泓育","郭嚴文","陳俊秀","成晉","余德龍","林立","馮健庭","楊瑞承","邱丹","廖健富","劉時豪","嚴宏鈞","張閔勛","林智平","朱育賢","藍寅倫","馬傑森","陳晨威","林澤彬"};
	int datarm2020[25][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datarm2020[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("FG2020.csv","r");
	char *fg2020[]={"林哲瑄","蔣智賢","張正偉","石翔宇","方克偉","林益全","姚冠瑋","胡金龍","林宥穎","李宗賢","楊晉豪","陳凱倫","高國輝","申皓瑋","高孝儀","張冠廷","王正棠","范國宸","于森旭","林威廷","辛元旭","張進德","王詩聰","陳品捷","戴培峰","高國麟"};
	int datafg2020[26][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datafg2020[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("UL2021.csv","r");
	char *ul2021[]={"林子豪","施冠宇","郭阜林","唐肇廷","黃恩賜","羅國龍","李丞齡","許\哲晏","陳鏞基","郭峻偉","楊家維","陳傑憲","鄧志偉","江亮緯","鄭鎧文","林岱安","蘇智傑","林焌翰","潘傑楷","林祖傑","黃紹熙","羅暐捷","吳國豪","張偉聖","何恆佑","潘武雄","吳桀睿","林靖凱","陳重羽","陳重廷","姚雨翔","高國慶","林安可"};
	int dataul2021[33][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{dataul2021[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("CB2021.csv","r");
	char *cb2021[]={"陳子豪","李聖裕","陳文杰","張志豪","王威晨","林明杰","陳偉漢","王勝偉","周思齊","林智勝","黃鈞聲","曾頌恩","詹子賢","陳家駒","林書逸","林志綱","王政順","潘志芳","高宇杰","黃韋盛","張志強","杜家明","許\基宏","宋晟睿","江坤宇","岳政華","蘇緯達","岳東華"};
	int datacb2021[28][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datacb2021[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("RM2021.csv","r");
	char *rm2021[]={"陽耀勳","董子浩","梁家榮","林承飛","郭永維","詹智堯","林泓育","郭嚴文","蔡鎮宇","張閔勛","陳俊秀","成晉","余德龍","林立","馮健庭","許\禹壕","廖健富","嚴宏鈞","林智平","黃敬瑋","朱育賢","邱丹","藍寅倫","馬傑森","陳晨威","林澤彬"};
	int datarm2021[26][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datarm2021[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("FG2021.csv","r");
	char *fg2021[]={"林哲瑄","蔣智賢","張正偉","陳真","林益全","姚冠瑋","王苡丞","林宥穎","李宗賢","楊晉豪","陳凱倫","高國輝","申皓瑋","高孝儀","張冠廷","王正棠","紐那斯","胡冠俞\","葉竹軒","范國宸","莊韋恩","于森旭","蕭憶銘","林威廷","戴云真","辛元旭","張進德","董子恩","孔念恩","楊瑞承","王詩聰","戴培峰","高國麟"};
	int datafg2021[33][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datafg2021[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	fp=fopen("WD2021.csv","r");
	char *wd2021[]={"林孝程","郭天信","歐晉","吉力吉撈．鞏冠","林驛騰","張皓緯","林辰勳","黃柏豪","吳睿勝","李凱威","全浩瑋","張政禹","林旺衛","曾傳昇","張祐銘","王順和","陳思仲","劉基鴻","邱辰","朱祥麟","曾陶鎔","劉時豪","蔣少宏","吳東融","董秉軒","石翔宇","赫雷拉","洪瑋漢","陳品捷","牛塏曄"};
	int datawd2021[30][15];
	q=-1;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL){
		p=0;
	    result=strtok(line,",");
	    while(result!=NULL){
	      	if(q==-1){}
		   	else{datawd2021[p][q]=atoi(result);}
	    	p++;
	        result=strtok(NULL,",");
	    }
	    q++;
	}
	fclose(fp);
	
	srand(time(NULL)%99877);

	color(15);printf("依序填入隊伍、年度、球員來完成設定\n\n");
	for(x=1;x<=9;x++){
		printf("選擇客隊第%d棒：",x);
		scanf("%d%d%d",&ateam[x],&ayear[x],&aplayer[x]);
		playerfound=0;

		if(ateam[x]==0){
			for(p=0;p<6;p++){
				if(aplayer[x]==dataUL90[p][0]){color(142);printf("客隊第%d棒：統一獅 %s\n",x,UL90[p]);strcat(nowbatting,"統一獅 ");strcat(nowbatting,UL90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(aplayer[x]==dataUL08[p][0]){color(142);printf("客隊第%d棒：統一7-ELEVEn獅 %s\n",x,UL08[p]);strcat(nowbatting,"統一7-ELEVEn獅 ");strcat(nowbatting,UL08[p]);color(15);playerfound=1;}
			}
			for(p=0;p<74;p++){
				if(aplayer[x]==dataBE90[p][0]){color(142);printf("客隊第%d棒：兄弟象 %s\n",x,BE90[p]);strcat(nowbatting,"兄弟象 ");strcat(nowbatting,BE90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<6;p++){
				if(aplayer[x]==dataCB14[p][0]){color(142);printf("客隊第%d棒：中信兄弟 %s\n",x,CB14[p]);strcat(nowbatting,"中信兄弟 ");strcat(nowbatting,CB14[p]);color(15);playerfound=1;}
			}
			for(p=0;p<10;p++){
				if(aplayer[x]==dataFA03[p][0]){color(142);printf("客隊第%d棒：第一金剛 %s\n",x,FA03[p]);strcat(nowbatting,"第一金剛 ");strcat(nowbatting,FA03[p]);color(15);playerfound=1;}
			}
			for(p=0;p<27;p++){
				if(aplayer[x]==dataLB04[p][0]){color(142);printf("客隊第%d棒：LaNew熊 %s\n",x,LB04[p]);strcat(nowbatting,"LaNew熊 ");strcat(nowbatting,LB04[p]);color(15);playerfound=1;}
			}
			for(p=0;p<3;p++){
				if(aplayer[x]==dataLM11[p][0]){color(142);printf("客隊第%d棒：Lamigo桃猿 %s\n",x,LM11[p]);strcat(nowbatting,"Lamigo桃猿 ");strcat(nowbatting,LM11[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(aplayer[x]==dataRM20[p][0]){color(142);printf("客隊第%d棒：樂天桃猿 %s\n",x,RM20[p]);strcat(nowbatting,"樂天桃猿 ");strcat(nowbatting,RM20[p]);color(15);playerfound=1;}
			}
			for(p=0;p<14;p++){
				if(aplayer[x]==dataJB93[p][0]){color(142);printf("客隊第%d棒：俊國熊 %s\n",x,JB93[p]);strcat(nowbatting,"俊國熊 ");strcat(nowbatting,JB93[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(aplayer[x]==dataSB96T[p][0]){color(142);printf("客隊第%d棒：興農熊 %s\n",x,SB96T[p]);strcat(nowbatting,"興農熊 ");strcat(nowbatting,SB96T[p]);color(15);playerfound=1;}
			}
			for(p=0;p<44;p++){
				if(aplayer[x]==dataSB96B[p][0]){color(142);printf("客隊第%d棒：興農牛 %s\n",x,SB96B[p]);strcat(nowbatting,"興農牛 ");strcat(nowbatting,SB96B[p]);color(15);playerfound=1;}
			}
			for(p=0;p<2;p++){
				if(aplayer[x]==dataER13[p][0]){color(142);printf("客隊第%d棒：義大犀牛 %s\n",x,ER13[p]);strcat(nowbatting,"義大犀牛 ");strcat(nowbatting,ER13[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(aplayer[x]==dataFG17[p][0]){color(142);printf("客隊第%d棒：富邦悍將 %s\n",x,FG17[p]);strcat(nowbatting,"富邦悍將 ");strcat(nowbatting,FG17[p]);color(15);playerfound=1;}
			}
			for(p=0;p<49;p++){
				if(aplayer[x]==dataWD90[p][0]){color(142);printf("客隊第%d棒：味全龍 %s\n",x,WD90[p]);strcat(nowbatting,"味全龍 ");strcat(nowbatting,WD90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<13;p++){
				if(aplayer[x]==dataMS03[p][0]){color(142);printf("客隊第%d棒：誠泰太陽 %s\n",x,MS03[p]);strcat(nowbatting,"誠泰太陽 ");strcat(nowbatting,MS03[p]);color(15);playerfound=1;}
			}
			for(p=0;p<25;p++){
				if(aplayer[x]==dataMC04[p][0]){color(142);printf("客隊第%d棒：誠泰Cobras %s\n",x,MC04[p]);strcat(nowbatting,"誠泰Cobras ");strcat(nowbatting,MC04[p]);color(15);playerfound=1;}
			}
			for(p=0;p<4;p++){
				if(aplayer[x]==dataDT08[p][0]){color(142);printf("客隊第%d棒：米迪亞暴龍 %s\n",x,DT08[p]);strcat(nowbatting,"米迪亞暴龍 ");strcat(nowbatting,DT08[p]);color(15);playerfound=1;}
			}
			for(p=0;p<4;p++){
				if(aplayer[x]==dataMT90[p][0]){color(142);printf("客隊第%d棒：三商虎 %s\n",x,MT90[p]);strcat(nowbatting,"三商虎 ");strcat(nowbatting,MT90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<39;p++){
				if(aplayer[x]==dataCE93[p][0]){color(142);printf("客隊第%d棒：時報鷹 %s\n",x,CE93[p]);strcat(nowbatting,"時報鷹 ");strcat(nowbatting,CE93[p]);color(15);playerfound=1;}
			}
		}
		if(ateam[x]==1){
			if(ayear[x]==15){
			}
			if(ayear[x]==16){
				for(p=0;p<27;p++){
					if(aplayer[x]==dataul2016[p][0]){color(142);printf("客隊第%d棒：統一7-ELEVEn獅 2016 %s\n",x,ul2016[p]);strcat(nowbatting,"統一7-ELEVEn獅 2016 ");strcat(nowbatting,ul2016[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==17){
				for(p=0;p<30;p++){
					if(aplayer[x]==dataul2017[p][0]){color(142);printf("客隊第%d棒：統一7-ELEVEn獅 2017 %s\n",x,ul2017[p]);strcat(nowbatting,"統一7-ELEVEn獅 2017 ");strcat(nowbatting,ul2017[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==18){
				for(p=0;p<30;p++){
					if(aplayer[x]==dataul2018[p][0]){color(142);printf("客隊第%d棒：統一7-ELEVEn獅 2018 %s\n",x,ul2018[p]);strcat(nowbatting,"統一7-ELEVEn獅 2018 ");strcat(nowbatting,ul2018[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==19){
				for(p=0;p<34;p++){
					if(aplayer[x]==dataul2019[p][0]){color(142);printf("客隊第%d棒：統一7-ELEVEn獅 2019 %s\n",x,ul2019[p]);strcat(nowbatting,"統一7-ELEVEn獅 2019 ");strcat(nowbatting,ul2019[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==20){
				for(p=0;p<28;p++){
					if(aplayer[x]==dataul2020[p][0]){color(142);printf("客隊第%d棒：統一7-ELEVEn獅 2020 %s\n",x,ul2020[p]);strcat(nowbatting,"統一7-ELEVEn獅 2020 ");strcat(nowbatting,ul2020[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==21){
				for(p=0;p<33;p++){
					if(aplayer[x]==dataul2021[p][0]){color(142);printf("客隊第%d棒：統一7-ELEVEn獅 2021 %s\n",x,ul2021[p]);strcat(nowbatting,"統一7-ELEVEn獅 2021 ");strcat(nowbatting,ul2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(ateam[x]==2){
			if(ayear[x]==15){
			}
			if(ayear[x]==16){
				for(p=0;p<26;p++){
					if(aplayer[x]==datacb2016[p][0]){color(142);printf("客隊第%d棒：中信兄弟 2016 %s\n",x,cb2016[p]);strcat(nowbatting,"中信兄弟 2016 ");strcat(nowbatting,cb2016[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==17){
				for(p=0;p<27;p++){
					if(aplayer[x]==datacb2017[p][0]){color(142);printf("客隊第%d棒：中信兄弟 2017 %s\n",x,cb2017[p]);strcat(nowbatting,"中信兄弟 2017 ");strcat(nowbatting,cb2017[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==18){
				for(p=0;p<26;p++){
					if(aplayer[x]==datacb2018[p][0]){color(142);printf("客隊第%d棒：中信兄弟 2018 %s\n",x,cb2018[p]);strcat(nowbatting,"中信兄弟 2018 ");strcat(nowbatting,cb2018[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==19){
				for(p=0;p<26;p++){
					if(aplayer[x]==datacb2019[p][0]){color(142);printf("客隊第%d棒：中信兄弟 2019 %s\n",x,cb2019[p]);strcat(nowbatting,"中信兄弟 2019 ");strcat(nowbatting,cb2019[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==20){
				for(p=0;p<22;p++){
					if(aplayer[x]==datacb2020[p][0]){color(142);printf("客隊第%d棒：中信兄弟 2020 %s\n",x,cb2020[p]);strcat(nowbatting,"中信兄弟 2020 ");strcat(nowbatting,cb2020[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==21){
				for(p=0;p<28;p++){
					if(aplayer[x]==datacb2021[p][0]){color(142);printf("客隊第%d棒：中信兄弟 2021 %s\n",x,cb2021[p]);strcat(nowbatting,"中信兄弟 2021 ");strcat(nowbatting,cb2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(ateam[x]==3){
			if(ayear[x]==15){
			}
			if(ayear[x]==16){
			}
			if(ayear[x]==17){
				for(p=0;p<27;p++){
					if(aplayer[x]==datalm2017[p][0]){color(142);printf("客隊第%d棒：Lamigo桃猿 2017 %s\n",x,lm2017[p]);strcat(nowbatting,"Lamigo桃猿 2017 ");strcat(nowbatting,lm2017[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==18){
				for(p=0;p<29;p++){
					if(aplayer[x]==datalm2018[p][0]){color(142);printf("客隊第%d棒：Lamigo桃猿 2018 %s\n",x,lm2018[p]);strcat(nowbatting,"Lamigo桃猿 2018 ");strcat(nowbatting,lm2018[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==19){
				for(p=0;p<25;p++){
					if(aplayer[x]==datalm2019[p][0]){color(142);printf("客隊第%d棒：Lamigo桃猿 2019 %s\n",x,lm2019[p]);strcat(nowbatting,"Lamigo桃猿 2019 ");strcat(nowbatting,lm2019[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==20){
				for(p=0;p<25;p++){
					if(aplayer[x]==datarm2020[p][0]){color(142);printf("客隊第%d棒：樂天桃猿 2020 %s\n",x,rm2020[p]);strcat(nowbatting,"樂天桃猿 2020 ");strcat(nowbatting,rm2020[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==21){
				for(p=0;p<26;p++){
					if(aplayer[x]==datarm2021[p][0]){color(142);printf("客隊第%d棒：樂天桃猿 2021 %s\n",x,rm2021[p]);strcat(nowbatting,"樂天桃猿 2021 ");strcat(nowbatting,rm2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(ateam[x]==4){
			if(ayear[x]==15){
			}
			if(ayear[x]==16){
			}
			if(ayear[x]==17){
				for(p=0;p<28;p++){
					if(aplayer[x]==datafg2017[p][0]){color(142);printf("客隊第%d棒：富邦悍將 2017 %s\n",x,fg2017[p]);strcat(nowbatting,"富邦悍將 2017 ");strcat(nowbatting,fg2017[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==18){
				for(p=0;p<27;p++){
					if(aplayer[x]==datafg2018[p][0]){color(142);printf("客隊第%d棒：富邦悍將 2018 %s\n",x,fg2018[p]);strcat(nowbatting,"富邦悍將 2018 ");strcat(nowbatting,fg2018[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==19){
				for(p=0;p<25;p++){
					if(aplayer[x]==datafg2019[p][0]){color(142);printf("客隊第%d棒：富邦悍將 2019 %s\n",x,fg2019[p]);strcat(nowbatting,"富邦悍將 2019 ");strcat(nowbatting,fg2019[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==20){
				for(p=0;p<26;p++){
					if(aplayer[x]==datafg2020[p][0]){color(142);printf("客隊第%d棒：富邦悍將 2020 %s\n",x,fg2020[p]);strcat(nowbatting,"富邦悍將 2020 ");strcat(nowbatting,fg2020[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==21){
				for(p=0;p<33;p++){
					if(aplayer[x]==datafg2021[p][0]){color(142);printf("客隊第%d棒：富邦悍將 2021 %s\n",x,fg2021[p]);strcat(nowbatting,"富邦悍將 2021 ");strcat(nowbatting,fg2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(ateam[x]==5){
			if(ayear[x]==94){
			}
			if(ayear[x]==95){
			}
			if(ayear[x]==96){
			}
			if(ayear[x]==97){
			}
			if(ayear[x]==98){
			}
			if(ayear[x]==99){
			}
			if(ayear[x]==21){
				for(p=0;p<30;p++){
					if(aplayer[x]==datawd2021[p][0]){color(142);printf("客隊第%d棒：味全龍 2021 %s\n",x,wd2021[p]);strcat(nowbatting,"味全龍 2021 ");strcat(nowbatting,wd2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(ateam[x]==8){
		}
		if(ateam[x]==9){
		}
		if(x==1)strcat(ab1,nowbatting);if(x==2)strcat(ab2,nowbatting);if(x==3)strcat(ab3,nowbatting);if(x==4)strcat(ab4,nowbatting);if(x==5)strcat(ab5,nowbatting);if(x==6)strcat(ab6,nowbatting);if(x==7)strcat(ab7,nowbatting);if(x==8)strcat(ab8,nowbatting);if(x==9)strcat(ab9,nowbatting);
		if(playerfound==0){color(207);printf("查無此球員，請重新輸入！");color(15);x--;}
		memset(nowbatting,'\0',50);
	}
	for(x=1;x<=9;x++){
		printf("選擇主隊第%d棒：",x);
		scanf("%d%d%d",&hteam[x],&hyear[x],&hplayer[x]);
		playerfound=0;
		
		if(hteam[x]==0){
			for(p=0;p<6;p++){
				if(hplayer[x]==dataUL90[p][0]){color(138);printf("主隊第%d棒：統一獅 %s\n",x,UL90[p]);strcat(nowbatting,"統一獅 ");strcat(nowbatting,UL90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(hplayer[x]==dataUL08[p][0]){color(138);printf("主隊第%d棒：統一7-ELEVEn獅 %s\n",x,UL08[p]);strcat(nowbatting,"統一7-ELEVEn獅 ");strcat(nowbatting,UL08[p]);color(15);playerfound=1;}
			}
			for(p=0;p<74;p++){
				if(hplayer[x]==dataBE90[p][0]){color(138);printf("主隊第%d棒：兄弟象 %s\n",x,BE90[p]);strcat(nowbatting,"兄弟象 ");strcat(nowbatting,BE90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<6;p++){
				if(hplayer[x]==dataCB14[p][0]){color(138);printf("主隊第%d棒：中信兄弟 %s\n",x,CB14[p]);strcat(nowbatting,"中信兄弟 ");strcat(nowbatting,CB14[p]);color(15);playerfound=1;}
			}
			for(p=0;p<10;p++){
				if(hplayer[x]==dataFA03[p][0]){color(138);printf("主隊第%d棒：第一金剛 %s\n",x,FA03[p]);strcat(nowbatting,"第一金剛 ");strcat(nowbatting,FA03[p]);color(15);playerfound=1;}
			}
			for(p=0;p<27;p++){
				if(hplayer[x]==dataLB04[p][0]){color(138);printf("主隊第%d棒：LaNew熊 %s\n",x,LB04[p]);strcat(nowbatting,"LaNew熊 ");strcat(nowbatting,LB04[p]);color(15);playerfound=1;}
			}
			for(p=0;p<3;p++){
				if(hplayer[x]==dataLM11[p][0]){color(138);printf("主隊第%d棒：Lamigo桃猿 %s\n",x,LM11[p]);strcat(nowbatting,"Lamigo桃猿 ");strcat(nowbatting,LM11[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(hplayer[x]==dataRM20[p][0]){color(138);printf("主隊第%d棒：樂天桃猿 %s\n",x,RM20[p]);strcat(nowbatting,"樂天桃猿 ");strcat(nowbatting,RM20[p]);color(15);playerfound=1;}
			}
			for(p=0;p<14;p++){
				if(hplayer[x]==dataJB93[p][0]){color(138);printf("主隊第%d棒：俊國熊 %s\n",x,JB93[p]);strcat(nowbatting,"俊國熊 ");strcat(nowbatting,JB93[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(hplayer[x]==dataSB96T[p][0]){color(138);printf("主隊第%d棒：興農熊 %s\n",x,SB96T[p]);strcat(nowbatting,"興農熊 ");strcat(nowbatting,SB96T[p]);color(15);playerfound=1;}
			}
			for(p=0;p<44;p++){
				if(hplayer[x]==dataSB96B[p][0]){color(138);printf("主隊第%d棒：興農牛 %s\n",x,SB96B[p]);strcat(nowbatting,"興農牛 ");strcat(nowbatting,SB96B[p]);color(15);playerfound=1;}
			}
			for(p=0;p<2;p++){
				if(hplayer[x]==dataER13[p][0]){color(138);printf("主隊第%d棒：義大犀牛 %s\n",x,ER13[p]);strcat(nowbatting,"義大犀牛 ");strcat(nowbatting,ER13[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(hplayer[x]==dataFG17[p][0]){color(138);printf("主隊第%d棒：富邦悍將 %s\n",x,FG17[p]);strcat(nowbatting,"富邦悍將 ");strcat(nowbatting,FG17[p]);color(15);playerfound=1;}
			}
			for(p=0;p<49;p++){
				if(hplayer[x]==dataWD90[p][0]){color(138);printf("主隊第%d棒：味全龍 %s\n",x,WD90[p]);strcat(nowbatting,"味全龍 ");strcat(nowbatting,WD90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<13;p++){
				if(hplayer[x]==dataMS03[p][0]){color(138);printf("主隊第%d棒：誠泰太陽 %s\n",x,MS03[p]);strcat(nowbatting,"誠泰太陽 ");strcat(nowbatting,MS03[p]);color(15);playerfound=1;}
			}
			for(p=0;p<25;p++){
				if(hplayer[x]==dataMC04[p][0]){color(138);printf("主隊第%d棒：誠泰Cobras %s\n",x,MC04[p]);strcat(nowbatting,"誠泰Cobras ");strcat(nowbatting,MC04[p]);color(15);playerfound=1;}
			}
			for(p=0;p<4;p++){
				if(hplayer[x]==dataDT08[p][0]){color(138);printf("主隊第%d棒：米迪亞暴龍 %s\n",x,DT08[p]);strcat(nowbatting,"米迪亞暴龍 ");strcat(nowbatting,DT08[p]);color(15);playerfound=1;}
			}
			for(p=0;p<4;p++){
				if(hplayer[x]==dataMT90[p][0]){color(138);printf("主隊第%d棒：三商虎 %s\n",x,MT90[p]);strcat(nowbatting,"三商虎 ");strcat(nowbatting,MT90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<39;p++){
				if(hplayer[x]==dataCE93[p][0]){color(138);printf("主隊第%d棒：時報鷹 %s\n",x,CE93[p]);strcat(nowbatting,"時報鷹 ");strcat(nowbatting,CE93[p]);color(15);playerfound=1;}
			}
		}
		if(hteam[x]==1){
			if(hyear[x]==15){
			}
			if(hyear[x]==16){
				for(p=0;p<27;p++){
					if(hplayer[x]==dataul2016[p][0]){color(138);printf("主隊第%d棒：統一7-ELEVEn獅 2016 %s\n",x,ul2016[p]);strcat(nowbatting,"統一7-ELEVEn獅 2016 ");strcat(nowbatting,ul2016[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==17){
				for(p=0;p<30;p++){
					if(hplayer[x]==dataul2017[p][0]){color(138);printf("主隊第%d棒：統一7-ELEVEn獅 2017 %s\n",x,ul2017[p]);strcat(nowbatting,"統一7-ELEVEn獅 2017 ");strcat(nowbatting,ul2017[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==18){
				for(p=0;p<30;p++){
					if(hplayer[x]==dataul2018[p][0]){color(138);printf("主隊第%d棒：統一7-ELEVEn獅 2018 %s\n",x,ul2018[p]);strcat(nowbatting,"統一7-ELEVEn獅 2018 ");strcat(nowbatting,ul2018[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==19){
				for(p=0;p<34;p++){
					if(hplayer[x]==dataul2019[p][0]){color(138);printf("主隊第%d棒：統一7-ELEVEn獅 2019 %s\n",x,ul2019[p]);strcat(nowbatting,"統一7-ELEVEn獅 2019 ");strcat(nowbatting,ul2019[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==20){
				for(p=0;p<28;p++){
					if(hplayer[x]==dataul2020[p][0]){color(138);printf("主隊第%d棒：統一7-ELEVEn獅 2020 %s\n",x,ul2020[p]);strcat(nowbatting,"統一7-ELEVEn獅 2020 ");strcat(nowbatting,ul2020[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==21){
				for(p=0;p<33;p++){
					if(hplayer[x]==dataul2021[p][0]){color(138);printf("主隊第%d棒：統一7-ELEVEn獅 2021 %s\n",x,ul2021[p]);strcat(nowbatting,"統一7-ELEVEn獅 2021 ");strcat(nowbatting,ul2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(hteam[x]==2){
			if(hyear[x]==15){
			}
			if(hyear[x]==16){
				for(p=0;p<26;p++){
					if(hplayer[x]==datacb2016[p][0]){color(138);printf("主隊第%d棒：中信兄弟 2016 %s\n",x,cb2016[p]);strcat(nowbatting,"中信兄弟 2016 ");strcat(nowbatting,cb2016[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==17){
				for(p=0;p<27;p++){
					if(hplayer[x]==datacb2017[p][0]){color(138);printf("主隊第%d棒：中信兄弟 2017 %s\n",x,cb2017[p]);strcat(nowbatting,"中信兄弟 2017 ");strcat(nowbatting,cb2017[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==18){
				for(p=0;p<26;p++){
					if(hplayer[x]==datacb2018[p][0]){color(138);printf("主隊第%d棒：中信兄弟 2018 %s\n",x,cb2018[p]);strcat(nowbatting,"中信兄弟 2018 ");strcat(nowbatting,cb2018[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==19){
				for(p=0;p<26;p++){
					if(hplayer[x]==datacb2019[p][0]){color(138);printf("主隊第%d棒：中信兄弟 2019 %s\n",x,cb2019[p]);strcat(nowbatting,"中信兄弟 2019 ");strcat(nowbatting,cb2019[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==20){
				for(p=0;p<22;p++){
					if(hplayer[x]==datacb2020[p][0]){color(138);printf("主隊第%d棒：中信兄弟 2020 %s\n",x,cb2020[p]);strcat(nowbatting,"中信兄弟 2020 ");strcat(nowbatting,cb2020[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==21){
				for(p=0;p<28;p++){
					if(hplayer[x]==datacb2021[p][0]){color(138);printf("主隊第%d棒：中信兄弟 2021 %s\n",x,cb2021[p]);strcat(nowbatting,"中信兄弟 2021 ");strcat(nowbatting,cb2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(hteam[x]==3){
			if(hyear[x]==15){
			}
			if(hyear[x]==16){
			}
			if(hyear[x]==17){
				for(p=0;p<27;p++){
					if(hplayer[x]==datalm2017[p][0]){color(138);printf("主隊第%d棒：Lamigo桃猿 2017 %s\n",x,lm2017[p]);strcat(nowbatting,"Lamigo桃猿 2017 ");strcat(nowbatting,lm2017[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==18){
				for(p=0;p<29;p++){
					if(hplayer[x]==datalm2018[p][0]){color(138);printf("主隊第%d棒：Lamigo桃猿 2018 %s\n",x,lm2018[p]);strcat(nowbatting,"Lamigo桃猿 2018 ");strcat(nowbatting,lm2018[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==19){
				for(p=0;p<25;p++){
					if(hplayer[x]==datalm2019[p][0]){color(138);printf("主隊第%d棒：Lamigo桃猿 2019 %s\n",x,lm2019[p]);strcat(nowbatting,"Lamigo桃猿 2019 ");strcat(nowbatting,lm2019[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==20){
				for(p=0;p<25;p++){
					if(hplayer[x]==datarm2020[p][0]){color(138);printf("主隊第%d棒：樂天桃猿 2020 %s\n",x,rm2020[p]);strcat(nowbatting,"樂天桃猿 2020 ");strcat(nowbatting,rm2020[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==21){
				for(p=0;p<26;p++){
					if(hplayer[x]==datarm2021[p][0]){color(138);printf("主隊第%d棒：樂天桃猿 2021 %s\n",x,rm2021[p]);strcat(nowbatting,"樂天桃猿 2021 ");strcat(nowbatting,rm2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(hteam[x]==4){
			if(hyear[x]==15){
			}
			if(hyear[x]==16){
			}
			if(hyear[x]==17){
				for(p=0;p<28;p++){
					if(hplayer[x]==datafg2017[p][0]){color(138);printf("主隊第%d棒：富邦悍將 2017 %s\n",x,fg2017[p]);strcat(nowbatting,"富邦悍將 2017 ");strcat(nowbatting,fg2017[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==18){
				for(p=0;p<27;p++){
					if(hplayer[x]==datafg2018[p][0]){color(138);printf("主隊第%d棒：富邦悍將 2018 %s\n",x,fg2018[p]);strcat(nowbatting,"富邦悍將 2018 ");strcat(nowbatting,fg2018[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==19){
				for(p=0;p<25;p++){
					if(hplayer[x]==datafg2019[p][0]){color(138);printf("主隊第%d棒：富邦悍將 2019 %s\n",x,fg2019[p]);strcat(nowbatting,"富邦悍將 2019 ");strcat(nowbatting,fg2019[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==20){
				for(p=0;p<26;p++){
					if(hplayer[x]==datafg2020[p][0]){color(138);printf("主隊第%d棒：富邦悍將 2020 %s\n",x,fg2020[p]);strcat(nowbatting,"富邦悍將 2020 ");strcat(nowbatting,fg2020[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==21){
				for(p=0;p<33;p++){
					if(hplayer[x]==datafg2021[p][0]){color(138);printf("主隊第%d棒：富邦悍將 2021 %s\n",x,fg2021[p]);strcat(nowbatting,"富邦悍將 2021 ");strcat(nowbatting,fg2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(hteam[x]==5){
			if(hyear[x]==94){
			}
			if(hyear[x]==95){
			}
			if(hyear[x]==96){
			}
			if(hyear[x]==97){
			}
			if(hyear[x]==98){
			}
			if(hyear[x]==99){
			}
			if(hyear[x]==21){
				for(p=0;p<30;p++){
					if(hplayer[x]==datawd2021[p][0]){color(138);printf("主隊第%d棒：味全龍 2021 %s\n",x,wd2021[p]);strcat(nowbatting,"味全龍 2021 ");strcat(nowbatting,wd2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(hteam[x]==8){
		}
		if(hteam[x]==9){
		}
		if(x==1)strcat(hb1,nowbatting);if(x==2)strcat(hb2,nowbatting);if(x==3)strcat(hb3,nowbatting);if(x==4)strcat(hb4,nowbatting);if(x==5)strcat(hb5,nowbatting);if(x==6)strcat(hb6,nowbatting);if(x==7)strcat(hb7,nowbatting);if(x==8)strcat(hb8,nowbatting);if(x==9)strcat(hb9,nowbatting);
		if(playerfound==0){color(207);printf("查無此球員，請重新輸入！");color(15);x--;}
		memset(nowbatting,'\0',50);
	}
	
	
	printf("\n選擇比賽模式    1.詳細過程 2.快速模擬：");
	scanf("%d",&gamemode);
	for(p=1;p<25;p++){inningscore[p]=0;}
	do{
		if(inning%2==1){color(142);printf("\n%d局上\n",(inning+1)/2);color(15);}
		if(inning%2==0){color(138);printf("\n%d局下\n",(inning+1)/2);color(15);}
		do{
			if(q!=4)q=1;playerfound=0;
			if(inning%2==1){
				if(ateam[aab]==0){
					for(p=0;p<6;p++){
						if(aplayer[aab]==dataUL90[p][0]){
							strcat(nowbatting,"統一獅 ");strcat(nowbatting,UL90[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 統一獅 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,UL90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataUL90[p][1];b=dataUL90[p][2];c=dataUL90[p][3];d=dataUL90[p][4];e=dataUL90[p][5];f=dataUL90[p][6];g=dataUL90[p][7];
								h=dataUL90[p][8];i=dataUL90[p][9];all=dataUL90[p][10];j=dataUL90[p][11];k=dataUL90[p][12];l=dataUL90[p][13];m=dataUL90[p][14];
								color(14);printf("第%d棒 統一獅 %s：",aab,UL90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(aplayer[aab]==dataUL08[p][0]){
							strcat(nowbatting,"統一7-ELEVEn獅 ");strcat(nowbatting,UL08[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 統一7-ELEVEn獅 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,UL08[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataUL08[p][1];b=dataUL08[p][2];c=dataUL08[p][3];d=dataUL08[p][4];e=dataUL08[p][5];f=dataUL08[p][6];g=dataUL08[p][7];
								h=dataUL08[p][8];i=dataUL08[p][9];all=dataUL08[p][10];j=dataUL08[p][11];k=dataUL08[p][12];l=dataUL08[p][13];m=dataUL08[p][14];
								color(14);printf("第%d棒 統一7-ELEVEn獅 %s：",aab,UL08[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<74;p++){
						if(aplayer[aab]==dataBE90[p][0]){
							strcat(nowbatting,"兄弟象 ");strcat(nowbatting,BE90[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 兄弟象 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,BE90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataBE90[p][1];b=dataBE90[p][2];c=dataBE90[p][3];d=dataBE90[p][4];e=dataBE90[p][5];f=dataBE90[p][6];g=dataBE90[p][7];
								h=dataBE90[p][8];i=dataBE90[p][9];all=dataBE90[p][10];j=dataBE90[p][11];k=dataBE90[p][12];l=dataBE90[p][13];m=dataBE90[p][14];
								color(14);printf("第%d棒 兄弟象 %s：",aab,BE90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<6;p++){
						if(aplayer[aab]==dataCB14[p][0]){
							strcat(nowbatting,"中信兄弟 ");strcat(nowbatting,CB14[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 中信兄弟 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,CB14[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataCB14[p][1];b=dataCB14[p][2];c=dataCB14[p][3];d=dataCB14[p][4];e=dataCB14[p][5];f=dataCB14[p][6];g=dataCB14[p][7];
								h=dataCB14[p][8];i=dataCB14[p][9];all=dataCB14[p][10];j=dataCB14[p][11];k=dataCB14[p][12];l=dataCB14[p][13];m=dataCB14[p][14];
								color(14);printf("第%d棒 中信兄弟 %s：",aab,CB14[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<10;p++){
						if(aplayer[aab]==dataFA03[p][0]){
							strcat(nowbatting,"第一金剛 ");strcat(nowbatting,FA03[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 第一金剛 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,FA03[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataFA03[p][1];b=dataFA03[p][2];c=dataFA03[p][3];d=dataFA03[p][4];e=dataFA03[p][5];f=dataFA03[p][6];g=dataFA03[p][7];
								h=dataFA03[p][8];i=dataFA03[p][9];all=dataFA03[p][10];j=dataFA03[p][11];k=dataFA03[p][12];l=dataFA03[p][13];m=dataFA03[p][14];
								color(14);printf("第%d棒 第一金剛 %s：",aab,FA03[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<27;p++){
						if(aplayer[aab]==dataLB04[p][0]){
							strcat(nowbatting,"LaNew熊 ");strcat(nowbatting,LB04[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 LaNew熊 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,LB04[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataLB04[p][1];b=dataLB04[p][2];c=dataLB04[p][3];d=dataLB04[p][4];e=dataLB04[p][5];f=dataLB04[p][6];g=dataLB04[p][7];
								h=dataLB04[p][8];i=dataLB04[p][9];all=dataLB04[p][10];j=dataLB04[p][11];k=dataLB04[p][12];l=dataLB04[p][13];m=dataLB04[p][14];
								color(14);printf("第%d棒 LaNew熊 %s：",aab,LB04[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<3;p++){
						if(aplayer[aab]==dataLM11[p][0]){
							strcat(nowbatting,"Lamigo桃猿 ");strcat(nowbatting,LM11[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 Lamigo桃猿 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,LM11[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataLM11[p][1];b=dataLM11[p][2];c=dataLM11[p][3];d=dataLM11[p][4];e=dataLM11[p][5];f=dataLM11[p][6];g=dataLM11[p][7];
								h=dataLM11[p][8];i=dataLM11[p][9];all=dataLM11[p][10];j=dataLM11[p][11];k=dataLM11[p][12];l=dataLM11[p][13];m=dataLM11[p][14];
								color(14);printf("第%d棒 Lamigo桃猿 %s：",aab,LM11[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(aplayer[aab]==dataRM20[p][0]){
							strcat(nowbatting,"樂天桃猿 ");strcat(nowbatting,RM20[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 樂天桃猿 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,RM20[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataRM20[p][1];b=dataRM20[p][2];c=dataRM20[p][3];d=dataRM20[p][4];e=dataRM20[p][5];f=dataRM20[p][6];g=dataRM20[p][7];
								h=dataRM20[p][8];i=dataRM20[p][9];all=dataRM20[p][10];j=dataRM20[p][11];k=dataRM20[p][12];l=dataRM20[p][13];m=dataRM20[p][14];
								color(14);printf("第%d棒 樂天桃猿 %s：",aab,RM20[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<14;p++){
						if(aplayer[aab]==dataJB93[p][0]){
							strcat(nowbatting,"俊國熊 ");strcat(nowbatting,JB93[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 俊國熊 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,JB93[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataJB93[p][1];b=dataJB93[p][2];c=dataJB93[p][3];d=dataJB93[p][4];e=dataJB93[p][5];f=dataJB93[p][6];g=dataJB93[p][7];
								h=dataJB93[p][8];i=dataJB93[p][9];all=dataJB93[p][10];j=dataJB93[p][11];k=dataJB93[p][12];l=dataJB93[p][13];m=dataJB93[p][14];
								color(14);printf("第%d棒 俊國熊 %s：",aab,JB93[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(aplayer[aab]==dataSB96T[p][0]){
							strcat(nowbatting,"興農熊 ");strcat(nowbatting,SB96T[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 興農熊 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,SB96T[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataSB96T[p][1];b=dataSB96T[p][2];c=dataSB96T[p][3];d=dataSB96T[p][4];e=dataSB96T[p][5];f=dataSB96T[p][6];g=dataSB96T[p][7];
								h=dataSB96T[p][8];i=dataSB96T[p][9];all=dataSB96T[p][10];j=dataSB96T[p][11];k=dataSB96T[p][12];l=dataSB96T[p][13];m=dataSB96T[p][14];
								color(14);printf("第%d棒 興農熊 %s：",aab,SB96T[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<44;p++){
						if(aplayer[aab]==dataSB96B[p][0]){
							strcat(nowbatting,"興農牛 ");strcat(nowbatting,SB96B[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 興農牛 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,SB96B[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataSB96B[p][1];b=dataSB96B[p][2];c=dataSB96B[p][3];d=dataSB96B[p][4];e=dataSB96B[p][5];f=dataSB96B[p][6];g=dataSB96B[p][7];
								h=dataSB96B[p][8];i=dataSB96B[p][9];all=dataSB96B[p][10];j=dataSB96B[p][11];k=dataSB96B[p][12];l=dataSB96B[p][13];m=dataSB96B[p][14];
								color(14);printf("第%d棒 興農牛 %s：",aab,SB96B[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<2;p++){
						if(aplayer[aab]==dataER13[p][0]){
							strcat(nowbatting,"義大犀牛 ");strcat(nowbatting,ER13[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 義大犀牛 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,ER13[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataER13[p][1];b=dataER13[p][2];c=dataER13[p][3];d=dataER13[p][4];e=dataER13[p][5];f=dataER13[p][6];g=dataER13[p][7];
								h=dataER13[p][8];i=dataER13[p][9];all=dataER13[p][10];j=dataER13[p][11];k=dataER13[p][12];l=dataER13[p][13];m=dataER13[p][14];
								color(14);printf("第%d棒 義大犀牛 %s：",aab,ER13[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(aplayer[aab]==dataFG17[p][0]){
							strcat(nowbatting,"富邦悍將 ");strcat(nowbatting,FG17[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 富邦悍將 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,FG17[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataFG17[p][1];b=dataFG17[p][2];c=dataFG17[p][3];d=dataFG17[p][4];e=dataFG17[p][5];f=dataFG17[p][6];g=dataFG17[p][7];
								h=dataFG17[p][8];i=dataFG17[p][9];all=dataFG17[p][10];j=dataFG17[p][11];k=dataFG17[p][12];l=dataFG17[p][13];m=dataFG17[p][14];
								color(14);printf("第%d棒 富邦悍將 %s：",aab,FG17[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<49;p++){
						if(aplayer[aab]==dataWD90[p][0]){
							strcat(nowbatting,"味全龍 ");strcat(nowbatting,WD90[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 味全龍 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,WD90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataWD90[p][1];b=dataWD90[p][2];c=dataWD90[p][3];d=dataWD90[p][4];e=dataWD90[p][5];f=dataWD90[p][6];g=dataWD90[p][7];
								h=dataWD90[p][8];i=dataWD90[p][9];all=dataWD90[p][10];j=dataWD90[p][11];k=dataWD90[p][12];l=dataWD90[p][13];m=dataWD90[p][14];
								color(14);printf("第%d棒 味全龍 %s：",aab,WD90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<13;p++){
						if(aplayer[aab]==dataMS03[p][0]){
							strcat(nowbatting,"誠泰太陽 ");strcat(nowbatting,MS03[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 誠泰太陽 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,MS03[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataMS03[p][1];b=dataMS03[p][2];c=dataMS03[p][3];d=dataMS03[p][4];e=dataMS03[p][5];f=dataMS03[p][6];g=dataMS03[p][7];
								h=dataMS03[p][8];i=dataMS03[p][9];all=dataMS03[p][10];j=dataMS03[p][11];k=dataMS03[p][12];l=dataMS03[p][13];m=dataMS03[p][14];
								color(14);printf("第%d棒 誠泰太陽 %s：",aab,MS03[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<25;p++){
						if(aplayer[aab]==dataMC04[p][0]){
							strcat(nowbatting,"誠泰Cobras ");strcat(nowbatting,MC04[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 誠泰Cobras %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,MC04[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataMC04[p][1];b=dataMC04[p][2];c=dataMC04[p][3];d=dataMC04[p][4];e=dataMC04[p][5];f=dataMC04[p][6];g=dataMC04[p][7];
								h=dataMC04[p][8];i=dataMC04[p][9];all=dataMC04[p][10];j=dataMC04[p][11];k=dataMC04[p][12];l=dataMC04[p][13];m=dataMC04[p][14];
								color(14);printf("第%d棒 誠泰Cobras %s：",aab,MC04[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<4;p++){
						if(aplayer[aab]==dataDT08[p][0]){
							strcat(nowbatting,"米迪亞暴龍 ");strcat(nowbatting,DT08[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 米迪亞暴龍 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,DT08[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataDT08[p][1];b=dataDT08[p][2];c=dataDT08[p][3];d=dataDT08[p][4];e=dataDT08[p][5];f=dataDT08[p][6];g=dataDT08[p][7];
								h=dataDT08[p][8];i=dataDT08[p][9];all=dataDT08[p][10];j=dataDT08[p][11];k=dataDT08[p][12];l=dataDT08[p][13];m=dataDT08[p][14];
								color(14);printf("第%d棒 米迪亞暴龍 %s：",aab,DT08[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<4;p++){
						if(aplayer[aab]==dataMT90[p][0]){
							strcat(nowbatting,"三商虎 ");strcat(nowbatting,MT90[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 三商虎 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,MT90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataMT90[p][1];b=dataMT90[p][2];c=dataMT90[p][3];d=dataMT90[p][4];e=dataMT90[p][5];f=dataMT90[p][6];g=dataMT90[p][7];
								h=dataMT90[p][8];i=dataMT90[p][9];all=dataMT90[p][10];j=dataMT90[p][11];k=dataMT90[p][12];l=dataMT90[p][13];m=dataMT90[p][14];
								color(14);printf("第%d棒 三商虎 %s：",aab,MT90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<39;p++){
						if(aplayer[aab]==dataCE93[p][0]){
							strcat(nowbatting,"時報鷹 ");strcat(nowbatting,CE93[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 時報鷹 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,CE93[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataCE93[p][1];b=dataCE93[p][2];c=dataCE93[p][3];d=dataCE93[p][4];e=dataCE93[p][5];f=dataCE93[p][6];g=dataCE93[p][7];
								h=dataCE93[p][8];i=dataCE93[p][9];all=dataCE93[p][10];j=dataCE93[p][11];k=dataCE93[p][12];l=dataCE93[p][13];m=dataCE93[p][14];
								color(14);printf("第%d棒 時報鷹 %s：",aab,CE93[p]);color(15);playerfound=1;
							}
						}
					}
				}
				if(ateam[aab]==1){
					if(ayear[aab]==15){
					}
					if(ayear[aab]==16){
						for(p=0;p<27;p++){
							if(aplayer[aab]==dataul2016[p][0]){
								strcat(nowbatting,"統一7-ELEVEn獅 2016 ");strcat(nowbatting,ul2016[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 統一7-ELEVEn獅 2016 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,ul2016[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2016[p][1];b=dataul2016[p][2];c=dataul2016[p][3];d=dataul2016[p][4];e=dataul2016[p][5];f=dataul2016[p][6];g=dataul2016[p][7];
									h=dataul2016[p][8];i=dataul2016[p][9];all=dataul2016[p][10];j=dataul2016[p][11];k=dataul2016[p][12];l=dataul2016[p][13];m=dataul2016[p][14];
									color(14);printf("第%d棒 統一7-ELEVEn獅 2016 %s：",aab,ul2016[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==17){
						for(p=0;p<30;p++){
							if(aplayer[aab]==dataul2017[p][0]){
								strcat(nowbatting,"統一7-ELEVEn獅 2017 ");strcat(nowbatting,ul2017[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 統一7-ELEVEn獅 2017 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,ul2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2017[p][1];b=dataul2017[p][2];c=dataul2017[p][3];d=dataul2017[p][4];e=dataul2017[p][5];f=dataul2017[p][6];g=dataul2017[p][7];
									h=dataul2017[p][8];i=dataul2017[p][9];all=dataul2017[p][10];j=dataul2017[p][11];k=dataul2017[p][12];l=dataul2017[p][13];m=dataul2017[p][14];
									color(14);printf("第%d棒 統一7-ELEVEn獅 2017 %s：",aab,ul2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==18){
						for(p=0;p<30;p++){
							if(aplayer[aab]==dataul2018[p][0]){
								strcat(nowbatting,"統一7-ELEVEn獅 2018 ");strcat(nowbatting,ul2018[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 統一7-ELEVEn獅 2018 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,ul2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2018[p][1];b=dataul2018[p][2];c=dataul2018[p][3];d=dataul2018[p][4];e=dataul2018[p][5];f=dataul2018[p][6];g=dataul2018[p][7];
									h=dataul2018[p][8];i=dataul2018[p][9];all=dataul2018[p][10];j=dataul2018[p][11];k=dataul2018[p][12];l=dataul2018[p][13];m=dataul2018[p][14];
									color(14);printf("第%d棒 統一7-ELEVEn獅 2018 %s：",aab,ul2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==19){
						for(p=0;p<34;p++){
							if(aplayer[aab]==dataul2019[p][0]){
								strcat(nowbatting,"統一7-ELEVEn獅 2019 ");strcat(nowbatting,ul2019[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 統一7-ELEVEn獅 2019 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,ul2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2019[p][1];b=dataul2019[p][2];c=dataul2019[p][3];d=dataul2019[p][4];e=dataul2019[p][5];f=dataul2019[p][6];g=dataul2019[p][7];
									h=dataul2019[p][8];i=dataul2019[p][9];all=dataul2019[p][10];j=dataul2019[p][11];k=dataul2019[p][12];l=dataul2019[p][13];m=dataul2019[p][14];
									color(14);printf("第%d棒 統一7-ELEVEn獅 2019 %s：",aab,ul2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==20){
						for(p=0;p<28;p++){
							if(aplayer[aab]==dataul2020[p][0]){
								strcat(nowbatting,"統一7-ELEVEn獅 2020 ");strcat(nowbatting,ul2020[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 統一7-ELEVEn獅 2020 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,ul2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2020[p][1];b=dataul2020[p][2];c=dataul2020[p][3];d=dataul2020[p][4];e=dataul2020[p][5];f=dataul2020[p][6];g=dataul2020[p][7];
									h=dataul2020[p][8];i=dataul2020[p][9];all=dataul2020[p][10];j=dataul2020[p][11];k=dataul2020[p][12];l=dataul2020[p][13];m=dataul2020[p][14];
									color(14);printf("第%d棒 統一7-ELEVEn獅 2020 %s：",aab,ul2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==21){
						for(p=0;p<33;p++){
							if(aplayer[aab]==dataul2021[p][0]){
								strcat(nowbatting,"統一7-ELEVEn獅 2021 ");strcat(nowbatting,ul2021[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 統一7-ELEVEn獅 2021 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,ul2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2021[p][1];b=dataul2021[p][2];c=dataul2021[p][3];d=dataul2021[p][4];e=dataul2021[p][5];f=dataul2021[p][6];g=dataul2021[p][7];
									h=dataul2021[p][8];i=dataul2021[p][9];all=dataul2021[p][10];j=dataul2021[p][11];k=dataul2021[p][12];l=dataul2021[p][13];m=dataul2021[p][14];
									color(14);printf("第%d棒 統一7-ELEVEn獅 2021 %s：",aab,ul2021[p]);color(15);playerfound=1;
								}
							}
						}
					}
				}
				if(ateam[aab]==2){
					if(ayear[aab]==15){
					}
					if(ayear[aab]==16){
						for(p=0;p<26;p++){
							if(aplayer[aab]==datacb2016[p][0]){
								strcat(nowbatting,"中信兄弟 2016 ");strcat(nowbatting,cb2016[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 中信兄弟 2016 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,cb2016[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2016[p][1];b=datacb2016[p][2];c=datacb2016[p][3];d=datacb2016[p][4];e=datacb2016[p][5];f=datacb2016[p][6];g=datacb2016[p][7];
									h=datacb2016[p][8];i=datacb2016[p][9];all=datacb2016[p][10];j=datacb2016[p][11];k=datacb2016[p][12];l=datacb2016[p][13];m=datacb2016[p][14];
									color(14);printf("第%d棒 中信兄弟 2016 %s：",aab,cb2016[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==17){
						for(p=0;p<27;p++){
							if(aplayer[aab]==datacb2017[p][0]){
								strcat(nowbatting,"中信兄弟 2017 ");strcat(nowbatting,cb2017[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 中信兄弟 2017 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,cb2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2017[p][1];b=datacb2017[p][2];c=datacb2017[p][3];d=datacb2017[p][4];e=datacb2017[p][5];f=datacb2017[p][6];g=datacb2017[p][7];
									h=datacb2017[p][8];i=datacb2017[p][9];all=datacb2017[p][10];j=datacb2017[p][11];k=datacb2017[p][12];l=datacb2017[p][13];m=datacb2017[p][14];
									color(14);printf("第%d棒 中信兄弟 2017 %s：",aab,cb2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==18){
						for(p=0;p<26;p++){
							if(aplayer[aab]==datacb2018[p][0]){
								strcat(nowbatting,"中信兄弟 2018 ");strcat(nowbatting,cb2018[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 中信兄弟 2018 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,cb2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2018[p][1];b=datacb2018[p][2];c=datacb2018[p][3];d=datacb2018[p][4];e=datacb2018[p][5];f=datacb2018[p][6];g=datacb2018[p][7];
									h=datacb2018[p][8];i=datacb2018[p][9];all=datacb2018[p][10];j=datacb2018[p][11];k=datacb2018[p][12];l=datacb2018[p][13];m=datacb2018[p][14];
									color(14);printf("第%d棒 中信兄弟 2018 %s：",aab,cb2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==19){
						for(p=0;p<26;p++){
							if(aplayer[aab]==datacb2019[p][0]){
								strcat(nowbatting,"中信兄弟 2019 ");strcat(nowbatting,cb2019[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 中信兄弟 2019 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,cb2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2019[p][1];b=datacb2019[p][2];c=datacb2019[p][3];d=datacb2019[p][4];e=datacb2019[p][5];f=datacb2019[p][6];g=datacb2019[p][7];
									h=datacb2019[p][8];i=datacb2019[p][9];all=datacb2019[p][10];j=datacb2019[p][11];k=datacb2019[p][12];l=datacb2019[p][13];m=datacb2019[p][14];
									color(14);printf("第%d棒 中信兄弟 2019 %s：",aab,cb2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==20){
						for(p=0;p<22;p++){
							if(aplayer[aab]==datacb2020[p][0]){
								strcat(nowbatting,"中信兄弟 2020 ");strcat(nowbatting,cb2020[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 中信兄弟 2020 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,cb2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2020[p][1];b=datacb2020[p][2];c=datacb2020[p][3];d=datacb2020[p][4];e=datacb2020[p][5];f=datacb2020[p][6];g=datacb2020[p][7];
									h=datacb2020[p][8];i=datacb2020[p][9];all=datacb2020[p][10];j=datacb2020[p][11];k=datacb2020[p][12];l=datacb2020[p][13];m=datacb2020[p][14];
									color(14);printf("第%d棒 中信兄弟 2020 %s：",aab,cb2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==21){
						for(p=0;p<28;p++){
							if(aplayer[aab]==datacb2021[p][0]){
								strcat(nowbatting,"中信兄弟 2021 ");strcat(nowbatting,cb2021[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 中信兄弟 2021 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,cb2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2021[p][1];b=datacb2021[p][2];c=datacb2021[p][3];d=datacb2021[p][4];e=datacb2021[p][5];f=datacb2021[p][6];g=datacb2021[p][7];
									h=datacb2021[p][8];i=datacb2021[p][9];all=datacb2021[p][10];j=datacb2021[p][11];k=datacb2021[p][12];l=datacb2021[p][13];m=datacb2021[p][14];
									color(14);printf("第%d棒 中信兄弟 2021 %s：",aab,cb2021[p]);color(15);playerfound=1;
								}
							}
						}
					}
				}
				if(ateam[aab]==3){
					if(ayear[aab]==15){
					}
					if(ayear[aab]==16){
					}
					if(ayear[aab]==17){
						for(p=0;p<27;p++){
							if(aplayer[aab]==datalm2017[p][0]){
								strcat(nowbatting,"Lamigo桃猿 2017 ");strcat(nowbatting,lm2017[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 Lamigo桃猿 2017 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,lm2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datalm2017[p][1];b=datalm2017[p][2];c=datalm2017[p][3];d=datalm2017[p][4];e=datalm2017[p][5];f=datalm2017[p][6];g=datalm2017[p][7];
									h=datalm2017[p][8];i=datalm2017[p][9];all=datalm2017[p][10];j=datalm2017[p][11];k=datalm2017[p][12];l=datalm2017[p][13];m=datalm2017[p][14];
									color(14);printf("第%d棒 Lamigo桃猿 2017 %s：",aab,lm2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==18){
						for(p=0;p<29;p++){
							if(aplayer[aab]==datalm2018[p][0]){
								strcat(nowbatting,"Lamigo桃猿 2018 ");strcat(nowbatting,lm2018[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 Lamigo桃猿 2018 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,lm2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datalm2018[p][1];b=datalm2018[p][2];c=datalm2018[p][3];d=datalm2018[p][4];e=datalm2018[p][5];f=datalm2018[p][6];g=datalm2018[p][7];
									h=datalm2018[p][8];i=datalm2018[p][9];all=datalm2018[p][10];j=datalm2018[p][11];k=datalm2018[p][12];l=datalm2018[p][13];m=datalm2018[p][14];
									color(14);printf("第%d棒 Lamigo桃猿 2018 %s：",aab,lm2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==19){
						for(p=0;p<25;p++){
							if(aplayer[aab]==datalm2019[p][0]){
								strcat(nowbatting,"Lamigo桃猿 2019 ");strcat(nowbatting,lm2019[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 Lamigo桃猿 2019 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,lm2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datalm2019[p][1];b=datalm2019[p][2];c=datalm2019[p][3];d=datalm2019[p][4];e=datalm2019[p][5];f=datalm2019[p][6];g=datalm2019[p][7];
									h=datalm2019[p][8];i=datalm2019[p][9];all=datalm2019[p][10];j=datalm2019[p][11];k=datalm2019[p][12];l=datalm2019[p][13];m=datalm2019[p][14];
									color(14);printf("第%d棒 Lamigo桃猿 2019 %s：",aab,lm2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==20){
						for(p=0;p<25;p++){
							if(aplayer[aab]==datarm2020[p][0]){
								strcat(nowbatting,"樂天桃猿 2020 ");strcat(nowbatting,rm2020[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 樂天桃猿 2020 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,rm2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datarm2020[p][1];b=datarm2020[p][2];c=datarm2020[p][3];d=datarm2020[p][4];e=datarm2020[p][5];f=datarm2020[p][6];g=datarm2020[p][7];
									h=datarm2020[p][8];i=datarm2020[p][9];all=datarm2020[p][10];j=datarm2020[p][11];k=datarm2020[p][12];l=datarm2020[p][13];m=datarm2020[p][14];
									color(14);printf("第%d棒 樂天桃猿 2020 %s：",aab,rm2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==21){
						for(p=0;p<26;p++){
							if(aplayer[aab]==datarm2021[p][0]){
								strcat(nowbatting,"樂天桃猿 2021 ");strcat(nowbatting,rm2021[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 樂天桃猿 2021 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,rm2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datarm2021[p][1];b=datarm2021[p][2];c=datarm2021[p][3];d=datarm2021[p][4];e=datarm2021[p][5];f=datarm2021[p][6];g=datarm2021[p][7];
									h=datarm2021[p][8];i=datarm2021[p][9];all=datarm2021[p][10];j=datarm2021[p][11];k=datarm2021[p][12];l=datarm2021[p][13];m=datarm2021[p][14];
									color(14);printf("第%d棒 樂天桃猿 2021 %s：",aab,rm2021[p]);color(15);playerfound=1;
								}
							}
						}
					}
				}
				if(ateam[aab]==4){
					if(ayear[aab]==15){
					}
					if(ayear[aab]==16){
					}
					if(ayear[aab]==17){
						for(p=0;p<28;p++){
							if(aplayer[aab]==datafg2017[p][0]){
								strcat(nowbatting,"富邦悍將 2017 ");strcat(nowbatting,fg2017[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 富邦悍將 2017 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,fg2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2017[p][1];b=datafg2017[p][2];c=datafg2017[p][3];d=datafg2017[p][4];e=datafg2017[p][5];f=datafg2017[p][6];g=datafg2017[p][7];
									h=datafg2017[p][8];i=datafg2017[p][9];all=datafg2017[p][10];j=datafg2017[p][11];k=datafg2017[p][12];l=datafg2017[p][13];m=datafg2017[p][14];
									color(14);printf("第%d棒 富邦悍將 2017 %s：",aab,fg2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==18){
						for(p=0;p<27;p++){
							if(aplayer[aab]==datafg2018[p][0]){
								strcat(nowbatting,"富邦悍將 2018 ");strcat(nowbatting,fg2018[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 富邦悍將 2018 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,fg2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2018[p][1];b=datafg2018[p][2];c=datafg2018[p][3];d=datafg2018[p][4];e=datafg2018[p][5];f=datafg2018[p][6];g=datafg2018[p][7];
									h=datafg2018[p][8];i=datafg2018[p][9];all=datafg2018[p][10];j=datafg2018[p][11];k=datafg2018[p][12];l=datafg2018[p][13];m=datafg2018[p][14];
									color(14);printf("第%d棒 富邦悍將 2018 %s：",aab,fg2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==19){
						for(p=0;p<25;p++){
							if(aplayer[aab]==datafg2019[p][0]){
								strcat(nowbatting,"富邦悍將 2019 ");strcat(nowbatting,fg2019[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 富邦悍將 2019 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,fg2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2019[p][1];b=datafg2019[p][2];c=datafg2019[p][3];d=datafg2019[p][4];e=datafg2019[p][5];f=datafg2019[p][6];g=datafg2019[p][7];
									h=datafg2019[p][8];i=datafg2019[p][9];all=datafg2019[p][10];j=datafg2019[p][11];k=datafg2019[p][12];l=datafg2019[p][13];m=datafg2019[p][14];
									color(14);printf("第%d棒 富邦悍將 2019 %s：",aab,fg2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==20){
						for(p=0;p<26;p++){
							if(aplayer[aab]==datafg2020[p][0]){
								strcat(nowbatting,"富邦悍將 2020 ");strcat(nowbatting,fg2020[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 富邦悍將 2020 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,fg2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2020[p][1];b=datafg2020[p][2];c=datafg2020[p][3];d=datafg2020[p][4];e=datafg2020[p][5];f=datafg2020[p][6];g=datafg2020[p][7];
									h=datafg2020[p][8];i=datafg2020[p][9];all=datafg2020[p][10];j=datafg2020[p][11];k=datafg2020[p][12];l=datafg2020[p][13];m=datafg2020[p][14];
									color(14);printf("第%d棒 富邦悍將 2020 %s：",aab,fg2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==21){
						for(p=0;p<33;p++){
							if(aplayer[aab]==datafg2021[p][0]){
								strcat(nowbatting,"富邦悍將 2021 ");strcat(nowbatting,fg2021[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 富邦悍將 2021 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,fg2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2021[p][1];b=datafg2021[p][2];c=datafg2021[p][3];d=datafg2021[p][4];e=datafg2021[p][5];f=datafg2021[p][6];g=datafg2021[p][7];
									h=datafg2021[p][8];i=datafg2021[p][9];all=datafg2021[p][10];j=datafg2021[p][11];k=datafg2021[p][12];l=datafg2021[p][13];m=datafg2021[p][14];
									color(14);printf("第%d棒 富邦悍將 2021 %s：",aab,fg2021[p]);color(15);playerfound=1;
								}
							}
						}
					}
				}
				if(ateam[aab]==5){
					if(ayear[aab]==94){
					}
					if(ayear[aab]==95){
					}
					if(ayear[aab]==96){
					}
					if(ayear[aab]==97){
					}
					if(ayear[aab]==98){
					}
					if(ayear[aab]==99){
					}
					if(ayear[aab]==21){
						for(p=0;p<30;p++){
							if(aplayer[aab]==datawd2021[p][0]){
								strcat(nowbatting,"味全龍 2021 ");strcat(nowbatting,wd2021[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 味全龍 2021 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",aab,wd2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datawd2021[p][1];b=datawd2021[p][2];c=datawd2021[p][3];d=datawd2021[p][4];e=datawd2021[p][5];f=datawd2021[p][6];g=datawd2021[p][7];
									h=datawd2021[p][8];i=datawd2021[p][9];all=datawd2021[p][10];j=datawd2021[p][11];k=datawd2021[p][12];l=datawd2021[p][13];m=datawd2021[p][14];
									color(14);printf("第%d棒 味全龍 2021 %s：",aab,wd2021[p]);color(15);playerfound=1;
								}
							}
						}
					}
				}
				if(ateam[aab]==8){
				}
				if(ateam[aab]==9){
				}
				if(aab==1){memset(ab1,'\0',50);strcat(ab1,nowbatting);}if(aab==2){memset(ab2,'\0',50);strcat(ab2,nowbatting);}if(aab==3){memset(ab3,'\0',50);strcat(ab3,nowbatting);}if(aab==4){memset(ab4,'\0',50);strcat(ab4,nowbatting);}if(aab==5){memset(ab5,'\0',50);strcat(ab5,nowbatting);}if(aab==6){memset(ab6,'\0',50);strcat(ab6,nowbatting);}if(aab==7){memset(ab7,'\0',50);strcat(ab7,nowbatting);}if(aab==8){memset(ab8,'\0',50);strcat(ab8,nowbatting);}if(aab==9){memset(ab9,'\0',50);strcat(ab9,nowbatting);}
				if(q==3)printf("\n客隊打序：\n第一棒 %s\n第二棒 %s\n第三棒 %s\n第四棒 %s\n第五棒 %s\n第六棒 %s\n第七棒 %s\n第八棒 %s\n第九棒 %s\n\n",ab1,ab2,ab3,ab4,ab5,ab6,ab7,ab8,ab9);
				memset(nowbatting,'\0',50);
			}
			if(inning%2==0){
				if(hteam[hab]==0){
					for(p=0;p<6;p++){
						if(hplayer[hab]==dataUL90[p][0]){
							strcat(nowbatting,"統一獅 ");strcat(nowbatting,UL90[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 統一獅 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,UL90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataUL90[p][1];b=dataUL90[p][2];c=dataUL90[p][3];d=dataUL90[p][4];e=dataUL90[p][5];f=dataUL90[p][6];g=dataUL90[p][7];
								h=dataUL90[p][8];i=dataUL90[p][9];all=dataUL90[p][10];j=dataUL90[p][11];k=dataUL90[p][12];l=dataUL90[p][13];m=dataUL90[p][14];
								color(10);printf("第%d棒 統一獅 %s：",hab,UL90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(hplayer[hab]==dataUL08[p][0]){
							strcat(nowbatting,"統一7-ELEVEn獅 ");strcat(nowbatting,UL08[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 統一7-ELEVEn獅 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,UL08[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataUL08[p][1];b=dataUL08[p][2];c=dataUL08[p][3];d=dataUL08[p][4];e=dataUL08[p][5];f=dataUL08[p][6];g=dataUL08[p][7];
								h=dataUL08[p][8];i=dataUL08[p][9];all=dataUL08[p][10];j=dataUL08[p][11];k=dataUL08[p][12];l=dataUL08[p][13];m=dataUL08[p][14];
								color(10);printf("第%d棒 統一7-ELEVEn獅 %s：",hab,UL08[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<74;p++){
						if(hplayer[hab]==dataBE90[p][0]){
							strcat(nowbatting,"兄弟象 ");strcat(nowbatting,BE90[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 兄弟象 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,BE90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataBE90[p][1];b=dataBE90[p][2];c=dataBE90[p][3];d=dataBE90[p][4];e=dataBE90[p][5];f=dataBE90[p][6];g=dataBE90[p][7];
								h=dataBE90[p][8];i=dataBE90[p][9];all=dataBE90[p][10];j=dataBE90[p][11];k=dataBE90[p][12];l=dataBE90[p][13];m=dataBE90[p][14];
								color(10);printf("第%d棒 兄弟象 %s：",hab,BE90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<6;p++){
						if(hplayer[hab]==dataCB14[p][0]){
							strcat(nowbatting,"中信兄弟 ");strcat(nowbatting,CB14[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 中信兄弟 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,CB14[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataCB14[p][1];b=dataCB14[p][2];c=dataCB14[p][3];d=dataCB14[p][4];e=dataCB14[p][5];f=dataCB14[p][6];g=dataCB14[p][7];
								h=dataCB14[p][8];i=dataCB14[p][9];all=dataCB14[p][10];j=dataCB14[p][11];k=dataCB14[p][12];l=dataCB14[p][13];m=dataCB14[p][14];
								color(10);printf("第%d棒 中信兄弟 %s：",hab,CB14[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<10;p++){
						if(hplayer[hab]==dataFA03[p][0]){
							strcat(nowbatting,"第一金剛 ");strcat(nowbatting,FA03[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 第一金剛 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,FA03[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataFA03[p][1];b=dataFA03[p][2];c=dataFA03[p][3];d=dataFA03[p][4];e=dataFA03[p][5];f=dataFA03[p][6];g=dataFA03[p][7];
								h=dataFA03[p][8];i=dataFA03[p][9];all=dataFA03[p][10];j=dataFA03[p][11];k=dataFA03[p][12];l=dataFA03[p][13];m=dataFA03[p][14];
								color(10);printf("第%d棒 第一金剛 %s：",hab,FA03[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<27;p++){
						if(hplayer[hab]==dataLB04[p][0]){
							strcat(nowbatting,"LaNew熊 ");strcat(nowbatting,LB04[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 LaNew熊 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,LB04[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataLB04[p][1];b=dataLB04[p][2];c=dataLB04[p][3];d=dataLB04[p][4];e=dataLB04[p][5];f=dataLB04[p][6];g=dataLB04[p][7];
								h=dataLB04[p][8];i=dataLB04[p][9];all=dataLB04[p][10];j=dataLB04[p][11];k=dataLB04[p][12];l=dataLB04[p][13];m=dataLB04[p][14];
								color(10);printf("第%d棒 LaNew熊 %s：",hab,LB04[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<3;p++){
						if(hplayer[hab]==dataLM11[p][0]){
							strcat(nowbatting,"Lamigo桃猿 ");strcat(nowbatting,LM11[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 Lamigo桃猿 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,LM11[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataLM11[p][1];b=dataLM11[p][2];c=dataLM11[p][3];d=dataLM11[p][4];e=dataLM11[p][5];f=dataLM11[p][6];g=dataLM11[p][7];
								h=dataLM11[p][8];i=dataLM11[p][9];all=dataLM11[p][10];j=dataLM11[p][11];k=dataLM11[p][12];l=dataLM11[p][13];m=dataLM11[p][14];
								color(10);printf("第%d棒 Lamigo桃猿 %s：",hab,LM11[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(hplayer[hab]==dataRM20[p][0]){
							strcat(nowbatting,"樂天桃猿 ");strcat(nowbatting,RM20[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 樂天桃猿 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,RM20[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataRM20[p][1];b=dataRM20[p][2];c=dataRM20[p][3];d=dataRM20[p][4];e=dataRM20[p][5];f=dataRM20[p][6];g=dataRM20[p][7];
								h=dataRM20[p][8];i=dataRM20[p][9];all=dataRM20[p][10];j=dataRM20[p][11];k=dataRM20[p][12];l=dataRM20[p][13];m=dataRM20[p][14];
								color(10);printf("第%d棒 樂天桃猿 %s：",hab,RM20[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<14;p++){
						if(hplayer[hab]==dataJB93[p][0]){
							strcat(nowbatting,"俊國熊 ");strcat(nowbatting,JB93[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 俊國熊 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,JB93[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataJB93[p][1];b=dataJB93[p][2];c=dataJB93[p][3];d=dataJB93[p][4];e=dataJB93[p][5];f=dataJB93[p][6];g=dataJB93[p][7];
								h=dataJB93[p][8];i=dataJB93[p][9];all=dataJB93[p][10];j=dataJB93[p][11];k=dataJB93[p][12];l=dataJB93[p][13];m=dataJB93[p][14];
								color(10);printf("第%d棒 俊國熊 %s：",hab,JB93[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(hplayer[hab]==dataSB96T[p][0]){
							strcat(nowbatting,"興農熊 ");strcat(nowbatting,SB96T[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 興農熊 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,SB96T[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataSB96T[p][1];b=dataSB96T[p][2];c=dataSB96T[p][3];d=dataSB96T[p][4];e=dataSB96T[p][5];f=dataSB96T[p][6];g=dataSB96T[p][7];
								h=dataSB96T[p][8];i=dataSB96T[p][9];all=dataSB96T[p][10];j=dataSB96T[p][11];k=dataSB96T[p][12];l=dataSB96T[p][13];m=dataSB96T[p][14];
								color(10);printf("第%d棒 興農熊 %s：",hab,SB96T[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<44;p++){
						if(hplayer[hab]==dataSB96B[p][0]){
							strcat(nowbatting,"興農牛 ");strcat(nowbatting,SB96B[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 興農牛 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,SB96B[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataSB96B[p][1];b=dataSB96B[p][2];c=dataSB96B[p][3];d=dataSB96B[p][4];e=dataSB96B[p][5];f=dataSB96B[p][6];g=dataSB96B[p][7];
								h=dataSB96B[p][8];i=dataSB96B[p][9];all=dataSB96B[p][10];j=dataSB96B[p][11];k=dataSB96B[p][12];l=dataSB96B[p][13];m=dataSB96B[p][14];
								color(10);printf("第%d棒 興農牛 %s：",hab,SB96B[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<2;p++){
						if(hplayer[hab]==dataER13[p][0]){
							strcat(nowbatting,"義大犀牛 ");strcat(nowbatting,ER13[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 義大犀牛 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,ER13[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataER13[p][1];b=dataER13[p][2];c=dataER13[p][3];d=dataER13[p][4];e=dataER13[p][5];f=dataER13[p][6];g=dataER13[p][7];
								h=dataER13[p][8];i=dataER13[p][9];all=dataER13[p][10];j=dataER13[p][11];k=dataER13[p][12];l=dataER13[p][13];m=dataER13[p][14];
								color(10);printf("第%d棒 義大犀牛 %s：",hab,ER13[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(hplayer[hab]==dataFG17[p][0]){
							strcat(nowbatting,"富邦悍將 ");strcat(nowbatting,FG17[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 富邦悍將 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,FG17[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataFG17[p][1];b=dataFG17[p][2];c=dataFG17[p][3];d=dataFG17[p][4];e=dataFG17[p][5];f=dataFG17[p][6];g=dataFG17[p][7];
								h=dataFG17[p][8];i=dataFG17[p][9];all=dataFG17[p][10];j=dataFG17[p][11];k=dataFG17[p][12];l=dataFG17[p][13];m=dataFG17[p][14];
								color(10);printf("第%d棒 富邦悍將 %s：",hab,FG17[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<49;p++){
						if(hplayer[hab]==dataWD90[p][0]){
							strcat(nowbatting,"味全龍 ");strcat(nowbatting,WD90[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 味全龍 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,WD90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataWD90[p][1];b=dataWD90[p][2];c=dataWD90[p][3];d=dataWD90[p][4];e=dataWD90[p][5];f=dataWD90[p][6];g=dataWD90[p][7];
								h=dataWD90[p][8];i=dataWD90[p][9];all=dataWD90[p][10];j=dataWD90[p][11];k=dataWD90[p][12];l=dataWD90[p][13];m=dataWD90[p][14];
								color(10);printf("第%d棒 味全龍 %s：",hab,WD90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<13;p++){
						if(hplayer[hab]==dataMS03[p][0]){
							strcat(nowbatting,"誠泰太陽 ");strcat(nowbatting,MS03[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 誠泰太陽 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,MS03[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataMS03[p][1];b=dataMS03[p][2];c=dataMS03[p][3];d=dataMS03[p][4];e=dataMS03[p][5];f=dataMS03[p][6];g=dataMS03[p][7];
								h=dataMS03[p][8];i=dataMS03[p][9];all=dataMS03[p][10];j=dataMS03[p][11];k=dataMS03[p][12];l=dataMS03[p][13];m=dataMS03[p][14];
								color(10);printf("第%d棒 誠泰太陽 %s：",hab,MS03[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<25;p++){
						if(hplayer[hab]==dataMC04[p][0]){
							strcat(nowbatting,"誠泰Cobras ");strcat(nowbatting,MC04[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 誠泰Cobras %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,MC04[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataMC04[p][1];b=dataMC04[p][2];c=dataMC04[p][3];d=dataMC04[p][4];e=dataMC04[p][5];f=dataMC04[p][6];g=dataMC04[p][7];
								h=dataMC04[p][8];i=dataMC04[p][9];all=dataMC04[p][10];j=dataMC04[p][11];k=dataMC04[p][12];l=dataMC04[p][13];m=dataMC04[p][14];
								color(10);printf("第%d棒 誠泰Cobras %s：",hab,MC04[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<4;p++){
						if(hplayer[hab]==dataDT08[p][0]){
							strcat(nowbatting,"米迪亞暴龍 ");strcat(nowbatting,DT08[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 米迪亞暴龍 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,DT08[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataDT08[p][1];b=dataDT08[p][2];c=dataDT08[p][3];d=dataDT08[p][4];e=dataDT08[p][5];f=dataDT08[p][6];g=dataDT08[p][7];
								h=dataDT08[p][8];i=dataDT08[p][9];all=dataDT08[p][10];j=dataDT08[p][11];k=dataDT08[p][12];l=dataDT08[p][13];m=dataDT08[p][14];
								color(10);printf("第%d棒 米迪亞暴龍 %s：",hab,DT08[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<4;p++){
						if(hplayer[hab]==dataMT90[p][0]){
							strcat(nowbatting,"三商虎 ");strcat(nowbatting,MT90[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 三商虎 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,MT90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataMT90[p][1];b=dataMT90[p][2];c=dataMT90[p][3];d=dataMT90[p][4];e=dataMT90[p][5];f=dataMT90[p][6];g=dataMT90[p][7];
								h=dataMT90[p][8];i=dataMT90[p][9];all=dataMT90[p][10];j=dataMT90[p][11];k=dataMT90[p][12];l=dataMT90[p][13];m=dataMT90[p][14];
								color(10);printf("第%d棒 三商虎 %s：",hab,MT90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<39;p++){
						if(hplayer[hab]==dataCE93[p][0]){
							strcat(nowbatting,"時報鷹 ");strcat(nowbatting,CE93[p]);
							if(gamemode==1){
								printf("下一棒：第%d棒 時報鷹 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,CE93[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("選擇代打球員：");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataCE93[p][1];b=dataCE93[p][2];c=dataCE93[p][3];d=dataCE93[p][4];e=dataCE93[p][5];f=dataCE93[p][6];g=dataCE93[p][7];
								h=dataCE93[p][8];i=dataCE93[p][9];all=dataCE93[p][10];j=dataCE93[p][11];k=dataCE93[p][12];l=dataCE93[p][13];m=dataCE93[p][14];
								color(10);printf("第%d棒 時報鷹 %s：",hab,CE93[p]);color(15);playerfound=1;
							}
						}
					}
				}
				if(hteam[hab]==1){
					if(hyear[hab]==15){
					}
					if(hyear[hab]==16){
						for(p=0;p<27;p++){
							if(hplayer[hab]==dataul2016[p][0]){
								strcat(nowbatting,"統一7-ELEVEn獅 2016 ");strcat(nowbatting,ul2016[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 統一7-ELEVEn獅 2016 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,ul2016[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2016[p][1];b=dataul2016[p][2];c=dataul2016[p][3];d=dataul2016[p][4];e=dataul2016[p][5];f=dataul2016[p][6];g=dataul2016[p][7];
									h=dataul2016[p][8];i=dataul2016[p][9];all=dataul2016[p][10];j=dataul2016[p][11];k=dataul2016[p][12];l=dataul2016[p][13];m=dataul2016[p][14];
									color(10);printf("第%d棒 統一7-ELEVEn獅 2016 %s：",hab,ul2016[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==17){
						for(p=0;p<30;p++){
							if(hplayer[hab]==dataul2017[p][0]){
								strcat(nowbatting,"統一7-ELEVEn獅 2017 ");strcat(nowbatting,ul2017[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 統一7-ELEVEn獅 2017 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,ul2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2017[p][1];b=dataul2017[p][2];c=dataul2017[p][3];d=dataul2017[p][4];e=dataul2017[p][5];f=dataul2017[p][6];g=dataul2017[p][7];
									h=dataul2017[p][8];i=dataul2017[p][9];all=dataul2017[p][10];j=dataul2017[p][11];k=dataul2017[p][12];l=dataul2017[p][13];m=dataul2017[p][14];
									color(10);printf("第%d棒 統一7-ELEVEn獅 2017 %s：",hab,ul2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==18){
						for(p=0;p<30;p++){
							if(hplayer[hab]==dataul2018[p][0]){
								strcat(nowbatting,"統一7-ELEVEn獅 2018 ");strcat(nowbatting,ul2018[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 統一7-ELEVEn獅 2018 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,ul2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2018[p][1];b=dataul2018[p][2];c=dataul2018[p][3];d=dataul2018[p][4];e=dataul2018[p][5];f=dataul2018[p][6];g=dataul2018[p][7];
									h=dataul2018[p][8];i=dataul2018[p][9];all=dataul2018[p][10];j=dataul2018[p][11];k=dataul2018[p][12];l=dataul2018[p][13];m=dataul2018[p][14];
									color(10);printf("第%d棒 統一7-ELEVEn獅 2018 %s：",hab,ul2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==19){
						for(p=0;p<34;p++){
							if(hplayer[hab]==dataul2019[p][0]){
								strcat(nowbatting,"統一7-ELEVEn獅 2019 ");strcat(nowbatting,ul2019[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 統一7-ELEVEn獅 2019 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,ul2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2019[p][1];b=dataul2019[p][2];c=dataul2019[p][3];d=dataul2019[p][4];e=dataul2019[p][5];f=dataul2019[p][6];g=dataul2019[p][7];
									h=dataul2019[p][8];i=dataul2019[p][9];all=dataul2019[p][10];j=dataul2019[p][11];k=dataul2019[p][12];l=dataul2019[p][13];m=dataul2019[p][14];
									color(10);printf("第%d棒 統一7-ELEVEn獅 2019 %s：",hab,ul2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==20){
						for(p=0;p<28;p++){
							if(hplayer[hab]==dataul2020[p][0]){
								strcat(nowbatting,"統一7-ELEVEn獅 2020 ");strcat(nowbatting,ul2020[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 統一7-ELEVEn獅 2020 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,ul2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2020[p][1];b=dataul2020[p][2];c=dataul2020[p][3];d=dataul2020[p][4];e=dataul2020[p][5];f=dataul2020[p][6];g=dataul2020[p][7];
									h=dataul2020[p][8];i=dataul2020[p][9];all=dataul2020[p][10];j=dataul2020[p][11];k=dataul2020[p][12];l=dataul2020[p][13];m=dataul2020[p][14];
									color(10);printf("第%d棒 統一7-ELEVEn獅 2020 %s：",hab,ul2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==21){
						for(p=0;p<33;p++){
							if(hplayer[hab]==dataul2021[p][0]){
								strcat(nowbatting,"統一7-ELEVEn獅 2021 ");strcat(nowbatting,ul2021[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 統一7-ELEVEn獅 2021 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,ul2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2021[p][1];b=dataul2021[p][2];c=dataul2021[p][3];d=dataul2021[p][4];e=dataul2021[p][5];f=dataul2021[p][6];g=dataul2021[p][7];
									h=dataul2021[p][8];i=dataul2021[p][9];all=dataul2021[p][10];j=dataul2021[p][11];k=dataul2021[p][12];l=dataul2021[p][13];m=dataul2021[p][14];
									color(10);printf("第%d棒 統一7-ELEVEn獅 2021 %s：",hab,ul2021[p]);color(15);playerfound=1;
								}
							}
						}
					}
				}
				if(hteam[hab]==2){
					if(hyear[hab]==15){
					}
					if(hyear[hab]==16){
						for(p=0;p<26;p++){
							if(hplayer[hab]==datacb2016[p][0]){
								strcat(nowbatting,"中信兄弟 2016 ");strcat(nowbatting,cb2016[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 中信兄弟 2016 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,cb2016[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2016[p][1];b=datacb2016[p][2];c=datacb2016[p][3];d=datacb2016[p][4];e=datacb2016[p][5];f=datacb2016[p][6];g=datacb2016[p][7];
									h=datacb2016[p][8];i=datacb2016[p][9];all=datacb2016[p][10];j=datacb2016[p][11];k=datacb2016[p][12];l=datacb2016[p][13];m=datacb2016[p][14];
									color(10);printf("第%d棒 中信兄弟 2016 %s：",hab,cb2016[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==17){
						for(p=0;p<27;p++){
							if(hplayer[hab]==datacb2017[p][0]){
								strcat(nowbatting,"中信兄弟 2017 ");strcat(nowbatting,cb2017[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 中信兄弟 2017 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,cb2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2017[p][1];b=datacb2017[p][2];c=datacb2017[p][3];d=datacb2017[p][4];e=datacb2017[p][5];f=datacb2017[p][6];g=datacb2017[p][7];
									h=datacb2017[p][8];i=datacb2017[p][9];all=datacb2017[p][10];j=datacb2017[p][11];k=datacb2017[p][12];l=datacb2017[p][13];m=datacb2017[p][14];
									color(10);printf("第%d棒 中信兄弟 2017 %s：",hab,cb2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==18){
						for(p=0;p<26;p++){
							if(hplayer[hab]==datacb2018[p][0]){
								strcat(nowbatting,"中信兄弟 2018 ");strcat(nowbatting,cb2018[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 中信兄弟 2018 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,cb2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2018[p][1];b=datacb2018[p][2];c=datacb2018[p][3];d=datacb2018[p][4];e=datacb2018[p][5];f=datacb2018[p][6];g=datacb2018[p][7];
									h=datacb2018[p][8];i=datacb2018[p][9];all=datacb2018[p][10];j=datacb2018[p][11];k=datacb2018[p][12];l=datacb2018[p][13];m=datacb2018[p][14];
									color(10);printf("第%d棒 中信兄弟 2018 %s：",hab,cb2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==19){
						for(p=0;p<26;p++){
							if(hplayer[hab]==datacb2019[p][0]){
								strcat(nowbatting,"中信兄弟 2019 ");strcat(nowbatting,cb2019[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 中信兄弟 2019 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,cb2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2019[p][1];b=datacb2019[p][2];c=datacb2019[p][3];d=datacb2019[p][4];e=datacb2019[p][5];f=datacb2019[p][6];g=datacb2019[p][7];
									h=datacb2019[p][8];i=datacb2019[p][9];all=datacb2019[p][10];j=datacb2019[p][11];k=datacb2019[p][12];l=datacb2019[p][13];m=datacb2019[p][14];
									color(10);printf("第%d棒 中信兄弟 2019 %s：",hab,cb2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==20){
						for(p=0;p<22;p++){
							if(hplayer[hab]==datacb2020[p][0]){
								strcat(nowbatting,"中信兄弟 2020 ");strcat(nowbatting,cb2020[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 中信兄弟 2020 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,cb2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2020[p][1];b=datacb2020[p][2];c=datacb2020[p][3];d=datacb2020[p][4];e=datacb2020[p][5];f=datacb2020[p][6];g=datacb2020[p][7];
									h=datacb2020[p][8];i=datacb2020[p][9];all=datacb2020[p][10];j=datacb2020[p][11];k=datacb2020[p][12];l=datacb2020[p][13];m=datacb2020[p][14];
									color(10);printf("第%d棒 中信兄弟 2020 %s：",hab,cb2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==21){
						for(p=0;p<28;p++){
							if(hplayer[hab]==datacb2021[p][0]){
								strcat(nowbatting,"中信兄弟 2021 ");strcat(nowbatting,cb2021[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 中信兄弟 2021 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,cb2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2021[p][1];b=datacb2021[p][2];c=datacb2021[p][3];d=datacb2021[p][4];e=datacb2021[p][5];f=datacb2021[p][6];g=datacb2021[p][7];
									h=datacb2021[p][8];i=datacb2021[p][9];all=datacb2021[p][10];j=datacb2021[p][11];k=datacb2021[p][12];l=datacb2021[p][13];m=datacb2021[p][14];
									color(10);printf("第%d棒 中信兄弟 2021 %s：",hab,cb2021[p]);color(15);playerfound=1;
								}
							}
						}
					}
				}
				if(hteam[hab]==3){
					if(hyear[hab]==15){
					}
					if(hyear[hab]==16){
					}
					if(hyear[hab]==17){
						for(p=0;p<27;p++){
							if(hplayer[hab]==datalm2017[p][0]){
								strcat(nowbatting,"Lamigo桃猿 2017 ");strcat(nowbatting,lm2017[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 Lamigo桃猿 2017 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,lm2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datalm2017[p][1];b=datalm2017[p][2];c=datalm2017[p][3];d=datalm2017[p][4];e=datalm2017[p][5];f=datalm2017[p][6];g=datalm2017[p][7];
									h=datalm2017[p][8];i=datalm2017[p][9];all=datalm2017[p][10];j=datalm2017[p][11];k=datalm2017[p][12];l=datalm2017[p][13];m=datalm2017[p][14];
									color(10);printf("第%d棒 Lamigo桃猿 2017 %s：",hab,lm2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==18){
						for(p=0;p<29;p++){
							if(hplayer[hab]==datalm2018[p][0]){
								strcat(nowbatting,"Lamigo桃猿 2018 ");strcat(nowbatting,lm2018[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 Lamigo桃猿 2018 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,lm2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datalm2018[p][1];b=datalm2018[p][2];c=datalm2018[p][3];d=datalm2018[p][4];e=datalm2018[p][5];f=datalm2018[p][6];g=datalm2018[p][7];
									h=datalm2018[p][8];i=datalm2018[p][9];all=datalm2018[p][10];j=datalm2018[p][11];k=datalm2018[p][12];l=datalm2018[p][13];m=datalm2018[p][14];
									color(10);printf("第%d棒 Lamigo桃猿 2018 %s：",hab,lm2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==19){
						for(p=0;p<25;p++){
							if(hplayer[hab]==datalm2019[p][0]){
								strcat(nowbatting,"Lamigo桃猿 2019 ");strcat(nowbatting,lm2019[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 Lamigo桃猿 2019 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,lm2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datalm2019[p][1];b=datalm2019[p][2];c=datalm2019[p][3];d=datalm2019[p][4];e=datalm2019[p][5];f=datalm2019[p][6];g=datalm2019[p][7];
									h=datalm2019[p][8];i=datalm2019[p][9];all=datalm2019[p][10];j=datalm2019[p][11];k=datalm2019[p][12];l=datalm2019[p][13];m=datalm2019[p][14];
									color(10);printf("第%d棒 Lamigo桃猿 2019 %s：",hab,lm2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==20){
						for(p=0;p<25;p++){
							if(hplayer[hab]==datarm2020[p][0]){
								strcat(nowbatting,"樂天桃猿 2020 ");strcat(nowbatting,rm2020[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 樂天桃猿 2020 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,rm2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datarm2020[p][1];b=datarm2020[p][2];c=datarm2020[p][3];d=datarm2020[p][4];e=datarm2020[p][5];f=datarm2020[p][6];g=datarm2020[p][7];
									h=datarm2020[p][8];i=datarm2020[p][9];all=datarm2020[p][10];j=datarm2020[p][11];k=datarm2020[p][12];l=datarm2020[p][13];m=datarm2020[p][14];
									color(10);printf("第%d棒 樂天桃猿 2020 %s：",hab,rm2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==21){
						for(p=0;p<26;p++){
							if(hplayer[hab]==datarm2021[p][0]){
								strcat(nowbatting,"樂天桃猿 2021 ");strcat(nowbatting,rm2021[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 樂天桃猿 2021 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,rm2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datarm2021[p][1];b=datarm2021[p][2];c=datarm2021[p][3];d=datarm2021[p][4];e=datarm2021[p][5];f=datarm2021[p][6];g=datarm2021[p][7];
									h=datarm2021[p][8];i=datarm2021[p][9];all=datarm2021[p][10];j=datarm2021[p][11];k=datarm2021[p][12];l=datarm2021[p][13];m=datarm2021[p][14];
									color(10);printf("第%d棒 樂天桃猿 2021 %s：",hab,rm2021[p]);color(15);playerfound=1;
								}
							}
						}
					}
				}
				if(hteam[hab]==4){
					if(hyear[hab]==15){
					}
					if(hyear[hab]==16){
					}
					if(hyear[hab]==17){
						for(p=0;p<28;p++){
							if(hplayer[hab]==datafg2017[p][0]){
								strcat(nowbatting,"富邦悍將 2017 ");strcat(nowbatting,fg2017[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 富邦悍將 2017 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,fg2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2017[p][1];b=datafg2017[p][2];c=datafg2017[p][3];d=datafg2017[p][4];e=datafg2017[p][5];f=datafg2017[p][6];g=datafg2017[p][7];
									h=datafg2017[p][8];i=datafg2017[p][9];all=datafg2017[p][10];j=datafg2017[p][11];k=datafg2017[p][12];l=datafg2017[p][13];m=datafg2017[p][14];
									color(10);printf("第%d棒 富邦悍將 2017 %s：",hab,fg2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==18){
						for(p=0;p<27;p++){
							if(hplayer[hab]==datafg2018[p][0]){
								strcat(nowbatting,"富邦悍將 2018 ");strcat(nowbatting,fg2018[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 富邦悍將 2018 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,fg2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2018[p][1];b=datafg2018[p][2];c=datafg2018[p][3];d=datafg2018[p][4];e=datafg2018[p][5];f=datafg2018[p][6];g=datafg2018[p][7];
									h=datafg2018[p][8];i=datafg2018[p][9];all=datafg2018[p][10];j=datafg2018[p][11];k=datafg2018[p][12];l=datafg2018[p][13];m=datafg2018[p][14];
									color(10);printf("第%d棒 富邦悍將 2018 %s：",hab,fg2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==19){
						for(p=0;p<25;p++){
							if(hplayer[hab]==datafg2019[p][0]){
								strcat(nowbatting,"富邦悍將 2019 ");strcat(nowbatting,fg2019[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 富邦悍將 2019 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,fg2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2019[p][1];b=datafg2019[p][2];c=datafg2019[p][3];d=datafg2019[p][4];e=datafg2019[p][5];f=datafg2019[p][6];g=datafg2019[p][7];
									h=datafg2019[p][8];i=datafg2019[p][9];all=datafg2019[p][10];j=datafg2019[p][11];k=datafg2019[p][12];l=datafg2019[p][13];m=datafg2019[p][14];
									color(10);printf("第%d棒 富邦悍將 2019 %s：",hab,fg2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==20){
						for(p=0;p<26;p++){
							if(hplayer[hab]==datafg2020[p][0]){
								strcat(nowbatting,"富邦悍將 2020 ");strcat(nowbatting,fg2020[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 富邦悍將 2020 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,fg2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2020[p][1];b=datafg2020[p][2];c=datafg2020[p][3];d=datafg2020[p][4];e=datafg2020[p][5];f=datafg2020[p][6];g=datafg2020[p][7];
									h=datafg2020[p][8];i=datafg2020[p][9];all=datafg2020[p][10];j=datafg2020[p][11];k=datafg2020[p][12];l=datafg2020[p][13];m=datafg2020[p][14];
									color(10);printf("第%d棒 富邦悍將 2020 %s：",hab,fg2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==21){
						for(p=0;p<33;p++){
							if(hplayer[hab]==datafg2021[p][0]){
								strcat(nowbatting,"富邦悍將 2021 ");strcat(nowbatting,fg2021[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 富邦悍將 2021 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,fg2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2021[p][1];b=datafg2021[p][2];c=datafg2021[p][3];d=datafg2021[p][4];e=datafg2021[p][5];f=datafg2021[p][6];g=datafg2021[p][7];
									h=datafg2021[p][8];i=datafg2021[p][9];all=datafg2021[p][10];j=datafg2021[p][11];k=datafg2021[p][12];l=datafg2021[p][13];m=datafg2021[p][14];
									color(10);printf("第%d棒 富邦悍將 2021 %s：",hab,fg2021[p]);color(15);playerfound=1;
								}
							}
						}
					}
				}
				if(hteam[hab]==5){
					if(hyear[hab]==94){
					}
					if(hyear[hab]==95){
					}
					if(hyear[hab]==96){
					}
					if(hyear[hab]==97){
					}
					if(hyear[hab]==98){
					}
					if(hyear[hab]==99){
					}
					if(hyear[hab]==21){
						for(p=0;p<30;p++){
							if(hplayer[hab]==datawd2021[p][0]){
								strcat(nowbatting,"味全龍 2021 ");strcat(nowbatting,wd2021[p]);
								if(gamemode==1){
									printf("下一棒：第%d棒 味全龍 2021 %s    請選擇 1.繼續 2.更換代打 3.查看打序 4.跳過半局 5.跳過比賽：",hab,wd2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("選擇代打球員：");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datawd2021[p][1];b=datawd2021[p][2];c=datawd2021[p][3];d=datawd2021[p][4];e=datawd2021[p][5];f=datawd2021[p][6];g=datawd2021[p][7];
									h=datawd2021[p][8];i=datawd2021[p][9];all=datawd2021[p][10];j=datawd2021[p][11];k=datawd2021[p][12];l=datawd2021[p][13];m=datawd2021[p][14];
									color(10);printf("第%d棒 味全龍 2021 %s：",hab,wd2021[p]);color(15);playerfound=1;
								}
							}
						}
					}
				}
				if(hteam[hab]==8){
				}
				if(hteam[hab]==9){
				}
				if(hab==1){memset(hb1,'\0',50);strcat(hb1,nowbatting);}if(hab==2){memset(hb2,'\0',50);strcat(hb2,nowbatting);}if(hab==3){memset(hb3,'\0',50);strcat(hb3,nowbatting);}if(hab==4){memset(hb4,'\0',50);strcat(hb4,nowbatting);}if(hab==5){memset(hb5,'\0',50);strcat(hb5,nowbatting);}if(hab==6){memset(hb6,'\0',50);strcat(hb6,nowbatting);}if(hab==7){memset(hb7,'\0',50);strcat(hb7,nowbatting);}if(hab==8){memset(hb8,'\0',50);strcat(hb8,nowbatting);}if(hab==9){memset(hb9,'\0',50);strcat(hb9,nowbatting);}
				if(q==3)printf("\n主隊打序：\n第一棒 %s\n第二棒 %s\n第三棒 %s\n第四棒 %s\n第五棒 %s\n第六棒 %s\n第七棒 %s\n第八棒 %s\n第九棒 %s\n\n",hb1,hb2,hb3,hb4,hb5,hb6,hb7,hb8,hb9);
				memset(nowbatting,'\0',50);
			}
			if(playerfound==0){color(207);printf("查無此球員，請重新輸入：");color(15);q=2;}
			
			if(q==2){
				if(inning%2==1){
					scanf("%d%d%d",&ateam[aab],&ayear[aab],&aplayer[aab]);
				}
				if(inning%2==0){
					scanf("%d%d%d",&hteam[hab],&hyear[hab],&hplayer[hab]);
				}
			}
			else if((q==1)||(q==4)||(q==5)){
				r=(rand()%all)+1;
				if(l!=0)dpr=(rand()%l)+1;else dpr=1000000;
				if(m!=0)sfr=(rand()%m)+1;else sfr=1000000;
				if(r<=a){
					color(11);printf("一安！");color(15);
					if(b3==1){b3=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b2==1){b2=0;b3=1;}
					if(b1==1){b1=0;b2=1;}
					b1=1;
					if(getscore!=0){color(159);printf("得%d分，",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
					if(inning%2==1)ahits++;else hhits++;
				}
				else if(a+1<=r && r<=a+b){
					color(11);printf("二安！");color(15);
					if(b3==1){b3=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b2==1){b2=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b1==1){b1=0;b3=1;}
					b2=1;
					if(getscore!=0){color(159);printf("得%d分，",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
					if(inning%2==1)ahits++;else hhits++;
				}
				else if(a+b+1<=r && r<=a+b+c){
					color(11);printf("三安！");color(15);
					if(b3==1){b3=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b2==1){b2=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b1==1){b1=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					b3=1;
					if(getscore!=0){color(159);printf("得%d分，",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
					if(inning%2==1)ahits++;else hhits++;
				}
				else if(a+b+c+1<=r && r<=a+b+c+d){
					color(11);if(b1+b2+b3==0)printf("陽春全壘打！");if(b1+b2+b3==1)printf("兩分全壘打！");if(b1+b2+b3==2)printf("三分全壘打！");if(b1+b2+b3==3)printf("滿貫全壘打！");color(15);
					if(b3==1){b3=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b2==1){b2=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b1==1){b1=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					getscore++;if(inning%2==1){ascore++;ahits++;}else{hscore++;hhits++;}
					if(getscore!=0){color(159);printf("得%d分，",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
					if(inning%2==1){if(aab==1)strcat(homerun,ab1);if(aab==2)strcat(homerun,ab2);if(aab==3)strcat(homerun,ab3);if(aab==4)strcat(homerun,ab4);if(aab==5)strcat(homerun,ab5);if(aab==6)strcat(homerun,ab6);if(aab==7)strcat(homerun,ab7);if(aab==8)strcat(homerun,ab8);if(aab==9)strcat(homerun,ab9);}
					else{if(hab==1)strcat(homerun,hb1);if(hab==2)strcat(homerun,hb2);if(hab==3)strcat(homerun,hb3);if(hab==4)strcat(homerun,hb4);if(hab==5)strcat(homerun,hb5);if(hab==6)strcat(homerun,hb6);if(hab==7)strcat(homerun,hb7);if(hab==8)strcat(homerun,hb8);if(hab==9)strcat(homerun,hb9);}
					x=ceil((inning+1)/2);sprintf(hrdetail,"%d",x);strcat(homerun,"(");strcat(homerun,hrdetail);if(inning%2==1)strcat(homerun,"局上,");else strcat(homerun,"局下,");sprintf(hrdetail,"%d",getscore);strcat(homerun,hrdetail);strcat(homerun,"分)\n        ");
				}
				else if(a+b+c+d+1<=r && r<=a+b+c+d+e){
					color(12);printf("三振！");color(15);
					out++;
				}
				else if(a+b+c+d+e+1<=r && r<=a+b+c+d+e+f){
					color(11);printf("四壞！");color(15);
					if(b1+b2+b3==3){getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b1+b2+b3==2){b1=1;b2=1;b3=1;}
					if(b1+b2+b3==1){if(b3==1)b1=1;else{b1=1;b2=1;}}
					b1=1;
					if(getscore!=0){color(159);printf("得%d分，",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
					if(inning%2==1)abb++;else hbb++;
				}
				else if(a+b+c+d+e+f+1<=r && r<=a+b+c+d+e+f+g){
					color(11);printf("死球！");color(15);
					if(b1+b2+b3==3){getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b1+b2+b3==2){b1=1;b2=1;b3=1;}
					if(b1+b2+b3==1){if(b3==1)b1=1;else{b1=1;b2=1;}}
					b1=1;
					if(getscore!=0){color(159);printf("得%d分，",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
					if(inning%2==1)abb++;else hbb++;
				}
				else if(a+b+c+d+e+f+g+1<=r && r<=a+b+c+d+e+f+g+h){
					if(out<=1){
						if(dpr<=j && b1==1){
							color(12);printf("雙殺打！");color(15);
							out=out+2;
							if(b3==1){b3=0;if(out!=3){getscore++;if(inning%2==1)ascore++;else hscore++;}}
							if(b2==1){b2=0;b3=1;}
							b1=0;
						}
						else{
							gor=(rand()%2)+1;
							if((gor==1 && b1==1)){
								color(12);printf("滾地出局！");color(110);printf("打者上壘，一壘跑者出局，");color(15);
								out++;
								if(b3==1){b3=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
								if(b2==1){b2=0;b3=1;}
								b1=1;
							}
							else{
								color(12);printf("滾地出局！");color(15);
								out++;
								if(b3==1){b3=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
								if(b2==1){b2=0;b3=1;}
								if(b1==1){b1=0;b2=1;}
								b1=0;
							}
						}
					}
					else{
						color(12);printf("滾地出局！");color(15);
						out++;
					}
					if(getscore!=0){color(159);printf("得%d分，",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
				}
				else if(a+b+c+d+e+f+g+h+1<=r && r<=a+b+c+d+e+f+g+h+i){
					if(out<=1){
						if(sfr<=k && b3==1){
							color(12);printf("犧飛！");color(159);printf("得1分，");color(15);
							out++;
							b3=0;if(inning%2==1)ascore++;else hscore++;
							aor=(rand()%2)+1;
							if(aor==1 && b2==1){
								color(110);printf("二壘跑者推進，");color(15);
								b2=0;b3=1;
							}
							inningscore[inning]++;
						}
						else{
							color(12);printf("高飛出局！");color(15);
							out++;
							aor=(rand()%2)+1;
							if(aor==1 && b2==1 && b3==0){
								color(110);printf("二壘跑者推進，");color(15);
								b2=0;b3=1;
							}
						}
					}
					else{
					color(12);printf("高飛出局！");color(15);
					out++;
					}
				}
				getscore=0;
				if(inning%2==1){
					aab++;
					if(aab==10)aab=1;
				}
				if(inning%2==0){
					hab++;
					if(hab==10)hab=1;
				}
				if((inning==18 && ascore<hscore)||(inning==20 && ascore<hscore)||(inning==22 && ascore<hscore)||(inning==24 && ascore<hscore)){
					color(143);printf("比賽結束\n比賽結束，客隊 %d：%d 主隊\n",ascore,hscore);color(15);
					if(inning==18 &&ascore<hscore){
						printf("\n       1   2   3   4   5   6   7   8   9  ");color(143);printf(" R   H   B \n");
						color(14);printf("客隊");for(p=1;p<19;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
						color(10);printf("主隊");for(p=2;p<17;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}hruns=hruns+inningscore[18];printf(" %2dX %2dX  %2d  %2d\n",inningscore[18],hruns,hhits,hbb);
						color(15);printf("全壘打：%s",homerun);if(strlen(homerun)==0)printf("(無)\n");else printf("\n");
					}
					else if(inning==20 &&ascore<hscore){
						printf("\n       1   2   3   4   5   6   7   8   9  10  ");color(143);printf(" R   H   B \n");
						color(14);printf("客隊");for(p=1;p<21;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
						color(10);printf("主隊");for(p=2;p<19;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}hruns=hruns+inningscore[20];printf(" %2dX %2dX  %2d  %2d\n",inningscore[20],hruns,hhits,hbb);
						color(15);printf("全壘打：%s",homerun);if(strlen(homerun)==0)printf("(無)\n");else printf("\n");
					}
					else if(inning==22 && ascore<hscore){
						printf("\n       1   2   3   4   5   6   7   8   9  10  11  ");color(143);printf(" R   H   B \n");
						color(14);printf("客隊");for(p=1;p<23;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
						color(10);printf("主隊");for(p=2;p<21;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}hruns=hruns+inningscore[22];printf(" %2dX %2dX  %2d  %2d\n",inningscore[22],hruns,hhits,hbb);
						color(15);printf("全壘打：%s",homerun);if(strlen(homerun)==0)printf("(無)\n");else printf("\n");
					}
					else{
						printf("\n       1   2   3   4   5   6   7   8   9  10  11  12  ");color(143);printf(" R   H   B \n");
						color(14);printf("客隊");for(p=1;p<25;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
						color(10);printf("主隊");for(p=2;p<23;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}hruns=hruns+inningscore[24];printf(" %2dX %2dX  %2d  %2d\n",inningscore[24],hruns,hhits,hbb);
						color(15);printf("全壘打：%s",homerun);if(strlen(homerun)==0)printf("(無)\n");else printf("\n");
					}
					do{
						printf("\n輸入6以結束：");
						scanf("%d",&q);
					}while(q!=6);
					return 0;
				}
				if(out!=3){
					color(110);
					if(b1==1 && b2==0 && b3==0)printf("一壘有人，");
					if(b1==0 && b2==1 && b3==0)printf("二壘有人，");
					if(b1==0 && b2==0 && b3==1)printf("三壘有人，");
					if(b1==1 && b2==1 && b3==0)printf("一、二壘有人，");
					if(b1==1 && b2==0 && b3==1)printf("一、三壘有人，");
					if(b1==0 && b2==1 && b3==1)printf("二、三壘有人，");
					if(b1==1 && b2==1 && b3==1)printf("滿壘，");
					if(out==0){color(207);printf("無人出局\n");color(15);}
					if(out==1){color(207);printf("一出局\n");color(15);}
					if(out==2){color(207);printf("兩出局\n");color(15);}
				}
			}
		}while(out!=3);
		color(207);printf("三出局！\n");color(15);
		color(143);printf("客隊 %d：%d 主隊\n",ascore,hscore);color(15);
		b1=0;b2=0;b3=0;out=0;inning++;
		if(q==4){gamemode=1;q=1;}
		if((inning==18 && ascore<hscore)||(inning==19 && ascore>hscore)||(inning==21 && ascore>hscore)||(inning==23 && ascore>hscore)||(inning==25))gameset=1;
	}while(gameset!=1);
	color(143);printf("比賽結束，客隊 %d：%d 主隊\n",ascore,hscore);color(15);
	if(inning==18 && ascore<hscore){
		printf("\n       1   2   3   4   5   6   7   8   9  ");color(143);printf(" R   H   B \n");
		color(14);printf("客隊");for(p=1;p<19;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
		color(10);printf("主隊");for(p=2;p<17;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}printf("   X  %2d  %2d  %2d\n",hruns,hhits,hbb);
		color(15);printf("全壘打：%s",homerun);if(strlen(homerun)==0)printf("(無)\n");else printf("\n");
	}
	else if(inning==19 && ascore>hscore){
		printf("\n       1   2   3   4   5   6   7   8   9  ");color(143);printf(" R   H   B \n");
		color(14);printf("客隊");for(p=1;p<19;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
		color(10);printf("主隊");for(p=2;p<19;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}printf("  %2d  %2d  %2d\n",hruns,hhits,hbb);
		color(15);printf("全壘打：%s",homerun);if(strlen(homerun)==0)printf("(無)\n");else printf("\n");
	}
	else if(inning==21 && ascore>hscore){
		printf("\n       1   2   3   4   5   6   7   8   9  10  ");color(143);printf(" R   H   B \n");
		color(14);printf("客隊");for(p=1;p<21;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
		color(10);printf("主隊");for(p=2;p<21;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}printf("  %2d  %2d  %2d\n",hruns,hhits,hbb);
		color(15);printf("全壘打：%s",homerun);if(strlen(homerun)==0)printf("(無)\n");else printf("\n");
	}
	else if(inning==23 && ascore>hscore){
		printf("\n       1   2   3   4   5   6   7   8   9  10  11  ");color(143);printf(" R   H   B \n");
		color(14);printf("客隊");for(p=1;p<23;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
		color(10);printf("主隊");for(p=2;p<23;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}printf("  %2d  %2d  %2d\n",hruns,hhits,hbb);
		color(15);printf("全壘打：%s",homerun);if(strlen(homerun)==0)printf("(無)\n");else printf("\n");
	}
	else{
		printf("\n       1   2   3   4   5   6   7   8   9  10  11  12  ");color(143);printf(" R   H   B \n");
		color(14);printf("客隊");for(p=1;p<25;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
		color(10);printf("主隊");for(p=2;p<25;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}printf("  %2d  %2d  %2d\n",hruns,hhits,hbb);
		color(15);printf("全壘打：%s",homerun);if(strlen(homerun)==0)printf("(無)\n");else printf("\n");
	}
	do{
		printf("\n輸入6以結束：");
		scanf("%d",&q);
	}while(q!=6);
	return 0;
}
