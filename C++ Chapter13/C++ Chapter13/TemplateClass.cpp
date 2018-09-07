#include "TemplateClass.h"

template <class Ptr>
Point<Ptr>::Point(Ptr x, Ptr y) : xpos(x), ypos(y) {}

template <class Ptr>
void Point<Ptr>::ShowPosition() const {

	cout << "[" << xpos << ", " << ypos << "]" << endl;

}