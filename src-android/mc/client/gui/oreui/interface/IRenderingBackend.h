#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/gameface/renoir/RendererBackend.h"

namespace OreUI {

class IRenderingBackend : public ::renoir::RendererBackend {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeStaticResources(::Bedrock::NonOwnerPointer<mce::ShaderGroup> const&) = 0;

    virtual void onAppPreSuspended() = 0;
    // NOLINTEND
};

} // namespace OreUI
