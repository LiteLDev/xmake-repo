#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/AssignedThreadDefaultId.h"

namespace Bedrock::Threading {

class AssignedThread {
public:
    // AssignedThread inner types declare
    // clang-format off
    struct ThreadIdInitializer;
    // clang-format on

    // AssignedThread inner types define
    struct ThreadIdInitializer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Bedrock::Threading::AssignedThread*>         mParent;
        ::ll::TypedStorage<4, 4, ::Bedrock::Threading::AssignedThreadDefaultId> mDefaultId;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ThreadIdInitializer();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8>                                           mThreadId;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::std::thread::id>                          mThreadId;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 64, ::Bedrock::Threading::AssignedThread* [8]> mChildren;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>                         mChildCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>                      mChildCount;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void assign(std::__thread_id const&);
#else // @header-generator platform
    MCAPI void assign(::std::thread::id const& thread);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::__thread_id getId() const;

    MCNAPI bool isOnThread() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool isOnThread() const;
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Threading
