

class Fixed
{
	private:
		int	_fix;
		const static int _dec;

	public:
		Fixed();
		Fixed(const Fixed& src);
		~Fixed();

		Fixed& operator=(const Fixed& rhs);

		int getRawBits(void);
		void setRawBits(int const raw);


};