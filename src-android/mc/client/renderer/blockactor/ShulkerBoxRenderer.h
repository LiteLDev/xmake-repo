#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/ShulkerBoxGuiModel.h"
#include "mc/client/model/models/ShulkerBoxModel.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class BlockActor;
class ItemStack;
struct BlockActorRenderData;
namespace dragon { struct RenderMetadata; }
namespace mce { class TextureGroup; }
// clang-format on

class ShulkerBoxRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<HashedString, ActorTextureInfo>> mTextures;
    ::ll::TypedStorage<8, 1376, ::ShulkerBoxModel>                      mShulkerBoxModel;
    ::ll::TypedStorage<8, 1912, ::ShulkerBoxGuiModel>                   mShulkerBoxGuiModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ShulkerBoxRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShulkerBoxRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ShulkerBoxRenderer(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void renderByItem(::BaseActorRenderContext&, ::dragon::RenderMetadata const&, ::ItemStack const&);

    MCNAPI void renderInGui(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const&,
        ::BlockActor&,
        ::HashedString const&,
        float,
        float,
        float,
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
