#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct RuntimeStats; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleDebugUtilities {

struct ScriptRuntimeStats {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long> mMemoryAllocatedLimit;
    ::ll::TypedStorage<8, 8, long> mMemoryAllocatedCount;
    ::ll::TypedStorage<8, 8, long> mMemoryAllocatedSize;
    ::ll::TypedStorage<8, 8, long> mMemoryUsedCount;
    ::ll::TypedStorage<8, 8, long> mMemoryUsedSize;
    ::ll::TypedStorage<8, 8, long> mAtomCount;
    ::ll::TypedStorage<8, 8, long> mAtomSize;
    ::ll::TypedStorage<8, 8, long> mStringCount;
    ::ll::TypedStorage<8, 8, long> mStringSize;
    ::ll::TypedStorage<8, 8, long> mObjectCount;
    ::ll::TypedStorage<8, 8, long> mObjectSize;
    ::ll::TypedStorage<8, 8, long> mPropertyCount;
    ::ll::TypedStorage<8, 8, long> mPropertySize;
    ::ll::TypedStorage<8, 8, long> mFunctionCount;
    ::ll::TypedStorage<8, 8, long> mFunctionSize;
    ::ll::TypedStorage<8, 8, long> mFunctionCodeSize;
    ::ll::TypedStorage<8, 8, long> mFunctionLineCount;
    ::ll::TypedStorage<8, 8, long> mArrayCount;
    ::ll::TypedStorage<8, 8, long> mFastArrayCount;
    ::ll::TypedStorage<8, 8, long> mFastArrayElementCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64> mMemoryAllocatedLimit;
    ::ll::TypedStorage<8, 8, int64> mMemoryAllocatedCount;
    ::ll::TypedStorage<8, 8, int64> mMemoryAllocatedSize;
    ::ll::TypedStorage<8, 8, int64> mMemoryUsedCount;
    ::ll::TypedStorage<8, 8, int64> mMemoryUsedSize;
    ::ll::TypedStorage<8, 8, int64> mAtomCount;
    ::ll::TypedStorage<8, 8, int64> mAtomSize;
    ::ll::TypedStorage<8, 8, int64> mStringCount;
    ::ll::TypedStorage<8, 8, int64> mStringSize;
    ::ll::TypedStorage<8, 8, int64> mObjectCount;
    ::ll::TypedStorage<8, 8, int64> mObjectSize;
    ::ll::TypedStorage<8, 8, int64> mPropertyCount;
    ::ll::TypedStorage<8, 8, int64> mPropertySize;
    ::ll::TypedStorage<8, 8, int64> mFunctionCount;
    ::ll::TypedStorage<8, 8, int64> mFunctionSize;
    ::ll::TypedStorage<8, 8, int64> mFunctionCodeSize;
    ::ll::TypedStorage<8, 8, int64> mFunctionLineCount;
    ::ll::TypedStorage<8, 8, int64> mArrayCount;
    ::ll::TypedStorage<8, 8, int64> mFastArrayCount;
    ::ll::TypedStorage<8, 8, int64> mFastArrayElementCount;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
