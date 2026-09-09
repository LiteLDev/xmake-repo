#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MolangEvalParams;
// clang-format on

struct MolangEvalStackState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mContinueIndexStackSize;
    ::ll::TypedStorage<8, 8, ulong> mBreakIndexStackSize;
    ::ll::TypedStorage<8, 8, ulong> mDataStackSize;
    ::ll::TypedStorage<8, 8, ulong> mMissingVariableOrActorIndexStackSize;
    ::ll::TypedStorage<8, 8, ulong> mPublicAccessModeStackSize;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangEvalStackState();
};
