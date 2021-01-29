#include <iostream>
#include <cstring> // 그냥 c언어의 string.h와 동일
#include "bankHeaders.h"


using namespace std;


const int NAME_MAX = 20;
//기본적인 계정에 대한 정보가 들어가는 구조체이다.
typedef struct{
    int accID;
    int budget;
    char cusName[NAME_MAX];
}Account;
// 위에서 선언한 구조체 Account타입의 배열 선언. 100개의 계좌가 최대이다.
Account accArr[100];
//현재 만들어진 계좌의 개수를 의미한다.
int accNum = 0;


enum {MAKE = 1,DEPOSIT,WITHDRAW,INQUIRE,EXIT}; //추후 옵션을 viewing하기 위한 열거형 선언이다. MAKE=1의 1 의미는 열거형 시작 번호이다. 

//옵션을 보여주는 함수.
void showOptions(void)
{
    cout<<"------Options----------"<<endl;
    cout<<"1. 계좌 계설하기"<<endl;
    cout<<"2. 입금하기"<<endl;
    cout<<"3. 출금하기"<<endl;
    cout<<"4. 계좌 정보 전체 출력하기"<<endl;
    cout<<"5. 프로그램 종료"<<endl;
    cout<<"-----------------------"<<endl;
}

//계좌 계설하는 함수
void MakeAccount(void)
{
    int id;
    char name[NAME_MAX];
    int budget;

    cout<<"[계좌 계설하기]"<<endl;
    cout<<"계좌 ID : "; cin>>id;
    cout<<"이름 : "; cin>>name;
    cout<<"초기 입금액 : ";cin>>budget;
    cout<<endl;

    accArr[accNum].accID = id;
    accArr[accNum].budget = budget;
    strcpy(accArr[accNum].cusName,name);
    accNum++;
}

//계좌에 입금하는 함수
void DepositMoney(void)
{
    int money;
    int id;
    cout<<"[입금하기]"<<endl;
    cout<<"계좌 ID : ";cin>>id;
    cout<<"입금할 총액 : ";cin>>money;

    for (int count = 0;count < accNum;count++)
    {
        if(accArr[count].accID == id)
        {
            accArr[count].budget += money;
            cout<<"[입금완료]"<<endl;
            cout<<"현재 잔액 : "<<accArr[count].budget<<endl;
            return;
        }
    }
    cout<<"입력한 ID "<<id<<"는 유효하지 않은 ID입니다. 다시 입력해주세요."<<endl;
}

//출금하는 함수
void WithdrawMoney(void)
{
    int money;
    int id;
    cout<<"[출금하기]"<<endl;
    cout<<"계좌 ID : ";cin>>id;
    cout<<"출금할 총액 : ";cin>>money;

    for(int count = 0;count < accNum;count++)
    {
        if(accArr[count].accID == id)
        {
            if(money > accArr[count].budget)
            {
                cout<<"[출금 실패]"<<endl;
                cout<<"잔액이 부족하여 출금을 실패하였습니다"<<endl;
                cout<<"현재 잔액 : "<<accArr[count].budget<<" / "<<"출금하고자 한 잔액 : "<<money<<endl;
                return;
            }
            else
            {
                accArr[count].budget -= money;
                cout<<"[출금완료]"<<endl;
                cout<<"현재 잔액 : "<<accArr[count].budget<<endl;
                return;
            }
        }
    }
    cout<<"입력한 ID "<<id<<"는 유효하지 않은 ID입니다. 다시 입력해주세요."<<endl;
}

//모든 데이터 출력
void GetAllDatas(void)
{
    for(int count = 0;count <accNum;count++)
    {
        cout<<"-------------------------------"<<endl;
        cout<<"이름 : "<<accArr[count].cusName<<endl;
        cout<<"계좌 ID : "<<accArr[count].accID<<endl;
        cout<<"현재 잔액 : "<<accArr[count].budget<<endl;
    }
}


int main(void)
{
    int optionChoice = 0;
    while(1)
    {
        showOptions();
        cout<<"선택하기 : ";
        cin>>optionChoice;
        cout<<endl;

        switch (optionChoice)
        {
            case MAKE:
                MakeAccount();
                break;
            case DEPOSIT:
                DepositMoney();
                break;
            case WITHDRAW:
                WithdrawMoney();
                break;
            case INQUIRE:
                GetAllDatas();
                break;
            case EXIT:
                return 0;
            default:
                cout<<"잘못된 옵션선택 : "<<endl;
        }

    }
    return 0;
}
