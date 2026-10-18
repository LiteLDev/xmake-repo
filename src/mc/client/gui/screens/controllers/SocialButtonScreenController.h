#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mCurrentPartyUpdateSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                       mPartyProfileOptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const>                 mButtonFactoryControlVector;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartySystem>> mPartySystem;
    ::ll::TypedStorage<1, 1, bool>                                                mIsPlayersInWorldEnabled;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                       mCurrentSocialIcon;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialButtonScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SocialButtonScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SocialButtonScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem> partySystem
    );

    MCAPI void _onPartyChanged();

    MCAPI void _updateSocialIconControl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::Bedrock::NonOwnerPointer<::Parties::PartySystem> partySystem
    );
    // NOLINTEND
};
#else // @header-generator platform
class SocialButtonScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
