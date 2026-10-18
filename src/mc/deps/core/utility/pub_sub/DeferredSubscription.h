#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/DeferralType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/SubscriptionBase.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::PubSub {

class DeferredSubscription : public ::Bedrock::PubSub::SubscriptionBase {
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    DeferredSubscription& operator=(DeferredSubscription const&);
    DeferredSubscription(DeferredSubscription const&);
    DeferredSubscription();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DeferredSubscription();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Bedrock::PubSub::DeferredSubscription& operator=(::Bedrock::PubSub::DeferredSubscription&& other);

    MCAPI uint64 runDeferredEvents(uint64 maxToRun);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::DeferredSubscription& operator=(::Bedrock::PubSub::DeferredSubscription&&);

    MCNAPI ulong runDeferredEvents(ulong);

    MCNAPI ~DeferredSubscription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI ~DeferredSubscription();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::PubSub
