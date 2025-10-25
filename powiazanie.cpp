#pragma once

/**
 * @brief Struktura reprezentująca powiązanie w liście dwukierunkowej
 */

struct Powiazanie {
	int dane;
	Powiazanie* nastepny;
	Powiazanie* poprzedni;

	Powiazanie(int wartosc) : dane(wartosc), nastepny(nullptr), poprzedni(nullptr) {}
};