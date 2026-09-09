#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct RuntimeStats; }
// clang-format on

namespace ScriptModuleDebugUtilities {

struct ScriptRuntimeStats {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
