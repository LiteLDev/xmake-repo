#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct SplitScreenInfo;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class SplitScreenQuery : public ::OreUI::QueryBase<OreUI::SplitScreenQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                               mIsPrimaryUser;
    ::ll::UntypedStorage<8, 152>                               mSplitScreenPosition;
    ::ll::UntypedStorage<8, 152>                               mActivePlayers;
    ::ll::UntypedStorage<8, 152>                               mSplitScreenDirection;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mChangeToken;
    // NOLINTEND

public:
    // prevent constructor by default
    SplitScreenQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SplitScreenQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SplitScreenQuery(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);

    MCNAPI void _updateData(::SplitScreenInfo const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);
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

} // namespace OreUI
