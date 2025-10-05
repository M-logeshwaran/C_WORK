#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll_no;
    char name[20];
    int mark;
    struct student* next;
};

struct student* head = NULL;

struct student* createStudent(int roll_no, char name[], int mark) {
    struct student* new_student = (struct student*)malloc(sizeof(struct student));
    new_student->roll_no = roll_no;
    strcpy(new_student->name, name);
    new_student->mark = mark;
    new_student->next = NULL;
    return new_student;
}


void display() {
    struct student* temp = head;
    int a = 1;
    printf("-------------------->\n");
    while (temp != NULL) {
        printf("Student : %d\nRoll no : %d\nName : %s\nMark : %d\n", 
               a, temp->roll_no, temp->name, temp->mark);
        a++;
        printf("-------------------->\n");
        temp = temp->next;
    }
}


void insertAtPos(int pos) {
    struct student* temp = head;
    int roll_no, mark;
    char name[20];
    printf("Enter the [ roll_no , Name , Mark ] : ");
    scanf("%d %s %d", &roll_no, name, &mark);
    if (pos == 1) {
        struct student* s1 = createStudent(roll_no, name, mark);
        s1->next = head;
        head = s1;
        return;
    }
    for (int a = 1; a < pos-1; a++) {
        if(temp->next == NULL){
            break;
        }
        temp = temp->next;
    }

    struct student* s1 = createStudent(roll_no, name, mark);
    s1->next = temp->next;
    temp->next = s1;
}


void DeleteByRoll(int roll_no) {
    if (head == NULL) return;

    // If head needs to be deleted
    if (head->roll_no == roll_no) {
        struct student* temp = head;
        head = head->next;
        free(temp);
        return;
    }
    struct student* temp = head;
    while (temp->next != NULL && temp->next->roll_no != roll_no) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        printf("Roll number %d not found!\n", roll_no);
        return;
    }
    struct student* temp1 = temp->next;
    temp->next = temp->next->next;
    free(temp1);
}


void searchByroll(int roll_no){
    int a=0;
    struct student * temp = head;
    while(temp != NULL){
        if(temp->roll_no == roll_no){
            printf("\nStudent Found ! \n\nRoll no : %d\nName : %s\nMark : %d\n", temp->roll_no, temp->name, temp->mark);
            a=1;
            return;
        }
        temp = temp->next;
    }
    if(a==0){
        printf("\nStudent with ROLL NO : %d not found!\n",roll_no);
        return;
    }
}


int nodeCount(){
    struct student * temp = head;
    int count=1;
    while(temp->next != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}


int main() {
    int n;
    printf("Enter the number of STUDENT NODE : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int roll_no, mark;
        char name[20];
        printf("Enter the [ roll_no , Name , Mark ] : ");
        scanf("%d %s %d", &roll_no, name, &mark);
        struct student* s1 = createStudent(roll_no, name, mark);
        if (head == NULL) {
            head = s1;
        } 
        else {
            struct student* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = s1;
        }
    }
    display();
    while(1)
    {
        char op;
        printf("\n<----- OPERATION MENUE ! -----> ");
        printf("\n* Enter [ 1 ] to INSERT the STUDENT NODE !\n* Enter [ 2 ] to DELETE the NODE by ROLL !\n* Enter [ 3 ] to SEARCH by ROLL !\n* Enter [ 4 ] to DISPLAY the NODE !\n* Enter [ 5 ] to COUNT STUDENT NODE !\n* Enter [ ANY KEY ] to EXIT !\n");
        printf("\nEnter the OPERATION : ");
        scanf("%s",&op);
        if (op == '1'){
            int no;
            int count = nodeCount();
            printf("Enter the number of students : ");
            scanf("%d", &no);
            printf("\nNODES FILLED from [ %d ... %d ] POSITION !\n",1,count);       
            while(no!=0){
                int pos;
                printf("\nEnter The POSITION to INSERT : ",(no+1)-no);
                scanf("%d",&pos);
                insertAtPos(pos);
                no--;   
            }
            printf("\nUPDATED NODE in LIST : \n");
            display();
        }
        else if (op == '2'){
            break;
        }    
        else if (op == '3'){
            int roll;
            printf("Enter the STUDENT ROLL to SEARCH : ");
            scanf("%d", &roll);
            searchByroll(roll);
        }  
        else if (op == '4'){
            printf("\n NODES in LIST : \n");
            display();   
        } 
        else if (op == '5'){
            int count = nodeCount();
            printf("\nTOTAL STUDENT NODE COUNT : [ %d ] !\n",count);
        }         
        else{
            break;
        }

    }
    /*int pos;
    printf("Enter the position to insert a new student : ");
    scanf("%d", &pos);
    insertAtPos(pos);
    display();

    int roll_no;
    printf("Enter the roll_no to delete a student : ");
    scanf("%d", &roll_no);
    DeleteByRoll(roll_no);
    display();
    
    printf("Enter the roll_no to search a student : ");
    scanf("%d", &roll_no);
    searchByroll(roll_no);*/
    return 0;
}
