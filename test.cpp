// #include <iostream>
// #include <fstream>

// // class myclas
// // {
// // 	public:
// // 		int add(int a, int b)
// // 		{
// // 			return(a * b + 1337);
// // 		}
// // 		int (myclas::*p)(int,int);
// // 		myclas():p(NULL){}
// // };

// #include "./cpp01/ex05/Harl.hpp"

// void Harl::debug() {
//     std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
// }

// void Harl::info() {
//     std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
// }

// void Harl::warning() {
//     std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
// }

// void Harl::error() {
//     std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
// }

// void Harl::complain(std::string level) {
//     // Array of function pointers, mapped to the levels in the same order
//     void (Harl::*funcPtrs[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
//     std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

//     for (int i = 0; i < 4; i++) {
//         if (levels[i] == level) {
//             (this->*funcPtrs[i])();
//             return;
//         }
//     }
//     std::cout << "Unknown level: " << level << std::endl;
// }


// int main() {
//     Harl harl;

//     harl.complain("DEBUG");
//     harl.complain("INFO");
//     harl.complain("WARNING");
//     harl.complain("ERROR");
//     harl.complain("INVALID");  // To test an unknown level

//     return 0;
// }

// #include <iomanip>      // std::setw

// int main () {
//   std::cout << std::setw(10);
//   std::cout << 10000055577 << std::endl;
//   return 0;
// }


// int main()
// {
// 	std::string str = "HI THIS IS BRAIN";
// 	std::string *stringPTR = &str;
// 	std::string &stringREF = str;
// 	stringREF = "amine";

// 	std::cout<< "The memory address of the string variable: " << &str << std::endl;
// 	std::cout<< "The memory address held by stringPTR: " << stringPTR << std::endl;
// 	std::cout<< "The memory address held by stringREF: " << &stringREF << std::endl;

// 	std::cout<< "The value of the string variable: " << str << std::endl;
// 	std::cout<< "The value pointed to by stringPTR: " << *stringPTR << std::endl;
// 	std::cout<< "The value pointed to by stringREF: " << stringREF << std::endl;

// 	return (0);
// }


// #include <iostream>     // std::cout, std::endl
// #include <stdio.h>

// int main()
// {
//     // int a = 0b1000001010111000000000000000000;  // The integer whose bit pattern we want to interpret as a float
//     int a = 1090519040;  // The integer whose bit pattern we want to interpret as a float
//     // int a = 0b1000001010101011110101110000101;  // The integer whose bit pattern we want to interpret as a float
//     float result = *(float *)&a;  // Reinterpret the bits of a as a float

//     printf("%f\n", result);  // This will print 13.370000
//     return 0;
// }

//01000001001011110101110000101000


// struct p_t
// {
//     int a;
//     char *p;
//     private:
//         int b;
// };

// class p
// {
//     int a;
//     char *p;
//     public:
//         int b;
// };


// #include <iostream>

// class Fixed {
// private:
//     int Value;
//     static const int fractionalbit = 8;

// public:
//     // Default Constructor
//     Fixed() : Value(0) {
//         std::cout << "Default constructor called" << std::endl;
//     }

//     // Copy Constructor
//     Fixed(const Fixed& var) {
//         std::cout << "Copy constructor called" << std::endl;
//         *this = var;
//     }

//     // Copy Assignment Operator
//     Fixed& operator=(const Fixed& var) {
//         std::cout << "Copy assignment operator called" << std::endl;
//         if (this != &var) {
//             this->Value = var.Value;
//         }
//         return *this;
//     }

//     // Destructor
//     ~Fixed() {
//         std::cout << "Destructor called" << std::endl;
//     }

//     // Getter for raw value
//     int getRawBits(void) const {
//         std::cout << "getRawBits member function called" << std::endl;
//         return Value;
//     }

//     // Setter for raw value
//     void setRawBits(int const raw) {
//         Value = raw;
//     }
// };

// int main(void) {
//     Fixed a;            // Default constructor for object `a`
//     Fixed b(a);         // Copy constructor for object `b`
//     Fixed c;            // Default constructor for object `c`
//     c = b;              // Copy assignment operator for object `c`

//     std::cout << a.getRawBits() << std::endl;  // Get raw bits for `a`
//     std::cout << b.getRawBits() << std::endl;  // Get raw bits for `b`
//     std::cout << c.getRawBits() << std::endl;  // Get raw bits for `c`

//     return 0;
// }

// #include <iostream>
// #include <ostream>

// class test
// {
// 	int a;
// 	public:
// 	test(void);
// 	~test();
// };

// test::test()
// {
// 	std::cout << "constractor called" << std::endl;
// }
// test::~test()
// {
// 	std::cout << "deconstractor called" << std::endl;
// }

// int main()
// {
// 	test *a = new test();
// 	delete a;


// }


// int main()
// {
// 	char *a = "amine";
// 	char *b = "amine";
// }

#include <cstdio>
#include <cstring>
#include <libc.h>
#include <sys/fcntl.h>

char	*ft_strchr(const char *s, int c)
{
	char	d;
	char	*ss;
	size_t	i;

	ss = (char *) s;
	d = (char) c;
	i = 0;
	while (ss[i])
	{
		if (ss[i] != d)
			i++;
		else
			return (&ss[i]);
	}
	if (d == '\0')
	{
		return (&ss[i]);
	}
	return (NULL);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = strlen(src);
	i = 0;
	if (dstsize == 0)
	{
		return (srclen);
	}
	else
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (srclen);
	}
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	tlen;
	char	*s;

	if (s1 == NULL)
		return (strdup(s2));
	if (s2 == NULL)
		return (strdup(s1));
	tlen = strlen(s1) + strlen(s2) +1;
	s = (char *) malloc (tlen);
	if (s == NULL)
	{
		free(s1);
		return (NULL);
	}
	strlcpy(s, s1, tlen);
	strlcpy(s + strlen(s1), s2, tlen);
	return (free(s1), s1 = NULL, s);
}

char	*ft_strdup(char *s1)
{
	size_t	i;
	size_t	len;
	char	*ptr;

	i = 0;
	len = strlen(s1) + 1;
	ptr = (char *) malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strndup(char *s1, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *) malloc((n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < n && s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}


int main()
{
	char *buf;
	char *tmp = (char *) malloc(100);
	int fd = open("test.txt", O_RDWR, 0777);

	while(read(fd, tmp, 100))
	{
		if (tmp && !strchr(tmp, '\n'))
		{
			break ;
		}
		buf = ft_strjoin(buf, tmp);
	}
	printf("%s\n", buf);
}
