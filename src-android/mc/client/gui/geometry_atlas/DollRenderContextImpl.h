#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/PaperDollBaseActorRenderContext.h"
#include "mc/client/gui/geometry_atlas/IPaperDollRenderContext.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class PaperDollRenderer;
// clang-format on

namespace GeometryAtlas {

class DollRenderContextImpl : public ::GeometryAtlas::details::IPaperDollRenderContext {
public:
    // DollRenderContextImpl inner types declare
    // clang-format off
    struct NoOffsetRenderContext;
    // clang-format on

    // DollRenderContextImpl inner types define
    struct NoOffsetRenderContext : public ::PaperDollBaseActorRenderContext {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PaperDollRenderer&>      mRenderer;
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    DollRenderContextImpl& operator=(DollRenderContextImpl const&);
    DollRenderContextImpl(DollRenderContextImpl const&);
    DollRenderContextImpl();
};

} // namespace GeometryAtlas
