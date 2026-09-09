#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/Player.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/ServerPreference.h"
#include "mc/client/network/realms/Slot.h"
#include "mc/client/network/realms/StoriesSettings.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/level/storage/GameRules.h"

// auto generated forward declare list
// clang-format off
class GameRule;
class LevelData;
class LevelDataWrapper;
struct GameRuleId;
namespace Bedrock::PubSub { class Subscription; }
namespace Json { class Value; }
// clang-format on

namespace Realms {

struct World {
public:
    // World inner types define
    enum class State : int {
        Uninitialized = 0,
        Closed        = 1,
        Open          = 2,
        End           = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                             id;
    ::ll::TypedStorage<4, 4, ::Realms::World::State>       state;
    ::ll::TypedStorage<8, 24, std::string>                 name;
    ::ll::TypedStorage<8, 24, std::string>                 slotName;
    ::ll::TypedStorage<8, 24, std::string>                 description;
    ::ll::TypedStorage<8, 24, std::string>                 ownerXuid;
    ::ll::TypedStorage<8, 24, std::string>                 ownerName;
    ::ll::TypedStorage<8, 24, std::string>                 clubId;
    ::ll::TypedStorage<8, 24, std::string>                 linkId;
    ::ll::TypedStorage<8, 24, std::string>                 friendlyId;
    ::ll::TypedStorage<8, 24, std::string>                 remoteSubscriptionId;
    ::ll::TypedStorage<8, 24, std::string>                 preferredRegion;
    ::ll::TypedStorage<4, 4, ::Realms::ServerPreference>   regionSelectionPreference;
    ::ll::TypedStorage<4, 4, int>                          daysLeft;
    ::ll::TypedStorage<1, 1, bool>                         expired;
    ::ll::TypedStorage<4, 4, int>                          maxPlayers;
    ::ll::TypedStorage<1, 1, bool>                         newWorld;
    ::ll::TypedStorage<4, 8, std::optional<int>>           gameMode;
    ::ll::TypedStorage<1, 1, bool>                         gracePeriod;
    ::ll::TypedStorage<4, 4, int>                          difficulty;
    ::ll::TypedStorage<1, 1, bool>                         isHardcore;
    ::ll::TypedStorage<1, 1, bool>                         cheatsEnabled;
    ::ll::TypedStorage<1, 1, bool>                         full;
    ::ll::TypedStorage<1, 1, bool>                         isMember;
    ::ll::TypedStorage<1, 1, bool>                         texturePacksRequired;
    ::ll::TypedStorage<4, 4, int>                          activeSlotIndex;
    ::ll::TypedStorage<4, 4, int>                          editingSlotIndex;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel>      defaultPermission;
    ::ll::TypedStorage<8, 24, std::vector<Realms::Player>> players;
    ::ll::TypedStorage<8, 24, std::vector<Realms::Player>> onlinePlayers;
    ::ll::TypedStorage<8, 24, std::vector<Realms::Slot>>   slots;
    ::ll::TypedStorage<4, 16, ::Realms::StoriesSettings>   storiesSettings;
    ::ll::TypedStorage<1, 1, bool>                         mValid;
    ::ll::TypedStorage<8, 16, std::optional<long>>         mLastSaved;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LevelData>>  mLevelDataShared;
    ::ll::TypedStorage<8, 8, ::LevelDataWrapper*>          mLevelDataWrapper;
    ::ll::TypedStorage<8, 160, ::GameRules>                mGameRules;
    // NOLINTEND

public:
    // prevent constructor by default
    World& operator=(World const&);
    World(World const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI World();

    MCNAPI explicit World(bool);

    MCNAPI World(::Realms::World&&);

    MCNAPI void _gameRuleBoolFromJson(::Json::Value const&, ::GameRuleId const&, std::string const&);

    MCNAPI void applyLevelDataGameRulesToWorld_DEPRECATED();

    MCNAPI bool areBasicSettingsEqual(::Realms::World const&) const;

    MCNAPI bool areSlotsEqual(::Realms::World const&) const;

    MCNAPI ::GameRule const* getGameRule(::GameRuleId) const;

    MCNAPI ::GameRules* getGameRules_DEPRECATED();

    MCNAPI long getId() const;

    MCNAPI std::optional<long> const& getLastSaved() const;

    MCNAPI std::shared_ptr<LevelData>& getLevelDataShared_DEPRECATED();

    MCNAPI int getSlotDaylightCycle(int) const;

    MCNAPI int getSlotDifficulty(int) const;

    MCNAPI int getSlotGameMode(int) const;

    MCNAPI bool getSlotIsHardcore(int) const;

    MCNAPI std::string const& getSlotWorldName(int) const;

    MCNAPI bool isActiveSlotValid() const;

    MCNAPI bool const isClosed() const;

    MCNAPI bool isInitialized() const;

    MCNAPI bool isSlotEmpty(int) const;

    MCNAPI bool isValid() const;

    MCNAPI ::Bedrock::PubSub::Subscription
        registerOnGameRuleChangeCallback(std::function<void(const GameRules&, const GameRuleId&)>);

    MCNAPI void resetToDefaultSettings_DEPRECATED();

    MCNAPI void setGameRule(::GameRuleId, bool);

    MCNAPI void setGameRule(::GameRuleId, int);

    MCNAPI void setLastSaved(long);

    MCNAPI void setLevelDataPointer_DEPRECATED(::LevelDataWrapper*);

    MCNAPI void setSlotDaylightCycle(int, int);

    MCNAPI void setSlotDifficulty(int, int);

    MCNAPI void setSlotGameMode(int, int);

    MCNAPI void setSlotIsHardcore(int, bool);

    MCNAPI void setSlotWorldName(int, std::string const&);

    MCNAPI ~World();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Realms::World fromJson(::Json::Value const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<std::pair<std::string, GameRuleId>> const& CHEAT_SETTING_RULES();

    MCNAPI static std::vector<std::pair<bool, GameRuleId>> const& HARDCORE_SETTING_VALUES();

    MCNAPI static std::vector<std::pair<std::string, GameRuleId>> const& INT_SETTING_RULES();

    MCNAPI static std::vector<std::pair<std::string, GameRuleId>> const& WORLD_SETTING_RULES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(bool);

    MCNAPI void* $ctor(::Realms::World&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Realms
