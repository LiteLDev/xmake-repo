#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/StorageContentCommonProperties.h"
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace StorageManager { class WorldConverter; }
// clang-format on

namespace OreUI {

class OldWorldsQuery : public ::OreUI::QueryBase<OreUI::OldWorldsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManager::WorldConverter>> mStorageWorldConverter;
    ::ll::UntypedStorage<8, 24>                                                mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mOldWorldsFetchedSubscription;
    ::ll::TypedStorage<8, 256, ::OreUI::StorageContentCommonProperties>        mCommon;
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
