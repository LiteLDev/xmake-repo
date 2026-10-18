#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/storagemanager/ContentType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
namespace OreUI { class GameDependencies; }
namespace OreUI::Detail { template<typename T0> class ObservableValue; }
namespace StorageManager { class ContentItemProvider; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/storagemanager/ContentType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
namespace OreUI { class GameDependencies; }
namespace StorageManager { class ContentItemProvider; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class StorageContentDependencyQuery : public ::OreUI::QueryBase<OreUI::StorageContentDependencyQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mContentItemSelectionSubscription;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManager::ContentItemProvider>> mStorageContentItemProvider;
    ::ll::TypedStorage<1, 1, ::StorageManager::ContentType>                         mType;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                    mLevelListCache;
    ::ll::UntypedStorage<8, 104>                                                    mAffectedWorlds;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageContentDependencyQuery& operator=(StorageContentDependencyQuery const&);
    StorageContentDependencyQuery(StorageContentDependencyQuery const&);
    StorageContentDependencyQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageContentDependencyQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StorageContentDependencyQuery(::OreUI::GameDependencies const&, std::string const&);
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
class StorageContentDependencyQuery : public ::OreUI::QueryBase<::OreUI::StorageContentDependencyQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mContentItemSelectionSubscription;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManager::ContentItemProvider>> mStorageContentItemProvider;
    ::ll::TypedStorage<1, 1, ::StorageManager::ContentType>                             mType;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                        mLevelListCache;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
        mAffectedWorlds;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageContentDependencyQuery& operator=(StorageContentDependencyQuery const&);
    StorageContentDependencyQuery(StorageContentDependencyQuery const&);
    StorageContentDependencyQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageContentDependencyQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageContentDependencyQuery(::OreUI::GameDependencies const& game, ::std::string const& type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& type);
    // NOLINTEND
};
#else // @header-generator platform
class StorageContentDependencyQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
