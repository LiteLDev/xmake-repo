#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/puv/LoadResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { class Input; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_21_60::DimensionDefinition { struct DimensionDocument; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class DimensionDataLoader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 240> mDimensionDefinitionLoader;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_60::DimensionDefinition::DimensionDocument,
            nullptr_t,
            nullptr_t,
            ::SharedTypes::v1_21_60::DimensionDefinition::DimensionDocument>>
        mDimensionDefinitionLoader;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DimensionDataLoader();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<GeneratorType> stringToGeneratorType(std::string const&);
#else // @header-generator platform
    MCAPI static ::std::optional<::GeneratorType> stringToGeneratorType(::std::string const& generatorNameString);
#endif // @header-generator platform
    // NOLINTEND
};
