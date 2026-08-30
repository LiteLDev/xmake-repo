#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class BlockPos;
class BlockSource;
class PacketSender;
class PhotoItemSavedData;
class PhotoStorage;
class Player;
class SyncedPhotoView;
class Tessellator;
struct PhotoStorageContainer;
namespace mce { class TextureGroup; }
// clang-format on

class PhotoRenderer : public ::ActorRenderer, public ::AppPlatformListener {
public:
    // PhotoRenderer inner types declare
    // clang-format off
    class PhotoInstance;
    // clang-format on

    // PhotoRenderer inner types define
    class PhotoInstance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::PhotoItemSavedData const&> mPhotoData;
        ::ll::TypedStorage<1, 1, bool>                        mDirtyTexture;
        ::ll::TypedStorage<8, 8, ::PhotoRenderer&>            mPhotoRenderer;
        ::ll::TypedStorage<8, 48, ::ResourceLocation>         mResourceLocation;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr>          mPhotoTexture;
        ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>         mNameTagMaterial;
        // NOLINTEND

    public:
        // prevent constructor by default
        PhotoInstance& operator=(PhotoInstance const&);
        PhotoInstance(PhotoInstance const&);
        PhotoInstance();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PhotoInstance();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>> mTextureManager;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::unique_ptr<PhotoRenderer::PhotoInstance>>> mPhotoInstances;
    ::ll::TypedStorage<1, 1, ::SubClientId> mClientId;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mPhotoMaterial;
    ::ll::TypedStorage<8, 616, ::mce::Mesh> mBackgroundMesh;
    ::ll::TypedStorage<8, 616, ::mce::Mesh> mForegroundMesh;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::shared_ptr<SyncedPhotoView>>> mPhotoViews;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PhotoRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void onAppSuspended();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PhotoRenderer(::SubClientId, std::shared_ptr<mce::TextureGroup>);

    MCNAPI void _generateMeshes(::BaseActorRenderContext&);

    MCNAPI void
    render(::BaseActorRenderContext&, ::Player*, ::BlockPos const&, ::BlockSource&, ::PhotoItemSavedData const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tessellateForeground(::Tessellator&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubClientId, std::shared_ptr<mce::TextureGroup>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI void $onAppSuspended();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
