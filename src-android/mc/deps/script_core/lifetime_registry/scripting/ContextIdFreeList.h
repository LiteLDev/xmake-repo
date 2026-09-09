#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

namespace Scripting {

class ContextIdFreeList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                              mLowestId;
    ::ll::TypedStorage<1, 1, uchar>                              mHighestId;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ContextId>> mFreeContextIds;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextIdFreeList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContextIdFreeList(uchar, uchar);

    MCNAPI void returnId(::Scripting::ContextId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uchar, uchar);
    // NOLINTEND
};

} // namespace Scripting
