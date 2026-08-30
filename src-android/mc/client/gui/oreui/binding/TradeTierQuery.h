#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class TradeTierQuery : public ::OreUI::QueryBase<OreUI::TradeTierQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168>  mTierName;
    ::ll::UntypedStorage<8, 152>  mIsTierVisible;
    ::ll::UntypedStorage<8, 152>  mIsTierUnlocked;
    ::ll::UntypedStorage<8, 152>  mTradeOffers;
    ::ll::TypedStorage<4, 4, int> mTradeTier;
    ::ll::UntypedStorage<8, 24>   mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTierQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TradeTierQuery();

    virtual void update(double);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
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
