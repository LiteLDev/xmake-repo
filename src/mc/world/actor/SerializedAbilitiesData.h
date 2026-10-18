#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/player/AbilitiesLayer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class LayeredAbilities;
// clang-format on

struct SerializedAbilitiesData {
public:
    // SerializedAbilitiesData inner types declare
    // clang-format off
    struct SerializedLayer;
    // clang-format on

    // SerializedAbilitiesData inner types define
    enum class SerializedAbilitiesLayer : ushort {
        CustomCache   = 0,
        Base          = 1,
        Spectator     = 2,
        Commands      = 3,
        Editor        = 4,
        LoadingScreen = 5,
    };

    struct SerializedLayer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::SerializedAbilitiesData::SerializedAbilitiesLayer> mSerializedLayer;
        ::ll::TypedStorage<4, 4, uint>                                                mAbilitiesSet;
        ::ll::TypedStorage<4, 4, uint>                                                mAbilityValues;
        ::ll::TypedStorage<4, 4, float>                                               mFlySpeed;
        ::ll::TypedStorage<4, 4, float>                                               mVerticalFlySpeed;
        ::ll::TypedStorage<4, 4, float>                                               mWalkSpeed;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                        mTargetPlayer;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                               mCommandPermissions;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel>                                mPlayerPermissions;
    ::ll::TypedStorage<8, 24, std::vector<SerializedAbilitiesData::SerializedLayer>> mLayers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                            mTargetPlayer;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                                   mCommandPermissions;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel>                                    mPlayerPermissions;
    ::ll::TypedStorage<8, 24, ::std::vector<::SerializedAbilitiesData::SerializedLayer>> mLayers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SerializedAbilitiesData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SerializedAbilitiesData(::ActorUniqueID const, ::LayeredAbilities const&);
#else // @header-generator platform
    MCAPI SerializedAbilitiesData(::ActorUniqueID targetPlayer, ::LayeredAbilities const& layeredAbilities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fillIn(::LayeredAbilities&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void fillIn(::LayeredAbilities& layeredAbilities) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID getTargetPlayer() const;
#else // @header-generator platform
    MCAPI ~SerializedAbilitiesData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<SerializedAbilitiesData::SerializedAbilitiesLayer, 6> const& ABILITIES_LAYER_MAP();
#else // @header-generator platform
    MCAPI static ::std::array<::SerializedAbilitiesData::SerializedAbilitiesLayer, 6> const& ABILITIES_LAYER_MAP();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorUniqueID const, ::LayeredAbilities const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorUniqueID targetPlayer, ::LayeredAbilities const& layeredAbilities);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
