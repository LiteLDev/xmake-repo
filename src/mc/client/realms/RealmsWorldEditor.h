#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/ServerPreference.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/realms/RealmsWorldContextState.h"
#include "mc/client/realms/RealmsWorldEditorState.h"
#include "mc/client/realms/RealmsWorldEditorStateError.h"
#include "mc/client/realms/RealmsWorldEditorStateStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/util/PublishedValue.h"
#include "mc/util/SubscribedValue.h"
#include "mc/world/level/storage/GameRuleId.h"

// auto generated forward declare list
// clang-format off
class GameRule;
class GameRules;
class IToastManager;
class LevelData;
class RealmsAPI;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms { class OpenAndCloseRealmManager; }
namespace Realms { class RealmsWorldContext; }
namespace Realms { class RealmsWorldPackContext; }
namespace Realms { struct RealmsWorldEditorStateStatusPair; }
namespace Realms { struct RealmsWorldGeneralSettings; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsWorldEditor : public ::std::enable_shared_from_this<Realms::RealmsWorldEditor> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>                          mRealmsAPI;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldContext>>       mRealmsWorldContext;
    ::ll::UntypedStorage<8, 24>                                                  mRealmsWorldPackContext;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::OpenAndCloseRealmManager>> mOpenAndCloseRealmManager;
    ::ll::TypedStorage<8, 608, ::Realms::World>                                  mRealmWorld;
    ::ll::TypedStorage<8, 8, ::IToastManager&>                                   mToastManager;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldEditorState>                   mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldEditorStateStatus>             mStateStatus;
    ::ll::UntypedStorage<8, 48>                                                  mStateError;
    ::ll::TypedStorage<1, 1, bool>                                               mUseRealmsWorldBackend;
    ::ll::UntypedStorage<8, 40>                                                  mUseRealmsWorldBackendPublisher;
    ::ll::UntypedStorage<8, 88>                                                  mNotifyRealmWorldEditorStateUpdated;
    ::ll::UntypedStorage<8, 88>                                                  mRealmWorldChangedPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mWorldContextStateSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmWorldGameRulesSubscription;
    ::ll::UntypedStorage<8, 40>                                                  mGameRulePublishersBool;
    ::ll::UntypedStorage<8, 40>                                                  mGameRulePublishersInt;
    ::ll::UntypedStorage<8, 40>                                                  mGameRulePublishersFloat;
    ::ll::UntypedStorage<8, 40>                                                  mUseFlatWorldOnChangePublisher;
    ::ll::UntypedStorage<8, 40>                                                  mFlatWorldPresetOnChangePublisher;
    ::ll::UntypedStorage<8, 40>                                                  mGeneratorTypeOnChangePublisher;
    ::ll::UntypedStorage<8, 40>                                                  mStartWithMapOnChangePublisher;
    ::ll::UntypedStorage<8, 40>                                                  mStartWithBonusChestOnChangePublisher;
    ::ll::UntypedStorage<8, 40>                                                  mSimulationDistanceOnChangePublisher;
    ::ll::UntypedStorage<8, 40>                                                  mWorldSeedOnChangePublisher;
    ::ll::UntypedStorage<8, 88>                                                  mRealmNameOnChangePublisher;
    ::ll::UntypedStorage<8, 40>                                                  mRealmDescriptionOnChangePublisher;
    ::ll::UntypedStorage<8, 88> mRealmAreTexturesRequiredOnChangePublisher;
    ::ll::UntypedStorage<8, 88> mRealmCheatsEnabledPublisher;
    ::ll::UntypedStorage<8, 88> mRealmDaylightCyclePublisher;
    ::ll::UntypedStorage<8, 88> mRealmWorldNameOnChangePublisher;
    ::ll::UntypedStorage<8, 88> mRealmGameTypeOnChangePublisher;
    ::ll::UntypedStorage<8, 88> mRealmDifficultyOnChangePublisher;
    ::ll::UntypedStorage<8, 88> mRealmIsHardcoreOnChangePublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldEditor& operator=(RealmsWorldEditor const&);
    RealmsWorldEditor(RealmsWorldEditor const&);
    RealmsWorldEditor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Realms::World _populateRealmsWorldFromLevelData_DEPRECATED() const;

    MCNAPI bool areRealmCheatsEnabled() const;

    MCNAPI bool areRealmTexturesRequired() const;

    MCNAPI std::shared_ptr<LevelData> getCurrentLevelData_DEPRECATED();

    MCNAPI int getRealmDaylightCycle() const;

    MCNAPI std::string const& getRealmDescription() const;

    MCNAPI std::string const& getRealmName() const;

    MCNAPI ::Realms::RealmsWorldGeneralSettings getRealmsWorldGeneralSettings() const;

    MCNAPI ::Realms::RealmsWorldEditorState getState() const;

    MCNAPI ::Realms::RealmsWorldEditorStateStatus getStateStatus() const;

    MCNAPI void initFlatWorldPresetSubVal(::SubscribedValue<std::optional<std::string>>&, std::function<void()>);

    MCNAPI void initGameRuleSubscribedValueBool(::SubscribedValue<bool>&, ::GameRuleId, std::function<void()>);

    MCNAPI void initGameRuleSubscribedValueInt(::SubscribedValue<int>&, ::GameRuleId, std::function<void()>);

    MCNAPI void initGeneratorTypeSubVal(::SubscribedValue<int>&, std::function<void()>);

    MCNAPI void initSimulationDistanceSubVal(::SubscribedValue<int>&, std::function<void()>);

    MCNAPI void initStartWithBonusChestSubVal(::SubscribedValue<bool>&, std::function<void()>);

    MCNAPI void initStartWithMapSubVal(::SubscribedValue<bool>&, std::function<void()>);

    MCNAPI void initUseFlatWorldSubVal(::SubscribedValue<bool>&, std::function<void()>);

    MCNAPI void initUseRealmWorldBackendSubVal(::SubscribedValue<bool>&, std::function<void()>);

    MCNAPI void initWorldSeedSubVal(::SubscribedValue<long>&, std::function<void()>);

    MCNAPI bool isWorldChanged() const;

    MCNAPI ::Bedrock::PubSub::Subscription registerRealmWorldEditorStateListener(std::function<void(bool)>);

    MCNAPI ::Bedrock::PubSub::Subscription registerRealmWorldUpdatedListener(std::function<void()>);

    MCNAPI void resetRealmWorld(std::string const&);

    MCNAPI void resetState();

    MCNAPI void saveRealmWorld(std::string const&);

    MCNAPI void setGameRule(::GameRuleId, bool);

    MCNAPI void setGameRule(::GameRuleId, int);

    MCNAPI void setRealmAreCheatsEnabled(bool);

    MCNAPI void setRealmAreTexturesRequired(bool);

    MCNAPI void setRealmDaylightCycle(int);

    MCNAPI void setRealmDescription(std::string const&);

    MCNAPI void setRealmName(std::string const&);

    MCNAPI void setRealmWorldDifficulty(int);

    MCNAPI void setRealmWorldGameType(int);

    MCNAPI void setRealmWorldIsHardcore(bool);

    MCNAPI void setRealmWorldName(std::string const&);

    MCNAPI void setStateReplaceError();

    MCNAPI void setUseRealmWorldBackend(bool);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRealmAreCheatsEnabledPublisher(std::function<void(bool)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRealmAreTexturesRequiredPublisher(std::function<void(bool)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRealmDaylightCyclePublisher(std::function<void(int)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRealmDescriptionPublisher(std::function<void(std::string)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRealmDifficultyPublisher(std::function<void(int)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRealmGameTypePublisher(std::function<void(int)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRealmIsHardcorePublisher(std::function<void(bool)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRealmNamePublisher(std::function<void(std::string)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRealmWorldNamePublisher(std::function<void(std::string)>);

    MCNAPI ::Bedrock::PubSub::Subscription
    subscribeToRealmsWorldEditorStateError(std::function<void(std::optional<Realms::RealmsWorldEditorStateError>)>&&);
    // NOLINTEND
};
#else // @header-generator platform
class RealmsWorldEditor {};
#endif // @header-generator platform

} // namespace Realms
