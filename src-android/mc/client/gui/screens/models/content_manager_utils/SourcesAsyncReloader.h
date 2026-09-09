#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/resources/interface/content_manager_utils/ISourcesAsyncReloader.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
class TaskGroup;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace ContentManagerUtils {

class SourcesAsyncReloader : public ::ContentManagerUtils::ISourcesAsyncReloader,
                             public ::std::enable_shared_from_this<ContentManagerUtils::SourcesAsyncReloader> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<IContentManager>>             mWeakOwner;
    ::ll::UntypedStorage<8, 16>                                           mInitTask;
    ::ll::UntypedStorage<8, 88>                                           mOnSourcesReloadedAsyncPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    SourcesAsyncReloader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SourcesAsyncReloader();

    virtual ::Bedrock::Threading::Async<void> reloadSourcesAsync(bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SourcesAsyncReloader(std::unique_ptr<TaskGroup>);

    MCNAPI void setOwnerAndInitTask(std::weak_ptr<IContentManager>, ::Bedrock::Threading::Async<void>&&);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToOnSourcesReloadedAsync(std::function<void()>&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<TaskGroup> createDefaultTaskGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<TaskGroup>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<void> $reloadSourcesAsync(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ContentManagerUtils
