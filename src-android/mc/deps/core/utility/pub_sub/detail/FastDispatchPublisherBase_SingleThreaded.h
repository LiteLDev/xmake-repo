#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/detail/PublisherBase.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_SingleThreaded : public ::Bedrock::PubSub::Detail::PublisherBase,
                                                 public ::Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex {
public:
    // FastDispatchPublisherBase_SingleThreaded inner types define
    using MutexType = ::Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex const;

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
};

} // namespace Bedrock::PubSub::Detail
