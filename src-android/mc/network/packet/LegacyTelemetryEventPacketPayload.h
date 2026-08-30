#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

struct LegacyTelemetryEventPacketPayload {
public:
    // LegacyTelemetryEventPacketPayload inner types declare
    // clang-format off
    struct Achievement;
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
    struct ActorDefinition;
    struct RaidUpdate;
    struct TargetBlockHit;
    struct PiglinBarter;
    struct PlayerWaxedOrUnwaxedCopper;
    struct CodeBuilderRuntimeAction;
    struct CodeBuilderScoreboard;
    struct ItemUsed;
    struct Empty;
    // clang-format on

    // LegacyTelemetryEventPacketPayload inner types define
    enum class Type : int {
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
    };

    struct Achievement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mAchievementId;
        // NOLINTEND
    };

    struct Interaction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, long>  mInteractedEntityId;
        ::ll::TypedStorage<4, 4, int>   mInteractedEntityType;
        ::ll::UntypedStorage<1, 1>      mInteractionType;
        ::ll::TypedStorage<4, 4, int>   mInteractedEntityVariant;
        ::ll::TypedStorage<1, 1, uchar> mInteractedEntityColor;
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

    struct RaidUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mCurrentWave;
        ::ll::TypedStorage<4, 4, int>  mTotalWaves;
        ::ll::TypedStorage<1, 1, bool> mSuccess;
        // NOLINTEND
    };

    struct TargetBlockHit {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mRedstoneLevel;
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

    struct PlayerWaxedOrUnwaxedCopper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mBlockID;
        // NOLINTEND
    };

    struct CodeBuilderRuntimeAction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mRuntimeAction;
        // NOLINTEND
    };

    struct CodeBuilderScoreboard {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mObjectiveName;
        ::ll::TypedStorage<4, 4, int>          mScore;
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

    struct Empty {};

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

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPlayerUniqueId;
    ::ll::TypedStorage<4, 4, ::LegacyTelemetryEventPacketPayload::Type> mType;
    ::ll::TypedStorage<1, 1, bool> mUsePlayerID;
    ::ll::TypedStorage<8, 64, std::variant<LegacyTelemetryEventPacketPayload::Achievement, LegacyTelemetryEventPacketPayload::Interaction, LegacyTelemetryEventPacketPayload::PortalCreated, LegacyTelemetryEventPacketPayload::PortalUsed, LegacyTelemetryEventPacketPayload::MobKilled, LegacyTelemetryEventPacketPayload::CauldronUsed, LegacyTelemetryEventPacketPayload::PlayerDied, LegacyTelemetryEventPacketPayload::BossKilled, LegacyTelemetryEventPacketPayload::SlashCommand, LegacyTelemetryEventPacketPayload::MobBorn, LegacyTelemetryEventPacketPayload::POICauldronUsed, LegacyTelemetryEventPacketPayload::ComposterUsed, LegacyTelemetryEventPacketPayload::BellUsed, LegacyTelemetryEventPacketPayload::ActorDefinition, LegacyTelemetryEventPacketPayload::RaidUpdate, LegacyTelemetryEventPacketPayload::TargetBlockHit, LegacyTelemetryEventPacketPayload::PiglinBarter, LegacyTelemetryEventPacketPayload::PlayerWaxedOrUnwaxedCopper, LegacyTelemetryEventPacketPayload::CodeBuilderRuntimeAction, LegacyTelemetryEventPacketPayload::CodeBuilderScoreboard, LegacyTelemetryEventPacketPayload::ItemUsed, LegacyTelemetryEventPacketPayload::Empty>> mEventData;
    // clang-format on
    // NOLINTEND
};
