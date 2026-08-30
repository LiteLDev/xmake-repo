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

class AnvilQuery : public ::OreUI::QueryBase<OreUI::AnvilQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mCostText;
    ::ll::UntypedStorage<8, 168> mCostSentiment;
    ::ll::UntypedStorage<8, 152> mShouldCrossOutIconBeVisible;
    ::ll::UntypedStorage<8, 168> mPreviewItemName;
    ::ll::UntypedStorage<8, 152> mHasInputItem;
    ::ll::UntypedStorage<8, 24>  mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnvilQuery();

    virtual void update(double);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[26]> NAME();
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
