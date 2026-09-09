#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI::Debug {

class SettingsUiDebugQuery : public ::OreUI::QueryBase<OreUI::Debug::SettingsUiDebugQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                               mIsUiDebugModeEnabled;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mDebugModeChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsUiDebugQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsUiDebugQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SettingsUiDebugQuery(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&);
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

} // namespace OreUI::Debug
