#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/debug/AssertHandlerContext.h"
#else // @header-generator platform
#endif // @header-generator platform

class DebugAssertException : public ::std::exception {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 128, ::AssertHandlerContext> mContext;
    ::ll::TypedStorage<8, 24, std::string>             mWhat;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 168> mUnkc1f125;
    ::ll::UntypedStorage<8, 32>  mUnk68885d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DebugAssertException& operator=(DebugAssertException const&);
    DebugAssertException(DebugAssertException const&);
#endif // @header-generator platform
    DebugAssertException();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual char const* what() const noexcept;
#else // @header-generator platform
    virtual char const* what() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
