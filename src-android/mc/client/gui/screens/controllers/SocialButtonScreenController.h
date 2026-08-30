#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Parties { class PartySystem; }
// clang-format on

class SocialButtonScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mCurrentPartyUpdateSubscription;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        mPartyProfileOptions;
    ::ll::TypedStorage<8, 24, std::vector<std::string> const>  mButtonFactoryControlVector;
    ::ll::UntypedStorage<8, 24>                                mPartySystem;
    ::ll::TypedStorage<1, 1, bool>                             mIsPlayersInWorldEnabled;
    ::ll::UntypedStorage<8, 32>                                mCurrentSocialIcon;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialButtonScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SocialButtonScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SocialButtonScreenController(
        std::shared_ptr<MinecraftScreenModel>,
        ::Bedrock::NonOwnerPointer<Parties::PartySystem>
    );

    MCNAPI void _onPartyChanged();

    MCNAPI void _updateSocialIconControl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, ::Bedrock::NonOwnerPointer<Parties::PartySystem>);
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
