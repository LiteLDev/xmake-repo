#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Diagnostics {

#if defined(LL_PLAT_A) // @header-generator platform
class EntitySystemDiagnosticSummarizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mIsSummarizationEnabled;
    ::ll::TypedStorage<1, 1, bool>                              mGenerateSystemCategoryLegend;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<uint>>> mFilteredEntityIds;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<uint>>> mFilteredSystemIds;
    // NOLINTEND
};
#else // @header-generator platform
class EntitySystemDiagnosticSummarizer {};
#endif // @header-generator platform

} // namespace ECS::Profiling::Diagnostics
