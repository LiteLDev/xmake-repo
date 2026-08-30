#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/world/level/storage/GameRule.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class GameRulesChangedPacket;
class GameRulesChangedPacketData;
struct GameRuleId;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace cereal { struct NullType; }
// clang-format on

class GameRules : public ::Bedrock::EnableNonOwnerReferences {
public:
    // GameRules inner types define
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
    };

    using GameRuleMap = std::vector<GameRule>;

    using WorldPolicyMap = std::map<HashedString, GameRule>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<GameRule>>            mGameRules;
    ::ll::TypedStorage<8, 24, std::map<HashedString, GameRule>> mWorldPolicies;
    ::ll::UntypedStorage<8, 88>                                 mGameRuleChangePublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameRules();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameRules();

    MCNAPI GameRules(::GameRules const&);

    MCNAPI GameRules(::GameRules&&);

    MCNAPI ::GameRule& _registerRule(std::string const&, ::GameRuleId);

    MCNAPI void _registerRules();

    MCNAPI std::unique_ptr<GameRulesChangedPacket> _setGameRule(
        ::GameRule*,
        std::variant<cereal::NullType, bool, int, float>,
        ::GameRule::Type,
        bool,
        bool*,
        bool*,
        ::GameRule::ValidationError*
    );

    MCNAPI std::unique_ptr<GameRulesChangedPacket> createAllGameRulesPacket() const;

    MCNAPI void deserializeRules(::GameRulesChangedPacketData const&);

    MCNAPI bool getBool(::GameRuleId, bool) const;

    MCNAPI float getFloat(::GameRuleId) const;

    MCNAPI int getInt(::GameRuleId) const;

    MCNAPI ::GameRule const* getRule(::GameRuleId) const;

    MCNAPI std::vector<GameRule> const& getRules() const;

    MCNAPI void getTagData(::CompoundTag const&, ::BaseGameVersion const&);

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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& DEFAULT_PLAYER_SPAWN_RADIUS();

    MCNAPI static int const& DEFAULT_RANDOMTICKSPEED();

    MCNAPI static int const& MAX_FUNCTIONCOMMANDLIMIT();

    MCNAPI static uint const& MAX_PLAYER_SPAWN_RADIUS();

    MCNAPI static int const& MAX_RANDOMTICKSPEED();

    MCNAPI static uint const& MIN_PLAYER_SPAWN_RADIUS();

    MCNAPI static std::string const& WORLD_POLICY_TAG_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::GameRules const&);

    MCNAPI void* $ctor(::GameRules&&);
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
