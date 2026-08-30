#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/detail/PublisherBase.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class DispatchTargets; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class FastDispatchPublisherBase_MultiThreadedStrict : public ::Bedrock::PubSub::Detail::PublisherBase {
public:
    // FastDispatchPublisherBase_MultiThreadedStrict inner types define
    using MutexType = std::recursive_mutex;

    using UniqueLockType = ::Bedrock::Threading::UniqueLock<std::recursive_mutex>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 44> mMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    FastDispatchPublisherBase_MultiThreadedStrict& operator=(FastDispatchPublisherBase_MultiThreadedStrict const&);
    FastDispatchPublisherBase_MultiThreadedStrict(FastDispatchPublisherBase_MultiThreadedStrict const&);
};

} // namespace Bedrock::PubSub::Detail
