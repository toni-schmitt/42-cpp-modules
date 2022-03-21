#if !defined(___CONVERTER_HPP___)
#define ___CONVERTER_HPP___

#include <string>

enum literal_type
{
	char_type,
	int_type,
	float_type,
	double_type,
	no_type
};

class Converter
{
private:
	/* Private Members */
	std::string _arg;
	literal_type _type;
	char _charData;
	int _intData;
	float _floatData;
	double _doubleData;

	/* Private Methods */
	void determineType();
	void convertToType();
	bool isPseudoLiteral() const;

public:
	/* Constructors */
	Converter();
	Converter(const Converter &copy);
	Converter(std::string arg);
	/* Deconstructors */
	~Converter();

	/* Overloaded Operators */
	Converter &operator=(const Converter &sec);

	/* Public Methods */
	void convert();
	void printTypes() const;

	/* Getter */

	/* Setter */
};

#endif
