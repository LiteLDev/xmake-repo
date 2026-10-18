#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

class ContextIdFreeList {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                              mLowestId;
    ::ll::TypedStorage<1, 1, uchar>                              mHighestId;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ContextId>> mFreeContextIds;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnka4bc55;
    ::ll::UntypedStorage<1, 1>  mUnk2fc079;
    ::ll::UntypedStorage<8, 24> mUnk386250;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ContextIdFreeList& operator=(ContextIdFreeList const&);
    ContextIdFreeList(ContextIdFreeList const&);
#endif // @header-generator platform
    ContextIdFreeList();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Scripting
