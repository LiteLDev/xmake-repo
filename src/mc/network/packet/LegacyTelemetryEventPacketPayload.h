#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorType.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct LegacyTelemetryEventPacketPayload {
public:
    // LegacyTelemetryEventPacketPayload inner types declare
    // clang-format off
    struct Achievement;
#if defined(LL_PLAT_A) // @header-generator platform
    struct Interaction;
    struct PortalCreated;
    struct PortalUsed;
    struct MobKilled;
    struct CauldronUsed;
    struct PlayerDied;
    struct BossKilled;
    struct SlashCommand;
    struct MobBorn;
    struct POICauldronUsed;
    struct ComposterUsed;
    struct BellUsed;
#else // @header-generator platform
#endif // @header-generator platform
    struct ActorDefinition;
#if defined(LL_PLAT_A) // @header-generator platform
    struct RaidUpdate;
    struct TargetBlockHit;
    struct PiglinBarter;
    struct PlayerWaxedOrUnwaxedCopper;
#else // @header-generator platform
    struct BellUsed;
    struct BossKilled;
    struct CauldronUsed;
#endif // @header-generator platform
    struct CodeBuilderRuntimeAction;
    struct CodeBuilderScoreboard;
#if defined(LL_PLAT_A) // @header-generator platform
    struct ItemUsed;
#else // @header-generator platform
    struct ComposterUsed;
#endif // @header-generator platform
    struct Empty;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Interaction;
    struct ItemUsed;
    struct MobBorn;
    struct MobKilled;
    struct POICauldronUsed;
    struct PiglinBarter;
    struct PlayerDied;
    struct PlayerWaxedOrUnwaxedCopper;
    struct PortalCreated;
    struct PortalUsed;
    struct RaidUpdate;
    struct SlashCommand;
    struct TargetBlockHit;
#endif // @header-generator platform
    // clang-format on

    // LegacyTelemetryEventPacketPayload inner types define
    enum class Type : int {
#if defined(LL_PLAT_A) // @header-generator platform
        Achievement                      = 0,
        Interaction                      = 1,
        PortalCreated                    = 2,
        PortalUsed                       = 3,
        MobKilled                        = 4,
        CauldronUsed                     = 5,
        PlayerDied                       = 6,
        BossKilled                       = 7,
        AgentCommand_OBSOLETE            = 8,
        AgentCreated                     = 9,
        PatternRemoved_OBSOLETE          = 10,
        SlashCommand                     = 11,
        FishBucketed_OBSOLETE            = 12,
        MobBorn                          = 13,
        PetDied_OBSOLETE                 = 14,
        POICauldronUsed                  = 15,
        ComposterUsed                    = 16,
        BellUsed                         = 17,
        ActorDefinition                  = 18,
        RaidUpdate                       = 19,
        PlayerMovementAnomaly_OBSOLETE   = 20,
        PlayerMovementCorrected_OBSOLETE = 21,
        HoneyHarvested                   = 22,
        TargetBlockHit                   = 23,
        PiglinBarter                     = 24,
        PlayerWaxedOrUnwaxedCopper       = 25,
        CodeBuilderRuntimeAction         = 26,
        CodeBuilderScoreboard            = 27,
        StriderRiddenInLavaInOverworld   = 28,
        SneakCloseToSculkSensor          = 29,
        CarefulRestoration               = 30,
        ItemUsed                         = 31,
#else // @header-generator platform
        Achievement                     = 0,
        Interaction                     = 1,
        PortalCreated                   = 2,
        PortalUsed                      = 3,
        MobKilled                       = 4,
        CauldronUsed                    = 5,
        PlayerDied                      = 6,
        BossKilled                      = 7,
        AgentCommandObsolete            = 8,
        AgentCreated                    = 9,
        PatternRemovedObsolete          = 10,
        SlashCommand                    = 11,
        FishBucketedObsolete            = 12,
        MobBorn                         = 13,
        PetDiedObsolete                 = 14,
        POICauldronUsed                 = 15,
        ComposterUsed                   = 16,
        BellUsed                        = 17,
        ActorDefinition                 = 18,
        RaidUpdate                      = 19,
        PlayerMovementAnomalyObsolete   = 20,
        PlayerMovementCorrectedObsolete = 21,
        HoneyHarvested                  = 22,
        TargetBlockHit                  = 23,
        PiglinBarter                    = 24,
        PlayerWaxedOrUnwaxedCopper      = 25,
        CodeBuilderRuntimeAction        = 26,
        CodeBuilderScoreboard           = 27,
        StriderRiddenInLavaInOverworld  = 28,
        SneakCloseToSculkSensor         = 29,
        CarefulRestoration              = 30,
        ItemUsed                        = 31,
#endif // @header-generator platform
    };

    struct Achievement {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<1, 1> mAchievementId;
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, ::MinecraftEventing::AchievementIds> mAchievementId;
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    struct ActorDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mEventName;
        // NOLINTEND
    };

    struct BellUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> mItemId;
        // NOLINTEND
    };

    struct BossKilled {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>   mPartySize;
        ::ll::TypedStorage<8, 8, int64> mBossUniqueId;
        ::ll::TypedStorage<4, 4, int>   mBossType;
        // NOLINTEND
    };

    struct CauldronUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> mContentsType;
        ::ll::TypedStorage<4, 4, uint>  mContentsColor;
        ::ll::TypedStorage<2, 2, short> mFillLevel;
        // NOLINTEND
    };

    struct CodeBuilderRuntimeAction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mRuntimeAction;
        // NOLINTEND
    };

    struct CodeBuilderScoreboard {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mObjectiveName;
        ::ll::TypedStorage<4, 4, int>            mScore;
        // NOLINTEND
    };

    struct ComposterUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short>                                        mItemId;
        ::ll::TypedStorage<1, 1, ::MinecraftEventing::POIBlockInteractionType> mInteractionType;
        // NOLINTEND
    };

    struct Empty {};
#endif // @header-generator platform

    struct Interaction {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, long>  mInteractedEntityId;
        ::ll::TypedStorage<4, 4, int>   mInteractedEntityType;
        ::ll::UntypedStorage<1, 1>      mInteractionType;
        ::ll::TypedStorage<4, 4, int>   mInteractedEntityVariant;
        ::ll::TypedStorage<1, 1, uchar> mInteractedEntityColor;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, int64>                                mInteractedEntityId;
        ::ll::TypedStorage<4, 4, int>                                  mInteractedEntityType;
        ::ll::TypedStorage<1, 1, ::MinecraftEventing::InteractionType> mInteractionType;
        ::ll::TypedStorage<4, 4, int>                                  mInteractedEntityVariant;
        ::ll::TypedStorage<1, 1, uchar>                                mInteractedEntityColor;
        // NOLINTEND
    };

    struct ItemUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> mItemId;
        ::ll::TypedStorage<4, 4, int>   mItemAux;
        ::ll::TypedStorage<4, 4, int>   mUseMethod;
        ::ll::TypedStorage<4, 4, int>   mCount;
        // NOLINTEND
    };

    struct MobBorn {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>   mBabyType;
        ::ll::TypedStorage<4, 4, int>   mBabyVariant;
        ::ll::TypedStorage<1, 1, uchar> mBabyColor;
        // NOLINTEND
    };

    struct MobKilled {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, int64>          mKillerEntityId;
        ::ll::TypedStorage<8, 8, int64>          mKilledMobId;
        ::ll::TypedStorage<4, 4, ::ActorType>    mDamageChildType;
        ::ll::TypedStorage<4, 4, int>            mDamageSource;
        ::ll::TypedStorage<4, 4, int>            mTraderTier;
        ::ll::TypedStorage<8, 32, ::std::string> mTraderName;
        // NOLINTEND
    };

    struct POICauldronUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short>                                        mItemId;
        ::ll::TypedStorage<1, 1, ::MinecraftEventing::POIBlockInteractionType> mInteractionType;
        // NOLINTEND
    };

    struct PiglinBarter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mItemId;
        ::ll::TypedStorage<1, 1, bool> mWasTargetingBarteringPlayer;
        // NOLINTEND
    };

    struct PlayerDied {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mKillerId;
        ::ll::TypedStorage<4, 4, int>  mKillerVariant;
        ::ll::TypedStorage<4, 4, int>  mDamageSource;
        ::ll::TypedStorage<1, 1, bool> mInRaid;
        // NOLINTEND
    };

    struct PlayerWaxedOrUnwaxedCopper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mBlockID;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct PortalCreated {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mBuiltInDimension;
        // NOLINTEND
    };

    struct PortalUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mFromDimension;
        ::ll::TypedStorage<4, 4, int> mToDimension;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct MobKilled {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, long>         mKillerEntityId;
        ::ll::TypedStorage<8, 8, long>         mKilledMobId;
        ::ll::TypedStorage<4, 4, ::ActorType>  mDamageChildType;
        ::ll::TypedStorage<4, 4, int>          mDamageSource;
        ::ll::TypedStorage<4, 4, int>          mTraderTier;
        ::ll::TypedStorage<8, 24, std::string> mTraderName;
        // NOLINTEND
    };

    struct CauldronUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> mContentsType;
        ::ll::TypedStorage<4, 4, uint>  mContentsColor;
        ::ll::TypedStorage<2, 2, short> mFillLevel;
        // NOLINTEND
    };

    struct PlayerDied {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mKillerId;
        ::ll::TypedStorage<4, 4, int>  mKillerVariant;
        ::ll::TypedStorage<4, 4, int>  mDamageSource;
        ::ll::TypedStorage<1, 1, bool> mInRaid;
        // NOLINTEND
    };

    struct BossKilled {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mPartySize;
        ::ll::TypedStorage<8, 8, long> mBossUniqueId;
        ::ll::TypedStorage<4, 4, int>  mBossType;
        // NOLINTEND
    };

    struct SlashCommand {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mCommandName;
        ::ll::TypedStorage<4, 4, int>          mSuccessCount;
        ::ll::TypedStorage<4, 4, int>          mErrorCount;
        ::ll::TypedStorage<8, 24, std::string> mErrorList;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::LegacyTelemetryEventPacketPayload::SlashCommand const&) const;

        MCNAPI ~SlashCommand();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct MobBorn {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>   mBabyType;
        ::ll::TypedStorage<4, 4, int>   mBabyVariant;
        ::ll::TypedStorage<1, 1, uchar> mBabyColor;
        // NOLINTEND
    };

    struct POICauldronUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> mItemId;
        ::ll::UntypedStorage<1, 1>      mInteractionType;
        // NOLINTEND
    };

    struct ComposterUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> mItemId;
        ::ll::UntypedStorage<1, 1>      mInteractionType;
        // NOLINTEND
    };

    struct BellUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> mItemId;
        // NOLINTEND
    };

    struct ActorDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mEventName;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct RaidUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mCurrentWave;
        ::ll::TypedStorage<4, 4, int>  mTotalWaves;
        ::ll::TypedStorage<1, 1, bool> mSuccess;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        // NOLINTEND
    };

    struct SlashCommand {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mCommandName;
        ::ll::TypedStorage<4, 4, int>            mSuccessCount;
        ::ll::TypedStorage<4, 4, int>            mErrorCount;
        ::ll::TypedStorage<8, 32, ::std::string> mErrorList;
        // NOLINTEND

    public:
        // prevent constructor by default
        SlashCommand& operator=(SlashCommand const&);
        SlashCommand(SlashCommand const&);
        SlashCommand();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::LegacyTelemetryEventPacketPayload::SlashCommand&
        operator=(::LegacyTelemetryEventPacketPayload::SlashCommand&&);
#endif // @header-generator platform
        // NOLINTEND
    };

    struct TargetBlockHit {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mRedstoneLevel;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct PiglinBarter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mItemId;
        ::ll::TypedStorage<1, 1, bool> mWasTargetingBarteringPlayer;
        // NOLINTEND
    };
#else // @header-generator platform
    using Achievement = ::LegacyTelemetryEventPacketPayload::Achievement;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct PlayerWaxedOrUnwaxedCopper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mBlockID;
        // NOLINTEND
    };
#else // @header-generator platform
    using ActorDefinition = ::LegacyTelemetryEventPacketPayload::ActorDefinition;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct CodeBuilderRuntimeAction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mRuntimeAction;
        // NOLINTEND
    };
#else // @header-generator platform
    using BellUsed = ::LegacyTelemetryEventPacketPayload::BellUsed;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct CodeBuilderScoreboard {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mObjectiveName;
        ::ll::TypedStorage<4, 4, int>          mScore;
        // NOLINTEND
    };
#else // @header-generator platform
    using BossKilled = ::LegacyTelemetryEventPacketPayload::BossKilled;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct ItemUsed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> mItemId;
        ::ll::TypedStorage<4, 4, int>   mItemAux;
        ::ll::TypedStorage<4, 4, int>   mUseMethod;
        ::ll::TypedStorage<4, 4, int>   mCount;
        // NOLINTEND
    };
#else // @header-generator platform
    using CauldronUsed = ::LegacyTelemetryEventPacketPayload::CauldronUsed;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct Empty {};
#else // @header-generator platform
    using CodeBuilderRuntimeAction = ::LegacyTelemetryEventPacketPayload::CodeBuilderRuntimeAction;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using EventData = std::variant<
        LegacyTelemetryEventPacketPayload::Achievement,
        LegacyTelemetryEventPacketPayload::Interaction,
        LegacyTelemetryEventPacketPayload::PortalCreated,
        LegacyTelemetryEventPacketPayload::PortalUsed,
        LegacyTelemetryEventPacketPayload::MobKilled,
        LegacyTelemetryEventPacketPayload::CauldronUsed,
        LegacyTelemetryEventPacketPayload::PlayerDied,
        LegacyTelemetryEventPacketPayload::BossKilled,
        LegacyTelemetryEventPacketPayload::SlashCommand,
        LegacyTelemetryEventPacketPayload::MobBorn,
        LegacyTelemetryEventPacketPayload::POICauldronUsed,
        LegacyTelemetryEventPacketPayload::ComposterUsed,
        LegacyTelemetryEventPacketPayload::BellUsed,
        LegacyTelemetryEventPacketPayload::ActorDefinition,
        LegacyTelemetryEventPacketPayload::RaidUpdate,
        LegacyTelemetryEventPacketPayload::TargetBlockHit,
        LegacyTelemetryEventPacketPayload::PiglinBarter,
        LegacyTelemetryEventPacketPayload::PlayerWaxedOrUnwaxedCopper,
        LegacyTelemetryEventPacketPayload::CodeBuilderRuntimeAction,
        LegacyTelemetryEventPacketPayload::CodeBuilderScoreboard,
        LegacyTelemetryEventPacketPayload::ItemUsed,
        LegacyTelemetryEventPacketPayload::Empty>;
#else // @header-generator platform
    using CodeBuilderScoreboard = ::LegacyTelemetryEventPacketPayload::CodeBuilderScoreboard;

    using ComposterUsed = ::LegacyTelemetryEventPacketPayload::ComposterUsed;

    using Empty = ::LegacyTelemetryEventPacketPayload::Empty;

    using EventData = ::std::variant<
        ::LegacyTelemetryEventPacketPayload::Achievement,
        ::LegacyTelemetryEventPacketPayload::Interaction,
        ::LegacyTelemetryEventPacketPayload::PortalCreated,
        ::LegacyTelemetryEventPacketPayload::PortalUsed,
        ::LegacyTelemetryEventPacketPayload::MobKilled,
        ::LegacyTelemetryEventPacketPayload::CauldronUsed,
        ::LegacyTelemetryEventPacketPayload::PlayerDied,
        ::LegacyTelemetryEventPacketPayload::BossKilled,
        ::LegacyTelemetryEventPacketPayload::SlashCommand,
        ::LegacyTelemetryEventPacketPayload::MobBorn,
        ::LegacyTelemetryEventPacketPayload::POICauldronUsed,
        ::LegacyTelemetryEventPacketPayload::ComposterUsed,
        ::LegacyTelemetryEventPacketPayload::BellUsed,
        ::LegacyTelemetryEventPacketPayload::ActorDefinition,
        ::LegacyTelemetryEventPacketPayload::RaidUpdate,
        ::LegacyTelemetryEventPacketPayload::TargetBlockHit,
        ::LegacyTelemetryEventPacketPayload::PiglinBarter,
        ::LegacyTelemetryEventPacketPayload::PlayerWaxedOrUnwaxedCopper,
        ::LegacyTelemetryEventPacketPayload::CodeBuilderRuntimeAction,
        ::LegacyTelemetryEventPacketPayload::CodeBuilderScoreboard,
        ::LegacyTelemetryEventPacketPayload::ItemUsed,
        ::LegacyTelemetryEventPacketPayload::Empty>;

    using Interaction = ::LegacyTelemetryEventPacketPayload::Interaction;

    using ItemUsed = ::LegacyTelemetryEventPacketPayload::ItemUsed;

    using MobBorn = ::LegacyTelemetryEventPacketPayload::MobBorn;

    using MobKilled = ::LegacyTelemetryEventPacketPayload::MobKilled;

    using POICauldronUsed = ::LegacyTelemetryEventPacketPayload::POICauldronUsed;

    using PiglinBarter = ::LegacyTelemetryEventPacketPayload::PiglinBarter;

    using PlayerDied = ::LegacyTelemetryEventPacketPayload::PlayerDied;

    using PlayerWaxedOrUnwaxedCopper = ::LegacyTelemetryEventPacketPayload::PlayerWaxedOrUnwaxedCopper;

    using PortalCreated = ::LegacyTelemetryEventPacketPayload::PortalCreated;

    using PortalUsed = ::LegacyTelemetryEventPacketPayload::PortalUsed;

    using RaidUpdate = ::LegacyTelemetryEventPacketPayload::RaidUpdate;

    using SlashCommand = ::LegacyTelemetryEventPacketPayload::SlashCommand;

    using TargetBlockHit = ::LegacyTelemetryEventPacketPayload::TargetBlockHit;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPlayerUniqueId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                           mPlayerUniqueId;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::LegacyTelemetryEventPacketPayload::Type> mType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mUsePlayerID;
    ::ll::TypedStorage<8, 64, std::variant<LegacyTelemetryEventPacketPayload::Achievement, LegacyTelemetryEventPacketPayload::Interaction, LegacyTelemetryEventPacketPayload::PortalCreated, LegacyTelemetryEventPacketPayload::PortalUsed, LegacyTelemetryEventPacketPayload::MobKilled, LegacyTelemetryEventPacketPayload::CauldronUsed, LegacyTelemetryEventPacketPayload::PlayerDied, LegacyTelemetryEventPacketPayload::BossKilled, LegacyTelemetryEventPacketPayload::SlashCommand, LegacyTelemetryEventPacketPayload::MobBorn, LegacyTelemetryEventPacketPayload::POICauldronUsed, LegacyTelemetryEventPacketPayload::ComposterUsed, LegacyTelemetryEventPacketPayload::BellUsed, LegacyTelemetryEventPacketPayload::ActorDefinition, LegacyTelemetryEventPacketPayload::RaidUpdate, LegacyTelemetryEventPacketPayload::TargetBlockHit, LegacyTelemetryEventPacketPayload::PiglinBarter, LegacyTelemetryEventPacketPayload::PlayerWaxedOrUnwaxedCopper, LegacyTelemetryEventPacketPayload::CodeBuilderRuntimeAction, LegacyTelemetryEventPacketPayload::CodeBuilderScoreboard, LegacyTelemetryEventPacketPayload::ItemUsed, LegacyTelemetryEventPacketPayload::Empty>> mEventData;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                      mUsePlayerID;
    ::ll::TypedStorage<
        8,
        80,
        ::std::variant<
            ::LegacyTelemetryEventPacketPayload::Achievement,
            ::LegacyTelemetryEventPacketPayload::Interaction,
            ::LegacyTelemetryEventPacketPayload::PortalCreated,
            ::LegacyTelemetryEventPacketPayload::PortalUsed,
            ::LegacyTelemetryEventPacketPayload::MobKilled,
            ::LegacyTelemetryEventPacketPayload::CauldronUsed,
            ::LegacyTelemetryEventPacketPayload::PlayerDied,
            ::LegacyTelemetryEventPacketPayload::BossKilled,
            ::LegacyTelemetryEventPacketPayload::SlashCommand,
            ::LegacyTelemetryEventPacketPayload::MobBorn,
            ::LegacyTelemetryEventPacketPayload::POICauldronUsed,
            ::LegacyTelemetryEventPacketPayload::ComposterUsed,
            ::LegacyTelemetryEventPacketPayload::BellUsed,
            ::LegacyTelemetryEventPacketPayload::ActorDefinition,
            ::LegacyTelemetryEventPacketPayload::RaidUpdate,
            ::LegacyTelemetryEventPacketPayload::TargetBlockHit,
            ::LegacyTelemetryEventPacketPayload::PiglinBarter,
            ::LegacyTelemetryEventPacketPayload::PlayerWaxedOrUnwaxedCopper,
            ::LegacyTelemetryEventPacketPayload::CodeBuilderRuntimeAction,
            ::LegacyTelemetryEventPacketPayload::CodeBuilderScoreboard,
            ::LegacyTelemetryEventPacketPayload::ItemUsed,
            ::LegacyTelemetryEventPacketPayload::Empty>>
        mEventData;
#endif // @header-generator platform
    // NOLINTEND
};
