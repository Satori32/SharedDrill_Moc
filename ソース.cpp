#include <stdio.h>

#include "Vector.h"

/** /
struct Type {
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
};

struct ConstTypeAndValue {
	Type T;
	const T.T Value;
};
/**/
struct ConstType {
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
	const T Value;
};

template<class T,T N>
ConstType ConstructConstType<T, N>() {
	ConstType C{ T,N };
	//C.T = T;

	return C;
}
template<class T,T N>
ConstType ConstructConstType<T, N>(ConstType& C) {
	ConstType C{ T,&C.Value };

	return C;
}

struct SharedDrill {
	static ConstType Master;
	Vector<ConstType> Childs;
};

template<class T,T N,T* P>
SharedDrill ConstructSharedDrill() {
	SharedDrill S = { ConstructConstType<T,N>(); };
	//S.Child = ConstructConstType<T*, P>(S.Master);
	S.Childs = ConstructVector<ConstType>(16);
	return S;
}

ConstType MakeChild(SharedDrill& In) {
	ConstType C = ConstructConstType<In.Master.T*, &In.Master>();
	Push(In.Childs, C);
	return C;
}