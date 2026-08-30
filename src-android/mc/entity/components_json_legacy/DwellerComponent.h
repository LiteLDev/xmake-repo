#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/components_json_legacy/DwellerRole.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockPos;
class CompoundTag;
class DataLoadHelper;
class Mob;
class Village;
// clang-format on

class DwellerComponent {
public:
    // DwellerComponent inner types define
    enum class DwellingType : int {
        VillageDwelling = 0,
        COUNT           = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mCanFindPOI;
    ::ll::TypedStorage<1, 1, bool>                             mCanMigrate;
    ::ll::TypedStorage<1, 1, bool>                             mHasJoinedDwelling;
    ::ll::TypedStorage<1, 1, bool>                             mFixUpRole;
    ::ll::TypedStorage<1, 1, bool>                             mRewardPlayersOnFirstFounding;
    ::ll::TypedStorage<8, 40, ::HashedString>                  mPreferredProfession;
    ::ll::TypedStorage<4, 4, int>                              mFirstFoundingReward;
    ::ll::TypedStorage<4, 4, int>                              mUpdateIntervalVariant;
    ::ll::TypedStorage<8, 8, ulong>                            mDwellingUpdateInterval;
    ::ll::TypedStorage<8, 8, ulong>                            mUpdateIntervalBase;
    ::ll::TypedStorage<4, 4, float>                            mDwellingBoundsTolerance;
    ::ll::TypedStorage<4, 4, ::DwellerComponent::DwellingType> mType;
    ::ll::TypedStorage<4, 4, ::DwellerRole>                    mRole;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                     mDwellingUniqueID;
    // NOLINTEND

public:
    // prevent constructor by default
    DwellerComponent& operator=(DwellerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void DecrementDwellingUpdateInterval();

    MCNAPI DwellerComponent();

    MCNAPI bool _isLockedInToProfession(::Actor const&) const;

    MCNAPI void addAdditionalSaveData(::CompoundTag&, ::Actor const&) const;

    MCNAPI void checkandUpdateDwellingStatus(::Actor const&, ::Village*);

    MCNAPI void clearPreferredProfession();

    MCNAPI void fixupProfession(::Actor const&, ::Village*);

    MCNAPI bool getCanFindPOI() const;

    MCNAPI ::DwellerRole getDwellerRole() const;

    MCNAPI ::mce::UUID getDwellingUniqueID() const;

    MCNAPI ulong getDwellingUpdateInterval() const;

    MCNAPI bool getFixUpRole() const;

    MCNAPI ::HashedString const& getPreferredProfession() const;

    MCNAPI ulong getUpdateIntervalBase() const;

    MCNAPI int getUpdateIntervalVariant() const;

    MCNAPI std::weak_ptr<Village> const getVillage(::Actor const&) const;

    MCNAPI ::BlockPos getVillageCenter(::Actor const&) const;

    MCNAPI bool hasDwelling() const;

    MCNAPI bool hasPreferredProfession(::Actor const&) const;

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI bool isWithinRestriction(::Actor const&) const;

    MCNAPI bool needsToFixupJobSite(::Actor const&) const;

    MCNAPI bool needsToFixupProfession(::Actor const&) const;

    MCNAPI bool needsToFixupVillageRole(::Actor const&, ::Village*) const;

    MCNAPI void onDeath(::Actor&, ::ActorDamageSource const&);

    MCNAPI void onDimensionChange(::Actor&);

    MCNAPI void onRemove(::Actor&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void setDwellingUniqueID(::Actor&, ::mce::UUID);

    MCNAPI void setDwellingUpdateInterval(ulong);

    MCNAPI void setFixUpRole(bool);

    MCNAPI void setLastHurtByMob(::Actor&, ::Mob*);

    MCNAPI bool trySetPreferredProfession(::Actor const&, ::HashedString const&);

    MCNAPI bool tryToFixupRole(::Actor const&, ::Village*);

    MCNAPI bool tryToMigrate(::Actor&, ::Village*, ::Village*);

    MCNAPI bool wantsToMigrate(::Actor const&, ::Village*) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<std::string, DwellerRole> const& DWELLING_ROLES();

    MCNAPI static std::unordered_map<std::string, DwellerComponent::DwellingType> const& DWELLING_TYPES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
