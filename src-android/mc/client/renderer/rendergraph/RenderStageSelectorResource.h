#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Resource.h"
#include "mc/client/renderer/rendergraph/ResourceTargetInterface.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderStage; }
// clang-format on

namespace rendergraph {

class RenderStageSelectorResource : public ::rendergraph::Resource, public ::rendergraph::ResourceTargetInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mStageSelector;
    // NOLINTEND
};

} // namespace rendergraph
