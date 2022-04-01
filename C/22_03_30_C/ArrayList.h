#ifndef __ARRAY_LIST_H_
#define __ARRAY_LIST_H_ //만약 _ARRAY_LIST_H가 정의 되지 않으면 정의해라

#define TRUE 1
#define FALSE 0

#define LIST_LEN 100
typedef int LData;

typedef struct __ArrayList
{
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;

typedef ArrayList List;

void Listinit(List*plist);
//초기화할 리스트의 주소 값을 인자로 전달한다.
//리스트 생성 후 제일 먼저 호출되어야 한다.

void LInsert(List* plist, LData data);
//리스트에 데이터를 저장한다. 매개변수 data에 전달된 값을 저장한다.

int LFirst(List * plist, LData * pdata);
//첫 번째 데이터가 pdata가 가리키는 메모리에 저장된다.
//데이터의 참조를 위한 초기화가 진행된다.
//참조 성공 시 TRUE(1), 실패 시 FALSE(0) 반환

int LNext(List* plist, LData* pdata);
//참조된 데이ㅓ의 다음 데이터가 pdata가 가리키는 메모리에 저장된다.
//순차적 참조를 위해서 반복호출이 가능하다
//참조를 새로 시작하려면 먼저 LFirst 함수를 호출해야 한다.
//참조 성공 시 TRUE(1), 실패 시 FALSE(0) 반환

LData LRemove(List* plist);
//LFirst 또는 LNext 함수의 마지막 반환 데이터 삭제
//삭제된 데이터 반환
//연이은 반복 호출 허용하지 않는다.

int LCount(List* plist);
//리스트에 저장되어 있는 데이터의 수를 반환한다,

#endif