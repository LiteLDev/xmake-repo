#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/EmptyRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
// clang-format on

class HudIconActorRenderer : public ::EmptyRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mHudIconMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    HudIconActorRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudIconActorRenderer();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HudIconActorRenderer(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void renderHudIcon(
        ::BaseActorRenderContext&,
        ::mce::TexturePtr const&,
        float,
        float,
        float,
        float,
        float,
        float,
        float,
        float,
        float,
        float,
        int,
        int,
        float,
        float
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup>);
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
