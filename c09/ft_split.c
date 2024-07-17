#include <stdlib.h>
//bu fonksiyonda bir char karakteri charsetimizdeki bir karakterle karşılaştırıyoruz
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
//bu fonksiyonda kelimeleri is_charset fonksiyonunun sonuçlarına göre buluyoruz
int word_count(char *str, char *charset)
{
	int	count;
	count = 0;
	while (*str) 
	{
		if (!is_charset(*str, charset) && (is_charset(*(str + 1), charset) || *(str + 1) == '\0'))
			count++;
		str++;
	}
	return (count);
}
//bu fonksiyonda bir stringin n kadar karakterini belleğe kopyalayan bir fonksiyon yazıyoruz
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
    //burada bellekteki açılmış yerdeki diziye istenilen veri aktarılıyor ve sonlandırılıyor	
	return (copiedstr);
}
//ana fonksiyonumuz burada çalışıyor!
char **ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		k;
	int		start;

	result = (char *)malloc((word_count(str, charset) + 1) * sizeof(char *));
	i = 0;
	k = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset))
		{
			start = i;
			while (str[i] && !is_charset(str[i], charset))
				i++;
			result[k] = ft_strndup(str + start, i - start);
			if (!result[k])
				return (NULL);
			k++;
		}
		else
			i++;
	}
	result[k] = NULL;
	return (result);
}
