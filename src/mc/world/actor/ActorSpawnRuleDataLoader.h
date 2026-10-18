#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/puv/Loader.h"

// auto generated forward declare list
// clang-format off
class PackLoadContext;
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorSpawnRuleData;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_21_60::Spawn { struct Contents; }
namespace br::spawn { class SpawnPlacements; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorSpawnRuleDataLoader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 144> mLoader;
    ::ll::UntypedStorage<8, 240> mLoaderV0;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        168,
        ::Puv::Loader<::SharedTypes::v1_21_60::Spawn::Contents, ::SharedTypes::v1_21_60::Spawn::Contents>>
        mLoader;
    ::ll::TypedStorage<8, 256, ::Puv::SlicedLoader<::ActorSpawnRuleData, nullptr_t, nullptr_t, ::ActorSpawnRuleData>>
        mLoaderV0;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ActorSpawnRuleDataLoader();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActorSpawnRuleDataLoader();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ActorSpawnRuleDataLoader();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ActorSpawnRuleDataLoader(
        ::cereal::ReflectionCtx const& ctx,
        ::PackLoadContext const&       packLoadContext,
        ::br::spawn::SpawnPlacements&  spawnPlacements
    );

    MCAPI ::Puv::LoadResult<::ActorSpawnRuleData> load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::cereal::ReflectionCtx const& ctx,
        ::PackLoadContext const&       packLoadContext,
        ::br::spawn::SpawnPlacements&  spawnPlacements
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};
