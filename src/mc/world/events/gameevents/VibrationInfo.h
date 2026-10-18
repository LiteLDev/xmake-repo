#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class DataLoadHelper;
class GameEvent;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
struct GameEventContext;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class VibrationInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                   mDistance;
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mPos;
    ::ll::TypedStorage<8, 16, std::optional<ActorUniqueID>>           mSourceID;
    ::ll::TypedStorage<8, 16, std::optional<ActorUniqueID>>           mProjectileOwnerID;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const GameEvent>> mVibration;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                       mDistance;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                 mPos;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>>           mSourceID;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>>           mProjectileOwnerID;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::GameEvent const>> mVibration;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    VibrationInfo();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void load(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void save(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void save(::CompoundTag& tag) const;
#endif // @header-generator platform
    // NOLINTEND
};
