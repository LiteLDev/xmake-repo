#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorFilterGroup.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/Tick.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorUniqueID;
struct Tick;
#endif // @header-generator platform
// clang-format on

class AreaAttackComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                                      mDamageRange;
    ::ll::TypedStorage<4, 4, int>                                          mDamagePerTick;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>      mDamageCause;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                          mEntityFilter;
    ::ll::TypedStorage<4, 4, int>                                          mAttackCooldownTicks;
    ::ll::TypedStorage<1, 1, bool>                                         mPlayAttackSound;
    ::ll::TypedStorage<1, 1, bool>                                         mUseSelfAsDamageSource;
    ::ll::TypedStorage<8, 24, std::string>                                 mDeathMessageOverride;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ActorUniqueID, Tick>>> mAttackCooldownVector;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                                              mDamageRange;
    ::ll::TypedStorage<4, 4, int>                                                  mDamagePerTick;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>              mDamageCause;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                                  mEntityFilter;
    ::ll::TypedStorage<4, 4, int>                                                  mAttackCooldownTicks;
    ::ll::TypedStorage<1, 1, bool>                                                 mPlayAttackSound;
    ::ll::TypedStorage<1, 1, bool>                                                 mUseSelfAsDamageSource;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mDeathMessageOverride;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ActorUniqueID, ::Tick>>> mAttackCooldownVector;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AreaAttackComponent& operator=(AreaAttackComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AreaAttackComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AreaAttackComponent(::AreaAttackComponent const&);
#else // @header-generator platform
    MCAPI AreaAttackComponent(::AreaAttackComponent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::pair<ActorUniqueID, Tick>* findCooldownEntry(::ActorUniqueID const&);
#else // @header-generator platform
    MCAPI ::AreaAttackComponent& operator=(::AreaAttackComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isEntryOnAttackCooldown(std::pair<ActorUniqueID, Tick> const*, ::Tick const&) const;
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI ~AreaAttackComponent();
#else // @header-generator platform
    MCAPI ~AreaAttackComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::AreaAttackComponent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::AreaAttackComponent const&);
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
};
