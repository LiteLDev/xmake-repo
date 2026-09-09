#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
// clang-format on

namespace StorageManager {

class ContentCollectionGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_set<ulong>>             mSelectedIds;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentItemCollection>> mVisibleItems;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentItemCollection>> mSelectedItems;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mReloadViewsSubscription;
    ::ll::UntypedStorage<8, 40>                                      mCollectionReloadPublisher;
    ::ll::UntypedStorage<8, 40>                                      mContentItemSelectionPublisher;
    // NOLINTEND
};

} // namespace StorageManager
