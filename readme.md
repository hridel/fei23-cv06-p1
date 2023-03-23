# Příklad 1
## Dynamicky alokované pole

Napište program, který dynamicky alokuje jednorozměrné pole celých **N** čísel.
Pole načtěte a následně vytiskněte.

---

_Nápověda:_

Funkce `malloc()` a `calloc()` slouží k dynamickému přidělení paměti v jazyce C.

Funkce `malloc()` alokuje blok paměti dané velikosti a vrací ukazatel na první byte této paměti. Pokud alokace selže (např. kvůli nedostatku paměti), vrátí `NULL`. Při použití `malloc()` musíme být opatrní, protože nám nezajistí, že paměť bude inicializována na nulovou hodnotu.

Funkce `calloc()` slouží k alokaci bloku paměti dané velikosti, ale navíc ji inicializuje na nulové hodnoty. Tento proces může být v některých případech pomalejší než pouhé volání `malloc()`, protože musí projít celou alokovanou oblast a inicializovat ji. Pokud alokace selže, `calloc()` vrátí `NULL`.

Obě funkce se používají pro alokaci bloků paměti, například pro vytvoření dynamických polí nebo pro uložení jiných datových struktur. Po použití musí být paměť uvolněna pomocí funkce `free()`, jinak hrozí riziko úniku paměti a paměťových chyb.