#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/DeferredSubscription.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/DeferredSubscriptionHub.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::PubSub { class DeferredSubscription; }
#endif // @header-generator platform
namespace Bedrock::PubSub { class RawSubscription; }
// clang-format on

namespace Bedrock::PubSub {

class DeferredSubscriptionHubBase : public ::Bedrock::PubSub::DeferredSubscriptionHub {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::DeferredSubscription>> mSubscriptions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::DeferredSubscription>> mSubscriptions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DeferredSubscriptionHubBase();
#else // @header-generator platform
    virtual ~DeferredSubscriptionHubBase() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong runDeferredEvents(ulong);
#else // @header-generator platform
    virtual uint64 runDeferredEvents(uint64 maxToRun) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong runDeferredEventsForDuration(std::chrono::duration<long long, std::ratio<1, 1000>>);
#else // @header-generator platform
    virtual uint64 runDeferredEventsForDuration(::std::chrono::milliseconds msec) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clear();
#else // @header-generator platform
    virtual void clear() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong erase(::Bedrock::PubSub::RawSubscription&);
#else // @header-generator platform
    virtual uint64 erase(::Bedrock::PubSub::RawSubscription& subscription) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong size() const;
#else // @header-generator platform
    virtual uint64 size() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool empty() const;
#else // @header-generator platform
    virtual bool empty() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _join(::Bedrock::PubSub::DeferredSubscription&&);
#else // @header-generator platform
    virtual void _join(::Bedrock::PubSub::DeferredSubscription&& subscription) /*override*/;
#endif // @header-generator platform

    virtual bool _runOneEvent() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $runDeferredEvents(ulong);
#else // @header-generator platform
    MCAPI uint64 $runDeferredEvents(uint64 maxToRun);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $runDeferredEventsForDuration(std::chrono::duration<long long, std::ratio<1, 1000>>);
#else // @header-generator platform
    MCAPI uint64 $runDeferredEventsForDuration(::std::chrono::milliseconds msec);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clear();
#else // @header-generator platform
    MCAPI void $clear();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $erase(::Bedrock::PubSub::RawSubscription&);
#else // @header-generator platform
    MCAPI uint64 $erase(::Bedrock::PubSub::RawSubscription& subscription);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $size() const;
#else // @header-generator platform
    MCAPI uint64 $size() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $empty() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool $empty() const;
#else // LL_PLAT_C
    MCFOLD bool $empty() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_join(::Bedrock::PubSub::DeferredSubscription&&);
#else // @header-generator platform
    MCAPI void $_join(::Bedrock::PubSub::DeferredSubscription&& subscription);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub
