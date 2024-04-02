#include <iostream>
#include<windows.h>
// C언어 -> 시간 관련 헤더
#include<time.h>

// 메모리 릭: 줄줄 메모리
//using namespace std;

//using 지시자 : 지정한 네임스페이스의 모든 명칭을 이 선언이 있는 영역으로 가져와 소속 지정없이 \명칭을 바로 사용하겠다는 지시자.
using std::cout;
using std::endl;
using std::cin;


int Number;

namespace A
{
	namespace B
	{
		namespace C 
		{
			int Number;
		}
	}
}

//namespace ABC = A::B::C;


#pragma region 자료형 + 변수 선언

/*
▶ 자료형

- 변수의 종류를 의미하며 기초 자료형(Data Type)이라고 생각하면 된다.

- 변수란?

ㄴ 변할 수 있는 숫자나 데이터를 의미
ㄴ 컴퓨터로 하여금 값을 저장할 수 있는 메모리 공간에 붙는 이름
ㄴ 변수를 이용하면 특정 값을 저장 후 해당 값을 이용한 여러가지 연산을 처리하는 것이 가능하기 때문이다.

▷ C/C++언어에서 지원하는 자료형 종류

- 정수
ㄴ 소수점이 없는 수를 표현하기 위한 자료형

- 실수
ㄴ 소수점이 있는 수를 표현하기 위한 자료형

- 문자
ㄴ 문자를 표현하기 위한 자료형

- 논리
ㄴ 참 / 거짓을 판별하는 자료형

- C / C++  언어 정수형 자료형의 종류

- (unsigned) short (2바이트 크기를 지니는 자료형)
- (unsigned) int (4바이트)
- (unsigned) long (4 ~ 8바이트)
- (unsigned) long long (8바이트)


- C / C++  언어 실수형 자료형의 종류

- float (4 바이트)
- double (8 바이트)

- C / C++  언어 문자형 자료형의 종류

- char (1 바이트)


- C / C++  언어 논리형 자료형의 종류

- bool (1 바이트 => 참(1) / 거짓(0)을 나타내는 자료형)

- C언어는 논리형에 해당하는 참 또는 거짓이라는 자료형이 별도로 존재하지 않았다.
ㄴ 그렇기때문에 일반적으로 정수 0은 거짓 / NoNZero를 모두 true로 인지시켰다.

- 그러다가 C++에서 논리형 자료형이 추가됬다.
ㄴ true / false

- 지금은 C언어에도 bool 자료형 있다.

- C/ C++ 자료형은 기본적으로 음수(signed)를 표현하는 것이 가능하지만 경우에 따라서
음수를 표현하지 않는 대신에 양수를 좀 더 크게 표현하는 방법이 있다.
ㄴ 즉, unsigned를 사용하면 된다.


▶ 자료형의 크기


1. 정수형 자료형

자료형 타입			크기					범위
short				2바이트		-32767 ~ 32767
unsigned short		2바이트		0 ~ 665534
int				4바이트		약 -21억 ~ 약 21억
unsigned int		4바이트		0 ~ 약 43억
long				4바이트		약 -21억 ~ 약 21억
unsigned long		4바이트		0 ~ 약 43억


※ int와 long의 차이?
= long은 int가 될수도 있고 long이 될 수도 있다!(가변형)




2. 실수형 자료형

자료형 타입			크기					범위
float				4바이트		소수점 6 ~ 8자리까지
double				8바이트		소수점 15 ~ 17자리까지


3. 문자형 자료형

자료형 타입			크기					범위
char				1바이트		정수를 담는다. (문자)



4. 논리형 자료형

자료형 타입			크기					범위
bool				1바이트		0(거짓) 1(참)

▶변수 선언

- 변수 선언이란?
ㄴ 값을 저장할 수 있는 메모리 공간에 이름을 정의하는걸 뜻한다.

기본 형식 : 변수 형태(종류) 변수명
ㄴ EX) int Number;

EX:
int Num = 20;
ㄴ 변수의 선언으로 인해서 Num이라는 이름으로 메모리 공간이 할당
ㄴ int Num = 20;은 단순히 Num에 20을 저장하는게 아니라 Num이 의미하는 메모리 공간에 20을 넣어라 라는
의미가 된다.

= : 대입연산자
연산자의 계산 방식은 우항 -> 좌항으로






*/
#pragma endregion

/*

※ 그날 배운 내용 꼭 복습할 것!


과제1. 좋아하는 캐릭터 출력 I

- 캐릭터 양식은 자유

- 최소 사이즈 : 50 x 50


과제2. 좋아하는 캐릭터 출력 II

- 1번 과제와 동일하지만 컬러풀하게 만들어 올 것

- 최소 사이즈 : 50 x 50


※ 1번과 2번 과제의 캐릭터는 동일 캐릭터 X
※ 최소 사이즈 신경쓸 것

ㄴ 출력할 때 콘솔창의 크기 ((ex)1024 x 1024))를 고려해서 중앙 위치에 올 수 있도록 좌표 위치를 생각해 볼 것!



추가 공부, 한컴타자연습 긴글(영문) 150타 이상 인증샷

한줄 조사. C++ 변수 + 연산자의 종류에 대해서 다시 한번


-노트에 적어올 것


노션에 배운 내용 정리하는 습관 들이기

※ 교수님이 작성해주신 주석 내용 그대로 Ctrl C + V는 절대 금물임.

ㄴ 수업을 듣고 "깨달음을 얻었거나, 이건 좀 정리가 필요하겠네(배우면서 이러한 내용이 궁금했다 등) 싶은것" 정리하기((추론능력)을 바탕으로 이러한 내용은 어떠한 식으로 쓰이겠구나 라는걸 유추)
ㄴ 면접 질문 "이런 것을 면접으로 물어볼 수 있겠구나" 하는 것들을 따로 빼서 정리
ㄴ 노션에서 정리한 내용은 추후 "일부 공개"로, 면접 질문 준비 내용은 "비공개"로 처리하기 (면접 내용을 공개해 줄 필요 절대 X)




*/




void main()
{
	Number = 100;

	//A::B::C::Number;
	//ABC::Number;

	int TestNumA = true;
	int TestNumB = false;
	int TestResult = TestNumA + TestNumB;

	// 1 + 0
	cout << "boolean :" << TestResult << endl;

	cout << endl;
	
	// =======

	// 변수 초기화 방법
	// ㄴ 다양한 방법이 존재하고 일반적으로는 아래와 같다.

	//int형 변수 선언
	int Num0;
	//선언 이후 값 변경
	Num0 = 10;

	//  변수는 선언과 동시에 초기화를 하고 있다.
	int Num1 = 3;
	int Num2 = 6;
	int Total;

	/* 개인메모
	 공간 복잡도는 메모리 점유율이 높냐? 적냐를 의미 당연히 메모리 점유율이 낮은 프로그램이 당연히 좋고,
	 시간 복잡도는 프로세스를 처리하는 시간이 얼마나 걸리냐를 의미함.
	 */

	// 자료형이 같은 경우 여러개의 변수를 같이 선언할 수 있다.
	
	/* 개인메모
	자료형이 같으면 묶어주는 것이 좋지만, 자료형식이 같더라도 역할이 다르면 다르게 묶어줘야한다.(개인판단)
	*/

	int Num3;
	int Num4;
	int Num5;
	int Num6, Num7, Num8;
	Num6 = Num7 = Num8 = 100;

	//4
	cout << "정수 1의 사이즈: " << sizeof(1) << endl;
	//8
	cout << "정수 2의 사이즈: " << sizeof(2) << endl;
	//1
	cout << "true의 사이즈: " << sizeof(true) << endl;
	//0
	cout << "false의 사이즈: " << sizeof(false) << endl;

	cout << endl;

	int nValue = 0;

	// C++
	cout << "숫자 입력: " << endl;
	// 사용할때 주의를 요함
	cin >> nValue;

	cout << "내가 입력한 숫자: " << nValue << endl;

	cout << endl;

	// C언어
	printf("정수 입력: ");
	// 사용할때 주의를 요함
	scanf_s("%d", &nValue);

	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;

	printf("C언어 short: %d, %d\n", ValueA, sizeof(ValueA));
	printf("C언어 int: %d, %d\n", ValueB, sizeof(ValueB));
	printf("C언어 long: %ld, %d\n", ValueC, sizeof(ValueC));
	printf("C언어 long long: %lld, %d\n", ValueD, sizeof(ValueD));

	cout << endl;

	cout << "C++ short: " << ValueA << "," << "사이즈: " << sizeof(ValueA) << endl;
	cout << "C++ int: " << ValueB << "," << "사이즈: " << sizeof(ValueB) << endl;
	cout << "C++ long: " << ValueC << "," << "사이즈: " << sizeof(ValueC) << endl;
	cout << "C++ long long: " << ValueD << "," << "사이즈: " << sizeof(ValueD) << endl;

	cout << endl;


	// 실습
	// ㄴ 실수형 + 문자형 자료형에 대해 C / C++ 스타일로 출력하기.
	
	//실수형 = float, double 문자형 = char

	float pr1 = 4.2342;
	double pr2 = 6.4523;
	char ch1 = 4;

	printf("float 자료형 예시 : %f\n", pr1);
	printf("double 자료형 예시 : %lf\n", pr2);
	printf("char 자료형 예시 : %c\n", ch1);

	cout << "float 변수 출력:" << pr1 << endl;
	cout << "double 변수 출력: " << pr2 << endl;
	cout << "char 변수 출력: " << ch1 << endl;

	/*
	▶ 변수 표기법에 대해

	1. 헝가리안

	- 예전 절차지향적인 방식으로 코딩할때 이 변수가 어떤 변수인지 알기 위해서
	그 변수 형태가 뜻하는 약자를 붙였다.

	EX)
	int num					<=>				nNum
	float ValueA			<=>				fValueA;
	double ValueB			<=>				dbValueB;
	char letter				<=>				chLetter;
	bool playerDead			<=>				bPlayerDead / isPlayerDead

	- 네이티브 코딩에서는 많이 사용되지 않다가 근래에 다시 사용되는 추세
	ㄴ 절차지향 -> 객체지향 -> 컴포넌트 (헝가리안)
		ㄴ 상용 엔진 (언리얼 / 유니티)

	※ 표기법은 내가 사용을 안한다고 하더라도 표기법의 규칙정도는 숙지하고 가자.
		ㄴ 협업 -> 같이 하는 일 -> 내가 안써도 다른 사람은 사용한다.


	2. 카멜식(별다른 지시가 없다면 프로젝트 코딩시 카멜식으로 사용하자.)

	- 객체지향적인 방식의 코딩으로 바뀌면서 가독성을 위해서 한 단어의 앞글자만
	대문자로 표기한다.

	EX)
	int playerselectnumber;
	int playerSelectNumber;


	3. 파스칼 케이스

	EX)
	int PlayerSelectNumber;


	4. 스네이크

	- 단어를 언더바로 끊어서 표기하는 방법 (+카멜식)
	//개인 메모↓
	- 매크로,열거형,클래스의 유형에서만 사용함. (프로그래밍적 약속)
	- 위의 3가지 케이스를 제외하고 잘 사용하지 않기 때문에 함부로 사용하지 않기!

	EX)
	int playerSelectNumber;
	int player_Select_Number;

	- 변수 이름의 특징

	- 기본적으로 변수의 이름은 알파벳 / 숫자 / 언더바로 구성이 된다.
	- C언어 같은 경우에는 대소문자를 구분하며 Num과 num이 다른 변수 이름이다.

		1. 변수의 이름은 숫자로 시작할 수 없다.
		2. 키워드 역시 변수 이름으로 사용할 수 없다.
		3. 이름 사이에 공백이 삽입될 수 없다.
	
	// 변수가 안되는 것 4, 5, 6
	int Num100;
	int Num101;
	int _Num101;
	int 6Num; = 변수가 숫자로 시작함.
	int Num Lock; = 변수 사이에 공백이 있음.
	int bool; = 키워드
	*/


	/*
	▶ 산술 연산자

	+ : 더하기

	- : 빼기

	* : 곱하기
	
	/ : 나누기
	ㄴ 몫을 남길까? / 나머지는 버릴까?


	% : 나머지
	ㄴ 나머지는 남길까?/ 몫은 버릴까?
	
	
	*/


	int numR;

	// 랜덤 시드 초기화
	srand(time(NULL));
	// rand() : 랜덤 함수 => 랜덤한 숫자를 반환한다.
	// 실무에서는 같은값이 나오지 않게 하기 위해 랜덤함수를 꽁꽁 싸매는 작업을 해준다.
	//	ㄴ = 불완전 단수
	numR = rand() % 5;  // 0, 1, 2, 3, 4 의 5가지 값만 보겠다는 것
	//  개인메모) 같은 아이템이라도 등급차이(하급,중급,고급,최고급 등을 나눌때 쓴다.)
	//RAND_MAX
	cout << numR << endl;

	int weaponA = 0;

	// 20 ~ 25
	weaponA = rand() % 6;
	weaponA = weaponA + 20;
	// 20~25
	
	

	cout << "무기의 데미지 값: " << weaponA << endl;


	/*
	과제1. 아이템 만들기

	- 종류와 데미지, 가격이 다른 무기 및 방어구 + 악세사리 5종을 만들고 화면에 출력

	- 출력된 화면에는 "아이템 종류에 따른 가격" + 특성을 함께 나열한다.

	※포트폴리오 대비 도트 포함 시킬것
	
	ㄴ 무기 1종 + 방어구 1종 = 총 2종 (크기를 작게할 거면 개수를 많이, 아니면 크기를 크게 해주는 것이 좋음.)

	과제2. 랜덤 숫자 담기

	- 1 ~ 5까지의 랜덤숫자를 정수형에 담아라.

	- 6 ~ 19까지의 랜덤숫자를 정수형에 담아라.

	- 23 ~ 189까지의 랜덤 숫자를 정수형에 담아라.

	★ 도전 과제1. 정규 분포도 뽑기(과제 1번과 2번을 처리한 사람이 수행해볼 것)

	- rand() 함수를 이용해서 1~1000까지의 수를 랜덤하게 뽑고 이를 10만번 수행했을때 나올 수 있는 정규 분포도를 구해올 것.

	- 분포도는 많이 나온 숫자부터 오름차순으로 정렬 시킬것.

	※ 조건문 사용 금지


	한줄 조사. 반복문 + 연산자

	- 반복문의 종류와 역할에 대해서 조사해 온다.

	- 연산자의 종류와 역할에 대해서 조사해 온다.

	- 노트에 적어올것.

	*/


}