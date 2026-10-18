#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/GraphicsFeatureSupport.h"
#include "mc/deps/minecraft_renderer/renderer/IGraphicsFeatureQuery.h"
#include "mc/external/render_dragon/platform/CapabilityQuery.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class GraphicsFeatureQuery : public ::mce::IGraphicsFeatureQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::platform::CapabilityQuery> mCapabilityQuery;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GraphicsFeatureQuery();

    virtual ::mce::GraphicsFeatureSupport supportsAdvancedGraphics() const;

    virtual ::mce::GraphicsFeatureSupport supportsPointLights() const;

    virtual bool vibrantVisualsSupported() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::GraphicsFeatureSupport $supportsAdvancedGraphics() const;

    MCNAPI ::mce::GraphicsFeatureSupport $supportsPointLights() const;

    MCNAPI bool $vibrantVisualsSupported() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class GraphicsFeatureQuery {};
#endif // @header-generator platform

} // namespace mce
