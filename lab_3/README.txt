Wnioski

1. Wcześniejsza inicjalizacja (Listy inicjalizacyjne):
   Zrozumiałem, dlaczego przypisywanie wartości zmiennym wewnątrz 
   ciała konstruktora (w klamrach {}) jest nieoptymalne. Nauczyłem się 
   używać list inicjalizacyjnych (np. `Point::Point(int x) : x(x), y(0) {}`), 
   co pozwala na inicjalizację obiektów w momencie ich tworzenia, 
   zwiększając wydajność i czystość kodu.

2. Rygorystyczne czytanie diagramów UML:
   Nauczyłem się mapować oznaczenia z UML na kod w C++:
   - Znak minus (-) oznacza ściśle `private`.
   - Znak plus (+) to `public`.
   - Nazwa klasy w nawiasach kątowych <<Shape>> lub zapisana kursywą 
     oznacza klasę abstrakcyjną (z metodami czysto wirtualnymi `= 0`).

3. Polimorfizm i słowo kluczowe `override`:
   Zobaczyłem w praktyce potęgę polimorfizmu. Tworząc wektor wskaźników 
   na klasę bazową (`vector<Shape*>`), mogłem wrzucić do niego różne 
   figury (Kwadrat, Trójkąty). Pętla przechodząca przez wektor sama 
   wiedziała, którą wersję metody `calcArea()` wywołać, dzięki 
   mechanizmowi funkcji wirtualnych i `override`.

4. Blokowanie dziedziczenia (`final`):
   Opanowałem użycie słowa kluczowego `final` przy deklaracji klasy 
   (np. `class Square final : public Rectangle`). To wyraźny sygnał 
   dla kompilatora i innych programistów, że po tej klasie nie można 
   już tworzyć kolejnych klas pochodnych.

