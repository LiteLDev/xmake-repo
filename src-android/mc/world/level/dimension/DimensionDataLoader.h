#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Input; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
namespace SharedTypes::v1_21_60::DimensionDefinition { struct DimensionDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DimensionDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mDimensionDefinitionLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionDataLoader();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<GeneratorType> stringToGeneratorType(std::string const&);
    // NOLINTEND
};
