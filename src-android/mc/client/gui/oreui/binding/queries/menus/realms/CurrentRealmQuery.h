#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Social { struct RealmWorldPublisherData; }
// clang-format on

namespace OreUI {

class CurrentRealmQuery : public ::OreUI::QueryBase<OreUI::CurrentRealmQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160>                               mID;
    ::ll::UntypedStorage<8, 152>                               mIsRealmOwner;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmIDChangedToken;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentRealmQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CurrentRealmQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CurrentRealmQuery(::OreUI::GameDependencies const&, std::string);

    MCNAPI void _setRealmProperties(::Social::RealmWorldPublisherData const&, std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, std::string);
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
