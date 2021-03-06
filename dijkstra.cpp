#include <iostream>
using namespace std;
struct node;
struct edge;

struct node{
  int name;
  int x;
  int y;
  edge *Ehead;
  edge *Etail;
};

struct edge{
  int name;
  char side;
  edge *nextEdge;
}; 

node *mapnodes[55];


char orientation='N';


void init(){
	for(int i=0;i<55;i++){
		mapnodes[i]=new node;
		mapnodes[i]->name=i;
		mapnodes[i]->Ehead=NULL;
		mapnodes[i]->Etail=NULL;
	}
	int k=0;
	for(int i=0;i<11;i++){
		
		for(int j=0;j<5;j++){
			mapnodes[k]->x=j;
			mapnodes[k]->y=i;
			k++;
		}
	}
}

edge *AddEdge (int nextNode, node *p , char s)
	{
		if(p->Ehead==NULL){
			edge *E=new edge;
			E->name=nextNode;
			E->nextEdge=NULL;
			E->side=s;
			p->Ehead=E;
			p->Etail=p->Ehead;
			return p->Etail;
		}
		else{
			edge *E=new edge;
			E->name=nextNode;
			E->nextEdge=NULL;
			E->side=s;
			p->Etail->nextEdge=E;
			p->Etail=E;
			return p->Etail;
		}
}

void readData(){
		
	 AddEdge(1,mapnodes[0],'E');
	 AddEdge(5,mapnodes[0],'N');
	
	 AddEdge(0,mapnodes[1],'W');
	 AddEdge(6,mapnodes[1],'N');
	  
	 AddEdge(3,mapnodes[2],'E');
	 AddEdge(7,mapnodes[2],'N'); 
	
	 AddEdge(2,mapnodes[3],'W');
	 AddEdge(4,mapnodes[3],'N');
	 AddEdge(8,mapnodes[3],'E');
	
	 AddEdge(3,mapnodes[4],'W');
	 AddEdge(9,mapnodes[4],'N');
	
	 AddEdge(6,mapnodes[5],'E');
	 AddEdge(0,mapnodes[5],'S');
	 AddEdge(10,mapnodes[5],'N');
	
	 AddEdge(5,mapnodes[6],'W');
	 AddEdge(7,mapnodes[6],'E');
	 AddEdge(1,mapnodes[6],'S');
	 AddEdge(11,mapnodes[6],'N');
	  
	 AddEdge(6,mapnodes[7],'W');
	 AddEdge(8,mapnodes[7],'E');
	 AddEdge(2,mapnodes[7],'S');
	 AddEdge(12,mapnodes[7],'N');
	 
	 AddEdge(9,mapnodes[8],'E');
	 AddEdge(7,mapnodes[8],'W');
	 AddEdge(3,mapnodes[8],'S');
	 AddEdge(13,mapnodes[8],'N');
	
	 AddEdge(8,mapnodes[9],'W');
	 AddEdge(4,mapnodes[9],'S');
	 AddEdge(14,mapnodes[9],'N');
	
	 AddEdge(11,mapnodes[10],'E');
	 AddEdge(5,mapnodes[10],'S');
	 AddEdge(15,mapnodes[10],'N');
	
	 AddEdge(10,mapnodes[11],'W');
	 AddEdge(6,mapnodes[11],'S');
	 AddEdge(16,mapnodes[11],'N');
	  
	 AddEdge(13,mapnodes[12],'E');
	 AddEdge(7,mapnodes[12],'S');
	 
	 AddEdge(12,mapnodes[13],'W');
	 AddEdge(14,mapnodes[13],'E');
	 AddEdge(8,mapnodes[13],'S');
	 AddEdge(18,mapnodes[13],'N');

	 AddEdge(13,mapnodes[14],'W');
	 AddEdge(9,mapnodes[14],'S');
	
	 AddEdge(16,mapnodes[15],'E');
	 AddEdge(10,mapnodes[15],'S');
	 AddEdge(20,mapnodes[15],'N');
	
	 AddEdge(15,mapnodes[16],'W');
	 AddEdge(17,mapnodes[16],'E');
	 AddEdge(11,mapnodes[16],'S');
	  
	 AddEdge(16,mapnodes[17],'W');
	 AddEdge(18,mapnodes[17],'E');
	 
	 AddEdge(19,mapnodes[18],'E');
	 AddEdge(17,mapnodes[18],'W');
	 AddEdge(13,mapnodes[18],'S');
	 AddEdge(23,mapnodes[18],'N');
	
	 AddEdge(18,mapnodes[19],'W');
	 AddEdge(24,mapnodes[19],'N');
	
	 AddEdge(21,mapnodes[20],'E');
	 AddEdge(15,mapnodes[20],'S');
	 AddEdge(25,mapnodes[20],'N');
	
	 AddEdge(20,mapnodes[21],'W');
	 AddEdge(22,mapnodes[21],'E');
	 AddEdge(26,mapnodes[21],'N');
	  
	 AddEdge(21,mapnodes[22],'W');
	 AddEdge(27,mapnodes[22],'N'); 
	
	 AddEdge(24,mapnodes[23],'E');
	 AddEdge(18,mapnodes[23],'S');
	 AddEdge(28,mapnodes[23],'N');
	
	 AddEdge(23,mapnodes[24],'W');
	 AddEdge(19,mapnodes[24],'S');
	 
	 AddEdge(26,mapnodes[25],'E');
	 AddEdge(20,mapnodes[25],'S');
	 AddEdge(30,mapnodes[25],'N');
	
	 AddEdge(25,mapnodes[26],'W');
	 AddEdge(27,mapnodes[26],'E');
	 AddEdge(21,mapnodes[26],'S');
	 AddEdge(31,mapnodes[26],'N');
	  
	 AddEdge(26,mapnodes[27],'W');
	 AddEdge(22,mapnodes[27],'S');
	 AddEdge(32,mapnodes[27],'N');
	 
	 AddEdge(29,mapnodes[28],'E');
	 AddEdge(23,mapnodes[28],'S');
	 AddEdge(33,mapnodes[28],'N');
	
	 AddEdge(28,mapnodes[29],'W');
	
	 AddEdge(31,mapnodes[30],'E');
	 AddEdge(25,mapnodes[30],'S');
	 AddEdge(35,mapnodes[30],'N');
	
	 AddEdge(30,mapnodes[31],'W');
	 AddEdge(32,mapnodes[31],'E');
	 AddEdge(26,mapnodes[31],'S');
	  
	 AddEdge(31,mapnodes[32],'W');
	 AddEdge(27,mapnodes[32],'S');
	
	 AddEdge(34,mapnodes[33],'E');
	 AddEdge(28,mapnodes[33],'S');
	 AddEdge(38,mapnodes[33],'N');
	
	 AddEdge(33,mapnodes[34],'W');
	 AddEdge(39,mapnodes[34],'N');
	 
	 AddEdge(36,mapnodes[35],'E');
	 AddEdge(30,mapnodes[35],'S');
	 AddEdge(40,mapnodes[35],'N');
	
	 AddEdge(35,mapnodes[36],'W');
	 AddEdge(37,mapnodes[36],'E');
	 AddEdge(41,mapnodes[36],'N');
	  
	 AddEdge(36,mapnodes[37],'W');
	 AddEdge(38,mapnodes[37],'E');
	 
	 AddEdge(37,mapnodes[38],'W');
	 AddEdge(39,mapnodes[38],'E');
	 AddEdge(33,mapnodes[38],'S');
	 AddEdge(43,mapnodes[38],'N');
	
	 AddEdge(38,mapnodes[39],'W');
	 AddEdge(34,mapnodes[39],'S');
	
	 AddEdge(41,mapnodes[40],'E');
	 AddEdge(35,mapnodes[40],'S');
	 AddEdge(45,mapnodes[40],'N');
	
	 AddEdge(40,mapnodes[41],'W');
	 AddEdge(36,mapnodes[41],'S');
	 AddEdge(46,mapnodes[41],'N');
	
	 AddEdge(43,mapnodes[42],'E');
	 AddEdge(47,mapnodes[42],'N');
	 
	 AddEdge(42,mapnodes[43],'W');
	 AddEdge(44,mapnodes[43],'E');
	 AddEdge(38,mapnodes[43],'S');
	 AddEdge(48,mapnodes[43],'N');
	
	 AddEdge(43,mapnodes[44],'W');
	 AddEdge(49,mapnodes[44],'N');
	
	 AddEdge(46,mapnodes[45],'E');
	 AddEdge(40,mapnodes[45],'S');
	 AddEdge(50,mapnodes[45],'N');
	
	 AddEdge(45,mapnodes[46],'W');
	 AddEdge(47,mapnodes[46],'E');
	 AddEdge(41,mapnodes[46],'S');
	 AddEdge(51,mapnodes[46],'N');
	  
	 AddEdge(46,mapnodes[47],'W');
	 AddEdge(48,mapnodes[47],'E');
	 AddEdge(42,mapnodes[47],'S');
	 AddEdge(52,mapnodes[47],'N');
	 
	 AddEdge(47,mapnodes[48],'W');
	 AddEdge(49,mapnodes[48],'E');
	 AddEdge(43,mapnodes[48],'S');
	 AddEdge(53,mapnodes[48],'N');
	
	 AddEdge(48,mapnodes[49],'W');
	 AddEdge(44,mapnodes[49],'S');
	 AddEdge(54,mapnodes[49],'N');
	
	 AddEdge(51,mapnodes[50],'E');
	 AddEdge(45,mapnodes[50],'S');
	
	 AddEdge(50,mapnodes[51],'W');
	 AddEdge(46,mapnodes[51],'S');
	 
	 AddEdge(53,mapnodes[52],'E');
	 AddEdge(47,mapnodes[52],'S');
	 
	 AddEdge(52,mapnodes[53],'W');
	 AddEdge(54,mapnodes[53],'E');
	 AddEdge(48,mapnodes[53],'S');
	
	 AddEdge(53,mapnodes[54],'W');
	 AddEdge(49,mapnodes[54],'S');


}

int find(int k, int a[], int j)
{
	for(int i=0; i<=j; i++)
	{
		if(a[i]==k)
		return 0;
	}
	return 1;
}

void dijkstra(int startNode,int endNode,int par[],int &l)
{
	int a[55]={0};     int i;    int c=-1; edge *p,*t;  int w[55];   int min=4800;   int j=0; int weight; int s,e; int cc; int parent,path[55];
	
	for(int i=0;i<55;i++){
		par[i]=0;
	}
	i=startNode;
	s=i;
	
	w[s]=0;
	e=endNode;
	a[j]=i;
	
		while(j!=54)
	   {   //cout<<"Flag 3\n";
	      min=4800;
	       for(int z=j; z>=0  ;z--)
	       {    
	           for(p=mapnodes[a[z]]->Ehead;  p!=NULL;  p=p->nextEdge)
	          {
                    weight=w[a[z]]+1;
                    cc=p->name;
		            if(weight<min && find(cc,a,j))
		            {
		              parent=a[z];
			          min=weight;
			          t=p;	
		            }
	          }
           }
            
            i=t->name;
            path[i]=parent;
            
             w[i]=min;
             
             a[++j]=i;
          //   cout<<"Flag 1\n";
         for(int k=0; k<=54; k++)
          {
          	//cout<<"Flag 2\n";
             if(k!=s && find(k,a,j))
              {
        	     min=4800;
        		for(int z=j; z>=0  ;z--)
	            {
	               for(p=mapnodes[a[z]]->Ehead;  p!=NULL;  p=p->nextEdge)
	               {
		              if(p->name==mapnodes[k]->name)
		              {
		              	weight=w[a[z]]+1;
		                 if(weight<min)
		                 {
		                    min=weight;	
						 }
		              }   
	               }
	               
                }  
				w[k]=min; 
		      }
          }
        //cout<<w[e]<<endl;
     }
     int q=0;
     for(parent=e; q<=54 && par[c]!=s; q++)
     {
     	par[++c]=path[parent];
		parent=par[c];	
	 }
	 c++;
	 for(int i=c;i>0;i--)
	 {
	 	par[i]=par[i-1];
	 }
	 par[0]=e;
	 l=c;
/*	 for(int j=c;j>=0;j--){
	 	cout<<par[j]<<"->";
	 }
	 cout<<endl;
*/  //   cout<<"Shortest Path weight: \n"<<w[e]/100<<": "<<w[e]%100<<endl;
}
void moveForward18(){
	cout<<"Moving Forward 18"<<endl;
}
void turnLeft90(){
	cout<<"Turning Left 90"<<endl;
	if(orientation=='N'){
		orientation='W';
	}
	else if(orientation=='W'){
		orientation='S';
	}
	else if(orientation=='E'){
		orientation='N';
	}
	else if(orientation=='S'){
		orientation='E';	
	}
			
}
void turnRight90(){
	cout<<"Turning Right 90"<<endl;
	if(orientation=='N'){
		orientation='E';
	}
	else if(orientation=='W'){
		orientation='N';
	}
	else if(orientation=='E'){
		orientation='S';
	}
	else if(orientation=='S'){
		orientation='W';	
	}			
}
void turnRight180(){
	cout<<"Turning Right 180"<<endl;
	if(orientation=='N'){
		orientation='S';
	}
	else if(orientation=='W'){
		orientation='E';
	}
	else if(orientation=='E'){
		orientation='W';
	}
	else if(orientation=='S'){
		orientation='N';	
	}		
}
void traversePath(int startNode, int endNode){
	int pathArray[55]; int n;	edge *ptr;
	dijkstra(startNode,endNode,pathArray,n);
	for(int j=n;j>=0;j--){
//		cout<<pathArray[j]<<"->";
		if(j!=0){
			for(ptr=mapnodes[pathArray[j]]->Ehead;ptr!=NULL;ptr=ptr->nextEdge){
				if(ptr->name==mapnodes[pathArray[j-1]]->name)
				break;
			}
			if(ptr->side=='N'){
				if(orientation=='N'){
					moveForward18();
				}
				else if(orientation=='W'){
					turnRight90();
					moveForward18();
				}
				else if(orientation=='E'){
					turnLeft90();
					moveForward18();
				}
				else if(orientation=='S'){
					turnRight180();
					moveForward18();	
				}
			}
			else if(ptr->side=='W'){
				if(orientation=='N'){
					turnLeft90();
					moveForward18();				
				}
				else if(orientation=='W'){
					moveForward18();
				}
				else if(orientation=='E'){
					turnRight180();
					moveForward18();				}
				else if(orientation=='S'){
					turnRight90();
					moveForward18();
				}

			}
			else if(ptr->side=='E'){
				if(orientation=='N'){
					turnRight90();
					moveForward18();
				}
				else if(orientation=='W'){
					turnRight180();
					moveForward18();
				}
				else if(orientation=='E'){
					moveForward18();
				}
				else if(orientation=='S'){
					turnLeft90();
					moveForward18();
				}
				
				
			}
			else if(ptr->side=='S'){
				if(orientation=='N'){
					turnRight180();
					moveForward18();
				}
				else if(orientation=='W'){
					turnLeft90();
					moveForward18();
				}
				else if(orientation=='E'){
					turnRight90();
					moveForward18();
				}
				else if(orientation=='S'){
					moveForward18();
				}
				
			}
		}
	}
}
int localizeX;
int localizeY;
int firstScienX=4;
int firstScienY=4;
const char firstScienOrien='W';

int determineNodeName(int x, int y){
	int i=0;
	for(i=0;i<55;i++){
		if(x==mapnodes[i]->x&&y==mapnodes[i]->y)
			break;
	}
	return i; 
}

void calcEndNode(int &eN){
	
	int firstScienNode;
	firstScienNode = determineNodeName(firstScienX, firstScienY); //int sN=50,eN;
	edge *ptr1;
	for(ptr1=mapnodes[firstScienNode]->Ehead;ptr1!=NULL;ptr1=ptr1->nextEdge){
		if(firstScienOrien==ptr1->side)
		break;
	}
	eN=ptr1->name;

}
void printGraph(){
	node *ptr;
	for(int i=0;i<55;i++){
		ptr=mapnodes[i];
		cout<<ptr->name;
		for(edge *ptredge=ptr->Ehead;ptredge!=NULL;ptredge=ptredge->nextEdge){
			cout<<"->"<<ptredge->name<<"("<<ptredge->side<<")";
		}
		cout<<endl;
	}
}
void printXY(){
	for(int i=0;i<55;i++){
		cout<<mapnodes[i]->x;
		cout<<mapnodes[i]->y;
		cout<<"\t"<<i<<endl;
	}
}
int main(){
	init();
	readData();	
	int endNode;
	calcEndNode(endNode);
	traversePath(54,endNode);
//	printGraph();
}


