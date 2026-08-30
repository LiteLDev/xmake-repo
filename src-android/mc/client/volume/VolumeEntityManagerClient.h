#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/volume/VolumeEntityManager.h"

// auto generated forward declare list
// clang-format off
class AddVolumeEntityPacket;
class EntityNetId;
class EntityRegistry;
class FogDefinitionRegistry;
struct DimensionType;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VolumeEntityManagerClient : public ::VolumeEntityManager {
public:
    // prevent constructor by default
    VolumeEntityManagerClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VolumeEntityManagerClient();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VolumeEntityManagerClient(::StackRefResult<EntityRegistry>, ::cereal::ReflectionCtx&);

    MCNAPI void createVolume(::AddVolumeEntityPacket const&, ::FogDefinitionRegistry const&);

    MCNAPI void removeVolume(::EntityNetId, ::DimensionType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StackRefResult<EntityRegistry>, ::cereal::ReflectionCtx&);
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
