#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/external/render_dragon/frame_renderer/modules/LightClusteringParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LightCluster : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 32, ::dragon::framerenderer::modules::LightClusteringParameters> mLightClusterParams;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LightCluster();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::array<float, 3> const& getClusterSize() const;

    MCNAPI float getFar() const;

    MCNAPI float getFirstDepthMax() const;

    MCNAPI float getLightsPerCluster() const;

    MCNAPI float getSecondDepthMax() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
