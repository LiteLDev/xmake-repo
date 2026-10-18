#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/SharedAsync.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class AsynchronousIPResolver {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                mUrl;
    ::ll::UntypedStorage<8, 16>                           mIp;
    ::ll::TypedStorage<8, 16, std::shared_ptr<TaskGroup>> mTaskGroup;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnka91997;
    ::ll::UntypedStorage<8, 16> mUnk227489;
    ::ll::UntypedStorage<8, 16> mUnkbeda29;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AsynchronousIPResolver& operator=(AsynchronousIPResolver const&);
    AsynchronousIPResolver(AsynchronousIPResolver const&);
#endif // @header-generator platform
    AsynchronousIPResolver();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AsynchronousIPResolver(std::string);
#else // @header-generator platform
    MCNAPI explicit AsynchronousIPResolver(::std::string url);
#endif // @header-generator platform

    MCNAPI void _resolveIfNeeded();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::SharedAsync<std::string> getAsyncIp() const;

    MCNAPI std::string getIp() const;

    MCNAPI bool isDone() const;

    MCNAPI ~AsynchronousIPResolver();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::AsynchronousIPResolver& operator=(::AsynchronousIPResolver&&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string url);
#endif // @header-generator platform
    // NOLINTEND
};
