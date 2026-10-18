#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SettingsActionQuery : public ::OreUI::QueryBase<::OreUI::SettingsActionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Settings::IRegistry>>                         mSettingsRegistry;
    ::ll::TypedStorage<8, 784, ::OreUI::CommonProperties>                                       mCommonProperties;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                                mActionLabel;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<::OreUI::SettingsActionType>>> mActionType;
    ::ll::TypedStorage<8, 1048, ::std::optional<::OreUI::SettingsConfirmationRequest>>          mConfirmationRequest;
    ::ll::TypedStorage<8, 856, ::std::optional<::OreUI::SettingsAsyncProgressInformation>>      mAsyncInfo;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSettingsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsActionQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsActionQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsActionQuery(::OreUI::ClientDependencies const& client, ::std::string const& id);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::std::string const& id);
    // NOLINTEND
};
#else // @header-generator platform
class SettingsActionQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
