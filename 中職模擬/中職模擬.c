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
	char *UL90[]={"�d���","����","���Ǯa","�i��v","�\\�t�N","������"};
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
	char *UL08[]={"�����P"};
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
	char *BE90[]={"�i����","���T��","���@�p","�����","�d�T�F","�x�@��","�d��","�L���W","�d�_�s","���s�X","�J�|��","���q�H","�Ҫi","���a��","�V��","�����h","�P�f��","�����","������","���p��","����","�d�^��","���~��","�d�n�Z","���ʤt","���ۦ�",
	"���h�s","�^�ΰ�","�L�ʦ�","�ڤ��","�R�}��","���ÿ�","�p�J","�j��","���Q��","�d�T��","����O","�w��","���O��","���_�{","���ا�","���箶","������","�x�w��","��w","�j�w","����","�d�f��","����","�B��","�L����","�\\�q��",
	"�i�h��","���T�q","���ӽ�","�Z�y��","�����i","�\\�{�P","���ӳ�","�^�F�{","���P��","�G�~§","���E��","�^�F�Y","�L����","������","�����","�F��","�����h","���Ӳ�","�Q��","������","�����s","���P�P"};
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
	char *CB14[]={"�L�§U","ù����","�@�J","�P�t�V","�ب�","���l�E"};
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
	char *FA03[]={"���T��","�����s","���R��","���s�i","���ө�","���H�_","�\\��W","���h�Z","�ڴ���","���B"};
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
	char *LB04[]={"���p��","���L�o","�奄��","�����x","�f�T��","���s�q","�L�ا�","�ۧӰ�","�㥱�Ǵ�","���ذ�","�����s","�H�ȭ�","�\\�Ǹ�","ù�w����","���رj","���p��","�۫۽n","�����W","����","�d�r�h","��O�h","�Q�s","�Q�~","��n","�p����","�ŤO�h",
	"�E�i�w"};
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
	char *LM11[]={"�x�f�t","�r�w��","�i�m��"};
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
	char *RM20[]={"���l�E"};
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
	char *JB93[]={"�ƴ�","���¦�","�iģ��","���l�Ӹ�","�����","�ͤ�","�թ���","�i����","����","�B����","ù�j","��i�h","�����y","�ߪ�q�a"};
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
	char *SB96T[]={"�}�A"};
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
	char *SB96B[]={"�i�ؾ�","�����q","�d���v","�i��i","�i�a��","�����_","�K���m","�Ҧh","���u��","���v�k","�ڮm�k","�_��","�ǤO�k","�w���h","���L��","������","���a��","���Rģ","�B����","ù�Q��","���v�j","ù��","�G����","���ذ�","�i�a�E","�����s",
	"�I�L�P","������","�w��","���ӵ�","���i��","�i�ػ�","���@�~","�\\�궩","�G�F�E","�E���","���Ӱ�","Ĭ�غa","�Z��","�j����","���T�M","���g��","�i���s","�¯Ǵ�"};
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
	char *ER13[]={"�ҥ�","������"};
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
	char *FG17[]={"���͹F"};
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
	char *WD90[]={"���J","�f����","�����M","�N��","ù�@��","���C��","�]�L��","��ޣ��","���w��","�L����","�j�Ҥh","������","�x����","�L�T��","�v��J","�����v","�L����","���M��","����","�k���J","�ʹ�","�°�","�u�j��","��k","���F��","���p��",
	"������","�a��T��","���z��","�����Z","�j��","�G���","�����k","���j��","������","�짢��","�Z�ئ{","������","�����s","�h�O�h","�J�ԧJ","���Ӱ�","�����F","���|��","ù����","ù����","�ګ¯S","�c�ֲM","�k��"};
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
	char *MS03[]={"�\\�ӻ�","�_�}�v","���@�p","�L�q��","�i�z�Q","���f��","�L�ب}","�©���","���O��","���n��","�������Z","�Ȥh�F","�d�ڳǬ�"};
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
	char *MC04[]={"�װ��u","�¨ν�","�G���q","�C���a","�����T","�d�ӿ�","���ʹ�","�¤O��","�̦��","�L�Ѳ�","�ǥ�","�H�¶�","�]��","����","������","���J�|","�I����","��Z��","���ʤ�","���O��","��޳","����","�f�y","���i","�ҵ�"};
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
	char *DT08[]={"�J����","��O�h","���}�[","�O��"};
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
	char *MT90[]={"�H�T��","�\\���k","���@��","�L����"};
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
	char *CE93[]={"���y��","������","������","���Q��","�d�T��","���p","�h��","���N","����","���ئ�","���Ӷ�","���o�I","�����H","�צ���","�j�ӦN","�d�O�h","�©_��","���ֶ�","�R��","���U","��v","�u�ӻ�","����","���B","�i����","�p�X",
	"������","�B�Ǽw","���O","�d�N�Y�G��","�®�","�Ǯ�","�d���","�|��","���O��","���l��","�R�n�i","���T��","�i޳"};
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
	char *ul2016[]={"���m��","�B�|��","�d�껨","�����L","��F��","������","ù���s","�P�s��","���`��","�����a","������","�G�Z��","�L�ӽ�","Ĭ����","�H�Ӱ�","���Ӻ�","��ۧ�","���O�h","���Ǿ�","�R�Ż�","��Z��","�B�ܻ�","�����","������","������","����y","�L�Ӳ�"};
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
	char *cb2016[]={"���l��","���_��","�i����","�i�ӻ�","���±�","������","���Ӱ�","�P���","�^�F�{","�L�§U","�P�t�V","���v�n","�L���N","�����M","�L����","��l��","���m�N","�L����޳","���q�M","������","�d�F��","�i�ӱj","�\\��","�G�F�E","���a�s","Ĭ�n�F"};
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
	char *ul2017[]={"���m��","�d�껨","�����L","��F��","������","ù���s","�P�s��","���`��","�}�F�y","���a��","���Ǿ�","�H�Ӱ�","�G�Z��","�L����","Ĭ����","���Ӻ�","��ۧ�","������","�R�Ż�","��Z��","�B�ܻ�","�����","���@��","������","�d���","������","������","����y","�L�Ӳ�","������"};
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
	char *cb2017[]={"���l��","���_��","����N","�i����","�i�ӻ�","���±�","������","�L���N","���Ӱ�","�P���","�^�F�{","�L�§U","���v�n","�����M","�L����","��l��","�L�Ѷh","���q�M","������","�d�F��","�i�ӱj","���l�E","�\\��","�G�F�E","���a�s","Ĭ�n�F","���F��"};
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
	char *lm2017[]={"���˰a","�L�ӭ�","���ú�","�ⴼ��","���f��","�L�l�|","���Y��","��ģ��","������","���E�M","���l�E","���T�q","�L��","�����x","������","��ӯ�","�����I","�B�ɻ�","�E�w�s","�Y���v","�L����","���|��","�i�{��","�űG��","���~��","��a�a","�L�F��"};
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
	char *fg2017[]={"�L��ޱ","��J��","�ӵq޳","�i�R��","�L�q��","�J���s","������","�L�b��","�i�a��","���v��","���ͭ�","�����","���a��","������","�����@","�S��f","�d�ͳ�","�i���~","�_�s�P","�L����","�L޳��","���͹F","�۵��t","�d�v�m","�L�§�","�i�ػ�","���~��","������"};
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
	char *ul2018[]={"�d�껨","�����L","��F��","������","ù���s","���`��","���m��","���a��","���Ǿ�","�H�Ӱ�","���G�n","�G�Z��","�L����","Ĭ����","���Ӻ�","��ۧ�","������","�R�Ż�","�i���t","��Z��","�B�ܻ�","�i����","�����","���@��","������","�d���","������","������","����y","������"};
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
	char *cb2018[]={"���l��","��Ӫ�","����N","�i�ӻ�","���±�","�L���N","�����~","���Ӱ�","�P���","�^�F�{","���v�n","���X�p","�����M","�L����","��l��","�L�Ѷh","���m�N","������","�d�F��","���[","�i�ӱj","�\\��","�d���E","���a�s","Ĭ�n�F","���F��"};
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
	char *lm2018[]={"���˰a","�L�ӭ�","���ú�","�ⴼ��","���f��","�L�l�|","���Y��","��ģ��","������","���E�M","���T�q","�L���A","����","�E�w�s","�L��","�����x","�\\����","��ӯ�","�����I","�B�ɻ�","�Y���v","�L����","���q޳","���|��","�i�{��","�űG��","��a�a","�����","�L�F��"};
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
	char *fg2018[]={"�L��ޱ","��J��","�ӵq޳","�L�§�","�i����","�L�q��","�J���s","�L�ɿo","���v��","���ͭ�","�L����","�����","������","������","�S��f","�_�s�P","������","�L޳��","���͹F","�۵��t","�d�v�m","�i�ػ�","�i����","���ԩv","�L�Ӭv","���~��","������"};
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
	char *ul2019[]={"�}�F�y","�I�a�t","�����L","��F��","������","ù���s","���`��","���m��","���a��","���Ǿ�","�H�Ӱ�","���G�n","�G�Z��","�L����","Ĭ����","�L�ӳ�","��ۧ�","�_�|��","������","�L����","�R�Ż�","�i���t","��Z��","�����","���@��","������","�d���","�L�t��","������","������","���B��","����y","�L�w�i","�����c"};
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
	char *cb2019[]={"���l��","��Ӫ�","����N","�i�ӻ�","���±�","�L���N","�����~","���Ӱ�","�P���","���}","�^�F�{","���v�n","��U�J","�����M","�L����","��l��","�L�Ѷh","������","�d�F��","���t�N","�i�ӱj","���l�E","�\\��","���[�t","Ĭ�n�F","���F��"};
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
	char *lm2019[]={"���˰a","�L�ӭ�","���ú�","�ⴼ��","�L�l�|","���Y��","��ģ��","�f�ǫҨ�","���T�q","����","�E�w�s","�L��","�\\����","����","��ӯ�","�����I","�B�ɻ�","�����","�L����","���q޳","���|��","�i�{��","�űG��","��a�a","�����"};
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
	char *fg2019[]={"�L��ޱ","��J��","�ӵq޳","�i����","�۵��t","�L�q��","�J���s","�L�ɿo","���v��","���ʻ�","���ͭ�","�����","������","������","�S��f","�i���~","�_�s�P","������","���͹F","�L�§�","�i����","�L�Ӭv","���~��","�����p","������"};
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
	char *ul2020[]={"�����L","��F��","������","ù���s","���`��","�����e","���m��","���a��","���Ǿ�","�H�Ӱ�","���G�n","�G�Z��","�L����","Ĭ����","��Ƿ�","������","�L����","ù�±�","�d�껨","�i���t","��Z��","�d���","�L�t��","������","������","����y","�L�w�i","�\\����"};
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
	char *cb2020[]={"���l��","�L����","����N","�i�ӻ�","���±�","�L���N","���Ӱ�","�P���","���v�n","��l��","���a�s","�L�Ѷh","�d�F��","��Ӫ�","���t�N","�i�ӱj","���a��","�\\��","���[�t","���F��","Ĭ�n�F","���F��"};
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
	char *rm2020[]={"��ģ��","���˰a","��a�a","�L�ӭ�","���ú�","�ⴼ��","�L�l�|","���Y��","���T�q","����","�E�w�s","�L��","�����x","�����","����","�����I","�B�ɻ�","�Y���v","�i�{��","�L����","���|��","�űG��","���Ǵ�","�����","�L�A�l"};
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
	char *fg2020[]={"�L��ޱ","������","�i����","�۵��t","��J��","�L�q��","���a޳","�J���s","�L�ɿo","���v��","���ʻ�","���ͭ�","�����","�ӵq޳","������","�i�a��","������","�S��f","�_�˦�","�L�§�","������","�i�i�w","�����o","���~��","�����p","������"};
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
	char *ul2021[]={"�L�l��","�I�a�t","�����L","��F��","������","ù���s","������","�\\����","���`��","���m��","���a��","���Ǿ�","�H�Ӱ�","���G�n","�G�Z��","�L���w","Ĭ����","�L�M��","��Ƿ�","�L����","���к�","ù�±�","�d�껨","�i���t","����","��Z��","�d���","�L�t��","������","������","���B��","����y","�L�w�i"};
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
	char *cb2021[]={"���l��","���t��","����N","�i�ӻ�","���±�","�L���N","�����~","���Ӱ�","�P���","�L����","���v�n","���|��","��l��","���a�s","�L�Ѷh","�L�Ӻ�","���F��","��Ӫ�","���t�N","������","�i�ӱj","���a��","�\\��","���Ժ�","���[�t","���F��","Ĭ�n�F","���F��"};
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
	char *rm2021[]={"��ģ��","���l�E","��a�a","�L�ӭ�","���ú�","�ⴼ��","�L�l�|","���Y��","����t","�i�{��","���T�q","����","�E�w�s","�L��","�����x","�\\����","�����I","�Y���v","�L����","���q޳","���|��","����","�űG��","���Ǵ�","�����","�L�A�l"};
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
	char *fg2021[]={"�L��ޱ","������","�i����","���u","�L�q��","���a޳","���w��","�L�ɿo","���v��","���ʻ�","���ͭ�","�����","�ӵq޳","������","�i�a��","������","�è���","�J�a�\\","���˰a","�S��f","������","�_�˦�","���л�","�L�§�","�����u","������","�i�i�w","���l��","�թ���","�����","�����o","�����p","������"};
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
	char *wd2021[]={"�L���{","���ѫH","�ڮ�","�N�O�N���D�d�a","�L����","�i�q�n","�L����","���f��","�d�ͳ�","���ͫ�","���E޳","�i�F��","�L����","���Ǫ@","�i����","�����M","�����","�B���E","����","������","������","�B�ɻ�","���֧�","�d�F��","���ða","�۵��t","���p��","�x޳�~","���~��","�����"};
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

	color(15);printf("�̧Ƕ�J����B�~�סB�y���ӧ����]�w\n\n");
	for(x=1;x<=9;x++){
		printf("��ܫȶ���%d�ΡG",x);
		scanf("%d%d%d",&ateam[x],&ayear[x],&aplayer[x]);
		playerfound=0;

		if(ateam[x]==0){
			for(p=0;p<6;p++){
				if(aplayer[x]==dataUL90[p][0]){color(142);printf("�ȶ���%d�ΡG�Τ@�� %s\n",x,UL90[p]);strcat(nowbatting,"�Τ@�� ");strcat(nowbatting,UL90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(aplayer[x]==dataUL08[p][0]){color(142);printf("�ȶ���%d�ΡG�Τ@7-ELEVEn�� %s\n",x,UL08[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� ");strcat(nowbatting,UL08[p]);color(15);playerfound=1;}
			}
			for(p=0;p<74;p++){
				if(aplayer[x]==dataBE90[p][0]){color(142);printf("�ȶ���%d�ΡG�S�̶H %s\n",x,BE90[p]);strcat(nowbatting,"�S�̶H ");strcat(nowbatting,BE90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<6;p++){
				if(aplayer[x]==dataCB14[p][0]){color(142);printf("�ȶ���%d�ΡG���H�S�� %s\n",x,CB14[p]);strcat(nowbatting,"���H�S�� ");strcat(nowbatting,CB14[p]);color(15);playerfound=1;}
			}
			for(p=0;p<10;p++){
				if(aplayer[x]==dataFA03[p][0]){color(142);printf("�ȶ���%d�ΡG�Ĥ@���� %s\n",x,FA03[p]);strcat(nowbatting,"�Ĥ@���� ");strcat(nowbatting,FA03[p]);color(15);playerfound=1;}
			}
			for(p=0;p<27;p++){
				if(aplayer[x]==dataLB04[p][0]){color(142);printf("�ȶ���%d�ΡGLaNew�� %s\n",x,LB04[p]);strcat(nowbatting,"LaNew�� ");strcat(nowbatting,LB04[p]);color(15);playerfound=1;}
			}
			for(p=0;p<3;p++){
				if(aplayer[x]==dataLM11[p][0]){color(142);printf("�ȶ���%d�ΡGLamigo��� %s\n",x,LM11[p]);strcat(nowbatting,"Lamigo��� ");strcat(nowbatting,LM11[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(aplayer[x]==dataRM20[p][0]){color(142);printf("�ȶ���%d�ΡG�֤Ѯ�� %s\n",x,RM20[p]);strcat(nowbatting,"�֤Ѯ�� ");strcat(nowbatting,RM20[p]);color(15);playerfound=1;}
			}
			for(p=0;p<14;p++){
				if(aplayer[x]==dataJB93[p][0]){color(142);printf("�ȶ���%d�ΡG�T�꺵 %s\n",x,JB93[p]);strcat(nowbatting,"�T�꺵 ");strcat(nowbatting,JB93[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(aplayer[x]==dataSB96T[p][0]){color(142);printf("�ȶ���%d�ΡG���A�� %s\n",x,SB96T[p]);strcat(nowbatting,"���A�� ");strcat(nowbatting,SB96T[p]);color(15);playerfound=1;}
			}
			for(p=0;p<44;p++){
				if(aplayer[x]==dataSB96B[p][0]){color(142);printf("�ȶ���%d�ΡG���A�� %s\n",x,SB96B[p]);strcat(nowbatting,"���A�� ");strcat(nowbatting,SB96B[p]);color(15);playerfound=1;}
			}
			for(p=0;p<2;p++){
				if(aplayer[x]==dataER13[p][0]){color(142);printf("�ȶ���%d�ΡG�q�j�R�� %s\n",x,ER13[p]);strcat(nowbatting,"�q�j�R�� ");strcat(nowbatting,ER13[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(aplayer[x]==dataFG17[p][0]){color(142);printf("�ȶ���%d�ΡG�I�����N %s\n",x,FG17[p]);strcat(nowbatting,"�I�����N ");strcat(nowbatting,FG17[p]);color(15);playerfound=1;}
			}
			for(p=0;p<49;p++){
				if(aplayer[x]==dataWD90[p][0]){color(142);printf("�ȶ���%d�ΡG�����s %s\n",x,WD90[p]);strcat(nowbatting,"�����s ");strcat(nowbatting,WD90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<13;p++){
				if(aplayer[x]==dataMS03[p][0]){color(142);printf("�ȶ���%d�ΡG�ۮ��Ӷ� %s\n",x,MS03[p]);strcat(nowbatting,"�ۮ��Ӷ� ");strcat(nowbatting,MS03[p]);color(15);playerfound=1;}
			}
			for(p=0;p<25;p++){
				if(aplayer[x]==dataMC04[p][0]){color(142);printf("�ȶ���%d�ΡG�ۮ�Cobras %s\n",x,MC04[p]);strcat(nowbatting,"�ۮ�Cobras ");strcat(nowbatting,MC04[p]);color(15);playerfound=1;}
			}
			for(p=0;p<4;p++){
				if(aplayer[x]==dataDT08[p][0]){color(142);printf("�ȶ���%d�ΡG�̭}�ȼ��s %s\n",x,DT08[p]);strcat(nowbatting,"�̭}�ȼ��s ");strcat(nowbatting,DT08[p]);color(15);playerfound=1;}
			}
			for(p=0;p<4;p++){
				if(aplayer[x]==dataMT90[p][0]){color(142);printf("�ȶ���%d�ΡG�T�Ӫ� %s\n",x,MT90[p]);strcat(nowbatting,"�T�Ӫ� ");strcat(nowbatting,MT90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<39;p++){
				if(aplayer[x]==dataCE93[p][0]){color(142);printf("�ȶ���%d�ΡG�ɳ��N %s\n",x,CE93[p]);strcat(nowbatting,"�ɳ��N ");strcat(nowbatting,CE93[p]);color(15);playerfound=1;}
			}
		}
		if(ateam[x]==1){
			if(ayear[x]==15){
			}
			if(ayear[x]==16){
				for(p=0;p<27;p++){
					if(aplayer[x]==dataul2016[p][0]){color(142);printf("�ȶ���%d�ΡG�Τ@7-ELEVEn�� 2016 %s\n",x,ul2016[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� 2016 ");strcat(nowbatting,ul2016[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==17){
				for(p=0;p<30;p++){
					if(aplayer[x]==dataul2017[p][0]){color(142);printf("�ȶ���%d�ΡG�Τ@7-ELEVEn�� 2017 %s\n",x,ul2017[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� 2017 ");strcat(nowbatting,ul2017[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==18){
				for(p=0;p<30;p++){
					if(aplayer[x]==dataul2018[p][0]){color(142);printf("�ȶ���%d�ΡG�Τ@7-ELEVEn�� 2018 %s\n",x,ul2018[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� 2018 ");strcat(nowbatting,ul2018[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==19){
				for(p=0;p<34;p++){
					if(aplayer[x]==dataul2019[p][0]){color(142);printf("�ȶ���%d�ΡG�Τ@7-ELEVEn�� 2019 %s\n",x,ul2019[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� 2019 ");strcat(nowbatting,ul2019[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==20){
				for(p=0;p<28;p++){
					if(aplayer[x]==dataul2020[p][0]){color(142);printf("�ȶ���%d�ΡG�Τ@7-ELEVEn�� 2020 %s\n",x,ul2020[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� 2020 ");strcat(nowbatting,ul2020[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==21){
				for(p=0;p<33;p++){
					if(aplayer[x]==dataul2021[p][0]){color(142);printf("�ȶ���%d�ΡG�Τ@7-ELEVEn�� 2021 %s\n",x,ul2021[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� 2021 ");strcat(nowbatting,ul2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(ateam[x]==2){
			if(ayear[x]==15){
			}
			if(ayear[x]==16){
				for(p=0;p<26;p++){
					if(aplayer[x]==datacb2016[p][0]){color(142);printf("�ȶ���%d�ΡG���H�S�� 2016 %s\n",x,cb2016[p]);strcat(nowbatting,"���H�S�� 2016 ");strcat(nowbatting,cb2016[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==17){
				for(p=0;p<27;p++){
					if(aplayer[x]==datacb2017[p][0]){color(142);printf("�ȶ���%d�ΡG���H�S�� 2017 %s\n",x,cb2017[p]);strcat(nowbatting,"���H�S�� 2017 ");strcat(nowbatting,cb2017[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==18){
				for(p=0;p<26;p++){
					if(aplayer[x]==datacb2018[p][0]){color(142);printf("�ȶ���%d�ΡG���H�S�� 2018 %s\n",x,cb2018[p]);strcat(nowbatting,"���H�S�� 2018 ");strcat(nowbatting,cb2018[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==19){
				for(p=0;p<26;p++){
					if(aplayer[x]==datacb2019[p][0]){color(142);printf("�ȶ���%d�ΡG���H�S�� 2019 %s\n",x,cb2019[p]);strcat(nowbatting,"���H�S�� 2019 ");strcat(nowbatting,cb2019[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==20){
				for(p=0;p<22;p++){
					if(aplayer[x]==datacb2020[p][0]){color(142);printf("�ȶ���%d�ΡG���H�S�� 2020 %s\n",x,cb2020[p]);strcat(nowbatting,"���H�S�� 2020 ");strcat(nowbatting,cb2020[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==21){
				for(p=0;p<28;p++){
					if(aplayer[x]==datacb2021[p][0]){color(142);printf("�ȶ���%d�ΡG���H�S�� 2021 %s\n",x,cb2021[p]);strcat(nowbatting,"���H�S�� 2021 ");strcat(nowbatting,cb2021[p]);color(15);playerfound=1;}
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
					if(aplayer[x]==datalm2017[p][0]){color(142);printf("�ȶ���%d�ΡGLamigo��� 2017 %s\n",x,lm2017[p]);strcat(nowbatting,"Lamigo��� 2017 ");strcat(nowbatting,lm2017[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==18){
				for(p=0;p<29;p++){
					if(aplayer[x]==datalm2018[p][0]){color(142);printf("�ȶ���%d�ΡGLamigo��� 2018 %s\n",x,lm2018[p]);strcat(nowbatting,"Lamigo��� 2018 ");strcat(nowbatting,lm2018[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==19){
				for(p=0;p<25;p++){
					if(aplayer[x]==datalm2019[p][0]){color(142);printf("�ȶ���%d�ΡGLamigo��� 2019 %s\n",x,lm2019[p]);strcat(nowbatting,"Lamigo��� 2019 ");strcat(nowbatting,lm2019[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==20){
				for(p=0;p<25;p++){
					if(aplayer[x]==datarm2020[p][0]){color(142);printf("�ȶ���%d�ΡG�֤Ѯ�� 2020 %s\n",x,rm2020[p]);strcat(nowbatting,"�֤Ѯ�� 2020 ");strcat(nowbatting,rm2020[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==21){
				for(p=0;p<26;p++){
					if(aplayer[x]==datarm2021[p][0]){color(142);printf("�ȶ���%d�ΡG�֤Ѯ�� 2021 %s\n",x,rm2021[p]);strcat(nowbatting,"�֤Ѯ�� 2021 ");strcat(nowbatting,rm2021[p]);color(15);playerfound=1;}
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
					if(aplayer[x]==datafg2017[p][0]){color(142);printf("�ȶ���%d�ΡG�I�����N 2017 %s\n",x,fg2017[p]);strcat(nowbatting,"�I�����N 2017 ");strcat(nowbatting,fg2017[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==18){
				for(p=0;p<27;p++){
					if(aplayer[x]==datafg2018[p][0]){color(142);printf("�ȶ���%d�ΡG�I�����N 2018 %s\n",x,fg2018[p]);strcat(nowbatting,"�I�����N 2018 ");strcat(nowbatting,fg2018[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==19){
				for(p=0;p<25;p++){
					if(aplayer[x]==datafg2019[p][0]){color(142);printf("�ȶ���%d�ΡG�I�����N 2019 %s\n",x,fg2019[p]);strcat(nowbatting,"�I�����N 2019 ");strcat(nowbatting,fg2019[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==20){
				for(p=0;p<26;p++){
					if(aplayer[x]==datafg2020[p][0]){color(142);printf("�ȶ���%d�ΡG�I�����N 2020 %s\n",x,fg2020[p]);strcat(nowbatting,"�I�����N 2020 ");strcat(nowbatting,fg2020[p]);color(15);playerfound=1;}
				}
			}
			if(ayear[x]==21){
				for(p=0;p<33;p++){
					if(aplayer[x]==datafg2021[p][0]){color(142);printf("�ȶ���%d�ΡG�I�����N 2021 %s\n",x,fg2021[p]);strcat(nowbatting,"�I�����N 2021 ");strcat(nowbatting,fg2021[p]);color(15);playerfound=1;}
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
					if(aplayer[x]==datawd2021[p][0]){color(142);printf("�ȶ���%d�ΡG�����s 2021 %s\n",x,wd2021[p]);strcat(nowbatting,"�����s 2021 ");strcat(nowbatting,wd2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(ateam[x]==8){
		}
		if(ateam[x]==9){
		}
		if(x==1)strcat(ab1,nowbatting);if(x==2)strcat(ab2,nowbatting);if(x==3)strcat(ab3,nowbatting);if(x==4)strcat(ab4,nowbatting);if(x==5)strcat(ab5,nowbatting);if(x==6)strcat(ab6,nowbatting);if(x==7)strcat(ab7,nowbatting);if(x==8)strcat(ab8,nowbatting);if(x==9)strcat(ab9,nowbatting);
		if(playerfound==0){color(207);printf("�d�L���y���A�Э��s��J�I");color(15);x--;}
		memset(nowbatting,'\0',50);
	}
	for(x=1;x<=9;x++){
		printf("��ܥD����%d�ΡG",x);
		scanf("%d%d%d",&hteam[x],&hyear[x],&hplayer[x]);
		playerfound=0;
		
		if(hteam[x]==0){
			for(p=0;p<6;p++){
				if(hplayer[x]==dataUL90[p][0]){color(138);printf("�D����%d�ΡG�Τ@�� %s\n",x,UL90[p]);strcat(nowbatting,"�Τ@�� ");strcat(nowbatting,UL90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(hplayer[x]==dataUL08[p][0]){color(138);printf("�D����%d�ΡG�Τ@7-ELEVEn�� %s\n",x,UL08[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� ");strcat(nowbatting,UL08[p]);color(15);playerfound=1;}
			}
			for(p=0;p<74;p++){
				if(hplayer[x]==dataBE90[p][0]){color(138);printf("�D����%d�ΡG�S�̶H %s\n",x,BE90[p]);strcat(nowbatting,"�S�̶H ");strcat(nowbatting,BE90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<6;p++){
				if(hplayer[x]==dataCB14[p][0]){color(138);printf("�D����%d�ΡG���H�S�� %s\n",x,CB14[p]);strcat(nowbatting,"���H�S�� ");strcat(nowbatting,CB14[p]);color(15);playerfound=1;}
			}
			for(p=0;p<10;p++){
				if(hplayer[x]==dataFA03[p][0]){color(138);printf("�D����%d�ΡG�Ĥ@���� %s\n",x,FA03[p]);strcat(nowbatting,"�Ĥ@���� ");strcat(nowbatting,FA03[p]);color(15);playerfound=1;}
			}
			for(p=0;p<27;p++){
				if(hplayer[x]==dataLB04[p][0]){color(138);printf("�D����%d�ΡGLaNew�� %s\n",x,LB04[p]);strcat(nowbatting,"LaNew�� ");strcat(nowbatting,LB04[p]);color(15);playerfound=1;}
			}
			for(p=0;p<3;p++){
				if(hplayer[x]==dataLM11[p][0]){color(138);printf("�D����%d�ΡGLamigo��� %s\n",x,LM11[p]);strcat(nowbatting,"Lamigo��� ");strcat(nowbatting,LM11[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(hplayer[x]==dataRM20[p][0]){color(138);printf("�D����%d�ΡG�֤Ѯ�� %s\n",x,RM20[p]);strcat(nowbatting,"�֤Ѯ�� ");strcat(nowbatting,RM20[p]);color(15);playerfound=1;}
			}
			for(p=0;p<14;p++){
				if(hplayer[x]==dataJB93[p][0]){color(138);printf("�D����%d�ΡG�T�꺵 %s\n",x,JB93[p]);strcat(nowbatting,"�T�꺵 ");strcat(nowbatting,JB93[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(hplayer[x]==dataSB96T[p][0]){color(138);printf("�D����%d�ΡG���A�� %s\n",x,SB96T[p]);strcat(nowbatting,"���A�� ");strcat(nowbatting,SB96T[p]);color(15);playerfound=1;}
			}
			for(p=0;p<44;p++){
				if(hplayer[x]==dataSB96B[p][0]){color(138);printf("�D����%d�ΡG���A�� %s\n",x,SB96B[p]);strcat(nowbatting,"���A�� ");strcat(nowbatting,SB96B[p]);color(15);playerfound=1;}
			}
			for(p=0;p<2;p++){
				if(hplayer[x]==dataER13[p][0]){color(138);printf("�D����%d�ΡG�q�j�R�� %s\n",x,ER13[p]);strcat(nowbatting,"�q�j�R�� ");strcat(nowbatting,ER13[p]);color(15);playerfound=1;}
			}
			for(p=0;p<1;p++){
				if(hplayer[x]==dataFG17[p][0]){color(138);printf("�D����%d�ΡG�I�����N %s\n",x,FG17[p]);strcat(nowbatting,"�I�����N ");strcat(nowbatting,FG17[p]);color(15);playerfound=1;}
			}
			for(p=0;p<49;p++){
				if(hplayer[x]==dataWD90[p][0]){color(138);printf("�D����%d�ΡG�����s %s\n",x,WD90[p]);strcat(nowbatting,"�����s ");strcat(nowbatting,WD90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<13;p++){
				if(hplayer[x]==dataMS03[p][0]){color(138);printf("�D����%d�ΡG�ۮ��Ӷ� %s\n",x,MS03[p]);strcat(nowbatting,"�ۮ��Ӷ� ");strcat(nowbatting,MS03[p]);color(15);playerfound=1;}
			}
			for(p=0;p<25;p++){
				if(hplayer[x]==dataMC04[p][0]){color(138);printf("�D����%d�ΡG�ۮ�Cobras %s\n",x,MC04[p]);strcat(nowbatting,"�ۮ�Cobras ");strcat(nowbatting,MC04[p]);color(15);playerfound=1;}
			}
			for(p=0;p<4;p++){
				if(hplayer[x]==dataDT08[p][0]){color(138);printf("�D����%d�ΡG�̭}�ȼ��s %s\n",x,DT08[p]);strcat(nowbatting,"�̭}�ȼ��s ");strcat(nowbatting,DT08[p]);color(15);playerfound=1;}
			}
			for(p=0;p<4;p++){
				if(hplayer[x]==dataMT90[p][0]){color(138);printf("�D����%d�ΡG�T�Ӫ� %s\n",x,MT90[p]);strcat(nowbatting,"�T�Ӫ� ");strcat(nowbatting,MT90[p]);color(15);playerfound=1;}
			}
			for(p=0;p<39;p++){
				if(hplayer[x]==dataCE93[p][0]){color(138);printf("�D����%d�ΡG�ɳ��N %s\n",x,CE93[p]);strcat(nowbatting,"�ɳ��N ");strcat(nowbatting,CE93[p]);color(15);playerfound=1;}
			}
		}
		if(hteam[x]==1){
			if(hyear[x]==15){
			}
			if(hyear[x]==16){
				for(p=0;p<27;p++){
					if(hplayer[x]==dataul2016[p][0]){color(138);printf("�D����%d�ΡG�Τ@7-ELEVEn�� 2016 %s\n",x,ul2016[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� 2016 ");strcat(nowbatting,ul2016[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==17){
				for(p=0;p<30;p++){
					if(hplayer[x]==dataul2017[p][0]){color(138);printf("�D����%d�ΡG�Τ@7-ELEVEn�� 2017 %s\n",x,ul2017[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� 2017 ");strcat(nowbatting,ul2017[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==18){
				for(p=0;p<30;p++){
					if(hplayer[x]==dataul2018[p][0]){color(138);printf("�D����%d�ΡG�Τ@7-ELEVEn�� 2018 %s\n",x,ul2018[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� 2018 ");strcat(nowbatting,ul2018[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==19){
				for(p=0;p<34;p++){
					if(hplayer[x]==dataul2019[p][0]){color(138);printf("�D����%d�ΡG�Τ@7-ELEVEn�� 2019 %s\n",x,ul2019[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� 2019 ");strcat(nowbatting,ul2019[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==20){
				for(p=0;p<28;p++){
					if(hplayer[x]==dataul2020[p][0]){color(138);printf("�D����%d�ΡG�Τ@7-ELEVEn�� 2020 %s\n",x,ul2020[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� 2020 ");strcat(nowbatting,ul2020[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==21){
				for(p=0;p<33;p++){
					if(hplayer[x]==dataul2021[p][0]){color(138);printf("�D����%d�ΡG�Τ@7-ELEVEn�� 2021 %s\n",x,ul2021[p]);strcat(nowbatting,"�Τ@7-ELEVEn�� 2021 ");strcat(nowbatting,ul2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(hteam[x]==2){
			if(hyear[x]==15){
			}
			if(hyear[x]==16){
				for(p=0;p<26;p++){
					if(hplayer[x]==datacb2016[p][0]){color(138);printf("�D����%d�ΡG���H�S�� 2016 %s\n",x,cb2016[p]);strcat(nowbatting,"���H�S�� 2016 ");strcat(nowbatting,cb2016[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==17){
				for(p=0;p<27;p++){
					if(hplayer[x]==datacb2017[p][0]){color(138);printf("�D����%d�ΡG���H�S�� 2017 %s\n",x,cb2017[p]);strcat(nowbatting,"���H�S�� 2017 ");strcat(nowbatting,cb2017[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==18){
				for(p=0;p<26;p++){
					if(hplayer[x]==datacb2018[p][0]){color(138);printf("�D����%d�ΡG���H�S�� 2018 %s\n",x,cb2018[p]);strcat(nowbatting,"���H�S�� 2018 ");strcat(nowbatting,cb2018[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==19){
				for(p=0;p<26;p++){
					if(hplayer[x]==datacb2019[p][0]){color(138);printf("�D����%d�ΡG���H�S�� 2019 %s\n",x,cb2019[p]);strcat(nowbatting,"���H�S�� 2019 ");strcat(nowbatting,cb2019[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==20){
				for(p=0;p<22;p++){
					if(hplayer[x]==datacb2020[p][0]){color(138);printf("�D����%d�ΡG���H�S�� 2020 %s\n",x,cb2020[p]);strcat(nowbatting,"���H�S�� 2020 ");strcat(nowbatting,cb2020[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==21){
				for(p=0;p<28;p++){
					if(hplayer[x]==datacb2021[p][0]){color(138);printf("�D����%d�ΡG���H�S�� 2021 %s\n",x,cb2021[p]);strcat(nowbatting,"���H�S�� 2021 ");strcat(nowbatting,cb2021[p]);color(15);playerfound=1;}
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
					if(hplayer[x]==datalm2017[p][0]){color(138);printf("�D����%d�ΡGLamigo��� 2017 %s\n",x,lm2017[p]);strcat(nowbatting,"Lamigo��� 2017 ");strcat(nowbatting,lm2017[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==18){
				for(p=0;p<29;p++){
					if(hplayer[x]==datalm2018[p][0]){color(138);printf("�D����%d�ΡGLamigo��� 2018 %s\n",x,lm2018[p]);strcat(nowbatting,"Lamigo��� 2018 ");strcat(nowbatting,lm2018[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==19){
				for(p=0;p<25;p++){
					if(hplayer[x]==datalm2019[p][0]){color(138);printf("�D����%d�ΡGLamigo��� 2019 %s\n",x,lm2019[p]);strcat(nowbatting,"Lamigo��� 2019 ");strcat(nowbatting,lm2019[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==20){
				for(p=0;p<25;p++){
					if(hplayer[x]==datarm2020[p][0]){color(138);printf("�D����%d�ΡG�֤Ѯ�� 2020 %s\n",x,rm2020[p]);strcat(nowbatting,"�֤Ѯ�� 2020 ");strcat(nowbatting,rm2020[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==21){
				for(p=0;p<26;p++){
					if(hplayer[x]==datarm2021[p][0]){color(138);printf("�D����%d�ΡG�֤Ѯ�� 2021 %s\n",x,rm2021[p]);strcat(nowbatting,"�֤Ѯ�� 2021 ");strcat(nowbatting,rm2021[p]);color(15);playerfound=1;}
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
					if(hplayer[x]==datafg2017[p][0]){color(138);printf("�D����%d�ΡG�I�����N 2017 %s\n",x,fg2017[p]);strcat(nowbatting,"�I�����N 2017 ");strcat(nowbatting,fg2017[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==18){
				for(p=0;p<27;p++){
					if(hplayer[x]==datafg2018[p][0]){color(138);printf("�D����%d�ΡG�I�����N 2018 %s\n",x,fg2018[p]);strcat(nowbatting,"�I�����N 2018 ");strcat(nowbatting,fg2018[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==19){
				for(p=0;p<25;p++){
					if(hplayer[x]==datafg2019[p][0]){color(138);printf("�D����%d�ΡG�I�����N 2019 %s\n",x,fg2019[p]);strcat(nowbatting,"�I�����N 2019 ");strcat(nowbatting,fg2019[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==20){
				for(p=0;p<26;p++){
					if(hplayer[x]==datafg2020[p][0]){color(138);printf("�D����%d�ΡG�I�����N 2020 %s\n",x,fg2020[p]);strcat(nowbatting,"�I�����N 2020 ");strcat(nowbatting,fg2020[p]);color(15);playerfound=1;}
				}
			}
			if(hyear[x]==21){
				for(p=0;p<33;p++){
					if(hplayer[x]==datafg2021[p][0]){color(138);printf("�D����%d�ΡG�I�����N 2021 %s\n",x,fg2021[p]);strcat(nowbatting,"�I�����N 2021 ");strcat(nowbatting,fg2021[p]);color(15);playerfound=1;}
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
					if(hplayer[x]==datawd2021[p][0]){color(138);printf("�D����%d�ΡG�����s 2021 %s\n",x,wd2021[p]);strcat(nowbatting,"�����s 2021 ");strcat(nowbatting,wd2021[p]);color(15);playerfound=1;}
				}
			}
		}
		if(hteam[x]==8){
		}
		if(hteam[x]==9){
		}
		if(x==1)strcat(hb1,nowbatting);if(x==2)strcat(hb2,nowbatting);if(x==3)strcat(hb3,nowbatting);if(x==4)strcat(hb4,nowbatting);if(x==5)strcat(hb5,nowbatting);if(x==6)strcat(hb6,nowbatting);if(x==7)strcat(hb7,nowbatting);if(x==8)strcat(hb8,nowbatting);if(x==9)strcat(hb9,nowbatting);
		if(playerfound==0){color(207);printf("�d�L���y���A�Э��s��J�I");color(15);x--;}
		memset(nowbatting,'\0',50);
	}
	
	
	printf("\n��ܤ��ɼҦ�    1.�ԲӹL�{ 2.�ֳt�����G");
	scanf("%d",&gamemode);
	for(p=1;p<25;p++){inningscore[p]=0;}
	do{
		if(inning%2==1){color(142);printf("\n%d���W\n",(inning+1)/2);color(15);}
		if(inning%2==0){color(138);printf("\n%d���U\n",(inning+1)/2);color(15);}
		do{
			if(q!=4)q=1;playerfound=0;
			if(inning%2==1){
				if(ateam[aab]==0){
					for(p=0;p<6;p++){
						if(aplayer[aab]==dataUL90[p][0]){
							strcat(nowbatting,"�Τ@�� ");strcat(nowbatting,UL90[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �Τ@�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,UL90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataUL90[p][1];b=dataUL90[p][2];c=dataUL90[p][3];d=dataUL90[p][4];e=dataUL90[p][5];f=dataUL90[p][6];g=dataUL90[p][7];
								h=dataUL90[p][8];i=dataUL90[p][9];all=dataUL90[p][10];j=dataUL90[p][11];k=dataUL90[p][12];l=dataUL90[p][13];m=dataUL90[p][14];
								color(14);printf("��%d�� �Τ@�� %s�G",aab,UL90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(aplayer[aab]==dataUL08[p][0]){
							strcat(nowbatting,"�Τ@7-ELEVEn�� ");strcat(nowbatting,UL08[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,UL08[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataUL08[p][1];b=dataUL08[p][2];c=dataUL08[p][3];d=dataUL08[p][4];e=dataUL08[p][5];f=dataUL08[p][6];g=dataUL08[p][7];
								h=dataUL08[p][8];i=dataUL08[p][9];all=dataUL08[p][10];j=dataUL08[p][11];k=dataUL08[p][12];l=dataUL08[p][13];m=dataUL08[p][14];
								color(14);printf("��%d�� �Τ@7-ELEVEn�� %s�G",aab,UL08[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<74;p++){
						if(aplayer[aab]==dataBE90[p][0]){
							strcat(nowbatting,"�S�̶H ");strcat(nowbatting,BE90[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �S�̶H %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,BE90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataBE90[p][1];b=dataBE90[p][2];c=dataBE90[p][3];d=dataBE90[p][4];e=dataBE90[p][5];f=dataBE90[p][6];g=dataBE90[p][7];
								h=dataBE90[p][8];i=dataBE90[p][9];all=dataBE90[p][10];j=dataBE90[p][11];k=dataBE90[p][12];l=dataBE90[p][13];m=dataBE90[p][14];
								color(14);printf("��%d�� �S�̶H %s�G",aab,BE90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<6;p++){
						if(aplayer[aab]==dataCB14[p][0]){
							strcat(nowbatting,"���H�S�� ");strcat(nowbatting,CB14[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� ���H�S�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,CB14[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataCB14[p][1];b=dataCB14[p][2];c=dataCB14[p][3];d=dataCB14[p][4];e=dataCB14[p][5];f=dataCB14[p][6];g=dataCB14[p][7];
								h=dataCB14[p][8];i=dataCB14[p][9];all=dataCB14[p][10];j=dataCB14[p][11];k=dataCB14[p][12];l=dataCB14[p][13];m=dataCB14[p][14];
								color(14);printf("��%d�� ���H�S�� %s�G",aab,CB14[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<10;p++){
						if(aplayer[aab]==dataFA03[p][0]){
							strcat(nowbatting,"�Ĥ@���� ");strcat(nowbatting,FA03[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �Ĥ@���� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,FA03[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataFA03[p][1];b=dataFA03[p][2];c=dataFA03[p][3];d=dataFA03[p][4];e=dataFA03[p][5];f=dataFA03[p][6];g=dataFA03[p][7];
								h=dataFA03[p][8];i=dataFA03[p][9];all=dataFA03[p][10];j=dataFA03[p][11];k=dataFA03[p][12];l=dataFA03[p][13];m=dataFA03[p][14];
								color(14);printf("��%d�� �Ĥ@���� %s�G",aab,FA03[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<27;p++){
						if(aplayer[aab]==dataLB04[p][0]){
							strcat(nowbatting,"LaNew�� ");strcat(nowbatting,LB04[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� LaNew�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,LB04[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataLB04[p][1];b=dataLB04[p][2];c=dataLB04[p][3];d=dataLB04[p][4];e=dataLB04[p][5];f=dataLB04[p][6];g=dataLB04[p][7];
								h=dataLB04[p][8];i=dataLB04[p][9];all=dataLB04[p][10];j=dataLB04[p][11];k=dataLB04[p][12];l=dataLB04[p][13];m=dataLB04[p][14];
								color(14);printf("��%d�� LaNew�� %s�G",aab,LB04[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<3;p++){
						if(aplayer[aab]==dataLM11[p][0]){
							strcat(nowbatting,"Lamigo��� ");strcat(nowbatting,LM11[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� Lamigo��� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,LM11[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataLM11[p][1];b=dataLM11[p][2];c=dataLM11[p][3];d=dataLM11[p][4];e=dataLM11[p][5];f=dataLM11[p][6];g=dataLM11[p][7];
								h=dataLM11[p][8];i=dataLM11[p][9];all=dataLM11[p][10];j=dataLM11[p][11];k=dataLM11[p][12];l=dataLM11[p][13];m=dataLM11[p][14];
								color(14);printf("��%d�� Lamigo��� %s�G",aab,LM11[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(aplayer[aab]==dataRM20[p][0]){
							strcat(nowbatting,"�֤Ѯ�� ");strcat(nowbatting,RM20[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �֤Ѯ�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,RM20[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataRM20[p][1];b=dataRM20[p][2];c=dataRM20[p][3];d=dataRM20[p][4];e=dataRM20[p][5];f=dataRM20[p][6];g=dataRM20[p][7];
								h=dataRM20[p][8];i=dataRM20[p][9];all=dataRM20[p][10];j=dataRM20[p][11];k=dataRM20[p][12];l=dataRM20[p][13];m=dataRM20[p][14];
								color(14);printf("��%d�� �֤Ѯ�� %s�G",aab,RM20[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<14;p++){
						if(aplayer[aab]==dataJB93[p][0]){
							strcat(nowbatting,"�T�꺵 ");strcat(nowbatting,JB93[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �T�꺵 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,JB93[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataJB93[p][1];b=dataJB93[p][2];c=dataJB93[p][3];d=dataJB93[p][4];e=dataJB93[p][5];f=dataJB93[p][6];g=dataJB93[p][7];
								h=dataJB93[p][8];i=dataJB93[p][9];all=dataJB93[p][10];j=dataJB93[p][11];k=dataJB93[p][12];l=dataJB93[p][13];m=dataJB93[p][14];
								color(14);printf("��%d�� �T�꺵 %s�G",aab,JB93[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(aplayer[aab]==dataSB96T[p][0]){
							strcat(nowbatting,"���A�� ");strcat(nowbatting,SB96T[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� ���A�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,SB96T[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataSB96T[p][1];b=dataSB96T[p][2];c=dataSB96T[p][3];d=dataSB96T[p][4];e=dataSB96T[p][5];f=dataSB96T[p][6];g=dataSB96T[p][7];
								h=dataSB96T[p][8];i=dataSB96T[p][9];all=dataSB96T[p][10];j=dataSB96T[p][11];k=dataSB96T[p][12];l=dataSB96T[p][13];m=dataSB96T[p][14];
								color(14);printf("��%d�� ���A�� %s�G",aab,SB96T[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<44;p++){
						if(aplayer[aab]==dataSB96B[p][0]){
							strcat(nowbatting,"���A�� ");strcat(nowbatting,SB96B[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� ���A�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,SB96B[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataSB96B[p][1];b=dataSB96B[p][2];c=dataSB96B[p][3];d=dataSB96B[p][4];e=dataSB96B[p][5];f=dataSB96B[p][6];g=dataSB96B[p][7];
								h=dataSB96B[p][8];i=dataSB96B[p][9];all=dataSB96B[p][10];j=dataSB96B[p][11];k=dataSB96B[p][12];l=dataSB96B[p][13];m=dataSB96B[p][14];
								color(14);printf("��%d�� ���A�� %s�G",aab,SB96B[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<2;p++){
						if(aplayer[aab]==dataER13[p][0]){
							strcat(nowbatting,"�q�j�R�� ");strcat(nowbatting,ER13[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �q�j�R�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,ER13[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataER13[p][1];b=dataER13[p][2];c=dataER13[p][3];d=dataER13[p][4];e=dataER13[p][5];f=dataER13[p][6];g=dataER13[p][7];
								h=dataER13[p][8];i=dataER13[p][9];all=dataER13[p][10];j=dataER13[p][11];k=dataER13[p][12];l=dataER13[p][13];m=dataER13[p][14];
								color(14);printf("��%d�� �q�j�R�� %s�G",aab,ER13[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(aplayer[aab]==dataFG17[p][0]){
							strcat(nowbatting,"�I�����N ");strcat(nowbatting,FG17[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �I�����N %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,FG17[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataFG17[p][1];b=dataFG17[p][2];c=dataFG17[p][3];d=dataFG17[p][4];e=dataFG17[p][5];f=dataFG17[p][6];g=dataFG17[p][7];
								h=dataFG17[p][8];i=dataFG17[p][9];all=dataFG17[p][10];j=dataFG17[p][11];k=dataFG17[p][12];l=dataFG17[p][13];m=dataFG17[p][14];
								color(14);printf("��%d�� �I�����N %s�G",aab,FG17[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<49;p++){
						if(aplayer[aab]==dataWD90[p][0]){
							strcat(nowbatting,"�����s ");strcat(nowbatting,WD90[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �����s %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,WD90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataWD90[p][1];b=dataWD90[p][2];c=dataWD90[p][3];d=dataWD90[p][4];e=dataWD90[p][5];f=dataWD90[p][6];g=dataWD90[p][7];
								h=dataWD90[p][8];i=dataWD90[p][9];all=dataWD90[p][10];j=dataWD90[p][11];k=dataWD90[p][12];l=dataWD90[p][13];m=dataWD90[p][14];
								color(14);printf("��%d�� �����s %s�G",aab,WD90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<13;p++){
						if(aplayer[aab]==dataMS03[p][0]){
							strcat(nowbatting,"�ۮ��Ӷ� ");strcat(nowbatting,MS03[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �ۮ��Ӷ� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,MS03[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataMS03[p][1];b=dataMS03[p][2];c=dataMS03[p][3];d=dataMS03[p][4];e=dataMS03[p][5];f=dataMS03[p][6];g=dataMS03[p][7];
								h=dataMS03[p][8];i=dataMS03[p][9];all=dataMS03[p][10];j=dataMS03[p][11];k=dataMS03[p][12];l=dataMS03[p][13];m=dataMS03[p][14];
								color(14);printf("��%d�� �ۮ��Ӷ� %s�G",aab,MS03[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<25;p++){
						if(aplayer[aab]==dataMC04[p][0]){
							strcat(nowbatting,"�ۮ�Cobras ");strcat(nowbatting,MC04[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �ۮ�Cobras %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,MC04[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataMC04[p][1];b=dataMC04[p][2];c=dataMC04[p][3];d=dataMC04[p][4];e=dataMC04[p][5];f=dataMC04[p][6];g=dataMC04[p][7];
								h=dataMC04[p][8];i=dataMC04[p][9];all=dataMC04[p][10];j=dataMC04[p][11];k=dataMC04[p][12];l=dataMC04[p][13];m=dataMC04[p][14];
								color(14);printf("��%d�� �ۮ�Cobras %s�G",aab,MC04[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<4;p++){
						if(aplayer[aab]==dataDT08[p][0]){
							strcat(nowbatting,"�̭}�ȼ��s ");strcat(nowbatting,DT08[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �̭}�ȼ��s %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,DT08[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataDT08[p][1];b=dataDT08[p][2];c=dataDT08[p][3];d=dataDT08[p][4];e=dataDT08[p][5];f=dataDT08[p][6];g=dataDT08[p][7];
								h=dataDT08[p][8];i=dataDT08[p][9];all=dataDT08[p][10];j=dataDT08[p][11];k=dataDT08[p][12];l=dataDT08[p][13];m=dataDT08[p][14];
								color(14);printf("��%d�� �̭}�ȼ��s %s�G",aab,DT08[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<4;p++){
						if(aplayer[aab]==dataMT90[p][0]){
							strcat(nowbatting,"�T�Ӫ� ");strcat(nowbatting,MT90[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �T�Ӫ� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,MT90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataMT90[p][1];b=dataMT90[p][2];c=dataMT90[p][3];d=dataMT90[p][4];e=dataMT90[p][5];f=dataMT90[p][6];g=dataMT90[p][7];
								h=dataMT90[p][8];i=dataMT90[p][9];all=dataMT90[p][10];j=dataMT90[p][11];k=dataMT90[p][12];l=dataMT90[p][13];m=dataMT90[p][14];
								color(14);printf("��%d�� �T�Ӫ� %s�G",aab,MT90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<39;p++){
						if(aplayer[aab]==dataCE93[p][0]){
							strcat(nowbatting,"�ɳ��N ");strcat(nowbatting,CE93[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �ɳ��N %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,CE93[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataCE93[p][1];b=dataCE93[p][2];c=dataCE93[p][3];d=dataCE93[p][4];e=dataCE93[p][5];f=dataCE93[p][6];g=dataCE93[p][7];
								h=dataCE93[p][8];i=dataCE93[p][9];all=dataCE93[p][10];j=dataCE93[p][11];k=dataCE93[p][12];l=dataCE93[p][13];m=dataCE93[p][14];
								color(14);printf("��%d�� �ɳ��N %s�G",aab,CE93[p]);color(15);playerfound=1;
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
								strcat(nowbatting,"�Τ@7-ELEVEn�� 2016 ");strcat(nowbatting,ul2016[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� 2016 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,ul2016[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2016[p][1];b=dataul2016[p][2];c=dataul2016[p][3];d=dataul2016[p][4];e=dataul2016[p][5];f=dataul2016[p][6];g=dataul2016[p][7];
									h=dataul2016[p][8];i=dataul2016[p][9];all=dataul2016[p][10];j=dataul2016[p][11];k=dataul2016[p][12];l=dataul2016[p][13];m=dataul2016[p][14];
									color(14);printf("��%d�� �Τ@7-ELEVEn�� 2016 %s�G",aab,ul2016[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==17){
						for(p=0;p<30;p++){
							if(aplayer[aab]==dataul2017[p][0]){
								strcat(nowbatting,"�Τ@7-ELEVEn�� 2017 ");strcat(nowbatting,ul2017[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� 2017 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,ul2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2017[p][1];b=dataul2017[p][2];c=dataul2017[p][3];d=dataul2017[p][4];e=dataul2017[p][5];f=dataul2017[p][6];g=dataul2017[p][7];
									h=dataul2017[p][8];i=dataul2017[p][9];all=dataul2017[p][10];j=dataul2017[p][11];k=dataul2017[p][12];l=dataul2017[p][13];m=dataul2017[p][14];
									color(14);printf("��%d�� �Τ@7-ELEVEn�� 2017 %s�G",aab,ul2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==18){
						for(p=0;p<30;p++){
							if(aplayer[aab]==dataul2018[p][0]){
								strcat(nowbatting,"�Τ@7-ELEVEn�� 2018 ");strcat(nowbatting,ul2018[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� 2018 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,ul2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2018[p][1];b=dataul2018[p][2];c=dataul2018[p][3];d=dataul2018[p][4];e=dataul2018[p][5];f=dataul2018[p][6];g=dataul2018[p][7];
									h=dataul2018[p][8];i=dataul2018[p][9];all=dataul2018[p][10];j=dataul2018[p][11];k=dataul2018[p][12];l=dataul2018[p][13];m=dataul2018[p][14];
									color(14);printf("��%d�� �Τ@7-ELEVEn�� 2018 %s�G",aab,ul2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==19){
						for(p=0;p<34;p++){
							if(aplayer[aab]==dataul2019[p][0]){
								strcat(nowbatting,"�Τ@7-ELEVEn�� 2019 ");strcat(nowbatting,ul2019[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� 2019 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,ul2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2019[p][1];b=dataul2019[p][2];c=dataul2019[p][3];d=dataul2019[p][4];e=dataul2019[p][5];f=dataul2019[p][6];g=dataul2019[p][7];
									h=dataul2019[p][8];i=dataul2019[p][9];all=dataul2019[p][10];j=dataul2019[p][11];k=dataul2019[p][12];l=dataul2019[p][13];m=dataul2019[p][14];
									color(14);printf("��%d�� �Τ@7-ELEVEn�� 2019 %s�G",aab,ul2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==20){
						for(p=0;p<28;p++){
							if(aplayer[aab]==dataul2020[p][0]){
								strcat(nowbatting,"�Τ@7-ELEVEn�� 2020 ");strcat(nowbatting,ul2020[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� 2020 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,ul2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2020[p][1];b=dataul2020[p][2];c=dataul2020[p][3];d=dataul2020[p][4];e=dataul2020[p][5];f=dataul2020[p][6];g=dataul2020[p][7];
									h=dataul2020[p][8];i=dataul2020[p][9];all=dataul2020[p][10];j=dataul2020[p][11];k=dataul2020[p][12];l=dataul2020[p][13];m=dataul2020[p][14];
									color(14);printf("��%d�� �Τ@7-ELEVEn�� 2020 %s�G",aab,ul2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==21){
						for(p=0;p<33;p++){
							if(aplayer[aab]==dataul2021[p][0]){
								strcat(nowbatting,"�Τ@7-ELEVEn�� 2021 ");strcat(nowbatting,ul2021[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� 2021 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,ul2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2021[p][1];b=dataul2021[p][2];c=dataul2021[p][3];d=dataul2021[p][4];e=dataul2021[p][5];f=dataul2021[p][6];g=dataul2021[p][7];
									h=dataul2021[p][8];i=dataul2021[p][9];all=dataul2021[p][10];j=dataul2021[p][11];k=dataul2021[p][12];l=dataul2021[p][13];m=dataul2021[p][14];
									color(14);printf("��%d�� �Τ@7-ELEVEn�� 2021 %s�G",aab,ul2021[p]);color(15);playerfound=1;
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
								strcat(nowbatting,"���H�S�� 2016 ");strcat(nowbatting,cb2016[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� ���H�S�� 2016 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,cb2016[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2016[p][1];b=datacb2016[p][2];c=datacb2016[p][3];d=datacb2016[p][4];e=datacb2016[p][5];f=datacb2016[p][6];g=datacb2016[p][7];
									h=datacb2016[p][8];i=datacb2016[p][9];all=datacb2016[p][10];j=datacb2016[p][11];k=datacb2016[p][12];l=datacb2016[p][13];m=datacb2016[p][14];
									color(14);printf("��%d�� ���H�S�� 2016 %s�G",aab,cb2016[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==17){
						for(p=0;p<27;p++){
							if(aplayer[aab]==datacb2017[p][0]){
								strcat(nowbatting,"���H�S�� 2017 ");strcat(nowbatting,cb2017[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� ���H�S�� 2017 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,cb2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2017[p][1];b=datacb2017[p][2];c=datacb2017[p][3];d=datacb2017[p][4];e=datacb2017[p][5];f=datacb2017[p][6];g=datacb2017[p][7];
									h=datacb2017[p][8];i=datacb2017[p][9];all=datacb2017[p][10];j=datacb2017[p][11];k=datacb2017[p][12];l=datacb2017[p][13];m=datacb2017[p][14];
									color(14);printf("��%d�� ���H�S�� 2017 %s�G",aab,cb2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==18){
						for(p=0;p<26;p++){
							if(aplayer[aab]==datacb2018[p][0]){
								strcat(nowbatting,"���H�S�� 2018 ");strcat(nowbatting,cb2018[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� ���H�S�� 2018 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,cb2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2018[p][1];b=datacb2018[p][2];c=datacb2018[p][3];d=datacb2018[p][4];e=datacb2018[p][5];f=datacb2018[p][6];g=datacb2018[p][7];
									h=datacb2018[p][8];i=datacb2018[p][9];all=datacb2018[p][10];j=datacb2018[p][11];k=datacb2018[p][12];l=datacb2018[p][13];m=datacb2018[p][14];
									color(14);printf("��%d�� ���H�S�� 2018 %s�G",aab,cb2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==19){
						for(p=0;p<26;p++){
							if(aplayer[aab]==datacb2019[p][0]){
								strcat(nowbatting,"���H�S�� 2019 ");strcat(nowbatting,cb2019[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� ���H�S�� 2019 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,cb2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2019[p][1];b=datacb2019[p][2];c=datacb2019[p][3];d=datacb2019[p][4];e=datacb2019[p][5];f=datacb2019[p][6];g=datacb2019[p][7];
									h=datacb2019[p][8];i=datacb2019[p][9];all=datacb2019[p][10];j=datacb2019[p][11];k=datacb2019[p][12];l=datacb2019[p][13];m=datacb2019[p][14];
									color(14);printf("��%d�� ���H�S�� 2019 %s�G",aab,cb2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==20){
						for(p=0;p<22;p++){
							if(aplayer[aab]==datacb2020[p][0]){
								strcat(nowbatting,"���H�S�� 2020 ");strcat(nowbatting,cb2020[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� ���H�S�� 2020 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,cb2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2020[p][1];b=datacb2020[p][2];c=datacb2020[p][3];d=datacb2020[p][4];e=datacb2020[p][5];f=datacb2020[p][6];g=datacb2020[p][7];
									h=datacb2020[p][8];i=datacb2020[p][9];all=datacb2020[p][10];j=datacb2020[p][11];k=datacb2020[p][12];l=datacb2020[p][13];m=datacb2020[p][14];
									color(14);printf("��%d�� ���H�S�� 2020 %s�G",aab,cb2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==21){
						for(p=0;p<28;p++){
							if(aplayer[aab]==datacb2021[p][0]){
								strcat(nowbatting,"���H�S�� 2021 ");strcat(nowbatting,cb2021[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� ���H�S�� 2021 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,cb2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2021[p][1];b=datacb2021[p][2];c=datacb2021[p][3];d=datacb2021[p][4];e=datacb2021[p][5];f=datacb2021[p][6];g=datacb2021[p][7];
									h=datacb2021[p][8];i=datacb2021[p][9];all=datacb2021[p][10];j=datacb2021[p][11];k=datacb2021[p][12];l=datacb2021[p][13];m=datacb2021[p][14];
									color(14);printf("��%d�� ���H�S�� 2021 %s�G",aab,cb2021[p]);color(15);playerfound=1;
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
								strcat(nowbatting,"Lamigo��� 2017 ");strcat(nowbatting,lm2017[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� Lamigo��� 2017 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,lm2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datalm2017[p][1];b=datalm2017[p][2];c=datalm2017[p][3];d=datalm2017[p][4];e=datalm2017[p][5];f=datalm2017[p][6];g=datalm2017[p][7];
									h=datalm2017[p][8];i=datalm2017[p][9];all=datalm2017[p][10];j=datalm2017[p][11];k=datalm2017[p][12];l=datalm2017[p][13];m=datalm2017[p][14];
									color(14);printf("��%d�� Lamigo��� 2017 %s�G",aab,lm2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==18){
						for(p=0;p<29;p++){
							if(aplayer[aab]==datalm2018[p][0]){
								strcat(nowbatting,"Lamigo��� 2018 ");strcat(nowbatting,lm2018[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� Lamigo��� 2018 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,lm2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datalm2018[p][1];b=datalm2018[p][2];c=datalm2018[p][3];d=datalm2018[p][4];e=datalm2018[p][5];f=datalm2018[p][6];g=datalm2018[p][7];
									h=datalm2018[p][8];i=datalm2018[p][9];all=datalm2018[p][10];j=datalm2018[p][11];k=datalm2018[p][12];l=datalm2018[p][13];m=datalm2018[p][14];
									color(14);printf("��%d�� Lamigo��� 2018 %s�G",aab,lm2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==19){
						for(p=0;p<25;p++){
							if(aplayer[aab]==datalm2019[p][0]){
								strcat(nowbatting,"Lamigo��� 2019 ");strcat(nowbatting,lm2019[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� Lamigo��� 2019 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,lm2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datalm2019[p][1];b=datalm2019[p][2];c=datalm2019[p][3];d=datalm2019[p][4];e=datalm2019[p][5];f=datalm2019[p][6];g=datalm2019[p][7];
									h=datalm2019[p][8];i=datalm2019[p][9];all=datalm2019[p][10];j=datalm2019[p][11];k=datalm2019[p][12];l=datalm2019[p][13];m=datalm2019[p][14];
									color(14);printf("��%d�� Lamigo��� 2019 %s�G",aab,lm2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==20){
						for(p=0;p<25;p++){
							if(aplayer[aab]==datarm2020[p][0]){
								strcat(nowbatting,"�֤Ѯ�� 2020 ");strcat(nowbatting,rm2020[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �֤Ѯ�� 2020 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,rm2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datarm2020[p][1];b=datarm2020[p][2];c=datarm2020[p][3];d=datarm2020[p][4];e=datarm2020[p][5];f=datarm2020[p][6];g=datarm2020[p][7];
									h=datarm2020[p][8];i=datarm2020[p][9];all=datarm2020[p][10];j=datarm2020[p][11];k=datarm2020[p][12];l=datarm2020[p][13];m=datarm2020[p][14];
									color(14);printf("��%d�� �֤Ѯ�� 2020 %s�G",aab,rm2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==21){
						for(p=0;p<26;p++){
							if(aplayer[aab]==datarm2021[p][0]){
								strcat(nowbatting,"�֤Ѯ�� 2021 ");strcat(nowbatting,rm2021[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �֤Ѯ�� 2021 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,rm2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datarm2021[p][1];b=datarm2021[p][2];c=datarm2021[p][3];d=datarm2021[p][4];e=datarm2021[p][5];f=datarm2021[p][6];g=datarm2021[p][7];
									h=datarm2021[p][8];i=datarm2021[p][9];all=datarm2021[p][10];j=datarm2021[p][11];k=datarm2021[p][12];l=datarm2021[p][13];m=datarm2021[p][14];
									color(14);printf("��%d�� �֤Ѯ�� 2021 %s�G",aab,rm2021[p]);color(15);playerfound=1;
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
								strcat(nowbatting,"�I�����N 2017 ");strcat(nowbatting,fg2017[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �I�����N 2017 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,fg2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2017[p][1];b=datafg2017[p][2];c=datafg2017[p][3];d=datafg2017[p][4];e=datafg2017[p][5];f=datafg2017[p][6];g=datafg2017[p][7];
									h=datafg2017[p][8];i=datafg2017[p][9];all=datafg2017[p][10];j=datafg2017[p][11];k=datafg2017[p][12];l=datafg2017[p][13];m=datafg2017[p][14];
									color(14);printf("��%d�� �I�����N 2017 %s�G",aab,fg2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==18){
						for(p=0;p<27;p++){
							if(aplayer[aab]==datafg2018[p][0]){
								strcat(nowbatting,"�I�����N 2018 ");strcat(nowbatting,fg2018[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �I�����N 2018 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,fg2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2018[p][1];b=datafg2018[p][2];c=datafg2018[p][3];d=datafg2018[p][4];e=datafg2018[p][5];f=datafg2018[p][6];g=datafg2018[p][7];
									h=datafg2018[p][8];i=datafg2018[p][9];all=datafg2018[p][10];j=datafg2018[p][11];k=datafg2018[p][12];l=datafg2018[p][13];m=datafg2018[p][14];
									color(14);printf("��%d�� �I�����N 2018 %s�G",aab,fg2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==19){
						for(p=0;p<25;p++){
							if(aplayer[aab]==datafg2019[p][0]){
								strcat(nowbatting,"�I�����N 2019 ");strcat(nowbatting,fg2019[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �I�����N 2019 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,fg2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2019[p][1];b=datafg2019[p][2];c=datafg2019[p][3];d=datafg2019[p][4];e=datafg2019[p][5];f=datafg2019[p][6];g=datafg2019[p][7];
									h=datafg2019[p][8];i=datafg2019[p][9];all=datafg2019[p][10];j=datafg2019[p][11];k=datafg2019[p][12];l=datafg2019[p][13];m=datafg2019[p][14];
									color(14);printf("��%d�� �I�����N 2019 %s�G",aab,fg2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==20){
						for(p=0;p<26;p++){
							if(aplayer[aab]==datafg2020[p][0]){
								strcat(nowbatting,"�I�����N 2020 ");strcat(nowbatting,fg2020[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �I�����N 2020 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,fg2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2020[p][1];b=datafg2020[p][2];c=datafg2020[p][3];d=datafg2020[p][4];e=datafg2020[p][5];f=datafg2020[p][6];g=datafg2020[p][7];
									h=datafg2020[p][8];i=datafg2020[p][9];all=datafg2020[p][10];j=datafg2020[p][11];k=datafg2020[p][12];l=datafg2020[p][13];m=datafg2020[p][14];
									color(14);printf("��%d�� �I�����N 2020 %s�G",aab,fg2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(ayear[aab]==21){
						for(p=0;p<33;p++){
							if(aplayer[aab]==datafg2021[p][0]){
								strcat(nowbatting,"�I�����N 2021 ");strcat(nowbatting,fg2021[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �I�����N 2021 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,fg2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2021[p][1];b=datafg2021[p][2];c=datafg2021[p][3];d=datafg2021[p][4];e=datafg2021[p][5];f=datafg2021[p][6];g=datafg2021[p][7];
									h=datafg2021[p][8];i=datafg2021[p][9];all=datafg2021[p][10];j=datafg2021[p][11];k=datafg2021[p][12];l=datafg2021[p][13];m=datafg2021[p][14];
									color(14);printf("��%d�� �I�����N 2021 %s�G",aab,fg2021[p]);color(15);playerfound=1;
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
								strcat(nowbatting,"�����s 2021 ");strcat(nowbatting,wd2021[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �����s 2021 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",aab,wd2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datawd2021[p][1];b=datawd2021[p][2];c=datawd2021[p][3];d=datawd2021[p][4];e=datawd2021[p][5];f=datawd2021[p][6];g=datawd2021[p][7];
									h=datawd2021[p][8];i=datawd2021[p][9];all=datawd2021[p][10];j=datawd2021[p][11];k=datawd2021[p][12];l=datawd2021[p][13];m=datawd2021[p][14];
									color(14);printf("��%d�� �����s 2021 %s�G",aab,wd2021[p]);color(15);playerfound=1;
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
				if(q==3)printf("\n�ȶ����ǡG\n�Ĥ@�� %s\n�ĤG�� %s\n�ĤT�� %s\n�ĥ|�� %s\n�Ĥ��� %s\n�Ĥ��� %s\n�ĤC�� %s\n�ĤK�� %s\n�ĤE�� %s\n\n",ab1,ab2,ab3,ab4,ab5,ab6,ab7,ab8,ab9);
				memset(nowbatting,'\0',50);
			}
			if(inning%2==0){
				if(hteam[hab]==0){
					for(p=0;p<6;p++){
						if(hplayer[hab]==dataUL90[p][0]){
							strcat(nowbatting,"�Τ@�� ");strcat(nowbatting,UL90[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �Τ@�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,UL90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataUL90[p][1];b=dataUL90[p][2];c=dataUL90[p][3];d=dataUL90[p][4];e=dataUL90[p][5];f=dataUL90[p][6];g=dataUL90[p][7];
								h=dataUL90[p][8];i=dataUL90[p][9];all=dataUL90[p][10];j=dataUL90[p][11];k=dataUL90[p][12];l=dataUL90[p][13];m=dataUL90[p][14];
								color(10);printf("��%d�� �Τ@�� %s�G",hab,UL90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(hplayer[hab]==dataUL08[p][0]){
							strcat(nowbatting,"�Τ@7-ELEVEn�� ");strcat(nowbatting,UL08[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,UL08[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataUL08[p][1];b=dataUL08[p][2];c=dataUL08[p][3];d=dataUL08[p][4];e=dataUL08[p][5];f=dataUL08[p][6];g=dataUL08[p][7];
								h=dataUL08[p][8];i=dataUL08[p][9];all=dataUL08[p][10];j=dataUL08[p][11];k=dataUL08[p][12];l=dataUL08[p][13];m=dataUL08[p][14];
								color(10);printf("��%d�� �Τ@7-ELEVEn�� %s�G",hab,UL08[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<74;p++){
						if(hplayer[hab]==dataBE90[p][0]){
							strcat(nowbatting,"�S�̶H ");strcat(nowbatting,BE90[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �S�̶H %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,BE90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataBE90[p][1];b=dataBE90[p][2];c=dataBE90[p][3];d=dataBE90[p][4];e=dataBE90[p][5];f=dataBE90[p][6];g=dataBE90[p][7];
								h=dataBE90[p][8];i=dataBE90[p][9];all=dataBE90[p][10];j=dataBE90[p][11];k=dataBE90[p][12];l=dataBE90[p][13];m=dataBE90[p][14];
								color(10);printf("��%d�� �S�̶H %s�G",hab,BE90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<6;p++){
						if(hplayer[hab]==dataCB14[p][0]){
							strcat(nowbatting,"���H�S�� ");strcat(nowbatting,CB14[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� ���H�S�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,CB14[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataCB14[p][1];b=dataCB14[p][2];c=dataCB14[p][3];d=dataCB14[p][4];e=dataCB14[p][5];f=dataCB14[p][6];g=dataCB14[p][7];
								h=dataCB14[p][8];i=dataCB14[p][9];all=dataCB14[p][10];j=dataCB14[p][11];k=dataCB14[p][12];l=dataCB14[p][13];m=dataCB14[p][14];
								color(10);printf("��%d�� ���H�S�� %s�G",hab,CB14[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<10;p++){
						if(hplayer[hab]==dataFA03[p][0]){
							strcat(nowbatting,"�Ĥ@���� ");strcat(nowbatting,FA03[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �Ĥ@���� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,FA03[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataFA03[p][1];b=dataFA03[p][2];c=dataFA03[p][3];d=dataFA03[p][4];e=dataFA03[p][5];f=dataFA03[p][6];g=dataFA03[p][7];
								h=dataFA03[p][8];i=dataFA03[p][9];all=dataFA03[p][10];j=dataFA03[p][11];k=dataFA03[p][12];l=dataFA03[p][13];m=dataFA03[p][14];
								color(10);printf("��%d�� �Ĥ@���� %s�G",hab,FA03[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<27;p++){
						if(hplayer[hab]==dataLB04[p][0]){
							strcat(nowbatting,"LaNew�� ");strcat(nowbatting,LB04[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� LaNew�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,LB04[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataLB04[p][1];b=dataLB04[p][2];c=dataLB04[p][3];d=dataLB04[p][4];e=dataLB04[p][5];f=dataLB04[p][6];g=dataLB04[p][7];
								h=dataLB04[p][8];i=dataLB04[p][9];all=dataLB04[p][10];j=dataLB04[p][11];k=dataLB04[p][12];l=dataLB04[p][13];m=dataLB04[p][14];
								color(10);printf("��%d�� LaNew�� %s�G",hab,LB04[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<3;p++){
						if(hplayer[hab]==dataLM11[p][0]){
							strcat(nowbatting,"Lamigo��� ");strcat(nowbatting,LM11[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� Lamigo��� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,LM11[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataLM11[p][1];b=dataLM11[p][2];c=dataLM11[p][3];d=dataLM11[p][4];e=dataLM11[p][5];f=dataLM11[p][6];g=dataLM11[p][7];
								h=dataLM11[p][8];i=dataLM11[p][9];all=dataLM11[p][10];j=dataLM11[p][11];k=dataLM11[p][12];l=dataLM11[p][13];m=dataLM11[p][14];
								color(10);printf("��%d�� Lamigo��� %s�G",hab,LM11[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(hplayer[hab]==dataRM20[p][0]){
							strcat(nowbatting,"�֤Ѯ�� ");strcat(nowbatting,RM20[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �֤Ѯ�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,RM20[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataRM20[p][1];b=dataRM20[p][2];c=dataRM20[p][3];d=dataRM20[p][4];e=dataRM20[p][5];f=dataRM20[p][6];g=dataRM20[p][7];
								h=dataRM20[p][8];i=dataRM20[p][9];all=dataRM20[p][10];j=dataRM20[p][11];k=dataRM20[p][12];l=dataRM20[p][13];m=dataRM20[p][14];
								color(10);printf("��%d�� �֤Ѯ�� %s�G",hab,RM20[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<14;p++){
						if(hplayer[hab]==dataJB93[p][0]){
							strcat(nowbatting,"�T�꺵 ");strcat(nowbatting,JB93[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �T�꺵 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,JB93[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataJB93[p][1];b=dataJB93[p][2];c=dataJB93[p][3];d=dataJB93[p][4];e=dataJB93[p][5];f=dataJB93[p][6];g=dataJB93[p][7];
								h=dataJB93[p][8];i=dataJB93[p][9];all=dataJB93[p][10];j=dataJB93[p][11];k=dataJB93[p][12];l=dataJB93[p][13];m=dataJB93[p][14];
								color(10);printf("��%d�� �T�꺵 %s�G",hab,JB93[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(hplayer[hab]==dataSB96T[p][0]){
							strcat(nowbatting,"���A�� ");strcat(nowbatting,SB96T[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� ���A�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,SB96T[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataSB96T[p][1];b=dataSB96T[p][2];c=dataSB96T[p][3];d=dataSB96T[p][4];e=dataSB96T[p][5];f=dataSB96T[p][6];g=dataSB96T[p][7];
								h=dataSB96T[p][8];i=dataSB96T[p][9];all=dataSB96T[p][10];j=dataSB96T[p][11];k=dataSB96T[p][12];l=dataSB96T[p][13];m=dataSB96T[p][14];
								color(10);printf("��%d�� ���A�� %s�G",hab,SB96T[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<44;p++){
						if(hplayer[hab]==dataSB96B[p][0]){
							strcat(nowbatting,"���A�� ");strcat(nowbatting,SB96B[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� ���A�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,SB96B[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataSB96B[p][1];b=dataSB96B[p][2];c=dataSB96B[p][3];d=dataSB96B[p][4];e=dataSB96B[p][5];f=dataSB96B[p][6];g=dataSB96B[p][7];
								h=dataSB96B[p][8];i=dataSB96B[p][9];all=dataSB96B[p][10];j=dataSB96B[p][11];k=dataSB96B[p][12];l=dataSB96B[p][13];m=dataSB96B[p][14];
								color(10);printf("��%d�� ���A�� %s�G",hab,SB96B[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<2;p++){
						if(hplayer[hab]==dataER13[p][0]){
							strcat(nowbatting,"�q�j�R�� ");strcat(nowbatting,ER13[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �q�j�R�� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,ER13[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataER13[p][1];b=dataER13[p][2];c=dataER13[p][3];d=dataER13[p][4];e=dataER13[p][5];f=dataER13[p][6];g=dataER13[p][7];
								h=dataER13[p][8];i=dataER13[p][9];all=dataER13[p][10];j=dataER13[p][11];k=dataER13[p][12];l=dataER13[p][13];m=dataER13[p][14];
								color(10);printf("��%d�� �q�j�R�� %s�G",hab,ER13[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<1;p++){
						if(hplayer[hab]==dataFG17[p][0]){
							strcat(nowbatting,"�I�����N ");strcat(nowbatting,FG17[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �I�����N %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,FG17[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataFG17[p][1];b=dataFG17[p][2];c=dataFG17[p][3];d=dataFG17[p][4];e=dataFG17[p][5];f=dataFG17[p][6];g=dataFG17[p][7];
								h=dataFG17[p][8];i=dataFG17[p][9];all=dataFG17[p][10];j=dataFG17[p][11];k=dataFG17[p][12];l=dataFG17[p][13];m=dataFG17[p][14];
								color(10);printf("��%d�� �I�����N %s�G",hab,FG17[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<49;p++){
						if(hplayer[hab]==dataWD90[p][0]){
							strcat(nowbatting,"�����s ");strcat(nowbatting,WD90[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �����s %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,WD90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataWD90[p][1];b=dataWD90[p][2];c=dataWD90[p][3];d=dataWD90[p][4];e=dataWD90[p][5];f=dataWD90[p][6];g=dataWD90[p][7];
								h=dataWD90[p][8];i=dataWD90[p][9];all=dataWD90[p][10];j=dataWD90[p][11];k=dataWD90[p][12];l=dataWD90[p][13];m=dataWD90[p][14];
								color(10);printf("��%d�� �����s %s�G",hab,WD90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<13;p++){
						if(hplayer[hab]==dataMS03[p][0]){
							strcat(nowbatting,"�ۮ��Ӷ� ");strcat(nowbatting,MS03[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �ۮ��Ӷ� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,MS03[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataMS03[p][1];b=dataMS03[p][2];c=dataMS03[p][3];d=dataMS03[p][4];e=dataMS03[p][5];f=dataMS03[p][6];g=dataMS03[p][7];
								h=dataMS03[p][8];i=dataMS03[p][9];all=dataMS03[p][10];j=dataMS03[p][11];k=dataMS03[p][12];l=dataMS03[p][13];m=dataMS03[p][14];
								color(10);printf("��%d�� �ۮ��Ӷ� %s�G",hab,MS03[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<25;p++){
						if(hplayer[hab]==dataMC04[p][0]){
							strcat(nowbatting,"�ۮ�Cobras ");strcat(nowbatting,MC04[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �ۮ�Cobras %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,MC04[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataMC04[p][1];b=dataMC04[p][2];c=dataMC04[p][3];d=dataMC04[p][4];e=dataMC04[p][5];f=dataMC04[p][6];g=dataMC04[p][7];
								h=dataMC04[p][8];i=dataMC04[p][9];all=dataMC04[p][10];j=dataMC04[p][11];k=dataMC04[p][12];l=dataMC04[p][13];m=dataMC04[p][14];
								color(10);printf("��%d�� �ۮ�Cobras %s�G",hab,MC04[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<4;p++){
						if(hplayer[hab]==dataDT08[p][0]){
							strcat(nowbatting,"�̭}�ȼ��s ");strcat(nowbatting,DT08[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �̭}�ȼ��s %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,DT08[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataDT08[p][1];b=dataDT08[p][2];c=dataDT08[p][3];d=dataDT08[p][4];e=dataDT08[p][5];f=dataDT08[p][6];g=dataDT08[p][7];
								h=dataDT08[p][8];i=dataDT08[p][9];all=dataDT08[p][10];j=dataDT08[p][11];k=dataDT08[p][12];l=dataDT08[p][13];m=dataDT08[p][14];
								color(10);printf("��%d�� �̭}�ȼ��s %s�G",hab,DT08[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<4;p++){
						if(hplayer[hab]==dataMT90[p][0]){
							strcat(nowbatting,"�T�Ӫ� ");strcat(nowbatting,MT90[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �T�Ӫ� %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,MT90[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataMT90[p][1];b=dataMT90[p][2];c=dataMT90[p][3];d=dataMT90[p][4];e=dataMT90[p][5];f=dataMT90[p][6];g=dataMT90[p][7];
								h=dataMT90[p][8];i=dataMT90[p][9];all=dataMT90[p][10];j=dataMT90[p][11];k=dataMT90[p][12];l=dataMT90[p][13];m=dataMT90[p][14];
								color(10);printf("��%d�� �T�Ӫ� %s�G",hab,MT90[p]);color(15);playerfound=1;
							}
						}
					}
					for(p=0;p<39;p++){
						if(hplayer[hab]==dataCE93[p][0]){
							strcat(nowbatting,"�ɳ��N ");strcat(nowbatting,CE93[p]);
							if(gamemode==1){
								printf("�U�@�ΡG��%d�� �ɳ��N %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,CE93[p]);playerfound=1;
								scanf("%d",&q);
							}
							if(q==2){printf("��ܥN���y���G");}
							if((q==4)||(q==5))gamemode=2;
							if((q==1)||(q==4)||(q==5)){
								a=dataCE93[p][1];b=dataCE93[p][2];c=dataCE93[p][3];d=dataCE93[p][4];e=dataCE93[p][5];f=dataCE93[p][6];g=dataCE93[p][7];
								h=dataCE93[p][8];i=dataCE93[p][9];all=dataCE93[p][10];j=dataCE93[p][11];k=dataCE93[p][12];l=dataCE93[p][13];m=dataCE93[p][14];
								color(10);printf("��%d�� �ɳ��N %s�G",hab,CE93[p]);color(15);playerfound=1;
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
								strcat(nowbatting,"�Τ@7-ELEVEn�� 2016 ");strcat(nowbatting,ul2016[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� 2016 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,ul2016[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2016[p][1];b=dataul2016[p][2];c=dataul2016[p][3];d=dataul2016[p][4];e=dataul2016[p][5];f=dataul2016[p][6];g=dataul2016[p][7];
									h=dataul2016[p][8];i=dataul2016[p][9];all=dataul2016[p][10];j=dataul2016[p][11];k=dataul2016[p][12];l=dataul2016[p][13];m=dataul2016[p][14];
									color(10);printf("��%d�� �Τ@7-ELEVEn�� 2016 %s�G",hab,ul2016[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==17){
						for(p=0;p<30;p++){
							if(hplayer[hab]==dataul2017[p][0]){
								strcat(nowbatting,"�Τ@7-ELEVEn�� 2017 ");strcat(nowbatting,ul2017[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� 2017 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,ul2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2017[p][1];b=dataul2017[p][2];c=dataul2017[p][3];d=dataul2017[p][4];e=dataul2017[p][5];f=dataul2017[p][6];g=dataul2017[p][7];
									h=dataul2017[p][8];i=dataul2017[p][9];all=dataul2017[p][10];j=dataul2017[p][11];k=dataul2017[p][12];l=dataul2017[p][13];m=dataul2017[p][14];
									color(10);printf("��%d�� �Τ@7-ELEVEn�� 2017 %s�G",hab,ul2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==18){
						for(p=0;p<30;p++){
							if(hplayer[hab]==dataul2018[p][0]){
								strcat(nowbatting,"�Τ@7-ELEVEn�� 2018 ");strcat(nowbatting,ul2018[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� 2018 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,ul2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2018[p][1];b=dataul2018[p][2];c=dataul2018[p][3];d=dataul2018[p][4];e=dataul2018[p][5];f=dataul2018[p][6];g=dataul2018[p][7];
									h=dataul2018[p][8];i=dataul2018[p][9];all=dataul2018[p][10];j=dataul2018[p][11];k=dataul2018[p][12];l=dataul2018[p][13];m=dataul2018[p][14];
									color(10);printf("��%d�� �Τ@7-ELEVEn�� 2018 %s�G",hab,ul2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==19){
						for(p=0;p<34;p++){
							if(hplayer[hab]==dataul2019[p][0]){
								strcat(nowbatting,"�Τ@7-ELEVEn�� 2019 ");strcat(nowbatting,ul2019[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� 2019 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,ul2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2019[p][1];b=dataul2019[p][2];c=dataul2019[p][3];d=dataul2019[p][4];e=dataul2019[p][5];f=dataul2019[p][6];g=dataul2019[p][7];
									h=dataul2019[p][8];i=dataul2019[p][9];all=dataul2019[p][10];j=dataul2019[p][11];k=dataul2019[p][12];l=dataul2019[p][13];m=dataul2019[p][14];
									color(10);printf("��%d�� �Τ@7-ELEVEn�� 2019 %s�G",hab,ul2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==20){
						for(p=0;p<28;p++){
							if(hplayer[hab]==dataul2020[p][0]){
								strcat(nowbatting,"�Τ@7-ELEVEn�� 2020 ");strcat(nowbatting,ul2020[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� 2020 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,ul2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2020[p][1];b=dataul2020[p][2];c=dataul2020[p][3];d=dataul2020[p][4];e=dataul2020[p][5];f=dataul2020[p][6];g=dataul2020[p][7];
									h=dataul2020[p][8];i=dataul2020[p][9];all=dataul2020[p][10];j=dataul2020[p][11];k=dataul2020[p][12];l=dataul2020[p][13];m=dataul2020[p][14];
									color(10);printf("��%d�� �Τ@7-ELEVEn�� 2020 %s�G",hab,ul2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==21){
						for(p=0;p<33;p++){
							if(hplayer[hab]==dataul2021[p][0]){
								strcat(nowbatting,"�Τ@7-ELEVEn�� 2021 ");strcat(nowbatting,ul2021[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �Τ@7-ELEVEn�� 2021 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,ul2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=dataul2021[p][1];b=dataul2021[p][2];c=dataul2021[p][3];d=dataul2021[p][4];e=dataul2021[p][5];f=dataul2021[p][6];g=dataul2021[p][7];
									h=dataul2021[p][8];i=dataul2021[p][9];all=dataul2021[p][10];j=dataul2021[p][11];k=dataul2021[p][12];l=dataul2021[p][13];m=dataul2021[p][14];
									color(10);printf("��%d�� �Τ@7-ELEVEn�� 2021 %s�G",hab,ul2021[p]);color(15);playerfound=1;
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
								strcat(nowbatting,"���H�S�� 2016 ");strcat(nowbatting,cb2016[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� ���H�S�� 2016 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,cb2016[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2016[p][1];b=datacb2016[p][2];c=datacb2016[p][3];d=datacb2016[p][4];e=datacb2016[p][5];f=datacb2016[p][6];g=datacb2016[p][7];
									h=datacb2016[p][8];i=datacb2016[p][9];all=datacb2016[p][10];j=datacb2016[p][11];k=datacb2016[p][12];l=datacb2016[p][13];m=datacb2016[p][14];
									color(10);printf("��%d�� ���H�S�� 2016 %s�G",hab,cb2016[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==17){
						for(p=0;p<27;p++){
							if(hplayer[hab]==datacb2017[p][0]){
								strcat(nowbatting,"���H�S�� 2017 ");strcat(nowbatting,cb2017[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� ���H�S�� 2017 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,cb2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2017[p][1];b=datacb2017[p][2];c=datacb2017[p][3];d=datacb2017[p][4];e=datacb2017[p][5];f=datacb2017[p][6];g=datacb2017[p][7];
									h=datacb2017[p][8];i=datacb2017[p][9];all=datacb2017[p][10];j=datacb2017[p][11];k=datacb2017[p][12];l=datacb2017[p][13];m=datacb2017[p][14];
									color(10);printf("��%d�� ���H�S�� 2017 %s�G",hab,cb2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==18){
						for(p=0;p<26;p++){
							if(hplayer[hab]==datacb2018[p][0]){
								strcat(nowbatting,"���H�S�� 2018 ");strcat(nowbatting,cb2018[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� ���H�S�� 2018 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,cb2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2018[p][1];b=datacb2018[p][2];c=datacb2018[p][3];d=datacb2018[p][4];e=datacb2018[p][5];f=datacb2018[p][6];g=datacb2018[p][7];
									h=datacb2018[p][8];i=datacb2018[p][9];all=datacb2018[p][10];j=datacb2018[p][11];k=datacb2018[p][12];l=datacb2018[p][13];m=datacb2018[p][14];
									color(10);printf("��%d�� ���H�S�� 2018 %s�G",hab,cb2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==19){
						for(p=0;p<26;p++){
							if(hplayer[hab]==datacb2019[p][0]){
								strcat(nowbatting,"���H�S�� 2019 ");strcat(nowbatting,cb2019[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� ���H�S�� 2019 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,cb2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2019[p][1];b=datacb2019[p][2];c=datacb2019[p][3];d=datacb2019[p][4];e=datacb2019[p][5];f=datacb2019[p][6];g=datacb2019[p][7];
									h=datacb2019[p][8];i=datacb2019[p][9];all=datacb2019[p][10];j=datacb2019[p][11];k=datacb2019[p][12];l=datacb2019[p][13];m=datacb2019[p][14];
									color(10);printf("��%d�� ���H�S�� 2019 %s�G",hab,cb2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==20){
						for(p=0;p<22;p++){
							if(hplayer[hab]==datacb2020[p][0]){
								strcat(nowbatting,"���H�S�� 2020 ");strcat(nowbatting,cb2020[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� ���H�S�� 2020 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,cb2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2020[p][1];b=datacb2020[p][2];c=datacb2020[p][3];d=datacb2020[p][4];e=datacb2020[p][5];f=datacb2020[p][6];g=datacb2020[p][7];
									h=datacb2020[p][8];i=datacb2020[p][9];all=datacb2020[p][10];j=datacb2020[p][11];k=datacb2020[p][12];l=datacb2020[p][13];m=datacb2020[p][14];
									color(10);printf("��%d�� ���H�S�� 2020 %s�G",hab,cb2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==21){
						for(p=0;p<28;p++){
							if(hplayer[hab]==datacb2021[p][0]){
								strcat(nowbatting,"���H�S�� 2021 ");strcat(nowbatting,cb2021[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� ���H�S�� 2021 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,cb2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datacb2021[p][1];b=datacb2021[p][2];c=datacb2021[p][3];d=datacb2021[p][4];e=datacb2021[p][5];f=datacb2021[p][6];g=datacb2021[p][7];
									h=datacb2021[p][8];i=datacb2021[p][9];all=datacb2021[p][10];j=datacb2021[p][11];k=datacb2021[p][12];l=datacb2021[p][13];m=datacb2021[p][14];
									color(10);printf("��%d�� ���H�S�� 2021 %s�G",hab,cb2021[p]);color(15);playerfound=1;
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
								strcat(nowbatting,"Lamigo��� 2017 ");strcat(nowbatting,lm2017[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� Lamigo��� 2017 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,lm2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datalm2017[p][1];b=datalm2017[p][2];c=datalm2017[p][3];d=datalm2017[p][4];e=datalm2017[p][5];f=datalm2017[p][6];g=datalm2017[p][7];
									h=datalm2017[p][8];i=datalm2017[p][9];all=datalm2017[p][10];j=datalm2017[p][11];k=datalm2017[p][12];l=datalm2017[p][13];m=datalm2017[p][14];
									color(10);printf("��%d�� Lamigo��� 2017 %s�G",hab,lm2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==18){
						for(p=0;p<29;p++){
							if(hplayer[hab]==datalm2018[p][0]){
								strcat(nowbatting,"Lamigo��� 2018 ");strcat(nowbatting,lm2018[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� Lamigo��� 2018 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,lm2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datalm2018[p][1];b=datalm2018[p][2];c=datalm2018[p][3];d=datalm2018[p][4];e=datalm2018[p][5];f=datalm2018[p][6];g=datalm2018[p][7];
									h=datalm2018[p][8];i=datalm2018[p][9];all=datalm2018[p][10];j=datalm2018[p][11];k=datalm2018[p][12];l=datalm2018[p][13];m=datalm2018[p][14];
									color(10);printf("��%d�� Lamigo��� 2018 %s�G",hab,lm2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==19){
						for(p=0;p<25;p++){
							if(hplayer[hab]==datalm2019[p][0]){
								strcat(nowbatting,"Lamigo��� 2019 ");strcat(nowbatting,lm2019[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� Lamigo��� 2019 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,lm2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datalm2019[p][1];b=datalm2019[p][2];c=datalm2019[p][3];d=datalm2019[p][4];e=datalm2019[p][5];f=datalm2019[p][6];g=datalm2019[p][7];
									h=datalm2019[p][8];i=datalm2019[p][9];all=datalm2019[p][10];j=datalm2019[p][11];k=datalm2019[p][12];l=datalm2019[p][13];m=datalm2019[p][14];
									color(10);printf("��%d�� Lamigo��� 2019 %s�G",hab,lm2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==20){
						for(p=0;p<25;p++){
							if(hplayer[hab]==datarm2020[p][0]){
								strcat(nowbatting,"�֤Ѯ�� 2020 ");strcat(nowbatting,rm2020[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �֤Ѯ�� 2020 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,rm2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datarm2020[p][1];b=datarm2020[p][2];c=datarm2020[p][3];d=datarm2020[p][4];e=datarm2020[p][5];f=datarm2020[p][6];g=datarm2020[p][7];
									h=datarm2020[p][8];i=datarm2020[p][9];all=datarm2020[p][10];j=datarm2020[p][11];k=datarm2020[p][12];l=datarm2020[p][13];m=datarm2020[p][14];
									color(10);printf("��%d�� �֤Ѯ�� 2020 %s�G",hab,rm2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==21){
						for(p=0;p<26;p++){
							if(hplayer[hab]==datarm2021[p][0]){
								strcat(nowbatting,"�֤Ѯ�� 2021 ");strcat(nowbatting,rm2021[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �֤Ѯ�� 2021 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,rm2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datarm2021[p][1];b=datarm2021[p][2];c=datarm2021[p][3];d=datarm2021[p][4];e=datarm2021[p][5];f=datarm2021[p][6];g=datarm2021[p][7];
									h=datarm2021[p][8];i=datarm2021[p][9];all=datarm2021[p][10];j=datarm2021[p][11];k=datarm2021[p][12];l=datarm2021[p][13];m=datarm2021[p][14];
									color(10);printf("��%d�� �֤Ѯ�� 2021 %s�G",hab,rm2021[p]);color(15);playerfound=1;
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
								strcat(nowbatting,"�I�����N 2017 ");strcat(nowbatting,fg2017[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �I�����N 2017 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,fg2017[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2017[p][1];b=datafg2017[p][2];c=datafg2017[p][3];d=datafg2017[p][4];e=datafg2017[p][5];f=datafg2017[p][6];g=datafg2017[p][7];
									h=datafg2017[p][8];i=datafg2017[p][9];all=datafg2017[p][10];j=datafg2017[p][11];k=datafg2017[p][12];l=datafg2017[p][13];m=datafg2017[p][14];
									color(10);printf("��%d�� �I�����N 2017 %s�G",hab,fg2017[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==18){
						for(p=0;p<27;p++){
							if(hplayer[hab]==datafg2018[p][0]){
								strcat(nowbatting,"�I�����N 2018 ");strcat(nowbatting,fg2018[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �I�����N 2018 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,fg2018[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2018[p][1];b=datafg2018[p][2];c=datafg2018[p][3];d=datafg2018[p][4];e=datafg2018[p][5];f=datafg2018[p][6];g=datafg2018[p][7];
									h=datafg2018[p][8];i=datafg2018[p][9];all=datafg2018[p][10];j=datafg2018[p][11];k=datafg2018[p][12];l=datafg2018[p][13];m=datafg2018[p][14];
									color(10);printf("��%d�� �I�����N 2018 %s�G",hab,fg2018[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==19){
						for(p=0;p<25;p++){
							if(hplayer[hab]==datafg2019[p][0]){
								strcat(nowbatting,"�I�����N 2019 ");strcat(nowbatting,fg2019[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �I�����N 2019 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,fg2019[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2019[p][1];b=datafg2019[p][2];c=datafg2019[p][3];d=datafg2019[p][4];e=datafg2019[p][5];f=datafg2019[p][6];g=datafg2019[p][7];
									h=datafg2019[p][8];i=datafg2019[p][9];all=datafg2019[p][10];j=datafg2019[p][11];k=datafg2019[p][12];l=datafg2019[p][13];m=datafg2019[p][14];
									color(10);printf("��%d�� �I�����N 2019 %s�G",hab,fg2019[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==20){
						for(p=0;p<26;p++){
							if(hplayer[hab]==datafg2020[p][0]){
								strcat(nowbatting,"�I�����N 2020 ");strcat(nowbatting,fg2020[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �I�����N 2020 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,fg2020[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2020[p][1];b=datafg2020[p][2];c=datafg2020[p][3];d=datafg2020[p][4];e=datafg2020[p][5];f=datafg2020[p][6];g=datafg2020[p][7];
									h=datafg2020[p][8];i=datafg2020[p][9];all=datafg2020[p][10];j=datafg2020[p][11];k=datafg2020[p][12];l=datafg2020[p][13];m=datafg2020[p][14];
									color(10);printf("��%d�� �I�����N 2020 %s�G",hab,fg2020[p]);color(15);playerfound=1;
								}
							}
						}
					}
					if(hyear[hab]==21){
						for(p=0;p<33;p++){
							if(hplayer[hab]==datafg2021[p][0]){
								strcat(nowbatting,"�I�����N 2021 ");strcat(nowbatting,fg2021[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �I�����N 2021 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,fg2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datafg2021[p][1];b=datafg2021[p][2];c=datafg2021[p][3];d=datafg2021[p][4];e=datafg2021[p][5];f=datafg2021[p][6];g=datafg2021[p][7];
									h=datafg2021[p][8];i=datafg2021[p][9];all=datafg2021[p][10];j=datafg2021[p][11];k=datafg2021[p][12];l=datafg2021[p][13];m=datafg2021[p][14];
									color(10);printf("��%d�� �I�����N 2021 %s�G",hab,fg2021[p]);color(15);playerfound=1;
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
								strcat(nowbatting,"�����s 2021 ");strcat(nowbatting,wd2021[p]);
								if(gamemode==1){
									printf("�U�@�ΡG��%d�� �����s 2021 %s    �п�� 1.�~�� 2.�󴫥N�� 3.�d�ݥ��� 4.���L�b�� 5.���L���ɡG",hab,wd2021[p]);playerfound=1;
									scanf("%d",&q);
								}
								if(q==2){printf("��ܥN���y���G");}
								if((q==4)||(q==5))gamemode=2;
								if((q==1)||(q==4)||(q==5)){
									a=datawd2021[p][1];b=datawd2021[p][2];c=datawd2021[p][3];d=datawd2021[p][4];e=datawd2021[p][5];f=datawd2021[p][6];g=datawd2021[p][7];
									h=datawd2021[p][8];i=datawd2021[p][9];all=datawd2021[p][10];j=datawd2021[p][11];k=datawd2021[p][12];l=datawd2021[p][13];m=datawd2021[p][14];
									color(10);printf("��%d�� �����s 2021 %s�G",hab,wd2021[p]);color(15);playerfound=1;
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
				if(q==3)printf("\n�D�����ǡG\n�Ĥ@�� %s\n�ĤG�� %s\n�ĤT�� %s\n�ĥ|�� %s\n�Ĥ��� %s\n�Ĥ��� %s\n�ĤC�� %s\n�ĤK�� %s\n�ĤE�� %s\n\n",hb1,hb2,hb3,hb4,hb5,hb6,hb7,hb8,hb9);
				memset(nowbatting,'\0',50);
			}
			if(playerfound==0){color(207);printf("�d�L���y���A�Э��s��J�G");color(15);q=2;}
			
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
					color(11);printf("�@�w�I");color(15);
					if(b3==1){b3=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b2==1){b2=0;b3=1;}
					if(b1==1){b1=0;b2=1;}
					b1=1;
					if(getscore!=0){color(159);printf("�o%d���A",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
					if(inning%2==1)ahits++;else hhits++;
				}
				else if(a+1<=r && r<=a+b){
					color(11);printf("�G�w�I");color(15);
					if(b3==1){b3=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b2==1){b2=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b1==1){b1=0;b3=1;}
					b2=1;
					if(getscore!=0){color(159);printf("�o%d���A",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
					if(inning%2==1)ahits++;else hhits++;
				}
				else if(a+b+1<=r && r<=a+b+c){
					color(11);printf("�T�w�I");color(15);
					if(b3==1){b3=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b2==1){b2=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b1==1){b1=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					b3=1;
					if(getscore!=0){color(159);printf("�o%d���A",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
					if(inning%2==1)ahits++;else hhits++;
				}
				else if(a+b+c+1<=r && r<=a+b+c+d){
					color(11);if(b1+b2+b3==0)printf("���K���S���I");if(b1+b2+b3==1)printf("������S���I");if(b1+b2+b3==2)printf("�T�����S���I");if(b1+b2+b3==3)printf("���e���S���I");color(15);
					if(b3==1){b3=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b2==1){b2=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b1==1){b1=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
					getscore++;if(inning%2==1){ascore++;ahits++;}else{hscore++;hhits++;}
					if(getscore!=0){color(159);printf("�o%d���A",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
					if(inning%2==1){if(aab==1)strcat(homerun,ab1);if(aab==2)strcat(homerun,ab2);if(aab==3)strcat(homerun,ab3);if(aab==4)strcat(homerun,ab4);if(aab==5)strcat(homerun,ab5);if(aab==6)strcat(homerun,ab6);if(aab==7)strcat(homerun,ab7);if(aab==8)strcat(homerun,ab8);if(aab==9)strcat(homerun,ab9);}
					else{if(hab==1)strcat(homerun,hb1);if(hab==2)strcat(homerun,hb2);if(hab==3)strcat(homerun,hb3);if(hab==4)strcat(homerun,hb4);if(hab==5)strcat(homerun,hb5);if(hab==6)strcat(homerun,hb6);if(hab==7)strcat(homerun,hb7);if(hab==8)strcat(homerun,hb8);if(hab==9)strcat(homerun,hb9);}
					x=ceil((inning+1)/2);sprintf(hrdetail,"%d",x);strcat(homerun,"(");strcat(homerun,hrdetail);if(inning%2==1)strcat(homerun,"���W,");else strcat(homerun,"���U,");sprintf(hrdetail,"%d",getscore);strcat(homerun,hrdetail);strcat(homerun,"��)\n        ");
				}
				else if(a+b+c+d+1<=r && r<=a+b+c+d+e){
					color(12);printf("�T���I");color(15);
					out++;
				}
				else if(a+b+c+d+e+1<=r && r<=a+b+c+d+e+f){
					color(11);printf("�|�a�I");color(15);
					if(b1+b2+b3==3){getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b1+b2+b3==2){b1=1;b2=1;b3=1;}
					if(b1+b2+b3==1){if(b3==1)b1=1;else{b1=1;b2=1;}}
					b1=1;
					if(getscore!=0){color(159);printf("�o%d���A",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
					if(inning%2==1)abb++;else hbb++;
				}
				else if(a+b+c+d+e+f+1<=r && r<=a+b+c+d+e+f+g){
					color(11);printf("���y�I");color(15);
					if(b1+b2+b3==3){getscore++;if(inning%2==1)ascore++;else hscore++;}
					if(b1+b2+b3==2){b1=1;b2=1;b3=1;}
					if(b1+b2+b3==1){if(b3==1)b1=1;else{b1=1;b2=1;}}
					b1=1;
					if(getscore!=0){color(159);printf("�o%d���A",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
					if(inning%2==1)abb++;else hbb++;
				}
				else if(a+b+c+d+e+f+g+1<=r && r<=a+b+c+d+e+f+g+h){
					if(out<=1){
						if(dpr<=j && b1==1){
							color(12);printf("�������I");color(15);
							out=out+2;
							if(b3==1){b3=0;if(out!=3){getscore++;if(inning%2==1)ascore++;else hscore++;}}
							if(b2==1){b2=0;b3=1;}
							b1=0;
						}
						else{
							gor=(rand()%2)+1;
							if((gor==1 && b1==1)){
								color(12);printf("�u�a�X���I");color(110);printf("���̤W�S�A�@�S�]�̥X���A");color(15);
								out++;
								if(b3==1){b3=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
								if(b2==1){b2=0;b3=1;}
								b1=1;
							}
							else{
								color(12);printf("�u�a�X���I");color(15);
								out++;
								if(b3==1){b3=0;getscore++;if(inning%2==1)ascore++;else hscore++;}
								if(b2==1){b2=0;b3=1;}
								if(b1==1){b1=0;b2=1;}
								b1=0;
							}
						}
					}
					else{
						color(12);printf("�u�a�X���I");color(15);
						out++;
					}
					if(getscore!=0){color(159);printf("�o%d���A",getscore);color(15);}
					inningscore[inning]=inningscore[inning]+getscore;
				}
				else if(a+b+c+d+e+f+g+h+1<=r && r<=a+b+c+d+e+f+g+h+i){
					if(out<=1){
						if(sfr<=k && b3==1){
							color(12);printf("�뭸�I");color(159);printf("�o1���A");color(15);
							out++;
							b3=0;if(inning%2==1)ascore++;else hscore++;
							aor=(rand()%2)+1;
							if(aor==1 && b2==1){
								color(110);printf("�G�S�]�̱��i�A");color(15);
								b2=0;b3=1;
							}
							inningscore[inning]++;
						}
						else{
							color(12);printf("�����X���I");color(15);
							out++;
							aor=(rand()%2)+1;
							if(aor==1 && b2==1 && b3==0){
								color(110);printf("�G�S�]�̱��i�A");color(15);
								b2=0;b3=1;
							}
						}
					}
					else{
					color(12);printf("�����X���I");color(15);
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
					color(143);printf("���ɵ���\n���ɵ����A�ȶ� %d�G%d �D��\n",ascore,hscore);color(15);
					if(inning==18 &&ascore<hscore){
						printf("\n       1   2   3   4   5   6   7   8   9  ");color(143);printf(" R   H   B \n");
						color(14);printf("�ȶ�");for(p=1;p<19;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
						color(10);printf("�D��");for(p=2;p<17;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}hruns=hruns+inningscore[18];printf(" %2dX %2dX  %2d  %2d\n",inningscore[18],hruns,hhits,hbb);
						color(15);printf("���S���G%s",homerun);if(strlen(homerun)==0)printf("(�L)\n");else printf("\n");
					}
					else if(inning==20 &&ascore<hscore){
						printf("\n       1   2   3   4   5   6   7   8   9  10  ");color(143);printf(" R   H   B \n");
						color(14);printf("�ȶ�");for(p=1;p<21;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
						color(10);printf("�D��");for(p=2;p<19;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}hruns=hruns+inningscore[20];printf(" %2dX %2dX  %2d  %2d\n",inningscore[20],hruns,hhits,hbb);
						color(15);printf("���S���G%s",homerun);if(strlen(homerun)==0)printf("(�L)\n");else printf("\n");
					}
					else if(inning==22 && ascore<hscore){
						printf("\n       1   2   3   4   5   6   7   8   9  10  11  ");color(143);printf(" R   H   B \n");
						color(14);printf("�ȶ�");for(p=1;p<23;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
						color(10);printf("�D��");for(p=2;p<21;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}hruns=hruns+inningscore[22];printf(" %2dX %2dX  %2d  %2d\n",inningscore[22],hruns,hhits,hbb);
						color(15);printf("���S���G%s",homerun);if(strlen(homerun)==0)printf("(�L)\n");else printf("\n");
					}
					else{
						printf("\n       1   2   3   4   5   6   7   8   9  10  11  12  ");color(143);printf(" R   H   B \n");
						color(14);printf("�ȶ�");for(p=1;p<25;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
						color(10);printf("�D��");for(p=2;p<23;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}hruns=hruns+inningscore[24];printf(" %2dX %2dX  %2d  %2d\n",inningscore[24],hruns,hhits,hbb);
						color(15);printf("���S���G%s",homerun);if(strlen(homerun)==0)printf("(�L)\n");else printf("\n");
					}
					do{
						printf("\n��J6�H�����G");
						scanf("%d",&q);
					}while(q!=6);
					return 0;
				}
				if(out!=3){
					color(110);
					if(b1==1 && b2==0 && b3==0)printf("�@�S���H�A");
					if(b1==0 && b2==1 && b3==0)printf("�G�S���H�A");
					if(b1==0 && b2==0 && b3==1)printf("�T�S���H�A");
					if(b1==1 && b2==1 && b3==0)printf("�@�B�G�S���H�A");
					if(b1==1 && b2==0 && b3==1)printf("�@�B�T�S���H�A");
					if(b1==0 && b2==1 && b3==1)printf("�G�B�T�S���H�A");
					if(b1==1 && b2==1 && b3==1)printf("���S�A");
					if(out==0){color(207);printf("�L�H�X��\n");color(15);}
					if(out==1){color(207);printf("�@�X��\n");color(15);}
					if(out==2){color(207);printf("��X��\n");color(15);}
				}
			}
		}while(out!=3);
		color(207);printf("�T�X���I\n");color(15);
		color(143);printf("�ȶ� %d�G%d �D��\n",ascore,hscore);color(15);
		b1=0;b2=0;b3=0;out=0;inning++;
		if(q==4){gamemode=1;q=1;}
		if((inning==18 && ascore<hscore)||(inning==19 && ascore>hscore)||(inning==21 && ascore>hscore)||(inning==23 && ascore>hscore)||(inning==25))gameset=1;
	}while(gameset!=1);
	color(143);printf("���ɵ����A�ȶ� %d�G%d �D��\n",ascore,hscore);color(15);
	if(inning==18 && ascore<hscore){
		printf("\n       1   2   3   4   5   6   7   8   9  ");color(143);printf(" R   H   B \n");
		color(14);printf("�ȶ�");for(p=1;p<19;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
		color(10);printf("�D��");for(p=2;p<17;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}printf("   X  %2d  %2d  %2d\n",hruns,hhits,hbb);
		color(15);printf("���S���G%s",homerun);if(strlen(homerun)==0)printf("(�L)\n");else printf("\n");
	}
	else if(inning==19 && ascore>hscore){
		printf("\n       1   2   3   4   5   6   7   8   9  ");color(143);printf(" R   H   B \n");
		color(14);printf("�ȶ�");for(p=1;p<19;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
		color(10);printf("�D��");for(p=2;p<19;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}printf("  %2d  %2d  %2d\n",hruns,hhits,hbb);
		color(15);printf("���S���G%s",homerun);if(strlen(homerun)==0)printf("(�L)\n");else printf("\n");
	}
	else if(inning==21 && ascore>hscore){
		printf("\n       1   2   3   4   5   6   7   8   9  10  ");color(143);printf(" R   H   B \n");
		color(14);printf("�ȶ�");for(p=1;p<21;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
		color(10);printf("�D��");for(p=2;p<21;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}printf("  %2d  %2d  %2d\n",hruns,hhits,hbb);
		color(15);printf("���S���G%s",homerun);if(strlen(homerun)==0)printf("(�L)\n");else printf("\n");
	}
	else if(inning==23 && ascore>hscore){
		printf("\n       1   2   3   4   5   6   7   8   9  10  11  ");color(143);printf(" R   H   B \n");
		color(14);printf("�ȶ�");for(p=1;p<23;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
		color(10);printf("�D��");for(p=2;p<23;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}printf("  %2d  %2d  %2d\n",hruns,hhits,hbb);
		color(15);printf("���S���G%s",homerun);if(strlen(homerun)==0)printf("(�L)\n");else printf("\n");
	}
	else{
		printf("\n       1   2   3   4   5   6   7   8   9  10  11  12  ");color(143);printf(" R   H   B \n");
		color(14);printf("�ȶ�");for(p=1;p<25;p=p+2){printf("  %2d",inningscore[p]);aruns=aruns+inningscore[p];}printf("  %2d  %2d  %2d\n",aruns,ahits,abb);
		color(10);printf("�D��");for(p=2;p<25;p=p+2){printf("  %2d",inningscore[p]);hruns=hruns+inningscore[p];}printf("  %2d  %2d  %2d\n",hruns,hhits,hbb);
		color(15);printf("���S���G%s",homerun);if(strlen(homerun)==0)printf("(�L)\n");else printf("\n");
	}
	do{
		printf("\n��J6�H�����G");
		scanf("%d",&q);
	}while(q!=6);
	return 0;
}
