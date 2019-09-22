#include "FE-CLib\include\gbafe.h"

typedef struct {
	u8 itemId;
	s8 mightBonus;
	s8 hitBonus;
	s8 critBonus;
}ItemForgeBonuses;

// Extern Data

extern const struct ItemData gItemData[];
extern const ItemForgeBonuses gForgeBonusLookupTable[];