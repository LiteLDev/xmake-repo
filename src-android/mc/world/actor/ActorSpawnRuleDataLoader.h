#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/puv/Loader.h"

// auto generated forward declare list
// clang-format off
class PackLoadContext;
class SemVersion;
struct ActorSpawnRuleData;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
namespace SharedTypes::v1_21_60::Spawn { struct Contents; }
namespace br::spawn { class SpawnPlacements; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorSpawnRuleDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mLoader;
    ::ll::UntypedStorage<8, 240> mLoaderV0;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSpawnRuleDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorSpawnRuleDataLoader();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
