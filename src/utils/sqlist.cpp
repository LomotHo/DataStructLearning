# include "util.h"

bool ListShow(SqList &l) {
	for (int i = 0; i < l.length; ++i) {
		printf("%d\n", l.data[i]);
	}
	return true;
}

