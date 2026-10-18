#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class SettingsBooleanConfirmationRequest : public ::OreUI::PropertyObject<OreUI::SettingsBooleanConfirmationRequest> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mValue;
    ::ll::UntypedStorage<8, 168> mTitle;
    ::ll::UntypedStorage<8, 168> mDescription;
    ::ll::UntypedStorage<8, 168> mAcceptLabel;
    ::ll::UntypedStorage<8, 168> mCancelLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsBooleanConfirmationRequest& operator=(SettingsBooleanConfirmationRequest const&);
    SettingsBooleanConfirmationRequest(SettingsBooleanConfirmationRequest const&);
    SettingsBooleanConfirmationRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsBooleanConfirmationRequest();
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
class SettingsBooleanConfirmationRequest : public ::OreUI::PropertyObject<::OreUI::SettingsBooleanConfirmationRequest> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mValue;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mTitle;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mDescription;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mAcceptLabel;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mCancelLabel;
    // NOLINTEND
};
#else // @header-generator platform
class SettingsBooleanConfirmationRequest {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
