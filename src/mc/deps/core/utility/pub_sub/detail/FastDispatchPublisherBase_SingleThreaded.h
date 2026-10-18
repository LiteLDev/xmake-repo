#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/detail/PublisherBase.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/platform/threading/LockGuard.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_SingleThreaded : public ::Bedrock::PubSub::Detail::PublisherBase,
                                                 public ::Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex {
public:
    // FastDispatchPublisherBase_SingleThreaded inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using MutexType = ::Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex const;
#else // @header-generator platform
    using LockType = ::Bedrock::Threading::LockGuard<::Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex const>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using LockType = ::Bedrock::Threading::LockGuard<const Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex>;

public:
    // prevent constructor by default
    FastDispatchPublisherBase_SingleThreaded& operator=(FastDispatchPublisherBase_SingleThreaded const&);
    FastDispatchPublisherBase_SingleThreaded(FastDispatchPublisherBase_SingleThreaded const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _loadDispatchTargets(::Bedrock::PubSub::Detail::DispatchTargets&) const;
    // NOLINTEND
#else // @header-generator platform
    using MutexType = ::Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex const;
#endif // @header-generator platform
};

} // namespace Bedrock::PubSub::Detail
