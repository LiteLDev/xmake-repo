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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
class Mob;
class Village;
// clang-format on

class DwellerComponent {
public:
    // DwellerComponent inner types define
    enum class DwellingType : int {
        VillageDwelling = 0,
#if defined(LL_PLAT_A) // @header-generator platform
        COUNT           = 1,
#else // @header-generator platform
        Count           = 1,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mCanFindPOI;
    ::ll::TypedStorage<1, 1, bool>                             mCanMigrate;
    ::ll::TypedStorage<1, 1, bool>                             mHasJoinedDwelling;
    ::ll::TypedStorage<1, 1, bool>                             mFixUpRole;
    ::ll::TypedStorage<1, 1, bool>                             mRewardPlayersOnFirstFounding;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                  mPreferredProfession;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                  mPreferredProfession;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                              mFirstFoundingReward;
    ::ll::TypedStorage<4, 4, int>                              mUpdateIntervalVariant;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                            mDwellingUpdateInterval;
    ::ll::TypedStorage<8, 8, ulong>                            mUpdateIntervalBase;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                           mDwellingUpdateInterval;
    ::ll::TypedStorage<8, 8, uint64>                           mUpdateIntervalBase;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                            mDwellingBoundsTolerance;
    ::ll::TypedStorage<4, 4, ::DwellerComponent::DwellingType> mType;
    ::ll::TypedStorage<4, 4, ::DwellerRole>                    mRole;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                     mDwellingUniqueID;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    DwellerComponent& operator=(DwellerComponent const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void DecrementDwellingUpdateInterval();
#else // @header-generator platform
    MCAPI bool _isLockedInToProfession(::Actor const& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DwellerComponent();
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag, ::Actor const& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isLockedInToProfession(::Actor const&) const;
#else // @header-generator platform
    MCAPI void fixupProfession(::Actor const& owner, ::Village* village);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&, ::Actor const&) const;
#else // @header-generator platform
    MCAPI ::std::weak_ptr<::Village> const getVillage(::Actor const& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkandUpdateDwellingStatus(::Actor const&, ::Village*);
#else // @header-generator platform
    MCAPI ::BlockPos getVillageCenter(::Actor const& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearPreferredProfession();
#else // @header-generator platform
    MCAPI bool hasPreferredProfession(::Actor const& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fixupProfession(::Actor const&, ::Village*);
#else // @header-generator platform
    MCAPI void initFromDefinition(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getCanFindPOI() const;
#else // @header-generator platform
    MCAPI bool isWithinRestriction(::Actor const& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DwellerRole getDwellerRole() const;
#else // @header-generator platform
    MCAPI bool needsToFixupJobSite(::Actor const& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::UUID getDwellingUniqueID() const;
#else // @header-generator platform
    MCAPI bool needsToFixupProfession(::Actor const& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getDwellingUpdateInterval() const;
#else // @header-generator platform
    MCAPI void onDeath(::Actor& owner, ::ActorDamageSource const& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getFixUpRole() const;
#else // @header-generator platform
    MCAPI void onRemove(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& getPreferredProfession() const;
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getUpdateIntervalBase() const;
#else // @header-generator platform
    MCAPI void setDwellingUniqueID(::Actor& owner, ::mce::UUID id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getUpdateIntervalVariant() const;
#else // @header-generator platform
    MCAPI void setLastHurtByMob(::Actor& owner, ::Mob* mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::weak_ptr<Village> const getVillage(::Actor const&) const;
#else // @header-generator platform
    MCAPI bool trySetPreferredProfession(::Actor const& owner, ::HashedString const& poi);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos getVillageCenter(::Actor const&) const;
#else // @header-generator platform
    MCAPI bool tryToFixupRole(::Actor const& owner, ::Village* village);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool tryToMigrate(::Actor& owner, ::Village* oldVillage, ::Village* newVillage);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, DwellerRole> const& DWELLING_ROLES();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, ::DwellerRole> const& DWELLING_ROLES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, DwellerComponent::DwellingType> const& DWELLING_TYPES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, ::DwellerComponent::DwellingType> const& DWELLING_TYPES();
#endif // @header-generator platform
    // NOLINTEND
};
