#include <stdio.h>
#include "ArrayList.h"

void Listinit(List* plist)
{
    (plist->numOfData) = 0;
    (plist->curPosition) = -1;
}
//�ʱ�ȭ�� ����Ʈ�� �ּ� ���� ���ڷ� �����Ѵ�.
//����Ʈ ���� �� ���� ���� ȣ��Ǿ�� �Ѵ�.

void LInsert(List* plist, LData data)
{
    if (plist->numOfData > LIST_LEN)
    {
        puts("�޸𸮸� �ʰ��߽��ϴ�.");
        return;
    }

    plist->arr[plist->numOfData] = data;
    (plist->numOfData)++;
}
//����Ʈ�� �����͸� �����Ѵ�. �Ű����� data�� ���޵� ���� �����Ѵ�.

int LFirst(List* plist, LData* pdata)
{
    if (plist->numOfData == 0)
        return FALSE;

    (plist->curPosition) = 0;
    *pdata = plist->arr[0];
    return TRUE;
}
//ù ��° �����Ͱ� pdata�� ����Ű�� �޸𸮿� ����ȴ�.
//�������� ������ ���� �ʱ�ȭ�� ����ȴ�.
//���� ���� �� TRUE(1), ���� �� FALSE(0) ��ȯ

int LNext(List* plist, LData* pdata)
{
    if (plist->curPosition >= (plist->numOfData) - 1)
        return FALSE;

    (plist->curPosition)++;
    *pdata = plist->arr[plist->curPosition];
    return TRUE;
}
//������ ���̤��� ���� �����Ͱ� pdata�� ����Ű�� �޸𸮿� ����ȴ�.
//������ ������ ���ؼ� �ݺ�ȣ���� �����ϴ�
//������ ���� �����Ϸ��� ���� LFirst �Լ��� ȣ���ؾ� �Ѵ�.
//���� ���� �� TRUE(1), ���� �� FALSE(0) ��ȯ

LData LRemove(List* plist)
{
    int rpos = plist->curPosition;
    int num = plist->numOfData;
    int i;
    LData rdata = plist->arr[rpos];

    for (i = rpos; i < num - 1; i++)
        plist->arr[i] = plist->arr[i + 1];

    (plist->numOfData)--;
    (plist->curPosition)--;
    return rdata;
}
//LFirst �Ǵ� LNext �Լ��� ������ ��ȯ ������ ����
//������ ������ ��ȯ
//������ �ݺ� ȣ�� ������� �ʴ´�.

int LCount(List* plist)
{
    return plist->numOfData;
}
//����Ʈ�� ����Ǿ� �ִ� �������� ���� ��ȯ�Ѵ�,