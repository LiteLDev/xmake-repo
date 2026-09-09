#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/detail/PublisherBase.h"
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_MultiThreaded : public ::Bedrock::PubSub::Detail::PublisherBase {
public:
    // FastDispatchPublisherBase_MultiThreaded inner types define
    using MutexType = std::mutex;

    using LockType = ::Bedrock::Threading::LockGuard<std::mutex>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _loadDispatchTargets(::Bedrock::PubSub::Detail::DispatchTargets&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
