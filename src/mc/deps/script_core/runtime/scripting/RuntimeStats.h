#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct RuntimeStats {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long> mMallocLimit;
    ::ll::TypedStorage<8, 8, long> mMallocSoftLimit;
    ::ll::TypedStorage<8, 8, long> mMemoryUsedCount;
    ::ll::TypedStorage<8, 8, long> mMemoryUsedSize;
    ::ll::TypedStorage<8, 8, long> mMallocCount;
    ::ll::TypedStorage<8, 8, long> mMallocSize;
    ::ll::TypedStorage<8, 8, long> mAtomCount;
    ::ll::TypedStorage<8, 8, long> mAtomSize;
    ::ll::TypedStorage<8, 8, long> mStringCount;
    ::ll::TypedStorage<8, 8, long> mStringSize;
    ::ll::TypedStorage<8, 8, long> mObjectCount;
    ::ll::TypedStorage<8, 8, long> mObjectSize;
    ::ll::TypedStorage<8, 8, long> mPropertyCount;
    ::ll::TypedStorage<8, 8, long> mPropertySize;
    ::ll::TypedStorage<8, 8, long> mShapeCount;
    ::ll::TypedStorage<8, 8, long> mShapeSize;
    ::ll::TypedStorage<8, 8, long> mFuncCount;
    ::ll::TypedStorage<8, 8, long> mFuncSize;
    ::ll::TypedStorage<8, 8, long> mFuncCodeSize;
    ::ll::TypedStorage<8, 8, long> mFuncPc2lineCount;
    ::ll::TypedStorage<8, 8, long> mFuncPc2lineSize;
    ::ll::TypedStorage<8, 8, long> mNativeFuncCount;
    ::ll::TypedStorage<8, 8, long> mArrayCount;
    ::ll::TypedStorage<8, 8, long> mFastArrayCount;
    ::ll::TypedStorage<8, 8, long> mFastArrayElements;
    ::ll::TypedStorage<8, 8, long> mBinaryObjectCount;
    ::ll::TypedStorage<8, 8, long> mBinaryObjectSize;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk18ea5f;
    ::ll::UntypedStorage<8, 8> mUnkad497f;
    ::ll::UntypedStorage<8, 8> mUnkc3fa10;
    ::ll::UntypedStorage<8, 8> mUnk3a9a4f;
    ::ll::UntypedStorage<8, 8> mUnkf1aff5;
    ::ll::UntypedStorage<8, 8> mUnkb5d2be;
    ::ll::UntypedStorage<8, 8> mUnk6041c6;
    ::ll::UntypedStorage<8, 8> mUnk71affa;
    ::ll::UntypedStorage<8, 8> mUnk1535df;
    ::ll::UntypedStorage<8, 8> mUnk213684;
    ::ll::UntypedStorage<8, 8> mUnkaff39d;
    ::ll::UntypedStorage<8, 8> mUnk49c2b4;
    ::ll::UntypedStorage<8, 8> mUnkc87a29;
    ::ll::UntypedStorage<8, 8> mUnk20ffcd;
    ::ll::UntypedStorage<8, 8> mUnk7c1a6b;
    ::ll::UntypedStorage<8, 8> mUnkfabf25;
    ::ll::UntypedStorage<8, 8> mUnkb90a16;
    ::ll::UntypedStorage<8, 8> mUnkdc9b40;
    ::ll::UntypedStorage<8, 8> mUnk25a806;
    ::ll::UntypedStorage<8, 8> mUnk73cf84;
    ::ll::UntypedStorage<8, 8> mUnk36fb20;
    ::ll::UntypedStorage<8, 8> mUnk718fa4;
    ::ll::UntypedStorage<8, 8> mUnk75f18c;
    ::ll::UntypedStorage<8, 8> mUnk3df75a;
    ::ll::UntypedStorage<8, 8> mUnkcab120;
    ::ll::UntypedStorage<8, 8> mUnk83ed76;
    ::ll::UntypedStorage<8, 8> mUnk498ced;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RuntimeStats& operator=(RuntimeStats const&);
    RuntimeStats(RuntimeStats const&);
    RuntimeStats();
#endif // @header-generator platform
};

} // namespace Scripting
