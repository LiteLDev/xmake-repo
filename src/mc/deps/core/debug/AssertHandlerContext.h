#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AssertHandlerContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> description;
    ::ll::TypedStorage<8, 24, std::string> unformattedMessage;
    ::ll::TypedStorage<8, 24, std::string> arg;
    ::ll::TypedStorage<4, 4, int>          line;
    ::ll::TypedStorage<8, 24, std::string> file;
    ::ll::TypedStorage<8, 24, std::string> function;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk35b5cd;
    ::ll::UntypedStorage<8, 32> mUnk7ebee2;
    ::ll::UntypedStorage<8, 32> mUnkc94f1a;
    ::ll::UntypedStorage<4, 4>  mUnke17434;
    ::ll::UntypedStorage<8, 32> mUnk5527ba;
    ::ll::UntypedStorage<8, 32> mUnk5a60ec;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AssertHandlerContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    AssertHandlerContext& operator=(AssertHandlerContext const&);
    AssertHandlerContext(AssertHandlerContext const&);
    AssertHandlerContext();
#endif // @header-generator platform
};
