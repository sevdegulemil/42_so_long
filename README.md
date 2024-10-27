# so_long

**so_long**, C dilinde yazılmış bir 2D labirent oyunudur. Kullanıcının bir karakteri kontrol ederek bir labirentte gezinmesini ve belirli hedeflere ulaşmasını amaçlar. Oyunda temel grafik bileşenleri ve kullanıcı etkileşimi bulunuyor.

## İçerik

- [Özellikler](#özellikler)
- [Kurulum](#kurulum)
- [Kullanım](#kullanım)
- [Oyun Mekanikleri](#oyun-mekanikleri)

## Özellikler

- Basit bir 2D grafik arayüzü.
- WASD kontrolleri ile labirentte gezinme.
- Oyuncunun hedefe ulaşabilmesi için toplanması gereken nesneler.
- Farklı map kullanımları.
- miniLibX (MLX) kütüphanesi kullanıldı
- "flood fill" algoritması 

## Kurulum

Bu projeyi kendi bilgisayarınızda çalıştırmak için aşağıdaki adımları izleyin:

1. Projeyi klonlayın:
   ```bash
   git clone https://github.com/kullanıcı_adı/so_long.git
2. Derleyin
   ```bash
   make

## Kullanım

Oyun dosyalarını çalıştırmak için terminalde aşağıdaki komutu kullanın:
  ```bash
  ./so_long [path_to_map_file]
```

## Oyun Mekanikleri

Karakter Kontrolleri:

W: Yukarı

A: Sola

S: Aşağı

D: Sağa

Hedef: Oyuncu toplanması gereken tüm nesneleri toplayarak çıkışa ulaşmalı.
