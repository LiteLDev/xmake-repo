#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/ChalkboardModel.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/level/block/actor/ChalkboardBlockActor.h"
#include "mc/world/level/block/actor/ChalkboardSize.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class ChalkboardBlockActor;
class Font;
class GeometryGroup;
class ProfanityContext;
struct BlockActorRenderData;
namespace mce { class TextureGroup; }
// clang-format on

class ChalkboardRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>  mTextMaterial;
    ::ll::TypedStorage<8, 1912, ::ChalkboardModel> mOneByOne;
    ::ll::TypedStorage<8, 1912, ::ChalkboardModel> mTwoByOne;
    ::ll::TypedStorage<8, 1912, ::ChalkboardModel> mThreeByTwo;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>   mTextureOneByOne;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>   mTextureTwoByOne;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>   mTextureThreeByTwo;
    // NOLINTEND

public:
    // prevent constructor by default
    ChalkboardRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChalkboardRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChalkboardRenderer(
        std::shared_ptr<mce::TextureGroup>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GeometryGroup>> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<mce::TextureGroup>, ::gsl::not_null<Bedrock::NonOwnerPointer<GeometryGroup>> const&);
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
