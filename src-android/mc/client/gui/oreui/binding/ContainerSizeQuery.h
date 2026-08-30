#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class ContainerSizeQuery : public ::OreUI::QueryBase<OreUI::ContainerSizeQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                  mSize;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName> mContainerName;
    ::ll::UntypedStorage<8, 24>                   mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerSizeQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerSizeQuery();

    virtual void update(double);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(double);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
