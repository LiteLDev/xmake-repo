#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
