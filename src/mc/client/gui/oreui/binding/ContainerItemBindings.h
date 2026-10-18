#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/ContainerItemStatusType.h"
#include "mc/client/gui/gameplay/api/gameplayui/ContainerItemType.h"
#include "mc/client/gui/gameplay/data/gameplayui/BundleColor.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct ContainerItem; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/BundleColor.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerItemStatusType.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerItemType.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct ContainerItem; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct ContainerItemBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> name;
    ::ll::UntypedStorage<8, 168> id;
    ::ll::UntypedStorage<8, 168> details;
    ::ll::UntypedStorage<8, 152> amount;
    ::ll::UntypedStorage<8, 152> statusType;
    ::ll::UntypedStorage<8, 152> statusValue;
    ::ll::UntypedStorage<8, 152> statusMax;
    ::ll::UntypedStorage<8, 152> containerItemType;
    ::ll::UntypedStorage<8, 152> isSelectedRecipeSlot;
    ::ll::UntypedStorage<8, 152> bundleID;
    ::ll::UntypedStorage<8, 152> bundleColor;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerItemBindings& operator=(ContainerItemBindings const&);
    ContainerItemBindings(ContainerItemBindings const&);
    ContainerItemBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerItemBindings(::OreUI::Detail::IPropertyObject*, ::GameplayUI::ContainerItem);

    MCNAPI void update(::GameplayUI::ContainerItem const&);

    MCNAPI ~ContainerItemBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::Detail::IPropertyObject*, ::GameplayUI::ContainerItem);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ContainerItemBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              name;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              id;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              details;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        amount;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::GameplayUI::ContainerItemStatusType>>      statusType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        statusValue;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        statusMax;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::GameplayUI::ContainerItemType>>            containerItemType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                       isSelectedRecipeSlot;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<int>>>                       bundleID;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<::GameplayUI::BundleColor>>> bundleColor;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerItemBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerItemBindings(::OreUI::Detail::IPropertyObject* parent, ::GameplayUI::ContainerItem item);

    MCAPI void update(::GameplayUI::ContainerItem const& item);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Detail::IPropertyObject* parent, ::GameplayUI::ContainerItem item);
    // NOLINTEND
};
#else // @header-generator platform
struct ContainerItemBindings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
