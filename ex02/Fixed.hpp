#include <iostream>

class Fixed
{
	private:
		int	_fix;
		const static int _dec;

	public:
		Fixed();
		Fixed(const Fixed& src);
		Fixed(const float nb);
		Fixed(const int nb);
		~Fixed();

		Fixed& operator=(const Fixed& rhs);

		bool operator==(const Fixed& rs);
		bool operator>(const Fixed& rs);
		bool operator<(const Fixed& rs);
		bool operator<=(const Fixed& rs);
		bool operator>=(const Fixed& rs);
		bool operator!=(const Fixed& rs);







		int getRawBits(void);
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream&	operator<<(std::ostream& out, Fixed const& rhs);