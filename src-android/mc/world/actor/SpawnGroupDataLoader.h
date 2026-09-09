#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct ActorSpawnRuleData;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
// clang-format on

class SpawnGroupDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mLoader;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnGroupDataLoader();

    MCNAPI ::SemVersion const& firstCerealSlice() const;

    MCNAPI ::Puv::LoadResult<ActorSpawnRuleData> load(::Bedrock::Resources::MinecraftDocumentInput const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
