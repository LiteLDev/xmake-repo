#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/entity/network/ComponentNetRelevancyRegistry.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class DefinitionInstanceGroup;
class EntityRegistry;
class VolumeComponentFactory;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VolumeEntityManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16>                                       mRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VolumeComponentFactory>> mComponentFactory;
    ::ll::UntypedStorage<8, 40>                                       mVolumeInstances;
    ::ll::TypedStorage<8, 40, ::ComponentNetRelevancyRegistry>        mComponentNetRelevancyRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeEntityManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VolumeEntityManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VolumeEntityManager(::StackRefResult<EntityRegistry>, ::cereal::ReflectionCtx&);

    MCNAPI ::OwnerPtr<EntityContext> _createVolumeEntity(::DefinitionInstanceGroup const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& isTriggerVolumesEnabled();
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
#else // @header-generator platform
class VolumeEntityManager {};
#endif // @header-generator platform
