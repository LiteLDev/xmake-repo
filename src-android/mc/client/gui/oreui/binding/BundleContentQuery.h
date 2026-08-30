#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace OreUI { struct ContainerItemPropertyObject; }
// clang-format on

namespace OreUI {

class BundleContentQuery : public ::OreUI::QueryBase<OreUI::BundleContentQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104>  mItems;
    ::ll::UntypedStorage<8, 24>   mContext;
    ::ll::TypedStorage<4, 4, int> mBundleID;
    // NOLINTEND

public:
    // prevent constructor by default
    BundleContentQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BundleContentQuery();

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
