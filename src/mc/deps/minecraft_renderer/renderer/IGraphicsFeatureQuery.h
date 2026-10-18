#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/minecraft_renderer/renderer/GraphicsFeatureSupport.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class IGraphicsFeatureQuery {};
#endif // @header-generator platform

} // namespace mce
