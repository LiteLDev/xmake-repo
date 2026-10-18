#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FeatureRegistry;
class IStructureTemplateManager;
class JigsawStructureRegistry;
// clang-format on

namespace StructurePoolUtils {
// functions
// NOLINTBEGIN
MCNAPI void registerDataDrivenStructures(
    ::JigsawStructureRegistry&                                 jigsawStructureRegistry,
    ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> structureManager,
    ::FeatureRegistry&                                         features
);
// NOLINTEND

} // namespace StructurePoolUtils
#endif // @header-generator platform
