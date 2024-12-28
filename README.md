# ft_printf
My école 42 ft_printf project

# ft_printf

`ft_printf`, standart `printf` fonksiyonunun belirli özelliklerini yeniden yazmayı amaçlayan bir projedir. Bu proje, değişken argümanlar ile çalışmayı öğrenmenize, formatlı çıktı üretme konusunda bilgi sahibi olmanıza ve C dilindeki düşük seviyeli işlemleri anlamanıza yardımcı olur.

## İçindekiler

1. [Projenin Amacı](#projenin-amacı)
2. [Desteklenen Formatlar](#desteklenen-formatlar)
3. [Kurulum](#kurulum)
4. [Kullanım](#kullanım)
5. [Fonksiyonların Açıklamaları ve Örnek Kullanımları](#fonksiyonlarin-açıklamaları-ve-örnek-kullanımları)
6. [Katkıda Bulunma](#katkıda-bulunma)
7. [Lisans](#lisans)

---

## Projenin Amacı

`ft_printf` projesi şunları öğrenmeyi hedefler:

- Formatlı çıktı üretme işlemleri.
- Değişken argüman listeleri (`va_list`) ile çalışma.
- Bellek yönetimi ve yazma işlemleri.
- Taşınabilir bir kütüphane oluşturma becerisi kazanma.

---

## Desteklenen Formatlar

`ft_printf` aşağıdaki formatları destekler:

- **Karakter**: `%c`
- **String**: `%s`
- **Pointer (adres)**: `%p`
- **Signed Integer**: `%d`, `%i`
- **Unsigned Integer**: `%u`
- **Hexadecimal (küçük harf)**: `%x`
- **Hexadecimal (büyük harf)**: `%X`
- **Yüzde İşareti**: `%%`

---

## Kurulum

1. Bu projeyi bilgisayarınıza klonlayın:
   ```bash
   git clone https://github.com/kullanici_adi/ft_printf.git
   cd ft_printf
   ```

2. Kütüphaneyi oluşturmak için `make` komutunu çalıştırın:
   ```bash
   make
   ```
   Bu işlem sonucunda bir `libftprintf.a` dosyası oluşturulacaktır.

3. Projenizde bu kütüphaneyi kullanmak için, `libftprintf.a` dosyasını ve başlık dosyasını (`ft_printf.h`) projenize dahil edin.

---

## Kullanım

`ft_printf` fonksiyonunu bir projede kullanmak için aşağıdaki gibi bir `gcc` komutu kullanabilirsiniz:

```bash
gcc -Wall -Wextra -Werror -L. -lftprintf your_program.c -o your_program
```

Bu komut:
- `-L.`: Kütüphane dosyasının bulunduğu dizini belirtir.
- `-lftprintf`: `libftprintf.a` kütüphanesini kullanır.

---

## Fonksiyonların Açıklamaları ve Örnek Kullanımları

### 1. `ft_printf`
**Tanım:** Belirtilen format dizisine göre çıktıyı formatlar ve ekrana yazar.

**Prototip:**
```c
int ft_printf(const char *format, ...);
```

**Örnek Kullanım:**
```c
#include "ft_printf.h"

int main() {
    ft_printf("Merhaba, %s!\n", "Dünya");
    ft_printf("Sayı: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    return 0;
}
```

### 2. Değişken Argüman Yönetimi
**Açıklama:**
`ft_printf`, `stdarg.h` başlık dosyasındaki aşağıdaki fonksiyonları kullanır:

- `va_start`: Argüman listesini başlatır.
- `va_arg`: Sıradaki argümanı alır.
- `va_copy`: Argüman listesini kopyalar.
- `va_end`: Argüman listesini sonlandırır.

**Örnek:**
```c
#include <stdarg.h>
#include <stdio.h>

void print_args(int count, ...) {
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        printf("Argüman %d: %d\n", i + 1, num);
    }

    va_end(args);
}

int main() {
    print_args(3, 10, 20, 30);
    return 0;
}
```

---

## Katkıda Bulunma

Bu projeyi geliştirmek için katkıda bulunmak isterseniz, lütfen şu adımları takip edin:

1. Projeyi forklayın.
2. Yeni bir dal oluşturun:
   ```bash
   git checkout -b yeni-ozellik
   ```
3. Değişikliklerinizi yapın ve commitleyin:
   ```bash
   git commit -m "Yeni özellik eklendi"
   ```
4. Değişikliklerinizi GitHub'a gönderin:
   ```bash
   git push origin yeni-ozellik
   ```
5. Bir pull request oluşturun.

---

## Lisans

Bu proje herhangi bir lisansla sınırlandırılmamıştır. İstediğiniz gibi kullanabilirsiniz.

---

Daha fazla bilgi için benimle iletişime geçmekten çekinmeyin! 🎉

