#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/threading/AsyncStatus.h"
#include "mc/network/AsyncJoinAllow.h"
#include "mc/network/AsyncJoinDeny.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct AsyncJoinAllow;
struct AsyncJoinDeny;
// clang-format on
#endif // @header-generator platform

class AsyncVerdictPromise {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 72> mPromise;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnke03a8b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AsyncVerdictPromise& operator=(AsyncVerdictPromise const&);
    AsyncVerdictPromise(AsyncVerdictPromise const&);
    AsyncVerdictPromise();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::AsyncStatus getStatus();

    MCNAPI void setPromise(std::variant<std::monostate, AsyncJoinAllow, AsyncJoinDeny>);
#else // @header-generator platform
    MCNAPI void setPromise(::std::variant<::std::monostate, ::AsyncJoinAllow, ::AsyncJoinDeny> verdict);
#endif // @header-generator platform
    // NOLINTEND
};
