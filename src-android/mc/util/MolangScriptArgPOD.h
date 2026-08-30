#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangLoopBreak.h"
#include "mc/util/MolangLoopContinue.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStackBase;
// clang-format on

union MolangScriptArgPOD {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>      mFloat;
    ::ll::UntypedStorage<8, 8>      mHashType64;
    ::ll::UntypedStorage<1, 8>      mLoopBreak;
    ::ll::UntypedStorage<1, 8>      mLoopContinue;
    ::ll::UntypedStorage<8, 8>      mActorPtr;
    ::ll::UntypedStorage<8, 8>      mActorId;
    ::ll::UntypedStorage<8, 8>      mItemStackBasePtr;
    ::ll::TypedStorage<8, 8, ulong> _mData;
    // NOLINTEND
};