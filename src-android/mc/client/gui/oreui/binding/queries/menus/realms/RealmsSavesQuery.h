#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class WorldBackupData; }
namespace Realms { class RealmsSavesManager; }
// clang-format on

namespace OreUI {

class RealmsSavesQuery : public ::OreUI::QueryBase<OreUI::RealmsSavesQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mRealmsSavesManager;
    ::ll::UntypedStorage<8, 104>                               mManualBackups;
    ::ll::UntypedStorage<8, 104>                               mAutomaticBackups;
    ::ll::UntypedStorage<8, 152>                               mStorageBytesUsed;
    ::ll::UntypedStorage<8, 152>                               mStorageBytesTotal;
    ::ll::UntypedStorage<8, 152>                               mActiveWorldSizeBytes;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mBackupListChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mActiveWorldSizeChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSavesQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSavesQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsSavesQuery(::OreUI::GameDependencies const&);

    MCNAPI void _updateActiveWorldSizeProperty();

    MCNAPI void _updateBackupListProperties();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[38]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&);
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
