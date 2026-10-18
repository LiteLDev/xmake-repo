#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/AllocateAtlasPayload.h"
#include "mc/client/gui/geometry_atlas/AllocateBackendPayload.h"
#include "mc/client/gui/geometry_atlas/InitializeCallbackPayload.h"
#include "mc/client/gui/geometry_atlas/InsertTilePayload.h"
#include "mc/client/gui/geometry_atlas/PaperDollTransformPayload.h"
#include "mc/client/gui/geometry_atlas/RemoveTilePayload.h"
#include "mc/client/gui/geometry_atlas/UIItemPayload.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/AllocateAtlasPayload.h"
#include "mc/client/gui/geometry_atlas/AllocateBackendPayload.h"
#include "mc/client/gui/geometry_atlas/InitializeCallbackPayload.h"
#include "mc/client/gui/geometry_atlas/InsertTilePayload.h"
#include "mc/client/gui/geometry_atlas/PaperDollTransformPayload.h"
#include "mc/client/gui/geometry_atlas/RemoveTilePayload.h"
#include "mc/client/gui/geometry_atlas/UIItemPayload.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RenderableUpdateCommand {
public:
    // RenderableUpdateCommand inner types define
    using Variant = ::std::variant<
        ::GeometryAtlas::AllocateAtlasPayload,
        ::GeometryAtlas::AllocateBackendPayload,
        ::GeometryAtlas::UIItemPayload,
        ::GeometryAtlas::InsertTilePayload,
        ::GeometryAtlas::RemoveTilePayload,
        ::GeometryAtlas::PaperDollTransformPayload,
        ::GeometryAtlas::InitializeCallbackPayload>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        80,
        ::std::variant<
            ::GeometryAtlas::AllocateAtlasPayload,
            ::GeometryAtlas::AllocateBackendPayload,
            ::GeometryAtlas::UIItemPayload,
            ::GeometryAtlas::InsertTilePayload,
            ::GeometryAtlas::RemoveTilePayload,
            ::GeometryAtlas::PaperDollTransformPayload,
            ::GeometryAtlas::InitializeCallbackPayload>>
                                   mData;
    ::ll::TypedStorage<4, 4, uint> mTarget;
    // NOLINTEND
};
#else // @header-generator platform
struct RenderableUpdateCommand {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
