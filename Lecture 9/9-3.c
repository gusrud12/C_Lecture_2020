// It is a program to judge whether the inputted sentence is a palindrome or not.
#include <stdio.h>
#define true 1
#define false 0

int is_palindrome(char[])
int main() {
	int i, j, is_palindrome = true;
	char A[100] = { 0 }, B[100], ch;

	while (1) {
		printf("Enter a sentence.\n");
		for (i = 0; (ch = getchar()) != '\n'; i++) { // �Է¹��� ���ڵ��� A �迭�� ���� �ִ´�.
			A[i] = ch;
		}
		if (A[0] == 'Q' && i == 1) // 'Q'�� �ԷµǸ� ���α׷� ����.
			break;
		j = i - 1; // i�� �� ���ڼ��̴�. �迭�� 0���� �����ϴϱ� -1�� ���ش�.
		for (int k = 0; k < i; k++) { // B�迭�� A�迭�� ���� �������� ���������.
			B[k] = A[j];
			j--;
		}
		for (int k = 0; k < i; k++) { // ó������ ������ �� �迭�� ��Ұ� ��� ������ �迭�� ���Ѵ�.
			if (A[k] != B[k]) { // �� �迭�� ��Ұ� �ٸ��� is_palindrome ���� ���� false �� �ٲ� �� �������´�.
				is_palindrome = false;
				break;
			}
		}
		if (is_palindrome == false) { // ȸ���� �ƴϴ�.
			printf("No, it is NOT a palindrome.\n");
		}
		else // ȸ���̴�.
			printf("Yes, it is a palindrome.\n");
	}
	return 0;
}