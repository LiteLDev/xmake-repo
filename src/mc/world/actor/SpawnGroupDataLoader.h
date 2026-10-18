#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
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
// clang-format on

class SpawnGroupDataLoader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 240> mLoader;
#else // @header-generator platform
    ::ll::TypedStorage<8, 256, ::Puv::SlicedLoader<::ActorSpawnRuleData, nullptr_t, nullptr_t, ::ActorSpawnRuleData>>
        mLoader;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SpawnGroupDataLoader();
#else // @header-generator platform
    MCAPI SpawnGroupDataLoader();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SemVersion const& firstCerealSlice() const;

    MCNAPI ::Puv::LoadResult<ActorSpawnRuleData> load(::Bedrock::Resources::MinecraftDocumentInput const&) const;
#else // @header-generator platform
    MCAPI ::Puv::LoadResult<::ActorSpawnRuleData> load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};
