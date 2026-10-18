#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class SettingsConfirmationRequest : public ::OreUI::PropertyObject<OreUI::SettingsConfirmationRequest> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mTitle;
    ::ll::UntypedStorage<8, 168> mDescription;
    ::ll::UntypedStorage<8, 168> mAcceptLabel;
    ::ll::UntypedStorage<8, 168> mCancelLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsConfirmationRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsConfirmationRequest();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    SettingsConfirmationRequest(::OreUI::Detail::IPropertyObject*, std::string, std::string, std::string, std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::Detail::IPropertyObject*, std::string, std::string, std::string, std::string);
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
class SettingsConfirmationRequest : public ::OreUI::PropertyObject<::OreUI::SettingsConfirmationRequest> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mTitle;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mDescription;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mAcceptLabel;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mCancelLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsConfirmationRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsConfirmationRequest(
        ::OreUI::Detail::IPropertyObject* parent,
        ::std::string                     title,
        ::std::string                     description,
        ::std::string                     acceptLabel,
        ::std::string                     cancelLabel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Detail::IPropertyObject* parent,
        ::std::string                     title,
        ::std::string                     description,
        ::std::string                     acceptLabel,
        ::std::string                     cancelLabel
    );
    // NOLINTEND
};
#else // @header-generator platform
class SettingsConfirmationRequest {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
