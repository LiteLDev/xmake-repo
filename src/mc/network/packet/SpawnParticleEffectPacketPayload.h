#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/MolangVariableMap.h"

struct SpawnParticleEffectPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                             mVanillaDimensionId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                   mActorId;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mPos;
    ::ll::TypedStorage<8, 24, std::string>                      mEffectName;
    ::ll::TypedStorage<8, 64, std::optional<MolangVariableMap>> mMolangVariables;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                                 mVanillaDimensionId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                       mActorId;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPos;
    ::ll::TypedStorage<8, 32, ::std::string>                        mEffectName;
    ::ll::TypedStorage<8, 64, ::std::optional<::MolangVariableMap>> mMolangVariables;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SpawnParticleEffectPacketPayload() = default;
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SpawnParticleEffectPacketPayload(::Vec3 const&, std::string const&, uchar, std::optional<MolangVariableMap>);

    MCNAPI ~SpawnParticleEffectPacketPayload();
#else // @header-generator platform
    MCAPI SpawnParticleEffectPacketPayload(
        ::Vec3 const&                        pos,
        ::std::string const&                 name,
        uchar                                vanillaDimensionId,
        ::std::optional<::MolangVariableMap> molangVariables
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Vec3 const&, std::string const&, uchar, std::optional<MolangVariableMap>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Vec3 const&                        pos,
        ::std::string const&                 name,
        uchar                                vanillaDimensionId,
        ::std::optional<::MolangVariableMap> molangVariables
    );
#endif // @header-generator platform
    // NOLINTEND
};
