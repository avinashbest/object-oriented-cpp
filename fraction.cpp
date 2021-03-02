class fraction
{
private:
	int numerator;
	int denominator;

public:
	//Parameterized Constructor
	fraction(int numerator, int denominator)
	{
		this->numerator = numerator;
		this->denominator = denominator;
	}
	//Display function
	void print()
	{
		std::cout << "Fraction = " << numerator << " / " << denominator << std::endl;
	}
	//Simplify Fraction
	void simplify()
	{
		int gcd = 1;
		int j = std::min(this->numerator, this->denominator);
		for (int i = 1; i <= j; i++)
		{
			if (this->numerator % i == 0 && this->denominator % i == 0)
			{
				gcd = i;
			}
		}
		this->numerator = this->numerator / gcd;
		this->denominator = this->denominator / gcd;
	}
	//Addition function
	void add(fraction const &f)
	{
		//L.C.M
		int LCM = this->denominator * f.denominator;
		//Calculating Numerator of new fraction
		int x = LCM / this->denominator;
		int y = LCM / f.denominator;

		int num = (x * this->numerator) + (y * f.numerator);

		this->numerator = num;
		this->denominator = LCM;

		//For simplifying fraction
		this->simplify();
	}

	//Multiply function
	void multiply(fraction const &f)
	{
		this->numerator = this->numerator * f.numerator;
		this->denominator = this->denominator * f.denominator;

		simplify();
	}
};
