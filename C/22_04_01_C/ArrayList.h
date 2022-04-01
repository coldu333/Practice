#ifndef __ARRAY_LIST_H_
#define __ARRAY_LIST_H_ //���� _ARRAY_LIST_H�� ���� ���� ������ �����ض�

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

void Listinit(List* plist);
//�ʱ�ȭ�� ����Ʈ�� �ּ� ���� ���ڷ� �����Ѵ�.
//����Ʈ ���� �� ���� ���� ȣ��Ǿ�� �Ѵ�.

void LInsert(List* plist, LData data);
//����Ʈ�� �����͸� �����Ѵ�. �Ű����� data�� ���޵� ���� �����Ѵ�.

int LFirst(List* plist, LData* pdata);
//ù ��° �����Ͱ� pdata�� ����Ű�� �޸𸮿� ����ȴ�.
//�������� ������ ���� �ʱ�ȭ�� ����ȴ�.
//���� ���� �� TRUE(1), ���� �� FALSE(0) ��ȯ

int LNext(List* plist, LData* pdata);
//������ ���̤��� ���� �����Ͱ� pdata�� ����Ű�� �޸𸮿� ����ȴ�.
//������ ������ ���ؼ� �ݺ�ȣ���� �����ϴ�
//������ ���� �����Ϸ��� ���� LFirst �Լ��� ȣ���ؾ� �Ѵ�.
//���� ���� �� TRUE(1), ���� �� FALSE(0) ��ȯ

LData LRemove(List* plist);
//LFirst �Ǵ� LNext �Լ��� ������ ��ȯ ������ ����
//������ ������ ��ȯ
//������ �ݺ� ȣ�� ������� �ʴ´�.

int LCount(List* plist);
//����Ʈ�� ����Ǿ� �ִ� �������� ���� ��ȯ�Ѵ�,

#endif