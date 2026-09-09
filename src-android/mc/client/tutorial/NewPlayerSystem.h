#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
class IMinecraftEventing;
class IOptionRegistry;
class LevelSeed64;
class ResourcePackManager;
class TrialManager;
// clang-format on

class NewPlayerSystem : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mTrialManager;
    ::ll::UntypedStorage<8, 24>                                mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>               mOptions;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>     mResourcePackManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mHasDismissedNewPlayerFlowOptionSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mHasDismissedNewPlayerFlow;
    ::ll::TypedStorage<1, 1, bool const>                       mIsOnlyBaseGamePacks;
    ::ll::TypedStorage<1, 1, bool const>                       mIsEdu;
    ::ll::UntypedStorage<1, 1>                                 mIsEditorModeEnabled;
    ::ll::UntypedStorage<8, 24>                                mNewPlayerFlowWorldID;
    ::ll::TypedStorage<8, 24, std::string>                     mSelectedCharacterId;
    ::ll::TypedStorage<1, 1, bool>                             mIsCreative;
    // NOLINTEND

public:
    // prevent constructor by default
    NewPlayerSystem& operator=(NewPlayerSystem const&);
    NewPlayerSystem(NewPlayerSystem const&);
    NewPlayerSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NewPlayerSystem();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NewPlayerSystem(
        ::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ILevelListCache>>,
        ::IOptionRegistry&,
        ::ResourcePackManager const&,
        ::IMinecraftEventing&,
        bool
    );

    MCNAPI std::optional<LevelSeed64> TryGetStarterSeed() const;

    MCNAPI bool canDisableRecipeUnlockingAsDefault() const;

    MCNAPI void dismissNewPlayerFlow();

    MCNAPI std::string_view getNewPlayerFlowTargetRoute() const;

    MCNAPI std::string const& getSelectedCharacterId() const;

    MCNAPI bool hasDismissedNewPlayerFlow() const;

    MCNAPI bool isV3ABCTest() const;

    MCNAPI void resetNewPlayerFlow();

    MCNAPI void setIsCreative(bool);

    MCNAPI void setNewPlayerFlowWorldID(::World::WorldID const&);

    MCNAPI void setSelectedCharacterId(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ILevelListCache>>,
        ::IOptionRegistry&,
        ::ResourcePackManager const&,
        ::IMinecraftEventing&,
        bool
    );
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
