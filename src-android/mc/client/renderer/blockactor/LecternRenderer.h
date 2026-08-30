#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/EnchantingBookModel.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct BlockActorRenderData;
namespace mce { class TextureGroup; }
// clang-format on

class LecternRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo> mBookTex;
    ::ll::UntypedStorage<8, 4096>                  mBook;
    // NOLINTEND

public:
    // prevent constructor by default
    LecternRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LecternRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LecternRenderer(std::shared_ptr<mce::TextureGroup>);
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
