#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_VillagerAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsWitch;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_VillagerAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenRenderer_tempComponent_VillagerAdditionalRendering();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    virtual ::V2TempComponentRequirements getV2Requirements() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    MCNAPI ::V2TempComponentRequirements $getV2Requirements() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
