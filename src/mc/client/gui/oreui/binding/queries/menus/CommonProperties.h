#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsState.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsState.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct CommonProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mId;
    ::ll::UntypedStorage<8, 168> mName;
    ::ll::UntypedStorage<8, 152> mState;
    ::ll::UntypedStorage<8, 176> mDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommonProperties(std::string_view, ::OreUI::Detail::IPropertyObject*);

    MCNAPI ~CommonProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string_view, ::OreUI::Detail::IPropertyObject*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CommonProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                  mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                  mName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::SettingsState>>         mState;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommonProperties(::std::string_view id, ::OreUI::Detail::IPropertyObject* parent);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view id, ::OreUI::Detail::IPropertyObject* parent);
    // NOLINTEND
};
#else // @header-generator platform
struct CommonProperties {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
