#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/CommonProperties.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsActionType.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsAsyncProgressInformation.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsConfirmationRequest.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Settings { class IRegistry; }
// clang-format on

namespace OreUI {

class SettingsActionQuery : public ::OreUI::QueryBase<OreUI::SettingsActionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Settings::IRegistry>> mSettingsRegistry;
    ::ll::TypedStorage<8, 664, ::OreUI::CommonProperties>           mCommonProperties;
    ::ll::UntypedStorage<8, 168>                                    mActionLabel;
    ::ll::UntypedStorage<8, 152>                                    mActionType;
    ::ll::UntypedStorage<8, 896>                                    mConfirmationRequest;
    ::ll::UntypedStorage<8, 736>                                    mAsyncInfo;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mSettingsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsActionQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsActionQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SettingsActionQuery(::OreUI::ClientDependencies const&, std::string const&);

    MCNAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&, std::string const&);
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
