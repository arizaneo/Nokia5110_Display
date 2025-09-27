#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

// Bağlantı şemasına göre pinleri tanımlıyoruz.
// Adafruit_PCD8544(SCLK, DIN, DC, CS, RST)
// Adafruit_PCD8544(CLK, DIN, D/C, CE, RST)
Adafruit_PCD8544 display = Adafruit_PCD8544(7, 6, 5, 4, 3);

void setup() {
  // Seri haberleşmeyi başlat (Hata ayıklama için isteğe bağlı)
  Serial.begin(9600);

  // Ekranı başlat
  display.begin();

  // Ekran kontrastını ayarla. 40-60 arası genelde iyi sonuç verir.
  // Eğer ekran boş veya tamamen siyah görünüyorsa bu değeri değiştirin.
  display.setContrast(50);

  // Ekranı temizle
  display.clearDisplay();

  // Metin boyutunu ayarla (1 en küçük boyut)
  display.setTextSize(1);
  
  // Metin rengini ayarla (Siyah zemin üzerine beyaz veya tersi)
  display.setTextColor(BLACK);

  // İmlecin başlangıç pozisyonunu ayarla (sol üst köşe 0,0)
  display.setCursor(0, 0);
  
  // Ekrana metinleri yazdır
  display.println("Merhaba Dunya!");
  display.println(); // Bir satır boşluk bırak
  display.println("Arduino ve");
  display.println("Nokia 5110");

  // Yazılanları ekranda göstermek için bu komut şart!
  display.display();
}

void loop() {
  // setup() fonksiyonu bir kez çalıştığı için
  // loop() fonksiyonu boş kalabilir.
  // Ekranda sürekli değişen bir şey göstermek isterseniz kodunuzu buraya yazarsınız.
}
