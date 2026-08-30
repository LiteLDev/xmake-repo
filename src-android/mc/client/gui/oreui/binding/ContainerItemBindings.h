#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
