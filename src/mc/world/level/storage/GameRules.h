#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/storage/GameRule.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class GameRule;
#endif // @header-generator platform
class GameRulesChangedPacket;
class GameRulesChangedPacketData;
struct GameRuleId;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace cereal { struct NullType; }
// clang-format on

class GameRules : public ::Bedrock::EnableNonOwnerReferences {
public:
    // GameRules inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum GameRulesIndex : int {
        INVALID_GAME_RULE            = -1,
        COMMAND_BLOCK_OUTPUT         = 0,
        DO_DAYLIGHT_CYCLE            = 1,
        DO_ENTITY_DROPS              = 2,
        DO_FIRE_TICK                 = 3,
        RECIPES_UNLOCK               = 4,
        DO_LIMITED_CRAFTING          = 5,
        DO_MOB_LOOT                  = 6,
        DO_MOB_SPAWNING              = 7,
        DO_TILE_DROPS                = 8,
        DO_WEATHER_CYCLE             = 9,
        DROWNING_DAMAGE              = 10,
        FALL_DAMAGE                  = 11,
        FIRE_DAMAGE                  = 12,
        KEEP_INVENTORY               = 13,
        MOB_GRIEFING                 = 14,
        PVP                          = 15,
        SHOW_COORDINATES             = 16,
        PLAYER_WAYPOINTS             = 17,
        LOCATOR_BAR_DEPRECATED       = 18,
        SHOW_DAYS_PLAYED             = 19,
        DO_NATURAL_REGENERATION      = 20,
        DO_TNT_EXPLODE               = 21,
        SEND_COMMAND_FEEDBACK        = 22,
        MAX_COMMAND_CHAIN_LENGTH     = 23,
        DO_INSOMNIA                  = 24,
        COMMAND_BLOCKS_ENABLED       = 25,
        RANDOM_TICK_SPEED            = 26,
        DO_IMMEDIATE_RESPAWN         = 27,
        SHOW_DEATH_MESSAGES          = 28,
        FUNCTION_COMMAND_LIMIT       = 29,
        PLAYER_SPAWN_RADIUS          = 30,
        SHOW_TAGS                    = 31,
        FREEZE_DAMAGE                = 32,
        RESPAWN_BLOCKS_EXPLODE       = 33,
        SHOW_BORDER_EFFECT           = 34,
        SHOW_RECIPE_MESSAGES         = 35,
        PLAYER_SLEEPING_PERCENTAGE   = 36,
        PROJECTILES_CAN_BREAK_BLOCKS = 37,
        TNT_EXPLOSION_DROP_DECAY     = 38,
        VANILLA_GAME_RULE_COUNT      = 39,
        GLOBAL_MUTE                  = 39,
        ALLOW_DESTRUCTIVE_OBJECTS    = 40,
        ALLOW_MOBS                   = 41,
        CODE_BUILDER                 = 42,
        EDU_CLOUD_SAVE               = 43,
        EDU_GAME_RULE_COUNT          = 44,
        GAME_RULE_COUNT              = 44,
#else // @header-generator platform
    enum class GameRulesIndex : int {
        InvalidGameRule           = -1,
        CommandBlockOutput        = 0,
        DoDaylightCycle           = 1,
        DoEntityDrops             = 2,
        DoFireTick                = 3,
        RecipesUnlock             = 4,
        DoLimitedCrafting         = 5,
        DoMobLoot                 = 6,
        DoMobSpawning             = 7,
        DoTileDrops               = 8,
        DoWeatherCycle            = 9,
        DrowningDamage            = 10,
        FallDamage                = 11,
        FireDamage                = 12,
        KeepInventory             = 13,
        MobGriefing               = 14,
        Pvp                       = 15,
        ShowCoordinates           = 16,
        PlayerWaypoints           = 17,
        LocatorBarDeprecated      = 18,
        ShowDaysPlayed            = 19,
        DoNaturalRegeneration     = 20,
        DoTntExplode              = 21,
        SendCommandFeedback       = 22,
        MaxCommandChainLength     = 23,
        DoInsomnia                = 24,
        CommandBlocksEnabled      = 25,
        RandomTickSpeed           = 26,
        DoImmediateRespawn        = 27,
        ShowDeathMessages         = 28,
        FunctionCommandLimit      = 29,
        PlayerSpawnRadius         = 30,
        ShowTags                  = 31,
        FreezeDamage              = 32,
        RespawnBlocksExplode      = 33,
        ShowBorderEffect          = 34,
        ShowRecipeMessages        = 35,
        PlayerSleepingPercentage  = 36,
        ProjectilesCanBreakBlocks = 37,
        TntExplosionDropDecay     = 38,
        VanillaGameRuleCount      = 39,
        GlobalMute                = 39,
        AllowDestructiveObjects   = 40,
        AllowMobs                 = 41,
        CodeBuilder               = 42,
        EduCloudSave              = 43,
        EduGameRuleCount          = 44,
        GameRuleCount             = 44,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using GameRuleMap = std::vector<GameRule>;
#else // @header-generator platform
    using GameRuleMap = ::std::vector<::GameRule>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using WorldPolicyMap = std::map<HashedString, GameRule>;
#else // @header-generator platform
    using WorldPolicyMap = ::std::map<::HashedString, ::GameRule>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<GameRule>>            mGameRules;
    ::ll::TypedStorage<8, 24, std::map<HashedString, GameRule>> mWorldPolicies;
    ::ll::UntypedStorage<8, 88>                                 mGameRuleChangePublisher;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::GameRule>>              mGameRules;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::GameRule>> mWorldPolicies;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::GameRules const&, ::GameRuleId const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mGameRuleChangePublisher;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GameRules();
#else // @header-generator platform
    virtual ~GameRules() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameRules();
#else // @header-generator platform
    MCAPI GameRules();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameRules(::GameRules const&);
#else // @header-generator platform
    MCAPI GameRules(::GameRules&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameRules(::GameRules&&);
#else // @header-generator platform
    MCAPI GameRules(::GameRules const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameRule& _registerRule(std::string const&, ::GameRuleId);
#else // @header-generator platform
    MCAPI void _registerRules();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _registerRules();

    MCNAPI std::unique_ptr<GameRulesChangedPacket> _setGameRule(
        ::GameRule*,
        std::variant<cereal::NullType, bool, int, float>,
        ::GameRule::Type,
        bool,
        bool*,
        bool*,
        ::GameRule::ValidationError*
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::GameRulesChangedPacket> _setGameRule(
        ::GameRule*                                          gameRule,
        ::std::variant<::cereal::NullType, bool, int, float> value,
        ::GameRule::Type                                     type,
        bool                                                 returnPacket,
        bool*                                                pValueValidated,
        bool*                                                pValueChanged,
        ::GameRule::ValidationError*                         errorOutput
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<GameRulesChangedPacket> createAllGameRulesPacket() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::GameRulesChangedPacket> createAllGameRulesPacket() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void deserializeRules(::GameRulesChangedPacketData const&);
#else // @header-generator platform
    MCAPI void deserializeRules(::GameRulesChangedPacketData const& ruleData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getBool(::GameRuleId, bool) const;
#else // @header-generator platform
    MCAPI bool getBool(::GameRuleId ruleType, bool defaultValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getFloat(::GameRuleId) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void getTagData(::CompoundTag const& tag, ::BaseGameVersion const& version);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getInt(::GameRuleId) const;
#else // @header-generator platform
    MCAPI ::GameRules& operator=(::GameRules&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameRule const* getRule(::GameRuleId) const;
#else // @header-generator platform
    MCAPI ::GameRules& operator=(::GameRules const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<GameRule> const& getRules() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool operator==(::GameRules const& rhs) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void getTagData(::CompoundTag const&, ::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI void setMarketplaceOverrides();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasRule(::GameRuleId) const;

    MCNAPI ::GameRuleId nameToGameRuleIndex(std::string const&) const;

    MCNAPI ::GameRules& operator=(::GameRules const&);

    MCNAPI ::GameRules& operator=(::GameRules&&);

    MCNAPI bool operator==(::GameRules const&) const;

    MCNAPI ::Bedrock::PubSub::Subscription
        registerOnGameRuleChangeCallback(std::function<void(const GameRules&, const GameRuleId&)>);

    MCNAPI void setMarketplaceOverrides();

    MCNAPI std::unique_ptr<GameRulesChangedPacket>
           setRule(::GameRuleId, bool, bool, bool*, bool*, ::GameRule::ValidationError*);

    MCNAPI std::unique_ptr<GameRulesChangedPacket>
           setRule(::GameRuleId, int, bool, bool*, bool*, ::GameRule::ValidationError*);

    MCNAPI std::unique_ptr<GameRulesChangedPacket>
           setRule(::GameRuleId, float, bool, bool*, bool*, ::GameRule::ValidationError*);

    MCNAPI void setTagData(::CompoundTag&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void setTagData(::CompoundTag& tag) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static uint const& DEFAULT_PLAYER_SPAWN_RADIUS();

    MCNAPI static int const& DEFAULT_RANDOMTICKSPEED();

    MCNAPI static int const& MAX_FUNCTIONCOMMANDLIMIT();

    MCNAPI static uint const& MAX_PLAYER_SPAWN_RADIUS();

    MCNAPI static int const& MAX_RANDOMTICKSPEED();

    MCNAPI static uint const& MIN_PLAYER_SPAWN_RADIUS();

    MCNAPI static std::string const& WORLD_POLICY_TAG_NAME();
#else // @header-generator platform
    MCAPI static ::std::string const& WORLD_POLICY_TAG_NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::GameRules const&);
#else // @header-generator platform
    MCAPI void* $ctor(::GameRules&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::GameRules&&);
#else // @header-generator platform
    MCAPI void* $ctor(::GameRules const& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
