#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/AllocateAtlasPayload.h"
#include "mc/client/gui/geometry_atlas/AllocateBackendPayload.h"
#include "mc/client/gui/geometry_atlas/InitializeCallbackPayload.h"
#include "mc/client/gui/geometry_atlas/InsertTilePayload.h"
#include "mc/client/gui/geometry_atlas/PaperDollTransformPayload.h"
#include "mc/client/gui/geometry_atlas/RemoveTilePayload.h"
#include "mc/client/gui/geometry_atlas/UIItemPayload.h"

namespace GeometryAtlas {

struct RenderableUpdateCommand {
public:
    // RenderableUpdateCommand inner types define
    using Variant = std::variant<
        GeometryAtlas::AllocateAtlasPayload,
        GeometryAtlas::AllocateBackendPayload,
        GeometryAtlas::UIItemPayload,
        GeometryAtlas::InsertTilePayload,
        GeometryAtlas::RemoveTilePayload,
        GeometryAtlas::PaperDollTransformPayload,
        GeometryAtlas::InitializeCallbackPayload>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mData;
    ::ll::UntypedStorage<4, 16> mTarget;
    // NOLINTEND
};

} // namespace GeometryAtlas
