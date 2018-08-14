#ifndef __PRINTER__
#define __PRINTER__

namespace PNT {

	enum {

		NAME_LEN = 30

	};

}

class Printer {

private :
	char string[PNT::NAME_LEN];

public :
	void SetString(const char *name);
	void PrintString(void);

};

#endif