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
    ::ll::TypedStorage<1, 1, uchar>                             mVanillaDimensionId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                   mActorId;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mPos;
    ::ll::TypedStorage<8, 24, std::string>                      mEffectName;
    ::ll::TypedStorage<8, 64, std::optional<MolangVariableMap>> mMolangVariables;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnParticleEffectPacketPayload(::Vec3 const&, std::string const&, uchar, std::optional<MolangVariableMap>);

    MCNAPI ~SpawnParticleEffectPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const&, std::string const&, uchar, std::optional<MolangVariableMap>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
