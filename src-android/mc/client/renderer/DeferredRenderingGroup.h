#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/framebuilder/LightGenerationParameters.h"
#include "mc/external/render_dragon/frame_renderer/DeferredShadingParameters.h"

// auto generated forward declare list
// clang-format off
class ResourceLoadManager;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DeferredRenderingGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DeferredRenderingGroup inner types declare
    // clang-format off
    struct DeferredRenderingSettings;
    // clang-format on

    // DeferredRenderingGroup inner types define
    struct DeferredRenderingSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 144, ::dragon::framerenderer::DeferredShadingParameters> mDeferredShadingParameters;
        ::ll::TypedStorage<4, 24, ::mce::framebuilder::LightGenerationParameters>      mLightGenerationParameters;
        // NOLINTEND

    public:
        // prevent constructor by default
        DeferredRenderingSettings& operator=(DeferredRenderingSettings const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 168, ::DeferredRenderingGroup::DeferredRenderingSettings> mSettings;
    ::ll::UntypedStorage<8, 24>                                                     mResourceLoadManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredRenderingGroup();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindDeferredShadingParameters(::cereal::ReflectionCtx&);
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
