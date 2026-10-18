#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/detail/PublisherBase.h"
#include "mc/platform/threading/LockGuard.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_MultiThreaded : public ::Bedrock::PubSub::Detail::PublisherBase {
public:
    // FastDispatchPublisherBase_MultiThreaded inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using MutexType = std::mutex;
#else // @header-generator platform
    using LockType = ::Bedrock::Threading::LockGuard<::Bedrock::Threading::Mutex>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using LockType = ::Bedrock::Threading::LockGuard<std::mutex>;
#else // @header-generator platform
    using MutexType = ::Bedrock::Threading::Mutex;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>        mMutex;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mFastDispatchInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    FastDispatchPublisherBase_MultiThreaded& operator=(FastDispatchPublisherBase_MultiThreaded const&);
    FastDispatchPublisherBase_MultiThreaded(FastDispatchPublisherBase_MultiThreaded const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FastDispatchPublisherBase_MultiThreaded();
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mMutex;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>        mFastDispatchInfo;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _loadDispatchTargets(::Bedrock::PubSub::Detail::DispatchTargets&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI bool _loadDispatchTargets(::Bedrock::PubSub::Detail::DispatchTargets& targets) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
