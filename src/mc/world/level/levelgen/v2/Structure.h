#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/spawn_category/Type.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/levelgen/v2/StructureSpawnOverride.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/v2/generation_step/Type.h"
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class PoolAliasBinding;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BiomeIdType;
#endif // @header-generator platform
namespace br::worldgen { class GenerationStub; }
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct GenerationContext; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace br::worldgen { struct StructureSpawnOverride; }
#endif // @header-generator platform
// clang-format on

namespace br::worldgen {

struct Structure {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::br::worldgen::TerrainAdjustment::Type> mAdjustment;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BiomeIdType>>               mBiomes;
    ::ll::TypedStorage<8, 24, std::string>                            mKey;
    ::ll::TypedStorage<8, 40, std::unordered_map<SpawnCategory::Type, br::worldgen::StructureSpawnOverride>> mMobs;
    ::ll::TypedStorage<1, 1, ::br::worldgen::GenerationStep::Type>                                           mStep;
    ::ll::TypedStorage<8, 40, ::HashedString>                                                                mType;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<PoolAliasBinding>>> mPoolAliases;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeIdType>>           mBiomes;
    ::ll::TypedStorage<8, 32, ::std::string>                          mKey;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride>>
                                                                                    mMobs;
    ::ll::TypedStorage<1, 1, ::br::worldgen::GenerationStep::Type>                  mStep;
    ::ll::TypedStorage<8, 48, ::HashedString>                                       mType;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PoolAliasBinding>>> mPoolAliases;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Structure& operator=(Structure const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Structure();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~Structure();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<br::worldgen::GenerationStub> findValidGenerationPoint(::br::worldgen::GenerationContext&) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<::br::worldgen::GenerationStub>
    findValidGenerationPoint(::br::worldgen::GenerationContext& context) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Structure(::br::worldgen::Structure const&);
#else // @header-generator platform
    MCAPI Structure(::br::worldgen::Structure const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<br::worldgen::StructureInstance> generate(::br::worldgen::GenerationContext&) const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::br::worldgen::StructureInstance>
    generate(::br::worldgen::GenerationContext& context) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::br::worldgen::Structure const&);
#else // @header-generator platform
    MCAPI void* $ctor(::br::worldgen::Structure const&);
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
