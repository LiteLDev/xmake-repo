#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Resource.h"
#include "mc/client/renderer/rendergraph/ResourceTargetInterface.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderStage; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace rendergraph {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderStageSelectorResource : public ::rendergraph::Resource, public ::rendergraph::ResourceTargetInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mStageSelector;
    // NOLINTEND
};
#else // @header-generator platform
class RenderStageSelectorResource {};
#endif // @header-generator platform

} // namespace rendergraph
