#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/item_block_render_helpers/ItemTransformData.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class BlockActor;
class Tessellator;
class Vec3;
struct BlockActorRenderData;
struct NameTagRenderObject;
// clang-format on

class ItemFrameRenderer : public ::BlockActorRenderer, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                           mSelectionOverlayMaterial;
    ::ll::TypedStorage<4, 128, ::ItemBlockRenderHelpers::ItemTransformData> mItemTranslation;
    ::ll::TypedStorage<1, 1, bool>                                          mSelected;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ItemFrameRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);

    virtual std::vector<NameTagRenderObject> extractText(::Tessellator&, ::BlockActor&, std::string const&, std::vector<int> const&, ::Vec3);

    virtual void onAppSuspended();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemFrameRenderer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::BlockActorRenderData&);

    MCNAPI std::vector<NameTagRenderObject>
           $extractText(::Tessellator&, ::BlockActor&, std::string const&, std::vector<int> const&, ::Vec3);

    MCNAPI void $onAppSuspended();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
