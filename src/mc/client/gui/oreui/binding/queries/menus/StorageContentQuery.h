#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/StorageContentCommonProperties.h"
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/storagemanager/ContentType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class StorageContentItem; }
namespace StorageManager { class ContentItemProvider; }
namespace World { class IWorldCloudSyncer; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/menus/StorageContentCommonProperties.h"
#include "mc/client/storagemanager/ContentType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class StorageContentItem; }
namespace StorageManager { class ContentItemProvider; }
namespace World { class IWorldCloudSyncer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class StorageContentQuery : public ::OreUI::QueryBase<OreUI::StorageContentQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManager::ContentItemProvider>> mStorageContentItemProvider;
    ::ll::UntypedStorage<8, 24>                                                     mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&>                           mWorldCloudSyncer;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mStorageCollectionReloadSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mContentItemSelectionSubscription;
    ::ll::UntypedStorage<8, 48>                                         mContentItemMap;
    ::ll::TypedStorage<1, 1, ::StorageManager::ContentType>             mType;
    ::ll::TypedStorage<8, 256, ::OreUI::StorageContentCommonProperties> mCommon;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageContentQuery& operator=(StorageContentQuery const&);
    StorageContentQuery(StorageContentQuery const&);
    StorageContentQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageContentQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StorageContentQuery(::OreUI::GameDependencies const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, std::string const&);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class StorageContentQuery : public ::OreUI::QueryBase<::OreUI::StorageContentQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManager::ContentItemProvider>>   mStorageContentItemProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&>                                 mWorldCloudSyncer;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mStorageCollectionReloadSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mContentItemSelectionSubscription;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint64,
            ::std::reference_wrapper<::OreUI::StorageContentItem>,
            ::std::less<uint64>,
            ::std::vector<uint64>,
            ::std::vector<::std::reference_wrapper<::OreUI::StorageContentItem>>>>
                                                                        mContentItemMap;
    ::ll::TypedStorage<1, 1, ::StorageManager::ContentType>             mType;
    ::ll::TypedStorage<8, 296, ::OreUI::StorageContentCommonProperties> mCommon;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageContentQuery& operator=(StorageContentQuery const&);
    StorageContentQuery(StorageContentQuery const&);
    StorageContentQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageContentQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageContentQuery(::OreUI::GameDependencies const& game, ::std::string const& type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& type);
    // NOLINTEND
};
#else // @header-generator platform
class StorageContentQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
