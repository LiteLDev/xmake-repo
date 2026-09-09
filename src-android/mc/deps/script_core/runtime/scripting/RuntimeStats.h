#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct RuntimeStats {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};

} // namespace Scripting
