#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void ToLowerCase(char*a){
	int i=0;
	while(a[i]){
		a[i]=tolower(a[i]);
		i++;
	}
}
void respond(char input[]){

	if(strstr(input,"hello")!=NULL ||strstr(input,"hi")!=NULL){
		printf("BOT: Hello There! How may i help you \n");
	}
	else if(strstr(input,"how are you")!=NULL){
		printf("BOT:I'm ChatBot created by Theguy ,doing so nice,ask me whatever you want\n");
	}
	else if(strstr(input,"your creator")!=NULL){
		printf("BOT: My creator is Theguy\n");
	}
	else if(strstr(input,"made for||created for")!=NULL){
		printf("BOT: I'm created to help people Digitally in the field of computer hardware related Information\n");
	}
	else if(strstr(input,"what is computer")!=NULL){
		printf("BOT: Computer is an output and input device which use to solve problems like(arithmetical,logical,complex) and more etc.\n");
	}
	else if(strstr(input,"do me a favour")!=NULL||strstr(input,"can you help me")!=NULL ||strstr(input,"do a work")!=NULL){
		printf("BOT: yes! please order I will do my best to help you \n");
	}
		else if(strstr(input,"can we become friends")!=NULL){
		printf("BOT:Yes! it is amazing we will become very good friends \n");
	}
		else if(strstr(input,"you are mad")!=NULL){
		printf("BOT:nice joke but ia am not a mad\n");
	}
	else if(strstr(input,"bye")!=NULL){
		printf("BOT:GoodBye!\n");
		exit(0);
	}
	else{
		printf("BOT:it is not in my commands sir!\n");
	}
}
int main(){
	char input[100];
	printf("ChatBot:Hello! Type 'bye'' to exit\n");
	while(2){
		printf("You: ");
		fgets(input,sizeof(input),stdin);
		//remove new line character
		input[strcspn(input,"\n")]='\0';
		ToLowerCase(input);
		respond(input);
	}
	return 0;
}
