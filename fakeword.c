/* Fake word generator.
 * Creates short, word-like strings. If multiple words are specified, they will
 * be space separated. The list is terminated by a newline.
 * Usage: fakeword [count [minimum-length [maximum-length]]]
 * Derived from an analysis of digraphs in American English as used in
 * 19th-century telegraphs, if I recall correctly. */

/* Copyright 2021 Jonathan Bakke.
 * All rights are hereby disclaimed and transferred to the public domain.
 * Where such disclaimer has no or limited effect, all rights may be licensed
 * in accordance with the terms of the GNU General Public License. See
 * https://www.gnu.org/licenses/gpl.html */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

enum { COUNT = 1, MIN_LEN = 3, MAX_LEN = 14, ABSOLUTE_MAX = 1024 };

/* Values are given as thousandths of a percentage point;
 * e.g. 1 means that this digraph represents 0.001% of sampled digraphs. */

char
followa(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 6519;

	match += 2; if (match > value) return 'a';
	match += 149; if (match > value) return 'b';
	match += 241; if (match > value) return 'c';
	match += 278; if (match > value) return 'd';
	match += 8; if (match > value) return 'e';
	match += 49; if (match > value) return 'f';
	match += 112; if (match > value) return 'g';
	match += 10; if (match > value) return 'h';
	match += 243; if (match > value) return 'i';
	match += 2; if (match > value) return 'j';
	match += 72; if (match > value) return 'k';
	match += 507; if (match > value) return 'l';
	match += 170; if (match > value) return 'm';
	match += 1398; if (match > value) return 'n';
	match += 4; if (match > value) return 'o';
	match += 127; if (match > value) return 'p';
	match += 1; if (match > value) return 'q';
	match += 720; if (match > value) return 'r';
	match += 609; if (match > value) return 's';
	match += 859; if (match > value) return 't';
	match += 64; if (match > value) return 'u';
	match += 200; if (match > value) return 'v';
	match += 58; if (match > value) return 'w';
	match += 6; if (match > value) return 'x';
	match += 152; if (match > value) return 'y';
	match += 12; if (match > value) return 'z';
	match += 466; if (match > value) return 0;
	return 0;
}

char
followb(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 1242;

	match += 72; if (match > value) return 'a';
	match += 7; if (match > value) return 'b';
	match += 0; if (match > value) return 'c';
	match += 3; if (match > value) return 'd';
	match += 425; if (match > value) return 'e';
	match += 0; if (match > value) return 'f';
	match += 1; if (match > value) return 'g';
	match += 0; if (match > value) return 'h';
	match += 60; if (match > value) return 'i';
	match += 10; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 143; if (match > value) return 'l';
	match += 2; if (match > value) return 'm';
	match += 0; if (match > value) return 'n';
	match += 120; if (match > value) return 'o';
	match += 0; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 92; if (match > value) return 'r';
	match += 28; if (match > value) return 's';
	match += 13; if (match > value) return 't';
	match += 149; if (match > value) return 'u';
	match += 1; if (match > value) return 'v';
	match += 0; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 107; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 9; if (match > value) return 0;
	return 0;
}

char
followc(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 2173;

	match += 267; if (match > value) return 'a';
	match += 0; if (match > value) return 'b';
	match += 47; if (match > value) return 'c';
	match += 1; if (match > value) return 'd';
	match += 373; if (match > value) return 'e';
	match += 0; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 370; if (match > value) return 'h';
	match += 123; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 99; if (match > value) return 'k';
	match += 106; if (match > value) return 'l';
	match += 0; if (match > value) return 'm';
	match += 0; if (match > value) return 'n';
	match += 382; if (match > value) return 'o';
	match += 0; if (match > value) return 'p';
	match += 4; if (match > value) return 'q';
	match += 82; if (match > value) return 'r';
	match += 2; if (match > value) return 's';
	match += 197; if (match > value) return 't';
	match += 78; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 0; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 9; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 33; if (match > value) return 0;
	return 0;
}

char
followd(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 3499;

	match += 98; if (match > value) return 'a';
	match += 2; if (match > value) return 'b';
	match += 1; if (match > value) return 'c';
	match += 28; if (match > value) return 'd';
	match += 428; if (match > value) return 'e';
	match += 2; if (match > value) return 'f';
	match += 19; if (match > value) return 'g';
	match += 2; if (match > value) return 'h';
	match += 278; if (match > value) return 'i';
	match += 1; if (match > value) return 'j';
	match += 1; if (match > value) return 'k';
	match += 32; if (match > value) return 'l';
	match += 8; if (match > value) return 'm';
	match += 11; if (match > value) return 'n';
	match += 139; if (match > value) return 'o';
	match += 1; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 63; if (match > value) return 'r';
	match += 107; if (match > value) return 's';
	match += 3; if (match > value) return 't';
	match += 63; if (match > value) return 'u';
	match += 10; if (match > value) return 'v';
	match += 5; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 27; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 2170; if (match > value) return 0;
	return 0;
}

char
followe(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 10322;

	match += 568; if (match > value) return 'a';
	match += 13; if (match > value) return 'b';
	match += 234; if (match > value) return 'c';
	match += 878; if (match > value) return 'd';
	match += 330; if (match > value) return 'e';
	match += 89; if (match > value) return 'f';
	match += 55; if (match > value) return 'g';
	match += 18; if (match > value) return 'h';
	match += 132; if (match > value) return 'i';
	match += 3; if (match > value) return 'j';
	match += 11; if (match > value) return 'k';
	match += 354; if (match > value) return 'l';
	match += 194; if (match > value) return 'm';
	match += 849; if (match > value) return 'n';
	match += 34; if (match > value) return 'o';
	match += 106; if (match > value) return 'p';
	match += 22; if (match > value) return 'q';
	match += 1362; if (match > value) return 'r';
	match += 742; if (match > value) return 's';
	match += 252; if (match > value) return 't';
	match += 15; if (match > value) return 'u';
	match += 164; if (match > value) return 'v';
	match += 74; if (match > value) return 'w';
	match += 109; if (match > value) return 'x';
	match += 131; if (match > value) return 'y';
	match += 2; if (match > value) return 'z';
	match += 3672; if (match > value) return 0;
	return 0;
}

char
followf(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 1977;

	match += 126; if (match > value) return 'a';
	match += 0; if (match > value) return 'b';
	match += 1; if (match > value) return 'c';
	match += 0; if (match > value) return 'd';
	match += 184; if (match > value) return 'e';
	match += 99; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 0; if (match > value) return 'h';
	match += 162; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 53; if (match > value) return 'l';
	match += 0; if (match > value) return 'm';
	match += 0; if (match > value) return 'n';
	match += 306; if (match > value) return 'o';
	match += 0; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 163; if (match > value) return 'r';
	match += 8; if (match > value) return 's';
	match += 68; if (match > value) return 't';
	match += 66; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 0; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 3; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 738; if (match > value) return 0;
	return 0;
}

char
followg(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 1585;

	match += 94; if (match > value) return 'a';
	match += 1; if (match > value) return 'b';
	match += 1; if (match > value) return 'c';
	match += 3; if (match > value) return 'd';
	match += 235; if (match > value) return 'e';
	match += 0; if (match > value) return 'f';
	match += 16; if (match > value) return 'g';
	match += 225; if (match > value) return 'h';
	match += 79; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 63; if (match > value) return 'l';
	match += 5; if (match > value) return 'm';
	match += 20; if (match > value) return 'n';
	match += 91; if (match > value) return 'o';
	match += 1; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 140; if (match > value) return 'r';
	match += 41; if (match > value) return 's';
	match += 10; if (match > value) return 't';
	match += 41; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 1; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 5; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 513; if (match > value) return 0;
	return 0;
}

char
followh(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 4929;

	match += 779; if (match > value) return 'a';
	match += 4; if (match > value) return 'b';
	match += 10; if (match > value) return 'c';
	match += 3; if (match > value) return 'd';
	match += 2266; if (match > value) return 'e';
	match += 2; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 0; if (match > value) return 'h';
	match += 617; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 7; if (match > value) return 'l';
	match += 6; if (match > value) return 'm';
	match += 6; if (match > value) return 'n';
	match += 345; if (match > value) return 'o';
	match += 0; if (match > value) return 'p';
	match += 2; if (match > value) return 'q';
	match += 58; if (match > value) return 'r';
	match += 11; if (match > value) return 's';
	match += 147; if (match > value) return 't';
	match += 65; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 5; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 36; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 560; if (match > value) return 0;
	return 0;
}

char
followi(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 5580;

	match += 93; if (match > value) return 'a';
	match += 39; if (match > value) return 'b';
	match += 272; if (match > value) return 'c';
	match += 203; if (match > value) return 'd';
	match += 268; if (match > value) return 'e';
	match += 151; if (match > value) return 'f';
	match += 172; if (match > value) return 'g';
	match += 0; if (match > value) return 'h';
	match += 3; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 41; if (match > value) return 'k';
	match += 294; if (match > value) return 'l';
	match += 230; if (match > value) return 'm';
	match += 1462; if (match > value) return 'n';
	match += 278; if (match > value) return 'o';
	match += 35; if (match > value) return 'p';
	match += 2; if (match > value) return 'q';
	match += 244; if (match > value) return 'r';
	match += 646; if (match > value) return 's';
	match += 669; if (match > value) return 't';
	match += 4; if (match > value) return 'u';
	match += 132; if (match > value) return 'v';
	match += 0; if (match > value) return 'w';
	match += 10; if (match > value) return 'x';
	match += 0; if (match > value) return 'y';
	match += 18; if (match > value) return 'z';
	match += 314; if (match > value) return 0;
	return 0;
}

char
followj(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 90;

	match += 19; if (match > value) return 'a';
	match += 0; if (match > value) return 'b';
	match += 0; if (match > value) return 'c';
	match += 0; if (match > value) return 'd';
	match += 17; if (match > value) return 'e';
	match += 0; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 0; if (match > value) return 'h';
	match += 0; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 0; if (match > value) return 'l';
	match += 0; if (match > value) return 'm';
	match += 0; if (match > value) return 'n';
	match += 24; if (match > value) return 'o';
	match += 0; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 0; if (match > value) return 'r';
	match += 0; if (match > value) return 's';
	match += 0; if (match > value) return 't';
	match += 30; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 0; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 0; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 0; if (match > value) return 0;
	return 0;
}

char
followk(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 505;

	match += 9; if (match > value) return 'a';
	match += 1; if (match > value) return 'b';
	match += 0; if (match > value) return 'c';
	match += 1; if (match > value) return 'd';
	match += 168; if (match > value) return 'e';
	match += 2; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 0; if (match > value) return 'h';
	match += 66; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 9; if (match > value) return 'l';
	match += 0; if (match > value) return 'm';
	match += 51; if (match > value) return 'n';
	match += 6; if (match > value) return 'o';
	match += 1; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 0; if (match > value) return 'r';
	match += 31; if (match > value) return 's';
	match += 1; if (match > value) return 't';
	match += 2; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 2; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 4; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 151; if (match > value) return 0;
	return 0;
}

char
followl(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 3315;

	match += 337; if (match > value) return 'a';
	match += 2; if (match > value) return 'b';
	match += 7; if (match > value) return 'c';
	match += 222; if (match > value) return 'd';
	match += 549; if (match > value) return 'e';
	match += 44; if (match > value) return 'f';
	match += 4; if (match > value) return 'g';
	match += 1; if (match > value) return 'h';
	match += 367; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 18; if (match > value) return 'k';
	match += 449; if (match > value) return 'l';
	match += 18; if (match > value) return 'm';
	match += 3; if (match > value) return 'n';
	match += 274; if (match > value) return 'o';
	match += 8; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 6; if (match > value) return 'r';
	match += 76; if (match > value) return 's';
	match += 60; if (match > value) return 't';
	match += 48; if (match > value) return 'u';
	match += 14; if (match > value) return 'v';
	match += 9; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 321; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 478; if (match > value) return 0;
	return 0;
}

char
followm(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 2022;

	match += 311; if (match > value) return 'a';
	match += 58; if (match > value) return 'b';
	match += 0; if (match > value) return 'c';
	match += 5; if (match > value) return 'd';
	match += 505; if (match > value) return 'e';
	match += 4; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 1; if (match > value) return 'h';
	match += 177; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 3; if (match > value) return 'l';
	match += 45; if (match > value) return 'm';
	match += 6; if (match > value) return 'n';
	match += 222; if (match > value) return 'o';
	match += 98; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 34; if (match > value) return 'r';
	match += 51; if (match > value) return 's';
	match += 2; if (match > value) return 't';
	match += 78; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 0; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 102; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 320; if (match > value) return 0;
	return 0;
}

char
follown(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 5646;

	match += 136; if (match > value) return 'a';
	match += 3; if (match > value) return 'b';
	match += 239; if (match > value) return 'c';
	match += 998; if (match > value) return 'd';
	match += 479; if (match > value) return 'e';
	match += 30; if (match > value) return 'f';
	match += 671; if (match > value) return 'g';
	match += 16; if (match > value) return 'h';
	match += 167; if (match > value) return 'i';
	match += 7; if (match > value) return 'j';
	match += 40; if (match > value) return 'k';
	match += 50; if (match > value) return 'l';
	match += 4; if (match > value) return 'm';
	match += 48; if (match > value) return 'n';
	match += 369; if (match > value) return 'o';
	match += 2; if (match > value) return 'p';
	match += 5; if (match > value) return 'q';
	match += 2; if (match > value) return 'r';
	match += 241; if (match > value) return 's';
	match += 540; if (match > value) return 't';
	match += 53; if (match > value) return 'u';
	match += 19; if (match > value) return 'v';
	match += 5; if (match > value) return 'w';
	match += 2; if (match > value) return 'x';
	match += 68; if (match > value) return 'y';
	match += 1; if (match > value) return 'z';
	match += 1451; if (match > value) return 0;
	return 0;
}

char
followo(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 5668;

	match += 50; if (match > value) return 'a';
	match += 43; if (match > value) return 'b';
	match += 76; if (match > value) return 'c';
	match += 121; if (match > value) return 'd';
	match += 18; if (match > value) return 'e';
	match += 677; if (match > value) return 'f';
	match += 36; if (match > value) return 'g';
	match += 11; if (match > value) return 'h';
	match += 53; if (match > value) return 'i';
	match += 1; if (match > value) return 'j';
	match += 64; if (match > value) return 'k';
	match += 160; if (match > value) return 'l';
	match += 346; if (match > value) return 'm';
	match += 871; if (match > value) return 'n';
	match += 197; if (match > value) return 'o';
	match += 83; if (match > value) return 'p';
	match += 1; if (match > value) return 'q';
	match += 701; if (match > value) return 'r';
	match += 192; if (match > value) return 's';
	match += 294; if (match > value) return 't';
	match += 797; if (match > value) return 'u';
	match += 98; if (match > value) return 'v';
	match += 291; if (match > value) return 'w';
	match += 3; if (match > value) return 'x';
	match += 20; if (match > value) return 'y';
	match += 5; if (match > value) return 'z';
	match += 753; if (match > value) return 0;
	return 0;
}

char
followp(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 1378;

	match += 177; if (match > value) return 'a';
	match += 1; if (match > value) return 'b';
	match += 1; if (match > value) return 'c';
	match += 1; if (match > value) return 'd';
	match += 305; if (match > value) return 'e';
	match += 0; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 30; if (match > value) return 'h';
	match += 74; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 132; if (match > value) return 'l';
	match += 1; if (match > value) return 'm';
	match += 1; if (match > value) return 'n';
	match += 167; if (match > value) return 'o';
	match += 84; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 188; if (match > value) return 'r';
	match += 31; if (match > value) return 's';
	match += 56; if (match > value) return 't';
	match += 37; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 2; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 6; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 84; if (match > value) return 0;
	return 0;
}

char
followq(void)
{
	return 'u';
}

char
followr(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 4972;

	match += 365; if (match > value) return 'a';
	match += 16; if (match > value) return 'b';
	match += 58; if (match > value) return 'c';
	match += 141; if (match > value) return 'd';
	match += 1167; if (match > value) return 'e';
	match += 28; if (match > value) return 'f';
	match += 53; if (match > value) return 'g';
	match += 13; if (match > value) return 'h';
	match += 394; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 43; if (match > value) return 'k';
	match += 58; if (match > value) return 'l';
	match += 96; if (match > value) return 'm';
	match += 110; if (match > value) return 'n';
	match += 457; if (match > value) return 'o';
	match += 24; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 94; if (match > value) return 'r';
	match += 228; if (match > value) return 's';
	match += 210; if (match > value) return 't';
	match += 86; if (match > value) return 'u';
	match += 35; if (match > value) return 'v';
	match += 10; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 142; if (match > value) return 'y';
	match += 28; if (match > value) return 'z';
	match += 1116; if (match > value) return 0;
	return 0;
}

char
follows(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 5156;

	match += 180; if (match > value) return 'a';
	match += 3; if (match > value) return 'b';
	match += 81; if (match > value) return 'c';
	match += 8; if (match > value) return 'd';
	match += 609; if (match > value) return 'e';
	match += 5; if (match > value) return 'f';
	match += 2; if (match > value) return 'g';
	match += 294; if (match > value) return 'h';
	match += 261; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 28; if (match > value) return 'k';
	match += 59; if (match > value) return 'l';
	match += 34; if (match > value) return 'm';
	match += 12; if (match > value) return 'n';
	match += 253; if (match > value) return 'o';
	match += 148; if (match > value) return 'p';
	match += 4; if (match > value) return 'q';
	match += 1; if (match > value) return 'r';
	match += 239; if (match > value) return 's';
	match += 655; if (match > value) return 't';
	match += 170; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 28; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 11; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 2071; if (match > value) return 0;
	return 0;
}

char
followt(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 7293;

	match += 287; if (match > value) return 'a';
	match += 1; if (match > value) return 'b';
	match += 27; if (match > value) return 'c';
	match += 0; if (match > value) return 'd';
	match += 651; if (match > value) return 'e';
	match += 7; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 2445; if (match > value) return 'h';
	match += 486; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 107; if (match > value) return 'l';
	match += 7; if (match > value) return 'm';
	match += 8; if (match > value) return 'n';
	match += 666; if (match > value) return 'o';
	match += 1; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 226; if (match > value) return 'r';
	match += 179; if (match > value) return 's';
	match += 125; if (match > value) return 't';
	match += 135; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 89; if (match > value) return 'y';
	match += 57; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 2; if (match > value) return 'z';
	match += 1787; if (match > value) return 0;
	return 0;
}

char
followu(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 2250;

	match += 59; if (match > value) return 'a';
	match += 41; if (match > value) return 'b';
	match += 104; if (match > value) return 'c';
	match += 50; if (match > value) return 'd';
	match += 70; if (match > value) return 'e';
	match += 13; if (match > value) return 'f';
	match += 114; if (match > value) return 'g';
	match += 0; if (match > value) return 'h';
	match += 67; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 240; if (match > value) return 'l';
	match += 69; if (match > value) return 'm';
	match += 260; if (match > value) return 'n';
	match += 5; if (match > value) return 'o';
	match += 101; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 366; if (match > value) return 'r';
	match += 272; if (match > value) return 's';
	match += 281; if (match > value) return 't';
	match += 0; if (match > value) return 'u';
	match += 2; if (match > value) return 'v';
	match += 0; if (match > value) return 'w';
	match += 2; if (match > value) return 'x';
	match += 1; if (match > value) return 'y';
	match += 2; if (match > value) return 'z';
	match += 131; if (match > value) return 0;
	return 0;
}

char
followv(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 829;

	match += 85; if (match > value) return 'a';
	match += 0; if (match > value) return 'b';
	match += 0; if (match > value) return 'c';
	match += 4; if (match > value) return 'd';
	match += 563; if (match > value) return 'e';
	match += 0; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 0; if (match > value) return 'h';
	match += 122; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 0; if (match > value) return 'l';
	match += 0; if (match > value) return 'm';
	match += 11; if (match > value) return 'n';
	match += 36; if (match > value) return 'o';
	match += 0; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 1; if (match > value) return 'r';
	match += 0; if (match > value) return 's';
	match += 0; if (match > value) return 't';
	match += 2; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 0; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 3; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 2; if (match > value) return 0;
	return 0;
}

char
followw(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 2541;

	match += 314; if (match > value) return 'a';
	match += 1; if (match > value) return 'b';
	match += 1; if (match > value) return 'c';
	match += 3; if (match > value) return 'd';
	match += 275; if (match > value) return 'e';
	match += 2; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 324; if (match > value) return 'h';
	match += 306; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 1; if (match > value) return 'k';
	match += 15; if (match > value) return 'l';
	match += 0; if (match > value) return 'm';
	match += 64; if (match > value) return 'n';
	match += 160; if (match > value) return 'o';
	match += 0; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 14; if (match > value) return 'r';
	match += 22; if (match > value) return 's';
	match += 3; if (match > value) return 't';
	match += 2; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 1; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 1; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 203; if (match > value) return 0;
	return 0;
}

char
followx(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 137;

	match += 8; if (match > value) return 'a';
	match += 0; if (match > value) return 'b';
	match += 22; if (match > value) return 'c';
	match += 0; if (match > value) return 'd';
	match += 8; if (match > value) return 'e';
	match += 0; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 2; if (match > value) return 'h';
	match += 15; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 0; if (match > value) return 'l';
	match += 0; if (match > value) return 'm';
	match += 0; if (match > value) return 'n';
	match += 1; if (match > value) return 'o';
	match += 30; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 0; if (match > value) return 'r';
	match += 0; if (match > value) return 's';
	match += 32; if (match > value) return 't';
	match += 1; if (match > value) return 'v';
	match += 3; if (match > value) return 'u';
	match += 0; if (match > value) return 'w';
	match += 1; if (match > value) return 'x';
	match += 0; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 14; if (match > value) return 0;
	return 0;
}

char
followy(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 1459;

	match += 11; if (match > value) return 'a';
	match += 6; if (match > value) return 'b';
	match += 2; if (match > value) return 'c';
	match += 3; if (match > value) return 'd';
	match += 82; if (match > value) return 'e';
	match += 2; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 1; if (match > value) return 'h';
	match += 21; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 5; if (match > value) return 'l';
	match += 6; if (match > value) return 'm';
	match += 3; if (match > value) return 'n';
	match += 176; if (match > value) return 'o';
	match += 4; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 7; if (match > value) return 'r';
	match += 47; if (match > value) return 's';
	match += 16; if (match > value) return 't';
	match += 1; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 2; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 0; if (match > value) return 'y';
	match += 0; if (match > value) return 'z';
	match += 1064; if (match > value) return 0;
	return 0;
}

char
followz(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 79;

	match += 33; if (match > value) return 'a';
	match += 0; if (match > value) return 'b';
	match += 0; if (match > value) return 'c';
	match += 1; if (match > value) return 'd';
	match += 24; if (match > value) return 'e';
	match += 0; if (match > value) return 'f';
	match += 0; if (match > value) return 'g';
	match += 0; if (match > value) return 'h';
	match += 6; if (match > value) return 'i';
	match += 0; if (match > value) return 'j';
	match += 0; if (match > value) return 'k';
	match += 2; if (match > value) return 'l';
	match += 0; if (match > value) return 'm';
	match += 0; if (match > value) return 'n';
	match += 6; if (match > value) return 'o';
	match += 0; if (match > value) return 'p';
	match += 0; if (match > value) return 'q';
	match += 0; if (match > value) return 'r';
	match += 0; if (match > value) return 's';
	match += 0; if (match > value) return 't';
	match += 0; if (match > value) return 'u';
	match += 0; if (match > value) return 'v';
	match += 0; if (match > value) return 'w';
	match += 0; if (match > value) return 'x';
	match += 1; if (match > value) return 'y';
	match += 2; if (match > value) return 'z';
	match += 4; if (match > value) return 0;
	return 0;
}

/* will not return another blank */
char
followblank(void)
{
	unsigned int match = 0;
	unsigned int value = random();
	value %= 18097;

	match += 2038; if (match > value) return 'a';
	match += 853; if (match > value) return 'b';
	match += 751; if (match > value) return 'c';
	match += 543; if (match > value) return 'd';
	match += 409; if (match > value) return 'e';
	match += 769; if (match > value) return 'f';
	match += 330; if (match > value) return 'g';
	match += 1163; if (match > value) return 'h';
	match += 1301; if (match > value) return 'i';
	match += 66; if (match > value) return 'j';
	match += 87; if (match > value) return 'k';
	match += 466; if (match > value) return 'l';
	match += 780; if (match > value) return 'm';
	match += 451; if (match > value) return 'n';
	match += 1247; if (match > value) return 'o';
	match += 525; if (match > value) return 'p';
	match += 43; if (match > value) return 'q';
	match += 411; if (match > value) return 'r';
	match += 1352; if (match > value) return 's';
	match += 2802; if (match > value) return 't';
	match += 177; if (match > value) return 'u';
	match += 152; if (match > value) return 'v';
	match += 1163; if (match > value) return 'w';
	match += 2; if (match > value) return 'x';
	match += 220; if (match > value) return 'y';
	match += 6; if (match > value) return 'z';
	return 0;
}

char
getnext(const char current)
{
	switch (current) {
	case 'a': return followa();
	case 'b': return followb();
	case 'c': return followc();
	case 'd': return followd();
	case 'e': return followe();
	case 'f': return followf();
	case 'g': return followg();
	case 'h': return followh();
	case 'i': return followi();
	case 'j': return followj();
	case 'k': return followk();
	case 'l': return followl();
	case 'm': return followm();
	case 'n': return follown();
	case 'o': return followo();
	case 'p': return followp();
	case 'q': return followq();
	case 'r': return followr();
	case 's': return follows();
	case 't': return followt();
	case 'u': return followu();
	case 'v': return followv();
	case 'w': return followw();
	case 'x': return followx();
	case 'y': return followy();
	case 'z': return followz();
	default: return followblank();
	}
}

void
usage(char *string)
{
	fprintf(stderr, "%s %s %s\n  %s %d\n  %s %d\n  %s %d\n",
		"Usage:",
		string,
		"[count [minimum [maximum]]]",
		"count defaults to",
		COUNT,
		"minimum defaults to",
		MIN_LEN,
		"maximum defaults to",
		MAX_LEN
	);
}

int
main(int argc, char **argv)
{
	int i;
	int count = COUNT;
	int minlen = MIN_LEN;
	int maxlen = MAX_LEN;
	int temp, next;

	if (1 < argc)
		count = atoi(argv[1]);
	if (2 < argc)
		minlen = atoi(argv[2]);
	if (3 < argc)
		maxlen = atoi(argv[3]);

	if (4 < argc || 0 >= count || 0 >= minlen || 0 >= maxlen) {
		usage(argv[0]);
		return -1;
	}

	if (minlen > maxlen) {
		temp = minlen;
		minlen = maxlen;
		maxlen = temp;
	}

	if (ABSOLUTE_MAX < maxlen)
		maxlen = ABSOLUTE_MAX;

	char word[ABSOLUTE_MAX+1];

#ifdef __GNU_LIBRARY__
	char state[__SIZEOF_INT__];
	int ret = getentropy(state, __SIZEOF_INT__);
	if (0 > ret)
		fprintf(stderr, "%s\n", "Error reading random values.");
	unsigned int seed = 0;
	for (i = 0; i < __SIZEOF_INT__; ++i)
		seed |= state[i] << (i * 8);
	srandom(seed);

#else 
	srandomdev();

#ifndef __MACH__
#warning "Tested only on GNU/Linux and Darwin. Using srandomdev() to seed"
	" pseudo-random number generator."
#endif /* __MACH__ */
#endif /* __GNU_LIBRARY__ */

	while (count-- > 0) {
		do {
			next = getnext(0);
		} while (0 == next);
		for (i = 0; i < maxlen; ++i) {
			word[i] = next;
			next = getnext(word[i]);

			/* check word length */
			if (0 == next && i >= minlen)
				break;

			/* handle word endings/hyphenation */
			while (0 == next)
				next = getnext(word[i]);

			/* prevent triplicates */
			if (
				i > 2 &&
				word[i-2] == word[i-1] &&
				word[i-1] == word[i]
			) {
				--i;
			}
		}
		word[i] = 0;
		printf("%s%c", word, 0 < count ? ' ' : '\n');
	}
}
