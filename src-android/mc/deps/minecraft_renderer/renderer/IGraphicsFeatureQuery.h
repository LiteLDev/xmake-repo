#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/minecraft_renderer/renderer/GraphicsFeatureSupport.h"

namespace mce {

class IGraphicsFeatureQuery : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGraphicsFeatureQuery() = default;

    virtual ::mce::GraphicsFeatureSupport supportsAdvancedGraphics() const = 0;

    virtual ::mce::GraphicsFeatureSupport supportsPointLights() const = 0;

    virtual bool vibrantVisualsSupported() const = 0;
    // NOLINTEND
};

} // namespace mce
