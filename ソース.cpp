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

struct SATUDrill {//host
	ConstType Software;
	Vector<SATULinker> Linkers;
};

template<class T,T N>
SATUDrill ConstructSATUDrill(size_t C) {
	SATUDrill S = { {T,N}, };
	S.Linkers = ConstructVector<SATULinker>(C);//need free;
	//SATULinker L = ConstructSATULinker<SATUDrill, &S>();
	return S;
}

struct SATULinker {
	ConstType Rader;
	typedef void* Word;
	Word One;
	Word Tow;
	Word Three;
};
template<class T,T N>
SATULinker ConstructSATULinker() {
	SATULinker L = { {T,N}, };
	return L;
}

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
	Vector<ConstType> Childs;//i confuse to why i have this line.
};

template<class T,T N,T* P>
SharedDrill ConstructSharedDrill() {
	SharedDrill S = { ConstructConstType<T,N>(); };
	//S.Child = ConstructConstType<T*, P>(S.Master);
	S.Childs = ConstructVector<ConstType>(16);
	return S;
}

ConstType MakeChild_Old(SharedDrill& In) {
	ConstType C = ConstructConstType<In.Master.T*, &In.Master>();
	Push(In.Childs, C);
	return C;
}

ConstType MakeChild(const SharedDrill& In) {
	ConstType C = ConstructConstType<SharedDrill, &In>();
	Push(In.Childs, C);
	return C;
}