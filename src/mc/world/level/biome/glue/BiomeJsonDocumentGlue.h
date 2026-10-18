#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Biome;
struct BiomeJsonDocumentGlueResolvedBiomeData;
#else // @header-generator platform
#endif // @header-generator platform
struct IBiomeComponentGlue;
struct IBiomeEnvironmentAttributeGlue;
// clang-format on

struct BiomeJsonDocumentGlue {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<std::string, std::function<std::shared_ptr<IBiomeComponentGlue> ()>>> mComponentGlueFactories;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::function<std::shared_ptr<IBiomeEnvironmentAttributeGlue> ()>>> mEnvironmentAttributeGlueFactories;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::function<::std::shared_ptr<::IBiomeComponentGlue>()>>>
        mComponentGlueFactories;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::string, ::std::function<::std::shared_ptr<::IBiomeEnvironmentAttributeGlue>()>>>
        mEnvironmentAttributeGlueFactories;
#endif // @header-generator platform
    // NOLINTEND
};
