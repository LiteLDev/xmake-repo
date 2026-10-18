#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct XAsyncBlock;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Social {

class XAsyncBlockWrapper {
public:
    // XAsyncBlockWrapper inner types declare
    // clang-format off
    struct Context;
    // clang-format on

    // XAsyncBlockWrapper inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> callback;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<XAsyncBlock>>                         mAsyncBlock;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::XAsyncBlockWrapper::Context>> mContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit XAsyncBlockWrapper(std::function<void(XAsyncBlock*)>);

    MCNAPI void release();

    MCNAPI ~XAsyncBlockWrapper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<void(XAsyncBlock*)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct Context {};
#endif // @header-generator platform
};

} // namespace Social
