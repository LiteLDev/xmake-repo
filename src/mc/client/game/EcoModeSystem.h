#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class IClientInstance;
class ISceneStack;
class MinecraftInputHandler;
class OptionRegistry;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class EcoModeSystem {
public:
    // EcoModeSystem inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct ScreenConfiguration;
#else // @header-generator platform
#endif // @header-generator platform
    struct EcoModeClientState;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ScreenConfiguration;
#endif // @header-generator platform
    // clang-format on

    // EcoModeSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ScreenConfiguration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>    mPriority;
        ::ll::TypedStorage<4, 4, int>    mTargetFPS;
        ::ll::TypedStorage<8, 8, double> mDelayUntilThrottling;
        ::ll::TypedStorage<1, 1, bool>   mTriggersIdleScreen;
        // NOLINTEND
#else // @header-generator platform
    struct EcoModeClientState {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        ScreenConfiguration();
    };

    struct EcoModeClientState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                       mCurrentTopScene;
        ::ll::TypedStorage<4, 4, float>                                              mTimeAtLastInteraction;
        ::ll::TypedStorage<1, 1, bool>                                               mAwayFromKeyboard;
        ::ll::TypedStorage<8, 32, std::optional<EcoModeSystem::ScreenConfiguration>> mScreenConfigurationActive;
        // NOLINTEND

    public:
        // prevent constructor by default
        EcoModeClientState& operator=(EcoModeClientState const&);
        EcoModeClientState(EcoModeClientState const&);
        EcoModeClientState();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mInputSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mGraphicsModeSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMaxFPSOptionSubscription;
    ::ll::UntypedStorage<8, 48>                                mOnTreatmentActivated;
    ::ll::UntypedStorage<8, 48>                                mOnTreatmentDeactivated;
    ::ll::TypedStorage<1, 1, bool>                             mFramerateThrottling;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, EcoModeSystem::ScreenConfiguration>> mTreatmentMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<SubClientId, EcoModeSystem::EcoModeClientState>>  mEcoModeClientStates;
    ::ll::TypedStorage<4, 4, int>                                                                  mCurrentFPS;
    ::ll::TypedStorage<4, 4, int>                                                                  mMaxFPS;
    ::ll::TypedStorage<4, 4, float>                            mTimeAtLastInteractionAllClients;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OptionRegistry>> mOptions;
    ::ll::UntypedStorage<8, 24>                                mInputHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    EcoModeSystem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EcoModeSystem(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const,
        ::Bedrock::NonOwnerPointer<MinecraftInputHandler>,
        std::shared_ptr<OptionRegistry>,
        std::function<void(SubClientId)>,
        std::function<bool(SubClientId)>
    );

    MCNAPI void _screenChangeCallback(::EcoModeSystem::EcoModeClientState&, ::AbstractScene const&);

    MCNAPI void addClient(::SubClientId const, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>);

    MCNAPI void addScreenConfiguration(std::string const&, ::EcoModeSystem::ScreenConfiguration const&);

    MCNAPI void eraseClient(::SubClientId const&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>);

    MCNAPI int getFrameThrottleValue() const;

    MCNAPI bool isFrameThrottle() const;

    MCNAPI void update(double const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const,
        ::Bedrock::NonOwnerPointer<MinecraftInputHandler>,
        std::shared_ptr<OptionRegistry>,
        std::function<void(SubClientId)>,
        std::function<bool(SubClientId)>
    );
    // NOLINTEND
#else // @header-generator platform
    struct ScreenConfiguration {};
#endif // @header-generator platform
};
