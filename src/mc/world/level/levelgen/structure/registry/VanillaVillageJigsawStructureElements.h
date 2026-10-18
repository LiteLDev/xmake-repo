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

class VanillaVillageJigsawStructureElements {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initialize(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        ::FeatureRegistry&,
        ::JigsawStructureRegistry&
#else // @header-generator platform
    MCAPI static void initialize(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::FeatureRegistry&                                         featureRegistry,
        ::JigsawStructureRegistry&                                 jigsawRegistry
#endif // @header-generator platform
    );
    // NOLINTEND
};
