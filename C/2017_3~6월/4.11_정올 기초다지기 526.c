#include <stdio.h> //헤더파일을 포함한다

int main() //정수를 리턴값으로 설정한다
{
	float num_1, num_2; //num_1, num_2를 실수로 지정한다
	float result_1; //result_1을 실수로 지정한다

	scanf_s("%f %f", &num_1, &num_2); //실수 num_1, num_2를 입력받는다
	
	result_1 = num_1 * num_2; //num_1 * num_2의 값을 result_1에 저장한다
	printf("\n%d ", (int)result_1); // result_1을 정수로 강제변환 한후 출력한다

	printf("%d \n\n", (int)num_1 * (int)num_2); //num_1, num_2를 정수로 강제변환 한후 곱한 값을 출력한다
}