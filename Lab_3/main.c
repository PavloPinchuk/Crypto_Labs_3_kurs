/*

main.c, printing test vectors of reference implementation of the Kupyna hash function (DSTU 7564:2014), all hash code length variants

Authors of Kupyna: Ruslan Kiianchuk, Ruslan Mordvinov, Roman Oliynykov

*/

#include <stdio.h>
#include <memory.h>
#include "kupyna.h"
#include <time.h>
#include <math.h>
#include <stdint.h>

void print (int data_len, uint8_t data []);

#define CHECK(expected, hash_nbytes) \
    if (memcmp(hash_code, (expected), (hash_nbytes)) == 0) { \
        printf("Success hashing"); \
    } else { \
        printf("Failed hashing!"); \
    }printf ("\n\n");\


int main(int argc, char** argv) {
	srand(time(NULL));
    kupyna_t ctx;
    uint8_t hash_code[512/8];

	printf("My test:\n");

	printf("------------------------FIRST PANGRAM------------------------\n");

	KupynaInit(256, &ctx);
	char message_256_1[] = { 'Ù', 'à', 'ñ', 'ò', 'ÿ', 'ì', 'á', 'º', 'ø', 'æ', 'ó', 'ê', '¿', 'õ', 'ã', 'ë', 'è', 'ö', 'þ', 'â', 'ô', 'î', 'í', 'é', 'ã', 'å', 'ä', 'ç', 'ü', 'ï', 'ð', '³', '÷' };
	uint8_t my_test_256_1[33];
	for (int i = 0; i < 33; i++)
	{
		my_test_256_1[i] = message_256_1[i] - '0';
	}
	printf("Text (N = 33):\n");
	print(33, my_test_256_1);
	KupynaHash(&ctx, my_test_256_1, 33, hash_code);
	printf("Hash ¹1:\n");
	print(256, hash_code);

	char message_256_2[] = { 'Ë', 'à', 'ñ', 'ò', 'ÿ', 'ì', 'á', 'º', 'ø', 'æ', 'ó', 'ê', '¿', 'õ', 'ã', 'ë', 'è', 'ö', 'þ', 'â', 'ô', 'î', 'í', 'é', 'ã', 'å', 'ä', 'ç', 'ü', 'ï', 'ð', '³', '÷' };;
	uint8_t my_test_256_2[33];
	for (int i = 0; i < 33; i++)
	{
		my_test_256_2[i] = message_256_2[i] - '0';
	}
	printf("Text (N = 33):\n");
	print(33, my_test_256_2);
	KupynaHash(&ctx, my_test_256_2, 33, hash_code);
	printf("Hash ¹2:\n");
	print(256, hash_code);

	KupynaInit(384, &ctx);
	char message_384_1[] = { 'Ù', 'à', 'ñ', 'ò', 'ÿ', 'ì', 'á', 'º', 'ø', 'æ', 'ó', 'ê', '¿', 'õ', 'ã', 'ë', 'è', 'ö', 'þ', 'â', 'ô', 'î', 'í', 'é', 'ã', 'å', 'ä', 'ç', 'ü', 'ï', 'ð', '³', '÷' };
	uint8_t my_test_384_1[33];
	for (int i = 0; i < 33; i++)
	{
		my_test_384_1[i] = message_384_1[i] - '0';
	}
	printf("Text (N = 33):\n");
	print(33, my_test_384_1);
	KupynaHash(&ctx, my_test_384_1, 33, hash_code);
	printf("Hash ¹1:\n");
	print(384, hash_code);

	char message_384_2[] = { 'Ë', 'à', 'ñ', 'ò', 'ÿ', 'ì', 'á', 'º', 'ø', 'æ', 'ó', 'ê', '¿', 'õ', 'ã', 'ë', 'è', 'ö', 'þ', 'â', 'ô', 'î', 'í', 'é', 'ã', 'å', 'ä', 'ç', 'ü', 'ï', 'ð', '³', '÷' };;
	uint8_t my_test_384_2[33];
	for (int i = 0; i < 33; i++)
	{
		my_test_384_2[i] = message_384_2[i] - '0';
	}
	printf("Text (N = 33):\n");
	print(33, my_test_384_2);
	KupynaHash(&ctx, my_test_384_2, 33, hash_code);
	printf("Hash ¹2:\n");
	print(384, hash_code);

	KupynaInit(512, &ctx);
	char message_512_1[] = { 'Ù', 'à', 'ñ', 'ò', 'ÿ', 'ì', 'á', 'º', 'ø', 'æ', 'ó', 'ê', '¿', 'õ', 'ã', 'ë', 'è', 'ö', 'þ', 'â', 'ô', 'î', 'í', 'é', 'ã', 'å', 'ä', 'ç', 'ü', 'ï', 'ð', '³', '÷' };
	uint8_t my_test_512_1[33];
	for (int i = 0; i < 33; i++)
	{
		my_test_512_1[i] = message_512_1[i] - '0';
	}
	printf("Text (N = 33):\n");
	print(33, my_test_512_1);
	KupynaHash(&ctx, my_test_512_1, 33, hash_code);
	printf("Hash ¹1:\n");
	print(512, hash_code);

	char message_512_2[] = { 'Ë', 'à', 'ñ', 'ò', 'ÿ', 'ì', 'á', 'º', 'ø', 'æ', 'ó', 'ê', '¿', 'õ', 'ã', 'ë', 'è', 'ö', 'þ', 'â', 'ô', 'î', 'í', 'é', 'ã', 'å', 'ä', 'ç', 'ü', 'ï', 'ð', '³', '÷' };;
	uint8_t my_test_512_2[33];
	for (int i = 0; i < 33; i++)
	{
		my_test_512_2[i] = message_512_2[i] - '0';
	}
	printf("Text (N = 33):\n");
	print(33, my_test_512_2);
	KupynaHash(&ctx, my_test_512_2, 33, hash_code);
	printf("Hash ¹2:\n");
	print(512, hash_code);

	printf("------------------------SECOND PANGRAM------------------------\n");

	KupynaInit(256, &ctx);
	char message_256_1_2[] = { 'Ô', 'à', 'ê', 'ò', 'ã', 'ð', 'è', 'í', 'ä', 'æ', 'î', 'ë', 'á', '³', 'é', 'ï', 'ñ', 'þ', 'ã', 'â', 'ù', 'ó', 'õ', 'ç', '¿', 'ì', 'ù', 'å', 'ÿ', 'º', 'ö', 'ü'};
	uint8_t my_test_256_1_2[32];
	for (int i = 0; i < 32; i++)
	{
		my_test_256_1_2[i] = message_256_1_2[i] - '0';
	}
	printf("Text (N = 32):\n");
	print(33, my_test_256_1_2);
	KupynaHash(&ctx, my_test_256_1_2, 32, hash_code);
	printf("Hash ¹1:\n");
	print(256, hash_code);

	char message_256_2_2[] = { 'Ë', 'à', 'ê', 'ò', 'ã', 'ð', 'è', 'í', 'ä', 'æ', 'î', 'ë', 'á', '³', 'é', 'ï', 'ñ', 'þ', 'ã', 'â', 'ù', 'ó', 'õ', 'ç', '¿', 'ì', 'ù', 'å', 'ÿ', 'º', 'ö', 'ü' };
	uint8_t my_test_256_2_2[32];
	for (int i = 0; i < 32; i++)
	{
		my_test_256_2_2[i] = message_256_2_2[i] - '0';
	}
	printf("Text (N = 32):\n");
	print(33, my_test_256_2_2);
	KupynaHash(&ctx, my_test_256_2_2, 32, hash_code);
	printf("Hash ¹2:\n");
	print(256, hash_code);

	KupynaInit(384, &ctx);
	char message_384_1_2[] = { 'Ô', 'à', 'ê', 'ò', 'ã', 'ð', 'è', 'í', 'ä', 'æ', 'î', 'ë', 'á', '³', 'é', 'ï', 'ñ', 'þ', 'ã', 'â', 'ù', 'ó', 'õ', 'ç', '¿', 'ì', 'ù', 'å', 'ÿ', 'º', 'ö', 'ü' };
	uint8_t my_test_384_1_2[32];
	for (int i = 0; i < 32; i++)
	{
		my_test_384_1_2[i] = message_384_1_2[i] - '0';
	}
	printf("Text (N = 32):\n");
	print(33, my_test_384_1_2);
	KupynaHash(&ctx, my_test_384_1_2, 32, hash_code);
	printf("Hash ¹1:\n");
	print(384, hash_code);

	char message_384_2_2[] = { 'Ë', 'à', 'ê', 'ò', 'ã', 'ð', 'è', 'í', 'ä', 'æ', 'î', 'ë', 'á', '³', 'é', 'ï', 'ñ', 'þ', 'ã', 'â', 'ù', 'ó', 'õ', 'ç', '¿', 'ì', 'ù', 'å', 'ÿ', 'º', 'ö', 'ü' };
	uint8_t my_test_384_2_2[32];
	for (int i = 0; i < 32; i++)
	{
		my_test_384_2_2[i] = message_384_2_2[i] - '0';
	}
	printf("Text (N = 32):\n");
	print(33, my_test_384_2_2);
	KupynaHash(&ctx, my_test_384_2_2, 32, hash_code);
	printf("Hash ¹2:\n");
	print(384, hash_code);

	KupynaInit(512, &ctx);
	char message_512_1_2[] = { 'Ô', 'à', 'ê', 'ò', 'ã', 'ð', 'è', 'í', 'ä', 'æ', 'î', 'ë', 'á', '³', 'é', 'ï', 'ñ', 'þ', 'ã', 'â', 'ù', 'ó', 'õ', 'ç', '¿', 'ì', 'ù', 'å', 'ÿ', 'º', 'ö', 'ü' };
	uint8_t my_test_512_1_2[32];
	for (int i = 0; i < 32; i++)
	{
		my_test_512_1_2[i] = message_512_1_2[i] - '0';
	}
	printf("Text (N = 32):\n");
	print(33, my_test_512_1_2);
	KupynaHash(&ctx, my_test_512_1_2, 32, hash_code);
	printf("Hash ¹1:\n");
	print(512, hash_code);

	char message_512_2_2[] = { 'Ë', 'à', 'ê', 'ò', 'ã', 'ð', 'è', 'í', 'ä', 'æ', 'î', 'ë', 'á', '³', 'é', 'ï', 'ñ', 'þ', 'ã', 'â', 'ù', 'ó', 'õ', 'ç', '¿', 'ì', 'ù', 'å', 'ÿ', 'º', 'ö', 'ü' };
	uint8_t my_test_512_2_2[32];
	for (int i = 0; i < 32; i++)
	{
		my_test_512_2_2[i] = message_512_2_2[i] - '0';
	}
	printf("Text (N = 32):\n");
	print(33, my_test_512_2_2);
	KupynaHash(&ctx, my_test_512_2_2, 32, hash_code);
	printf("Hash ¹2:\n");
	print(512, hash_code);

	printf("------------------------THIRD PANGRAM------------------------\n");

	KupynaInit(256, &ctx);
	char message_256_1_3[] = { 'Ç', '¿', 'â', 'à', 'ã', 'ð', 'ó', 'ñ', 'ó', 'ò', 'à', 'ÿ', 'ã', 'î', 'ä', 'à', 'ö', '³', 'ë', 'þ', 'ù', 'à', 'á', 'º', 'æ', 'à', 'õ', '³', 'í', 'ô', 'å', 'ê', 'ö', '³', 'é', 'ø', 'è', 'ï', 'ó', '÷', 'è', 'ì', 'ü' };
	uint8_t my_test_256_1_3[43];
	for (int i = 0; i < 43; i++)
	{
		my_test_256_1_3[i] = message_256_1_3[i] - '0';
	}
	printf("Text (N = 43):\n");
	print(33, my_test_256_1_3);
	KupynaHash(&ctx, my_test_256_1_3, 43, hash_code);
	printf("Hash ¹1:\n");
	print(256, hash_code);

	char message_256_2_3[] = { 'Ë', '¿', 'â', 'à', 'ã', 'ð', 'ó', 'ñ', 'ó', 'ò', 'à', 'ÿ', 'ã', 'î', 'ä', 'à', 'ö', '³', 'ë', 'þ', 'ù', 'à', 'á', 'º', 'æ', 'à', 'õ', '³', 'í', 'ô', 'å', 'ê', 'ö', '³', 'é', 'ø', 'è', 'ï', 'ó', '÷', 'è', 'ì', 'ü' };
	uint8_t my_test_256_2_3[43];
	for (int i = 0; i < 43; i++)
	{
		my_test_256_2_3[i] = message_256_2_3[i] - '0';
	}
	printf("Text (N = 43):\n");
	print(33, my_test_256_2_3);
	KupynaHash(&ctx, my_test_256_2_3, 43, hash_code);
	printf("Hash ¹2:\n");
	print(256, hash_code);

	KupynaInit(384, &ctx);
	char message_384_1_3[] = { 'Ç', '¿', 'â', 'à', 'ã', 'ð', 'ó', 'ñ', 'ó', 'ò', 'à', 'ÿ', 'ã', 'î', 'ä', 'à', 'ö', '³', 'ë', 'þ', 'ù', 'à', 'á', 'º', 'æ', 'à', 'õ', '³', 'í', 'ô', 'å', 'ê', 'ö', '³', 'é', 'ø', 'è', 'ï', 'ó', '÷', 'è', 'ì', 'ü' };
	uint8_t my_test_384_1_3[43];
	for (int i = 0; i < 43; i++)
	{
		my_test_384_1_3[i] = message_384_1_3[i] - '0';
	}
	printf("Text (N = 43):\n");
	print(33, my_test_384_1_3);
	KupynaHash(&ctx, my_test_384_1_3, 43, hash_code);
	printf("Hash ¹1:\n");
	print(384, hash_code);

	char message_384_2_3[] = { 'Ë', '¿', 'â', 'à', 'ã', 'ð', 'ó', 'ñ', 'ó', 'ò', 'à', 'ÿ', 'ã', 'î', 'ä', 'à', 'ö', '³', 'ë', 'þ', 'ù', 'à', 'á', 'º', 'æ', 'à', 'õ', '³', 'í', 'ô', 'å', 'ê', 'ö', '³', 'é', 'ø', 'è', 'ï', 'ó', '÷', 'è', 'ì', 'ü' };
	uint8_t my_test_384_2_3[43];
	for (int i = 0; i < 43; i++)
	{
		my_test_384_2_3[i] = message_384_2_3[i] - '0';
	}
	printf("Text (N = 43):\n");
	print(33, my_test_384_2_3);
	KupynaHash(&ctx, my_test_384_2_3, 43, hash_code);
	printf("Hash ¹2:\n");
	print(384, hash_code);

	KupynaInit(512, &ctx);
	char message_512_1_3[] = { 'Ç', '¿', 'â', 'à', 'ã', 'ð', 'ó', 'ñ', 'ó', 'ò', 'à', 'ÿ', 'ã', 'î', 'ä', 'à', 'ö', '³', 'ë', 'þ', 'ù', 'à', 'á', 'º', 'æ', 'à', 'õ', '³', 'í', 'ô', 'å', 'ê', 'ö', '³', 'é', 'ø', 'è', 'ï', 'ó', '÷', 'è', 'ì', 'ü' };
	uint8_t my_test_512_1_3[43];
	for (int i = 0; i < 43; i++)
	{
		my_test_512_1_3[i] = message_512_1_3[i] - '0';
	}
	printf("Text (N = 43):\n");
	print(33, my_test_512_1_3);
	KupynaHash(&ctx, my_test_512_1_3, 43, hash_code);
	printf("Hash ¹1:\n");
	print(512, hash_code);

	char message_512_2_3[] = { 'Ë', '¿', 'â', 'à', 'ã', 'ð', 'ó', 'ñ', 'ó', 'ò', 'à', 'ÿ', 'ã', 'î', 'ä', 'à', 'ö', '³', 'ë', 'þ', 'ù', 'à', 'á', 'º', 'æ', 'à', 'õ', '³', 'í', 'ô', 'å', 'ê', 'ö', '³', 'é', 'ø', 'è', 'ï', 'ó', '÷', 'è', 'ì', 'ü' };
	uint8_t my_test_512_2_3[43];
	for (int i = 0; i < 43; i++)
	{
		my_test_512_2_3[i] = message_512_2_3[i] - '0';
	}
	printf("Text (N = 43):\n");
	print(33, my_test_512_2_3);
	KupynaHash(&ctx, my_test_512_2_3, 43, hash_code);
	printf("Hash ¹2:\n");
	print(512, hash_code);

	printf("------------------------FOURTH PANGRAM------------------------\n");

	KupynaInit(256, &ctx);
	char message_256_1_4[] = { 'Ô', 'à', 'á', 'ð', 'è', 'ê', 'ó', 'é', 'ì', 'î', 'ã', '³', 'ä', 'í', '³', 'ñ', 'ò', 'ü', 'ë', 'ÿ', 'ù', '³', 'ì', '¿', 'æ', 'å', 'þ', 'ã', 'à', 'â', 'õ', 'à', 'ï', 'à', 'é', 'ì', 'î', 'ç', 'º', 'ä', 'í', 'à', 'â', 'ö', '³', '÷', 'à', 'ø'};
	uint8_t my_test_256_1_4[48];
	for (int i = 0; i < 48; i++)
	{
		my_test_256_1_4[i] = message_256_1_4[i] - '0';
	}
	printf("Text (N = 48):\n");
	print(33, my_test_256_1_4);
	KupynaHash(&ctx, my_test_256_1_4, 48, hash_code);
	printf("Hash ¹1:\n");
	print(256, hash_code);

	char message_256_2_4[] = { 'Ë', 'à', 'á', 'ð', 'è', 'ê', 'ó', 'é', 'ì', 'î', 'ã', '³', 'ä', 'í', '³', 'ñ', 'ò', 'ü', 'ë', 'ÿ', 'ù', '³', 'ì', '¿', 'æ', 'å', 'þ', 'ã', 'à', 'â', 'õ', 'à', 'ï', 'à', 'é', 'ì', 'î', 'ç', 'º', 'ä', 'í', 'à', 'â', 'ö', '³', '÷', 'à', 'ø' };
	uint8_t my_test_256_2_4[48];
	for (int i = 0; i < 48; i++)
	{
		my_test_256_2_4[i] = message_256_2_4[i] - '0';
	}
	printf("Text (N = 48):\n");
	print(33, my_test_256_2_4);
	KupynaHash(&ctx, my_test_256_2_4, 48, hash_code);
	printf("Hash ¹2:\n");
	print(256, hash_code);

	KupynaInit(384, &ctx);
	char message_384_1_4[] = { 'Ô', 'à', 'á', 'ð', 'è', 'ê', 'ó', 'é', 'ì', 'î', 'ã', '³', 'ä', 'í', '³', 'ñ', 'ò', 'ü', 'ë', 'ÿ', 'ù', '³', 'ì', '¿', 'æ', 'å', 'þ', 'ã', 'à', 'â', 'õ', 'à', 'ï', 'à', 'é', 'ì', 'î', 'ç', 'º', 'ä', 'í', 'à', 'â', 'ö', '³', '÷', 'à', 'ø' };
	uint8_t my_test_384_1_4[48];
	for (int i = 0; i < 48; i++)
	{
		my_test_384_1_4[i] = message_384_1_4[i] - '0';
	}
	printf("Text (N = 48):\n");
	print(33, my_test_384_1_4);
	KupynaHash(&ctx, my_test_384_1_4, 48, hash_code);
	printf("Hash ¹1:\n");
	print(384, hash_code);

	char message_384_2_4[] = { 'Ë', 'à', 'á', 'ð', 'è', 'ê', 'ó', 'é', 'ì', 'î', 'ã', '³', 'ä', 'í', '³', 'ñ', 'ò', 'ü', 'ë', 'ÿ', 'ù', '³', 'ì', '¿', 'æ', 'å', 'þ', 'ã', 'à', 'â', 'õ', 'à', 'ï', 'à', 'é', 'ì', 'î', 'ç', 'º', 'ä', 'í', 'à', 'â', 'ö', '³', '÷', 'à', 'ø' };
	uint8_t my_test_384_2_4[48];
	for (int i = 0; i < 48; i++)
	{
		my_test_384_2_4[i] = message_384_2_4[i] - '0';
	}
	printf("Text (N = 48):\n");
	print(33, my_test_384_2_4);
	KupynaHash(&ctx, my_test_384_2_4, 48, hash_code);
	printf("Hash ¹2:\n");
	print(384, hash_code);

	KupynaInit(512, &ctx);
	char message_512_1_4[] = { 'Ô', 'à', 'á', 'ð', 'è', 'ê', 'ó', 'é', 'ì', 'î', 'ã', '³', 'ä', 'í', '³', 'ñ', 'ò', 'ü', 'ë', 'ÿ', 'ù', '³', 'ì', '¿', 'æ', 'å', 'þ', 'ã', 'à', 'â', 'õ', 'à', 'ï', 'à', 'é', 'ì', 'î', 'ç', 'º', 'ä', 'í', 'à', 'â', 'ö', '³', '÷', 'à', 'ø' };
	uint8_t my_test_512_1_4[48];
	for (int i = 0; i < 48; i++)
	{
		my_test_512_1_4[i] = message_512_1_4[i] - '0';
	}
	printf("Text (N = 48):\n");
	print(33, my_test_512_1_4);
	KupynaHash(&ctx, my_test_512_1_4, 48, hash_code);
	printf("Hash ¹1:\n");
	print(512, hash_code);

	char message_512_2_4[] = { 'Ë', 'à', 'á', 'ð', 'è', 'ê', 'ó', 'é', 'ì', 'î', 'ã', '³', 'ä', 'í', '³', 'ñ', 'ò', 'ü', 'ë', 'ÿ', 'ù', '³', 'ì', '¿', 'æ', 'å', 'þ', 'ã', 'à', 'â', 'õ', 'à', 'ï', 'à', 'é', 'ì', 'î', 'ç', 'º', 'ä', 'í', 'à', 'â', 'ö', '³', '÷', 'à', 'ø' };
	uint8_t my_test_512_2_4[48];
	for (int i = 0; i < 48; i++)
	{
		my_test_512_2_4[i] = message_512_2_4[i] - '0';
	}
	printf("Text (N = 48):\n");
	print(33, my_test_512_2_4);
	KupynaHash(&ctx, my_test_512_2_4, 48, hash_code);
	printf("Hash ¹2:\n");
	print(512, hash_code);

	printf("------------------------FIFTH PANGRAM------------------------\n");

	KupynaInit(256, &ctx);
	char message_256_1_5[] = { 'Þ', 'í', 'ê', 'å', 'ð', 'ñ', 'ü', 'ê', 'è', 'é', 'ä', 'æ', 'è', 'í', 'ã', 'ë', 'ù', 'î', 'ï', 'ð', 'è', 'á', 'å', 'ç', 'õ', 'ë', '³', 'á', '¿', '÷', 'ó', 'º', 'ô', 'à', 'ø', 'è', 'ñ', 'ò', 'ö', 'å', 'ë', 'î', 'â', 'ö', 'ÿ', 'ã', '³', 'ì', 'í' };
	uint8_t my_test_256_1_5[49];
	for (int i = 0; i < 49; i++)
	{
		my_test_256_1_5[i] = message_256_1_5[i] - '0';
	}
	printf("Text (N = 49):\n");
	print(33, my_test_256_1_5);
	KupynaHash(&ctx, my_test_256_1_5, 49, hash_code);
	printf("Hash ¹1:\n");
	print(256, hash_code);

	char message_256_2_5[] = { 'À', 'í', 'ê', 'å', 'ð', 'ñ', 'ü', 'ê', 'è', 'é', 'ä', 'æ', 'è', 'í', 'ã', 'ë', 'ù', 'î', 'ï', 'ð', 'è', 'á', 'å', 'ç', 'õ', 'ë', '³', 'á', '¿', '÷', 'ó', 'º', 'ô', 'à', 'ø', 'è', 'ñ', 'ò', 'ö', 'å', 'ë', 'î', 'â', 'ö', 'ÿ', 'ã', '³', 'ì', 'í' };
	uint8_t my_test_256_2_5[49];
	for (int i = 0; i < 49; i++)
	{
		my_test_256_2_5[i] = message_256_2_5[i] - '0';
	}
	printf("Text (N = 49):\n");
	print(33, my_test_256_2_5);
	KupynaHash(&ctx, my_test_256_2_5, 49, hash_code);
	printf("Hash ¹2:\n");
	print(256, hash_code);

	KupynaInit(384, &ctx);
	char message_384_1_5[] = { 'Þ', 'í', 'ê', 'å', 'ð', 'ñ', 'ü', 'ê', 'è', 'é', 'ä', 'æ', 'è', 'í', 'ã', 'ë', 'ù', 'î', 'ï', 'ð', 'è', 'á', 'å', 'ç', 'õ', 'ë', '³', 'á', '¿', '÷', 'ó', 'º', 'ô', 'à', 'ø', 'è', 'ñ', 'ò', 'ö', 'å', 'ë', 'î', 'â', 'ö', 'ÿ', 'ã', '³', 'ì', 'í' };
	uint8_t my_test_384_1_5[49];
	for (int i = 0; i < 49; i++)
	{
		my_test_384_1_5[i] = message_384_1_5[i] - '0';
	}
	printf("Text (N = 49):\n");
	print(33, my_test_384_1_5);
	KupynaHash(&ctx, my_test_384_1_5, 49, hash_code);
	printf("Hash ¹1:\n");
	print(384, hash_code);

	char message_384_2_5[] = { 'À', 'í', 'ê', 'å', 'ð', 'ñ', 'ü', 'ê', 'è', 'é', 'ä', 'æ', 'è', 'í', 'ã', 'ë', 'ù', 'î', 'ï', 'ð', 'è', 'á', 'å', 'ç', 'õ', 'ë', '³', 'á', '¿', '÷', 'ó', 'º', 'ô', 'à', 'ø', 'è', 'ñ', 'ò', 'ö', 'å', 'ë', 'î', 'â', 'ö', 'ÿ', 'ã', '³', 'ì', 'í' };
	uint8_t my_test_384_2_5[49];
	for (int i = 0; i < 49; i++)
	{
		my_test_384_2_5[i] = message_384_2_5[i] - '0';
	}
	printf("Text (N = 49):\n");
	print(33, my_test_384_2_5);
	KupynaHash(&ctx, my_test_384_2_5, 49, hash_code);
	printf("Hash ¹2:\n");
	print(384, hash_code);

	KupynaInit(512, &ctx);
	char message_512_1_5[] = { 'Þ', 'í', 'ê', 'å', 'ð', 'ñ', 'ü', 'ê', 'è', 'é', 'ä', 'æ', 'è', 'í', 'ã', 'ë', 'ù', 'î', 'ï', 'ð', 'è', 'á', 'å', 'ç', 'õ', 'ë', '³', 'á', '¿', '÷', 'ó', 'º', 'ô', 'à', 'ø', 'è', 'ñ', 'ò', 'ö', 'å', 'ë', 'î', 'â', 'ö', 'ÿ', 'ã', '³', 'ì', 'í' };
	uint8_t my_test_512_1_5[49];
	for (int i = 0; i < 49; i++)
	{
		my_test_512_1_5[i] = message_512_1_5[i] - '0';
	}
	printf("Text (N = 49):\n");
	print(33, my_test_512_1_5);
	KupynaHash(&ctx, my_test_512_1_5, 49, hash_code);
	printf("Hash ¹1:\n");
	print(512, hash_code);

	char message_512_2_5[] = { 'À', 'í', 'ê', 'å', 'ð', 'ñ', 'ü', 'ê', 'è', 'é', 'ä', 'æ', 'è', 'í', 'ã', 'ë', 'ù', 'î', 'ï', 'ð', 'è', 'á', 'å', 'ç', 'õ', 'ë', '³', 'á', '¿', '÷', 'ó', 'º', 'ô', 'à', 'ø', 'è', 'ñ', 'ò', 'ö', 'å', 'ë', 'î', 'â', 'ö', 'ÿ', 'ã', '³', 'ì', 'í' };
	uint8_t my_test_512_2_5[49];
	for (int i = 0; i < 49; i++)
	{
		my_test_512_2_5[i] = message_512_2_5[i] - '0';
	}
	printf("Text (N = 49):\n");
	print(33, my_test_512_2_5);
	KupynaHash(&ctx, my_test_512_2_5, 49, hash_code);
	printf("Hash ¹2:\n");
	print(512, hash_code);

	printf("------------------------SIXTH PANGRAM------------------------\n");

	KupynaInit(256, &ctx);
	char message_256_1_6[] = { 'Õ', 'â', 'à', 'ö', 'ü', 'ê', 'è', 'é', 'þ', 'ø', 'ê', 'î', 'â', 'à', 'ð', 'ô', '³', 'ë', '³', 'ï', 'ù', 'î', 'ä', 'í', 'ÿ', 'í', 'à', 'ã', 'à', 'í', 'ê', 'ó', 'ã', 'î', 'ò', 'ó', 'º', 'ñ', '³', 'ì', '¿', 'â', 'å', '÷', 'å', 'ð', 'þ', 'ç', 'æ', 'à', 'á'};
	uint8_t my_test_256_1_6[51];
	for (int i = 0; i < 51; i++)
	{
		my_test_256_1_6[i] = message_256_1_6[i] - '0';
	}
	printf("Text (N = 51):\n");
	print(33, my_test_256_1_6);
	KupynaHash(&ctx, my_test_256_1_6, 51, hash_code);
	printf("Hash ¹1:\n");
	print(256, hash_code);

	char message_256_2_6[] = { 'Ø', 'â', 'à', 'ö', 'ü', 'ê', 'è', 'é', 'þ', 'ø', 'ê', 'î', 'â', 'à', 'ð', 'ô', '³', 'ë', '³', 'ï', 'ù', 'î', 'ä', 'í', 'ÿ', 'í', 'à', 'ã', 'à', 'í', 'ê', 'ó', 'ã', 'î', 'ò', 'ó', 'º', 'ñ', '³', 'ì', '¿', 'â', 'å', '÷', 'å', 'ð', 'þ', 'ç', 'æ', 'à', 'á' };
	uint8_t my_test_256_2_6[51];
	for (int i = 0; i < 51; i++)
	{
		my_test_256_2_6[i] = message_256_2_6[i] - '0';
	}
	printf("Text (N = 51):\n");
	print(33, my_test_256_2_6);
	KupynaHash(&ctx, my_test_256_2_6, 51, hash_code);
	printf("Hash ¹2:\n");
	print(256, hash_code);

	KupynaInit(384, &ctx);
	char message_384_1_6[] = { 'Õ', 'â', 'à', 'ö', 'ü', 'ê', 'è', 'é', 'þ', 'ø', 'ê', 'î', 'â', 'à', 'ð', 'ô', '³', 'ë', '³', 'ï', 'ù', 'î', 'ä', 'í', 'ÿ', 'í', 'à', 'ã', 'à', 'í', 'ê', 'ó', 'ã', 'î', 'ò', 'ó', 'º', 'ñ', '³', 'ì', '¿', 'â', 'å', '÷', 'å', 'ð', 'þ', 'ç', 'æ', 'à', 'á' };
	uint8_t my_test_384_1_6[51];
	for (int i = 0; i < 51; i++)
	{
		my_test_384_1_6[i] = message_384_1_6[i] - '0';
	}
	printf("Text (N = 51):\n");
	print(33, my_test_384_1_6);
	KupynaHash(&ctx, my_test_384_1_6, 51, hash_code);
	printf("Hash ¹1:\n");
	print(384, hash_code);

	char message_384_2_6[] = { 'Ø', 'â', 'à', 'ö', 'ü', 'ê', 'è', 'é', 'þ', 'ø', 'ê', 'î', 'â', 'à', 'ð', 'ô', '³', 'ë', '³', 'ï', 'ù', 'î', 'ä', 'í', 'ÿ', 'í', 'à', 'ã', 'à', 'í', 'ê', 'ó', 'ã', 'î', 'ò', 'ó', 'º', 'ñ', '³', 'ì', '¿', 'â', 'å', '÷', 'å', 'ð', 'þ', 'ç', 'æ', 'à', 'á' };
	uint8_t my_test_384_2_6[51];
	for (int i = 0; i < 51; i++)
	{
		my_test_384_2_6[i] = message_384_2_6[i] - '0';
	}
	printf("Text (N = 51):\n");
	print(33, my_test_384_2_6);
	KupynaHash(&ctx, my_test_384_2_6, 51, hash_code);
	printf("Hash ¹2:\n");
	print(384, hash_code);

	KupynaInit(512, &ctx);
	char message_512_1_6[] = { 'Õ', 'â', 'à', 'ö', 'ü', 'ê', 'è', 'é', 'þ', 'ø', 'ê', 'î', 'â', 'à', 'ð', 'ô', '³', 'ë', '³', 'ï', 'ù', 'î', 'ä', 'í', 'ÿ', 'í', 'à', 'ã', 'à', 'í', 'ê', 'ó', 'ã', 'î', 'ò', 'ó', 'º', 'ñ', '³', 'ì', '¿', 'â', 'å', '÷', 'å', 'ð', 'þ', 'ç', 'æ', 'à', 'á' };
	uint8_t my_test_512_1_6[51];
	for (int i = 0; i < 51; i++)
	{
		my_test_512_1_6[i] = message_512_1_6[i] - '0';
	}
	printf("Text (N = 51):\n");
	print(33, my_test_512_1_6);
	KupynaHash(&ctx, my_test_512_1_6, 51, hash_code);
	printf("Hash ¹1:\n");
	print(512, hash_code);

	char message_512_2_6[] = { 'Ø', 'â', 'à', 'ö', 'ü', 'ê', 'è', 'é', 'þ', 'ø', 'ê', 'î', 'â', 'à', 'ð', 'ô', '³', 'ë', '³', 'ï', 'ù', 'î', 'ä', 'í', 'ÿ', 'í', 'à', 'ã', 'à', 'í', 'ê', 'ó', 'ã', 'î', 'ò', 'ó', 'º', 'ñ', '³', 'ì', '¿', 'â', 'å', '÷', 'å', 'ð', 'þ', 'ç', 'æ', 'à', 'á' };
	uint8_t my_test_512_2_6[51];
	for (int i = 0; i < 51; i++)
	{
		my_test_512_2_6[i] = message_512_2_6[i] - '0';
	}
	printf("Text (N = 51):\n");
	print(33, my_test_512_2_6);
	KupynaHash(&ctx, my_test_512_2_6, 51, hash_code);
	printf("Hash ¹2:\n");
	print(512, hash_code);

	printf("------------------------SEVENTH PANGRAM------------------------\n");

	KupynaInit(256, &ctx);
	char message_256_1_7[] = { 'Â', 'á', 'à', 'õ', '÷', 'è', 'ñ', 'à', 'ð', 'à', '¿', 'ô', 'å', 'ë', 'ü', 'ä', 'º', 'ã', 'å', 'ð', 'ç', 'ó', 'ì', '³', 'â', 'î', 'ä', 'ÿ', 'ã', 'í', 'ó', 'ò', 'è', 'ÿ', 'ù', '³', 'ð', 'ö', '³', 'í', 'î', 'â', 'è', 'é', 'ê', 'à', 'ï', 'þ', 'ø', 'î', 'í' };
	uint8_t my_test_256_1_7[51];
	for (int i = 0; i < 51; i++)
	{
		my_test_256_1_7[i] = message_256_1_7[i] - '0';
	}
	printf("Text (N = 51):\n");
	print(33, my_test_256_1_7);
	KupynaHash(&ctx, my_test_256_1_7, 51, hash_code);
	printf("Hash ¹1:\n");
	print(256, hash_code);

	char message_256_2_7[] = { 'Ó', 'á', 'à', 'õ', '÷', 'è', 'ñ', 'à', 'ð', 'à', '¿', 'ô', 'å', 'ë', 'ü', 'ä', 'º', 'ã', 'å', 'ð', 'ç', 'ó', 'ì', '³', 'â', 'î', 'ä', 'ÿ', 'ã', 'í', 'ó', 'ò', 'è', 'ÿ', 'ù', '³', 'ð', 'ö', '³', 'í', 'î', 'â', 'è', 'é', 'ê', 'à', 'ï', 'þ', 'ø', 'î', 'í' };
	uint8_t my_test_256_2_7[51];
	for (int i = 0; i < 51; i++)
	{
		my_test_256_2_7[i] = message_256_2_7[i] - '0';
	}
	printf("Text (N = 51):\n");
	print(33, my_test_256_2_7);
	KupynaHash(&ctx, my_test_256_2_7, 51, hash_code);
	printf("Hash ¹2:\n");
	print(256, hash_code);

	KupynaInit(384, &ctx);
	char message_384_1_7[] = { 'Â', 'á', 'à', 'õ', '÷', 'è', 'ñ', 'à', 'ð', 'à', '¿', 'ô', 'å', 'ë', 'ü', 'ä', 'º', 'ã', 'å', 'ð', 'ç', 'ó', 'ì', '³', 'â', 'î', 'ä', 'ÿ', 'ã', 'í', 'ó', 'ò', 'è', 'ÿ', 'ù', '³', 'ð', 'ö', '³', 'í', 'î', 'â', 'è', 'é', 'ê', 'à', 'ï', 'þ', 'ø', 'î', 'í' };
	uint8_t my_test_384_1_7[51];
	for (int i = 0; i < 51; i++)
	{
		my_test_384_1_7[i] = message_384_1_7[i] - '0';
	}
	printf("Text (N = 51):\n");
	print(33, my_test_384_1_7);
	KupynaHash(&ctx, my_test_384_1_7, 51, hash_code);
	printf("Hash ¹1:\n");
	print(384, hash_code);

	char message_384_2_7[] = { 'Ó', 'á', 'à', 'õ', '÷', 'è', 'ñ', 'à', 'ð', 'à', '¿', 'ô', 'å', 'ë', 'ü', 'ä', 'º', 'ã', 'å', 'ð', 'ç', 'ó', 'ì', '³', 'â', 'î', 'ä', 'ÿ', 'ã', 'í', 'ó', 'ò', 'è', 'ÿ', 'ù', '³', 'ð', 'ö', '³', 'í', 'î', 'â', 'è', 'é', 'ê', 'à', 'ï', 'þ', 'ø', 'î', 'í' };
	uint8_t my_test_384_2_7[51];
	for (int i = 0; i < 51; i++)
	{
		my_test_384_2_7[i] = message_384_2_7[i] - '0';
	}
	printf("Text (N = 51):\n");
	print(33, my_test_384_2_7);
	KupynaHash(&ctx, my_test_384_2_7, 51, hash_code);
	printf("Hash ¹2:\n");
	print(384, hash_code);

	KupynaInit(512, &ctx);
	char message_512_1_7[] = { 'Â', 'á', 'à', 'õ', '÷', 'è', 'ñ', 'à', 'ð', 'à', '¿', 'ô', 'å', 'ë', 'ü', 'ä', 'º', 'ã', 'å', 'ð', 'ç', 'ó', 'ì', '³', 'â', 'î', 'ä', 'ÿ', 'ã', 'í', 'ó', 'ò', 'è', 'ÿ', 'ù', '³', 'ð', 'ö', '³', 'í', 'î', 'â', 'è', 'é', 'ê', 'à', 'ï', 'þ', 'ø', 'î', 'í' };
	uint8_t my_test_512_1_7[51];
	for (int i = 0; i < 51; i++)
	{
		my_test_512_1_7[i] = message_512_1_7[i] - '0';
	}
	printf("Text (N = 51):\n");
	print(33, my_test_512_1_7);
	KupynaHash(&ctx, my_test_512_1_7, 51, hash_code);
	printf("Hash ¹1:\n");
	print(512, hash_code);

	char message_512_2_7[] = { 'Ó', 'á', 'à', 'õ', '÷', 'è', 'ñ', 'à', 'ð', 'à', '¿', 'ô', 'å', 'ë', 'ü', 'ä', 'º', 'ã', 'å', 'ð', 'ç', 'ó', 'ì', '³', 'â', 'î', 'ä', 'ÿ', 'ã', 'í', 'ó', 'ò', 'è', 'ÿ', 'ù', '³', 'ð', 'ö', '³', 'í', 'î', 'â', 'è', 'é', 'ê', 'à', 'ï', 'þ', 'ø', 'î', 'í' };
	uint8_t my_test_512_2_7[51];
	for (int i = 0; i < 51; i++)
	{
		my_test_512_2_7[i] = message_512_2_7[i] - '0';
	}
	printf("Text (N = 51):\n");
	print(33, my_test_512_2_7);
	KupynaHash(&ctx, my_test_512_2_7, 51, hash_code);
	printf("Hash ¹2:\n");
	print(512, hash_code);

	printf("------------------------EIGHTH PANGRAM------------------------\n");

	KupynaInit(256, &ctx);
	char message_256_1_8[] = { 'Í', 'à', 'ï', 'î', 'ä', 'ó', 'ø', 'å', '÷', 'ö', '³', 'ô', 'î', 'ð', 'ì', 'è', 'ë', 'þ', 'á', 'î', '¿', 'º', 'é', 'ã', 'ó', 'ä', 'ç', 'è', 'ê', 'ù', 'î', 'á', 'ï', '³', 'ð', 'ÿ', 'ã', 'å', 'ò', 'ü', 'æ', 'î', 'â', 'ò', 'å', 'ñ', 'õ', 'î', 'â', 'à', 'ò', 'è'};
	uint8_t my_test_256_1_8[52];
	for (int i = 0; i < 52; i++)
	{
		my_test_256_1_8[i] = message_256_1_8[i] - '0';
	}
	printf("Text (N = 52):\n");
	print(33, my_test_256_1_8);
	KupynaHash(&ctx, my_test_256_1_8, 52, hash_code);
	printf("Hash ¹1:\n");
	print(256, hash_code);

	char message_256_2_8[] = { 'Á', 'à', 'ï', 'î', 'ä', 'ó', 'ø', 'å', '÷', 'ö', '³', 'ô', 'î', 'ð', 'ì', 'è', 'ë', 'þ', 'á', 'î', '¿', 'º', 'é', 'ã', 'ó', 'ä', 'ç', 'è', 'ê', 'ù', 'î', 'á', 'ï', '³', 'ð', 'ÿ', 'ã', 'å', 'ò', 'ü', 'æ', 'î', 'â', 'ò', 'å', 'ñ', 'õ', 'î', 'â', 'à', 'ò', 'è' };
	uint8_t my_test_256_2_8[52];
	for (int i = 0; i < 52; i++)
	{
		my_test_256_2_8[i] = message_256_2_8[i] - '0';
	}
	printf("Text (N = 52):\n");
	print(33, my_test_256_2_8);
	KupynaHash(&ctx, my_test_256_2_8, 52, hash_code);
	printf("Hash ¹2:\n");
	print(256, hash_code);

	KupynaInit(384, &ctx);
	char message_384_1_8[] = { 'Í', 'à', 'ï', 'î', 'ä', 'ó', 'ø', 'å', '÷', 'ö', '³', 'ô', 'î', 'ð', 'ì', 'è', 'ë', 'þ', 'á', 'î', '¿', 'º', 'é', 'ã', 'ó', 'ä', 'ç', 'è', 'ê', 'ù', 'î', 'á', 'ï', '³', 'ð', 'ÿ', 'ã', 'å', 'ò', 'ü', 'æ', 'î', 'â', 'ò', 'å', 'ñ', 'õ', 'î', 'â', 'à', 'ò', 'è' };
	uint8_t my_test_384_1_8[52];
	for (int i = 0; i < 52; i++)
	{
		my_test_384_1_8[i] = message_384_1_8[i] - '0';
	}
	printf("Text (N = 52):\n");
	print(33, my_test_384_1_8);
	KupynaHash(&ctx, my_test_384_1_8, 52, hash_code);
	printf("Hash ¹1:\n");
	print(384, hash_code);

	char message_384_2_8[] = { 'Á', 'à', 'ï', 'î', 'ä', 'ó', 'ø', 'å', '÷', 'ö', '³', 'ô', 'î', 'ð', 'ì', 'è', 'ë', 'þ', 'á', 'î', '¿', 'º', 'é', 'ã', 'ó', 'ä', 'ç', 'è', 'ê', 'ù', 'î', 'á', 'ï', '³', 'ð', 'ÿ', 'ã', 'å', 'ò', 'ü', 'æ', 'î', 'â', 'ò', 'å', 'ñ', 'õ', 'î', 'â', 'à', 'ò', 'è' };
	uint8_t my_test_384_2_8[52];
	for (int i = 0; i < 52; i++)
	{
		my_test_384_2_8[i] = message_384_2_8[i] - '0';
	}
	printf("Text (N = 52):\n");
	print(33, my_test_384_2_8);
	KupynaHash(&ctx, my_test_384_2_8, 52, hash_code);
	printf("Hash ¹2:\n");
	print(384, hash_code);

	KupynaInit(512, &ctx);
	char message_512_1_8[] = { 'Í', 'à', 'ï', 'î', 'ä', 'ó', 'ø', 'å', '÷', 'ö', '³', 'ô', 'î', 'ð', 'ì', 'è', 'ë', 'þ', 'á', 'î', '¿', 'º', 'é', 'ã', 'ó', 'ä', 'ç', 'è', 'ê', 'ù', 'î', 'á', 'ï', '³', 'ð', 'ÿ', 'ã', 'å', 'ò', 'ü', 'æ', 'î', 'â', 'ò', 'å', 'ñ', 'õ', 'î', 'â', 'à', 'ò', 'è' };
	uint8_t my_test_512_1_8[52];
	for (int i = 0; i < 52; i++)
	{
		my_test_512_1_8[i] = message_512_1_8[i] - '0';
	}
	printf("Text (N = 52):\n");
	print(33, my_test_512_1_8);
	KupynaHash(&ctx, my_test_512_1_8, 52, hash_code);
	printf("Hash ¹1:\n");
	print(512, hash_code);

	char message_512_2_8[] = { 'Á', 'à', 'ï', 'î', 'ä', 'ó', 'ø', 'å', '÷', 'ö', '³', 'ô', 'î', 'ð', 'ì', 'è', 'ë', 'þ', 'á', 'î', '¿', 'º', 'é', 'ã', 'ó', 'ä', 'ç', 'è', 'ê', 'ù', 'î', 'á', 'ï', '³', 'ð', 'ÿ', 'ã', 'å', 'ò', 'ü', 'æ', 'î', 'â', 'ò', 'å', 'ñ', 'õ', 'î', 'â', 'à', 'ò', 'è' };
	uint8_t my_test_512_2_8[52];
	for (int i = 0; i < 52; i++)
	{
		my_test_512_2_8[i] = message_512_2_8[i] - '0';
	}
	printf("Text (N = 52):\n");
	print(33, my_test_512_2_8);
	KupynaHash(&ctx, my_test_512_2_8, 52, hash_code);
	printf("Hash ¹2:\n");
	print(512, hash_code);

	printf("------------------------NINETH PANGRAM------------------------\n");

	KupynaInit(256, &ctx);
	char message_256_1_9[] = { 'Ù', 'ó', 'ð', 'ÿ', '÷', 'è', 'é', 'á', 'ó', 'ã', 'à', 'é', '³', 'ç', '¿', 'æ', 'à', 'ê', 'î', 'ì', 'õ', 'à', 'ð', 'ö', 'è', 'ç', 'î', 'ì', 'â', 'þ', '÷', 'è', 'ñ', 'ü', 'ï', '³', 'ä', 'ï', 'è', 'ñ', 'à', 'ë', 'è', 'ã', 'å', 'ø', 'å', 'ô', 'ò', 'ó', 'º', 'í', 'à', 'õ' };
	uint8_t my_test_256_1_9[54];
	for (int i = 0; i < 54; i++)
	{
		my_test_256_1_9[i] = message_256_1_9[i] - '0';
	}
	printf("Text (N = 54):\n");
	print(33, my_test_256_1_9);
	KupynaHash(&ctx, my_test_256_1_9, 54, hash_code);
	printf("Hash ¹1:\n");
	print(256, hash_code);

	char message_256_2_9[] = { 'Ì', 'ó', 'ð', 'ÿ', '÷', 'è', 'é', 'á', 'ó', 'ã', 'à', 'é', '³', 'ç', '¿', 'æ', 'à', 'ê', 'î', 'ì', 'õ', 'à', 'ð', 'ö', 'è', 'ç', 'î', 'ì', 'â', 'þ', '÷', 'è', 'ñ', 'ü', 'ï', '³', 'ä', 'ï', 'è', 'ñ', 'à', 'ë', 'è', 'ã', 'å', 'ø', 'å', 'ô', 'ò', 'ó', 'º', 'í', 'à', 'õ' };
	uint8_t my_test_256_2_9[54];
	for (int i = 0; i < 54; i++)
	{
		my_test_256_2_9[i] = message_256_2_9[i] - '0';
	}
	printf("Text (N = 54):\n");
	print(33, my_test_256_2_9);
	KupynaHash(&ctx, my_test_256_2_9, 54, hash_code);
	printf("Hash ¹2:\n");
	print(256, hash_code);

	KupynaInit(384, &ctx);
	char message_384_1_9[] = { 'Ù', 'ó', 'ð', 'ÿ', '÷', 'è', 'é', 'á', 'ó', 'ã', 'à', 'é', '³', 'ç', '¿', 'æ', 'à', 'ê', 'î', 'ì', 'õ', 'à', 'ð', 'ö', 'è', 'ç', 'î', 'ì', 'â', 'þ', '÷', 'è', 'ñ', 'ü', 'ï', '³', 'ä', 'ï', 'è', 'ñ', 'à', 'ë', 'è', 'ã', 'å', 'ø', 'å', 'ô', 'ò', 'ó', 'º', 'í', 'à', 'õ' };
	uint8_t my_test_384_1_9[54];
	for (int i = 0; i < 54; i++)
	{
		my_test_384_1_9[i] = message_384_1_9[i] - '0';
	}
	printf("Text (N = 54):\n");
	print(33, my_test_384_1_9);
	KupynaHash(&ctx, my_test_384_1_9, 54, hash_code);
	printf("Hash ¹1:\n");
	print(384, hash_code);

	char message_384_2_9[] = { 'Ì', 'ó', 'ð', 'ÿ', '÷', 'è', 'é', 'á', 'ó', 'ã', 'à', 'é', '³', 'ç', '¿', 'æ', 'à', 'ê', 'î', 'ì', 'õ', 'à', 'ð', 'ö', 'è', 'ç', 'î', 'ì', 'â', 'þ', '÷', 'è', 'ñ', 'ü', 'ï', '³', 'ä', 'ï', 'è', 'ñ', 'à', 'ë', 'è', 'ã', 'å', 'ø', 'å', 'ô', 'ò', 'ó', 'º', 'í', 'à', 'õ' };
	uint8_t my_test_384_2_9[54];
	for (int i = 0; i < 54; i++)
	{
		my_test_384_2_9[i] = message_384_2_9[i] - '0';
	}
	printf("Text (N = 54):\n");
	print(33, my_test_384_2_9);
	KupynaHash(&ctx, my_test_384_2_9, 54, hash_code);
	printf("Hash ¹2:\n");
	print(384, hash_code);

	KupynaInit(512, &ctx);
	char message_512_1_9[] = { 'Ù', 'ó', 'ð', 'ÿ', '÷', 'è', 'é', 'á', 'ó', 'ã', 'à', 'é', '³', 'ç', '¿', 'æ', 'à', 'ê', 'î', 'ì', 'õ', 'à', 'ð', 'ö', 'è', 'ç', 'î', 'ì', 'â', 'þ', '÷', 'è', 'ñ', 'ü', 'ï', '³', 'ä', 'ï', 'è', 'ñ', 'à', 'ë', 'è', 'ã', 'å', 'ø', 'å', 'ô', 'ò', 'ó', 'º', 'í', 'à', 'õ' };
	uint8_t my_test_512_1_9[54];
	for (int i = 0; i < 54; i++)
	{
		my_test_512_1_9[i] = message_512_1_9[i] - '0';
	}
	printf("Text (N = 54):\n");
	print(33, my_test_512_1_9);
	KupynaHash(&ctx, my_test_512_1_9, 54, hash_code);
	printf("Hash ¹1:\n");
	print(512, hash_code);

	char message_512_2_9[] = { 'Ì', 'ó', 'ð', 'ÿ', '÷', 'è', 'é', 'á', 'ó', 'ã', 'à', 'é', '³', 'ç', '¿', 'æ', 'à', 'ê', 'î', 'ì', 'õ', 'à', 'ð', 'ö', 'è', 'ç', 'î', 'ì', 'â', 'þ', '÷', 'è', 'ñ', 'ü', 'ï', '³', 'ä', 'ï', 'è', 'ñ', 'à', 'ë', 'è', 'ã', 'å', 'ø', 'å', 'ô', 'ò', 'ó', 'º', 'í', 'à', 'õ' };
	uint8_t my_test_512_2_9[54];
	for (int i = 0; i < 54; i++)
	{
		my_test_512_2_9[i] = message_512_2_9[i] - '0';
	}
	printf("Text (N = 54):\n");
	print(33, my_test_512_2_9);
	KupynaHash(&ctx, my_test_512_2_9, 54, hash_code);
	printf("Hash ¹2:\n");
	print(512, hash_code);

	printf("------------------------TENTH PANGRAM------------------------\n");

	KupynaInit(256, &ctx);
	char message_256_1_10[] = { 'Ã', 'ð', '³', 'ø', 'í', 'è', 'é', 'ä', 'æ', 'è', 'ã', '³', 'ò', 'ù', 'î', 'õ', 'î', 'ò', '³', 'â', 'ó', 'ô', 'ð', 'à', 'í', 'ö', '³', 'þ', 'ï', 'î', 'ç', 'á', 'ó', 'â', 'à', 'â', 'ñ', 'ÿ', 'ö', '³', 'º', '¿', 'ä', 'ó', 'ì', 'ê', 'è', 'ç', '¿', 'ä', 'à', 'þ', '÷', 'è', 'ò', 'ð', 'þ', 'ô', 'å', 'ë', 'ü' };
	uint8_t my_test_256_1_10[61];
	for (int i = 0; i < 61; i++)
	{
		my_test_256_1_10[i] = message_256_1_10[i] - '0';
	}
	printf("Text (N = 61):\n");
	print(33, my_test_256_1_10);
	KupynaHash(&ctx, my_test_256_1_10, 61, hash_code);
	printf("Hash ¹1:\n");
	print(256, hash_code);

	char message_256_2_10[] = { 'Ê', 'ð', '³', 'ø', 'í', 'è', 'é', 'ä', 'æ', 'è', 'ã', '³', 'ò', 'ù', 'î', 'õ', 'î', 'ò', '³', 'â', 'ó', 'ô', 'ð', 'à', 'í', 'ö', '³', 'þ', 'ï', 'î', 'ç', 'á', 'ó', 'â', 'à', 'â', 'ñ', 'ÿ', 'ö', '³', 'º', '¿', 'ä', 'ó', 'ì', 'ê', 'è', 'ç', '¿', 'ä', 'à', 'þ', '÷', 'è', 'ò', 'ð', 'þ', 'ô', 'å', 'ë', 'ü' };
	uint8_t my_test_256_2_10[61];
	for (int i = 0; i < 61; i++)
	{
		my_test_256_2_10[i] = message_256_2_10[i] - '0';
	}
	printf("Text (N = 61):\n");
	print(33, my_test_256_2_10);
	KupynaHash(&ctx, my_test_256_2_10, 61, hash_code);
	printf("Hash ¹2:\n");
	print(256, hash_code);

	KupynaInit(384, &ctx);
	char message_384_1_10[] = { 'Ã', 'ð', '³', 'ø', 'í', 'è', 'é', 'ä', 'æ', 'è', 'ã', '³', 'ò', 'ù', 'î', 'õ', 'î', 'ò', '³', 'â', 'ó', 'ô', 'ð', 'à', 'í', 'ö', '³', 'þ', 'ï', 'î', 'ç', 'á', 'ó', 'â', 'à', 'â', 'ñ', 'ÿ', 'ö', '³', 'º', '¿', 'ä', 'ó', 'ì', 'ê', 'è', 'ç', '¿', 'ä', 'à', 'þ', '÷', 'è', 'ò', 'ð', 'þ', 'ô', 'å', 'ë', 'ü' };
	uint8_t my_test_384_1_10[61];
	for (int i = 0; i < 61; i++)
	{
		my_test_384_1_10[i] = message_384_1_10[i] - '0';
	}
	printf("Text (N = 61):\n");
	print(33, my_test_384_1_10);
	KupynaHash(&ctx, my_test_384_1_10, 61, hash_code);
	printf("Hash ¹1:\n");
	print(384, hash_code);

	char message_384_2_10[] = { 'Ê', 'ð', '³', 'ø', 'í', 'è', 'é', 'ä', 'æ', 'è', 'ã', '³', 'ò', 'ù', 'î', 'õ', 'î', 'ò', '³', 'â', 'ó', 'ô', 'ð', 'à', 'í', 'ö', '³', 'þ', 'ï', 'î', 'ç', 'á', 'ó', 'â', 'à', 'â', 'ñ', 'ÿ', 'ö', '³', 'º', '¿', 'ä', 'ó', 'ì', 'ê', 'è', 'ç', '¿', 'ä', 'à', 'þ', '÷', 'è', 'ò', 'ð', 'þ', 'ô', 'å', 'ë', 'ü' };
	uint8_t my_test_384_2_10[61];
	for (int i = 0; i < 61; i++)
	{
		my_test_384_2_10[i] = message_384_2_10[i] - '0';
	}
	printf("Text (N = 61):\n");
	print(33, my_test_384_2_10);
	KupynaHash(&ctx, my_test_384_2_10, 61, hash_code);
	printf("Hash ¹2:\n");
	print(384, hash_code);

	KupynaInit(512, &ctx);
	char message_512_1_10[] = { 'Ã', 'ð', '³', 'ø', 'í', 'è', 'é', 'ä', 'æ', 'è', 'ã', '³', 'ò', 'ù', 'î', 'õ', 'î', 'ò', '³', 'â', 'ó', 'ô', 'ð', 'à', 'í', 'ö', '³', 'þ', 'ï', 'î', 'ç', 'á', 'ó', 'â', 'à', 'â', 'ñ', 'ÿ', 'ö', '³', 'º', '¿', 'ä', 'ó', 'ì', 'ê', 'è', 'ç', '¿', 'ä', 'à', 'þ', '÷', 'è', 'ò', 'ð', 'þ', 'ô', 'å', 'ë', 'ü' };
	uint8_t my_test_512_1_10[61];
	for (int i = 0; i < 61; i++)
	{
		my_test_512_1_10[i] = message_512_1_10[i] - '0';
	}
	printf("Text (N = 61):\n");
	print(33, my_test_512_1_10);
	KupynaHash(&ctx, my_test_512_1_10, 61, hash_code);
	printf("Hash ¹1:\n");
	print(512, hash_code);

	char message_512_2_10[] = { 'Ê', 'ð', '³', 'ø', 'í', 'è', 'é', 'ä', 'æ', 'è', 'ã', '³', 'ò', 'ù', 'î', 'õ', 'î', 'ò', '³', 'â', 'ó', 'ô', 'ð', 'à', 'í', 'ö', '³', 'þ', 'ï', 'î', 'ç', 'á', 'ó', 'â', 'à', 'â', 'ñ', 'ÿ', 'ö', '³', 'º', '¿', 'ä', 'ó', 'ì', 'ê', 'è', 'ç', '¿', 'ä', 'à', 'þ', '÷', 'è', 'ò', 'ð', 'þ', 'ô', 'å', 'ë', 'ü' };
	uint8_t my_test_512_2_10[61];
	for (int i = 0; i < 61; i++)
	{
		my_test_512_2_10[i] = message_512_2_10[i] - '0';
	}
	printf("Text (N = 61):\n");
	print(33, my_test_512_2_10);
	KupynaHash(&ctx, my_test_512_2_10, 61, hash_code);
	printf("Hash ¹2:\n");
	print(512, hash_code);

	printf("-----------------------------TASK 3------------------------------------------\n");
	
    KupynaInit(256, &ctx);

	printf("-------------------------256 - 5 bits--------------------------\n");
	
	int collision[100];
	int main_flag = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag = 0;
		int ptr[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr[0] = (int)hash_code[0];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr[h] = (int)hash_code[0];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1 = ptr[i];
				int n2 = ptr[h];
				n1 = n1 >> 3;
				n2 = n2 >> 3;
				if (n1 == n2)
				{
					collision[k] = h;
					main_flag = 1;
				}
			}
			if (main_flag == 1)
				break;
		}
	}

	double serednya_kolisia = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision[i] < 0)
			continue;
		serednya_kolisia += collision[i];
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia / 100);


	printf("-------------------------256 - 6 bits--------------------------\n");

	int collision2[100];
	int main_flag2 = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag2 = 0;
		int ptr[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr[0] = (int)hash_code[0];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr[h] = (int)hash_code[0];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1 = ptr[i];
				int n2 = ptr[h];
				n1 = n1 >> 2;
				n2 = n2 >> 2;
				if (n1 == n2)
				{
					collision2[k] = h;
					main_flag2 = 1;
				}
			}
			if (main_flag2 == 1)
				break;
		}
	}

	double serednya_kolisia2 = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision2[i] < 0)
			continue;
		serednya_kolisia2 += collision2[i];
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia2 / 100);

	printf("-------------------------256 - 7 bits--------------------------\n");

	int collision1_3[100];
	int main_flag1_3 = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag1_3 = 0;
		int ptr[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr[0] = (int)hash_code[0];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr[h] = (int)hash_code[0];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1 = ptr[i];
				int n2 = ptr[h];
				n1 = n1 >> 1;
				n2 = n2 >> 1;
				if (n1 == n2)
				{
					collision1_3[k] = h;
					main_flag1_3 = 1;
				}
			}
			if (main_flag1_3 == 1)
				break;
		}
	}

	double serednya_kolisia1_3 = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision1_3[i] < 0)
			continue;
		serednya_kolisia1_3 += collision1_3[i];
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia1_3 / 100);

	printf("-------------------------256 - 8 bits--------------------------\n");

	int collision1_4[100];
	int main_flag1_4 = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag1_4 = 0;
		int ptr[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr[0] = (int)hash_code[0];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr[h] = (int)hash_code[0];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1 = ptr[i];
				int n2 = ptr[h];
				if (n1 == n2)
				{
					collision1_4[k] = h;
					main_flag1_4 = 1;
				}
			}
			if (main_flag1_4 == 1)
				break;
		}
	}

	double serednya_kolisia1_4 = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision1_4[i] < 0)
			continue;
		serednya_kolisia1_4 += collision1_4[i];
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia1_4 / 100);

	printf("----------------------256 - 9 bits--------------------------\n");

	int collision1_5[100];
	int main_flag1_5 = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag1_5 = 0;
		int ptr1[256];
		int ptr2[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr1[0] = (int)hash_code[0];
		ptr2[0] = (int)hash_code[1];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr1[h] = (int)hash_code[0];
			ptr2[h] = (int)hash_code[1];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1_1 = ptr1[i];
				int n1_2 = ptr1[h];
				if (n1_1 != n1_2)
					continue;
				int n2_1 = ptr2[i];
				int n2_2 = ptr2[h];
				n2_1 = n2_1 >> 7;
				n2_2 = n2_2 >> 7;
				if (n2_1 == n2_2)
				{
					collision1_5[k] = h;
					main_flag1_5 = 1;
				}
			}
			if (main_flag1_5 == 1)
				break;
		}
	}

	double serednya_kolisia1_5 = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision1_5[i] < 0)
			continue;
		serednya_kolisia1_5 += collision1_5[i];
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia1_5 / 100);

	printf("----------------------256 - 10 bits--------------------------\n");

	int collision1_6[100];
	int main_flag1_6 = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag1_6 = 0;
		int ptr1[256];
		int ptr2[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr1[0] = (int)hash_code[0];
		ptr2[0] = (int)hash_code[1];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr1[h] = (int)hash_code[0];
			ptr2[h] = (int)hash_code[1];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1_1 = ptr1[i];
				int n1_2 = ptr1[h];
				if (n1_1 != n1_2)
					continue;
				int n2_1 = ptr2[i];
				int n2_2 = ptr2[h];
				n2_1 = n2_1 >> 6;
				n2_2 = n2_2 >> 6;
				if (n2_1 == n2_2)
				{
					collision1_6[k] = h;
					main_flag1_6 = 1;
				}
			}
			if (main_flag1_6 == 1)
				break;
		}
	}

	double serednya_kolisia1_6 = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision1_6[i] < 0)
			continue;
		serednya_kolisia1_6 += collision1_6[i];
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia1_6 / 100);

	printf("----------------------256 - 11 bits--------------------------\n");

	int collision1_7[100];
	int main_flag1_7 = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag1_7 = 0;
		int ptr1[256];
		int ptr2[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr1[0] = (int)hash_code[0];
		ptr2[0] = (int)hash_code[1];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr1[h] = (int)hash_code[0];
			ptr2[h] = (int)hash_code[1];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1_1 = ptr1[i];
				int n1_2 = ptr1[h];
				if (n1_1 != n1_2)
					continue;
				int n2_1 = ptr2[i];
				int n2_2 = ptr2[h];
				n2_1 = n2_1 >> 5;
				n2_2 = n2_2 >> 5;
				if (n2_1 == n2_2)
				{
					collision1_7[k] = h;
					main_flag1_7 = 1;
				}
			}
			if (main_flag1_7 == 1)
				break;
		}
	}

	double serednya_kolisia1_7 = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision1_7[i] < 0)
			continue;
		serednya_kolisia1_7 += collision1_7[i];
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia1_7 / 100);

	printf("----------------------256 - 12 bits--------------------------\n");

	int collision1_8[100];
	int main_flag1_8 = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag1_8 = 0;
		int ptr1[256];
		int ptr2[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr1[0] = (int)hash_code[0];
		ptr2[0] = (int)hash_code[1];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr1[h] = (int)hash_code[0];
			ptr2[h] = (int)hash_code[1];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1_1 = ptr1[i];
				int n1_2 = ptr1[h];
				if (n1_1 != n1_2)
					continue;
				int n2_1 = ptr2[i];
				int n2_2 = ptr2[h];
				n2_1 = n2_1 >> 4;
				n2_2 = n2_2 >> 4;
				if (n2_1 == n2_2)
				{
					collision1_8[k] = h;
					main_flag1_8 = 1;
				}
			}
			if (main_flag1_8 == 1)
				break;
		}
	}

	double serednya_kolisia1_8 = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision1_8[i] < 0)
			continue;
		serednya_kolisia1_8 += collision1_8[i];
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia1_8 / 100);

	printf("----------------------256 - 13 bits--------------------------\n");

	int collision1_9[100];
	int main_flag1_9 = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag1_9 = 0;
		int ptr1[256];
		int ptr2[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr1[0] = (int)hash_code[0];
		ptr2[0] = (int)hash_code[1];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr1[h] = (int)hash_code[0];
			ptr2[h] = (int)hash_code[1];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1_1 = ptr1[i];
				int n1_2 = ptr1[h];
				if (n1_1 != n1_2)
					continue;
				int n2_1 = ptr2[i];
				int n2_2 = ptr2[h];
				n2_1 = n2_1 >> 3;
				n2_2 = n2_2 >> 3;
				if (n2_1 == n2_2)
				{
					collision1_9[k] = h;
					main_flag1_9 = 1;
				}
			}
			if (main_flag1_9 == 1)
				break;
		}
	}

	double serednya_kolisia1_9 = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision1_9[i] < 0)
			continue;
		serednya_kolisia1_9 += collision1_9[i];
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia1_9 / 100);

	printf("----------------------256 - 14 bits--------------------------\n");

	int collision1_10[100];
	int main_flag1_10 = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag1_10 = 0;
		int ptr1[256];
		int ptr2[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr1[0] = (int)hash_code[0];
		ptr2[0] = (int)hash_code[1];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr1[h] = (int)hash_code[0];
			ptr2[h] = (int)hash_code[1];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1_1 = ptr1[i];
				int n1_2 = ptr1[h];
				if (n1_1 != n1_2)
					continue;
				int n2_1 = ptr2[i];
				int n2_2 = ptr2[h];
				n2_1 = n2_1 >> 2;
				n2_2 = n2_2 >> 2;
				if (n2_1 == n2_2)
				{
					collision1_10[k] = h;
					main_flag1_10 = 1;
				}
			}
			if (main_flag1_10 == 1)
				break;
		}
	}

	double serednya_kolisia1_10 = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision1_10[i] < 0)
			continue;
		serednya_kolisia1_10 += collision1_10[i];
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia1_10 / 100);

	printf("----------------------256 - 15 bits--------------------------\n");

	int collision1_11[100];
	int main_flag1_11 = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag1_11 = 0;
		int ptr1[256];
		int ptr2[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr1[0] = (int)hash_code[0];
		ptr2[0] = (int)hash_code[1];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr1[h] = (int)hash_code[0];
			ptr2[h] = (int)hash_code[1];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1_1 = ptr1[i];
				int n1_2 = ptr1[h];
				if (n1_1 != n1_2)
					continue;
				int n2_1 = ptr2[i];
				int n2_2 = ptr2[h];
				n2_1 = n2_1 >> 1;
				n2_2 = n2_2 >> 1;
				if (n2_1 == n2_2)
				{
					collision1_11[k] = h;
					main_flag1_11 = 1;
				}
			}
			if (main_flag1_11 == 1)
				break;
		}
	}

	double serednya_kolisia1_11 = 0;
	int cnt = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision1_11[i] < 0)
			continue;
		printf("Collision: %d\n", collision1_11[i]);
		serednya_kolisia1_11 += collision1_11[i];
		cnt++;
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia1_11 / cnt);

	KupynaInit(384, &ctx);

	printf("----------------------384 - 15 bits--------------------------\n");

	int collision1_12[100];
	int main_flag1_12 = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag1_12 = 0;
		int ptr1[256];
		int ptr2[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr1[0] = (int)hash_code[0];
		ptr2[0] = (int)hash_code[1];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr1[h] = (int)hash_code[0];
			ptr2[h] = (int)hash_code[1];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1_1 = ptr1[i];
				int n1_2 = ptr1[h];
				if (n1_1 != n1_2)
					continue;
				int n2_1 = ptr2[i];
				int n2_2 = ptr2[h];
				n2_1 = n2_1 >> 1;
				n2_2 = n2_2 >> 1;
				if (n2_1 == n2_2)
				{
					collision1_12[k] = h;
					main_flag1_12 = 1;
				}
			}
			if (main_flag1_12 == 1)
				break;
		}
	}

	double serednya_kolisia1_12 = 0;
	int cnt2 = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision1_12[i] < 0)
			continue;
		printf("Collision: %d\n", collision1_12[i]);
		serednya_kolisia1_12 += collision1_12[i];
		cnt2++;
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia1_12 / cnt2);

	KupynaInit(512, &ctx);

	printf("----------------------512 - 15 bits--------------------------\n");

	int collision1_13[100];
	int main_flag1_13 = 0;
	for (int k = 0; k < 100; k++)
	{
		main_flag1_13 = 0;
		int ptr1[256];
		int ptr2[256];

		uint8_t message_random_256_orig[20];
		for (int i = 0; i < 20; i++)
		{
			message_random_256_orig[i] = rand(255);
		}
		KupynaHash(&ctx, message_random_256_orig, 20, hash_code);
		ptr1[0] = (int)hash_code[0];
		ptr2[0] = (int)hash_code[1];

		for (int h = 1; h < 255; h++)
		{
			uint8_t message_random_256[20];
			for (int i = 0; i < 20; i++)
			{
				message_random_256[i] = rand(255);
			}
			KupynaHash(&ctx, message_random_256, 20, hash_code);
			uint8_t f = hash_code[0];

			ptr1[h] = (int)hash_code[0];
			ptr2[h] = (int)hash_code[1];

			for (int i = 0; i < h; i++)
			{
				int flag = 0;
				int n1_1 = ptr1[i];
				int n1_2 = ptr1[h];
				if (n1_1 != n1_2)
					continue;
				int n2_1 = ptr2[i];
				int n2_2 = ptr2[h];
				n2_1 = n2_1 >> 1;
				n2_2 = n2_2 >> 1;
				if (n2_1 == n2_2)
				{
					collision1_13[k] = h;
					main_flag1_13 = 1;
				}
			}
			if (main_flag1_13 == 1)
				break;
		}
	}

	double serednya_kolisia1_13 = 0;
	int cnt3 = 0;
	for (int i = 0; i < 100; i++)
	{
		if (collision1_13[i] < 0)
			continue;
		printf("Collision: %d\n", collision1_13[i]);
		serednya_kolisia1_13 += collision1_13[i];
		cnt3++;
	}
	printf("Serednya colisia: %lf\n", serednya_kolisia1_13 / cnt3);

	return 0;
}

int int_to_bin_digit(uint8_t in, int count)
{
	int number = (int)in;
	static int t[8];
	int i = 0;
	while (number > 0)
	{
		t[i] = number % 2;
		number = number / 2;
		i++;
	}
	static int res[8];
	i = 7;
	int j = 0;
	while (i >= 0)
	{
		res[i] = t[j];
		j++;
		i--;
	}
	double result = 0;
	for (int i = 7; i >= 0; i--)
	{
		result += pow(10,i) * res[i];
	}
	return (int)result;
}

int int_to_bin_digit_2(uint8_t in, int count)
{
	int number = (int)in;
	static int t[16];
	int i = 0;
	while (number > 0)
	{
		t[i] = number % 2;
		number = number / 2;
		i++;
	}
	static int res[16];
	i = 15;
	int j = 0;
	while (i >= 0)
	{
		res[i] = t[j];
		j++;
		i--;
	}
	double result = 0;
	for (int i = 15; i >= 0; i--)
	{
		result += pow(10, i) * res[i];
	}
	return (int)result;
}


void print (int data_len, uint8_t data [])
{
	int i = 0;
	int data_size = data_len / BITS_IN_BYTE;
	for (i = 0; i < data_size; i ++)
	{
		if (! (i % 16)) printf ("    ");
		printf ("%02X", (unsigned int) data [i]);
		if (!((i + 1) % 16)) printf ("\n");
	};
	if (data_len % BITS_IN_BYTE != 0)
	{
		if (! (i % 16)) printf ("    ");
		printf ("%02X", (unsigned int) ((data [i]) & (~((1 << (BITS_IN_BYTE - (data_len % BITS_IN_BYTE))) - 1))));
		if (!((i + 1) % 16)) printf ("\n");
	};
	printf ("\n");
};
