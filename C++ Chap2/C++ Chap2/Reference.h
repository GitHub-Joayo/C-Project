#pragma once

namespace Ref {

	void SimpleFunc(void);

}

namespace RefPtr {

	void SimpleFunc(void);

}

namespace ByRef {

	void SimpleFunc(int &ref1, int &ref2);

}

namespace RefReturn {

	int RefReturnOne(int &ref);

}