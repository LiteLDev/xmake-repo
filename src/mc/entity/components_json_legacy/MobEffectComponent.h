#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class MobEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                        mEffectRange;
    ::ll::TypedStorage<4, 4, int>                          mEffectId;
    ::ll::TypedStorage<4, 4, ::EffectDuration>             mEffectTime;
    ::ll::TypedStorage<2, 2, ushort>                       mCooldownTicks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>          mEntityFilter;
    ::ll::TypedStorage<1, 1, bool>                         mIsAmbient;
    ::ll::TypedStorage<8, 24, std::optional<ExpiringTick>> mCooldown;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                            mEffectRange;
    ::ll::TypedStorage<4, 4, int>                              mEffectId;
    ::ll::TypedStorage<4, 4, ::EffectDuration>                 mEffectTime;
    ::ll::TypedStorage<2, 2, ushort>                           mCooldownTicks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>              mEntityFilter;
    ::ll::TypedStorage<1, 1, bool>                             mIsAmbient;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>> mCooldown;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MobEffectComponent& operator=(MobEffectComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MobEffectComponent();
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag, ::Actor const& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&, ::Actor const&) const;
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void tick(::Actor&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void tick(::Actor& owner);
#endif // @header-generator platform
    // NOLINTEND
};
