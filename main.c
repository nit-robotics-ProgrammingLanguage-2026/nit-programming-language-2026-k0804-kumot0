
#include <stdio.h>

void reverse_binary_bits(int *input_value, int *output_value)
{
    int remaining_bits = *input_value;
    int reversed_bits = 0;

    /* 入力値を下位ビットから順に取り出し、逆順の数値を作る */
    while (remaining_bits > 0) {
        reversed_bits = (reversed_bits << 1) | (remaining_bits & 1);
        remaining_bits >>= 1;
    }

    /* 計算結果をポインタ経由で呼び出し元の変数に代入する */
    *output_value = reversed_bits;
}

int main(void)
{
    int input_number, reversed_number;

    scanf("%d", &input_number);

    /* 0以下の入力は処理せず、NGを表示する */
    if (input_number <= 0) {
        printf("NG");
        return 0;
    }

    reverse_binary_bits(&input_number, &reversed_number);

    printf("%d,%d", input_number, reversed_number);

    return 0;
}
