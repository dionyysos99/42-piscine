#include <stdlib.h>
//Belirtilen karakterin, karakter setinde olup olmadığını kontrol eder.
//eşit ise 1 eşit değilse 0 çıktısı veriyor
int	is_charset(char c, char *charset)
{
	while (*charset) 
	{
		if (c == *charset) 
			return (1);
		charset++;
	}
	return 0;
}
//Verilen stringdeki kelimelerin sayısını, karakter seti ile karşılaştırarak hesaplar.
int word_count(char *str, char *charset)
{
	int	count;
	count = 0;
	while (*str) 
	{    // Eğer mevcut karakter charset'te yoksa ve bir sonraki karakter charset'te veya son karakter ise
		if (!is_charset(*str, charset) && (is_charset(*(str + 1), charset) || *(str + 1) == '\0'))
			count++; // Kelime sayısını artırıyoruz
		str++;
	}
	return (count);
}
//Verilen stringin ilk n karakterini dinamik olarak belleğe kopyalar.
char *ft_strndup(char *str,unsigned int n)
{
	unsigned int	i;
	char 	*copiedstr;
	i = 0;
	while(str[i])
	{
		i++;
	}
	//yukarıda str dizisinin uzunluğunu buluyoruz
	if (n > i) 
		n = i;
    //yukarıda ki karşılaştırma eğer belirtilen size değeri str den büyükse fonksiyon işlevini kaybetmesin diye yapılıyor
	copiedstr = (char *)malloc((n + 1)*sizeof(char));
	if (!copiedstr)
		return (NULL);
    //burada n kadar char karakter için bellekte yer açıyoruz ve bunu doğruluyoruz 
	i = 0;
	while(i < n)
	{
		copiedstr[i] = str[i];
		i++;
	}
	copiedstr[i] = '\0';
    //bellekte açılan yerdeki diziye istenilen karakterleri kopyalıyoruz.	
	return (copiedstr);
}
//Verilen stringi, karakter setine göre ayırarak kelimelerden oluşan bir dizi döndürür.
char **ft_split(char *str, char *charset)
{
	char	**result; // Sonuç dizisi, kelimeleri tutmak için
	int		i; // Geçici indeks, str dizisinde gezinmek için
	int		k; // Sonuç dizisinde kelime sayısını takip etmek için
	int		start; // Kelimenin başlangıç indeksini tutmak için
	// Kelimelerin sayısını belirleyip sonuç dizisi için yeterli bellek ayırıyoruz
	result = (char *)malloc((word_count(str, charset) + 1) * sizeof(char *));
	i = 0;
	k = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset))
		{
			start = i; // Kelimenin başlangıcını kaydediyoruz
			while (str[i] && !is_charset(str[i], charset))
				i++;
			result[k] = ft_strndup(str + start, i - start); // Kelimeyi kopyalayıp sonuç dizisine ekliyoruz
			if (!result[k])
				return (NULL);
			k++; // Sonuç dizisindeki kelime sayısını artırıyoruz
		}
		else
			i++; // Eğer mevcut karakter charset'teyse, bir sonraki karaktere geçiyoruz
	}
	result[k] = NULL;
	return (result);
}
