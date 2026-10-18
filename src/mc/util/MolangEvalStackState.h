#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct MolangEvalParams;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct MolangEvalStackState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mContinueIndexStackSize;
    ::ll::TypedStorage<8, 8, ulong> mBreakIndexStackSize;
    ::ll::TypedStorage<8, 8, ulong> mDataStackSize;
    ::ll::TypedStorage<8, 8, ulong> mMissingVariableOrActorIndexStackSize;
    ::ll::TypedStorage<8, 8, ulong> mPublicAccessModeStackSize;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mContinueIndexStackSize;
    ::ll::TypedStorage<8, 8, uint64> mBreakIndexStackSize;
    ::ll::TypedStorage<8, 8, uint64> mDataStackSize;
    ::ll::TypedStorage<8, 8, uint64> mMissingVariableOrActorIndexStackSize;
    ::ll::TypedStorage<8, 8, uint64> mPublicAccessModeStackSize;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MolangEvalStackState();
#else // @header-generator platform
#endif // @header-generator platform
};
