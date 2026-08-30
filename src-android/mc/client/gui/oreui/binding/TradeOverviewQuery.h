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

class TradeOverviewQuery : public ::OreUI::QueryBase<OreUI::TradeOverviewQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mIsExperienceBarVisible;
    ::ll::UntypedStorage<8, 152> mExperienceProgress;
    ::ll::UntypedStorage<8, 152> mExperiencePossibleProgress;
    ::ll::UntypedStorage<8, 168> mTraderName;
    ::ll::UntypedStorage<8, 152> mTradeTiers;
    ::ll::UntypedStorage<8, 24>  mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeOverviewQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TradeOverviewQuery();

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
