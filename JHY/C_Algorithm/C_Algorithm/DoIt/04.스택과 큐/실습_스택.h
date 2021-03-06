/*int형 스택 intStack(헤더)*/
#ifndef _______h
#define _______h

/*---스택을 구현하는 구조체---*/
typedef struct {
    int max; // 스택의 최대 용량
    int ptr; // 스택에 쌓여있는 데이터의 개수를 나타내는 멤버
    int *stk; // 스택에 푸시된 데이터를 저장할 용도로 배열을 가리키는 포인터
} IntStack;

/*---스택 초기화---*/
int Initialize(IntStack *s, int max);

/*---스택에 데이터를 푸시---*/
int Push(IntStack *s, int x);

/*---스택에서 데이터를 팝---*/
int Pop(IntStack *s, int *x);

/*---스택에서 데이터를 피크---*/
int Peek(const IntStack *s, int *x);

/*---스택 비우기---*/
void Clear(IntStack *s);

/*---스택의 최대 용량---*/
int Capacity(const IntStack *s);

/*---스택의 데이터 개수---*/
int Size(const IntStack *s);

/*---스택이 비어 있나요?---*/
int IsEmpty(const IntStack *s);

/*---스택이 가득 찼나요?---*/
int IsFull(const IntStack *s);

/*---스택에서 검색---*/
int Search(const IntStack *s, int x);

/*---모든 데이터 출력---*/
void Print(const IntStack *s);

/*---스택 종료---*/
void Terminate(IntStack *s);

#endif /* _______h */
