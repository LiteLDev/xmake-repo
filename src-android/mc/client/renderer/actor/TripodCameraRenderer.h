#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/MobRenderer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class ScreenContext;
class Vec2;
class Vec3;
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class TripodCameraRenderer : public ::MobRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext*> mCachedRenderContext;
    // NOLINTEND

public:
    // prevent constructor by default
    TripodCameraRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);
    // NOLINTEND
};
