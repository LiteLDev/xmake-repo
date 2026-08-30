#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ContainerItemBindings.h"
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class ContainerItemQuery : public ::OreUI::QueryBase<OreUI::ContainerItemQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1720, ::OreUI::ContainerItemBindings> mItemBindings;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName>               mContainerName;
    ::ll::TypedStorage<4, 4, int>                               mIndex;
    ::ll::UntypedStorage<8, 24>                                 mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerItemQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerItemQuery();

    virtual void update(double);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[34]> NAME();
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
