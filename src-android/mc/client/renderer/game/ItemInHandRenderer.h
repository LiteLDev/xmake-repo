#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ActorShaderManager.h"
#include "mc/client/renderer/game/ItemInHandRenderFrameId.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/minecraft_renderer/game/ItemContextFlags.h"
#include "mc/deps/minecraft_renderer/game/ItemRenderCall.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BannerBlockActor;
class BaseActorRenderContext;
class Block;
class BlockTessellator;
class BlockType;
class ConduitBlockActor;
class DecoratedPotBlockActor;
class IClientInstance;
class Level;
class Mob;
class Player;
class SerializedActorBlockActor;
class Tessellator;
class TextureTessellator;
class Vec3;
struct Brightness;
namespace dragon { struct RenderMetadata; }
namespace mce { class Camera; }
namespace mce { class TextureGroup; }
namespace mce { struct ViewportInfo; }
namespace mce::framebuilder { struct FrameLightingModelCapabilities; }
// clang-format on

class ItemInHandRenderer : public ::ActorShaderManager {
public:
    // ItemInHandRenderer inner types declare
    // clang-format off
    struct OffsetForLowAspectRatio;
    // clang-format on

    // ItemInHandRenderer inner types define
    struct OffsetForLowAspectRatio {
    public:
        // OffsetForLowAspectRatio inner types declare
        // clang-format off
        struct Scoped;
        // clang-format on

        // OffsetForLowAspectRatio inner types define
        enum class Direction : uchar {
            LEFT  = 0,
            RIGHT = 1,
        };

        struct Scoped {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<1, 1, ::ItemInHandRenderer::OffsetForLowAspectRatio::Direction> mDirection;
            ::ll::UntypedStorage<8, 8>                                                         mWorldMatrix;
            ::ll::TypedStorage<8, 8, ::mce::ViewportInfo const&>                               mViewportInfo;
            ::ll::TypedStorage<8, 8, ::mce::Camera const&>                                     mCamera;
            ::ll::TypedStorage<1, 1, bool>                                                     mIsFirstPerson;
            ::ll::TypedStorage<4, 4, float>                                                    mXScale;
            ::ll::TypedStorage<1, 1, bool>                                                     mApplied;
            // NOLINTEND

        public:
            // prevent constructor by default
            Scoped& operator=(Scoped const&);
            Scoped(Scoped const&);
            Scoped();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ~Scoped();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };
    };

    using RenderMap = std::map<ItemInHandRenderFrameId, ItemRenderCall>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    ::ll::TypedStorage<8, 152, ::ItemStack> mOffHandItem;
    ::ll::TypedStorage<4, 4, int> mSlot;
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextureTessellator>> mTextureTessellator;
    ::ll::TypedStorage<4, 4, float> mHeight;
    ::ll::TypedStorage<4, 4, float> mOldHeight;
    ::ll::TypedStorage<4, 4, float> mHeightOffHand;
    ::ll::TypedStorage<4, 4, float> mOldHeightOffHand;
    ::ll::TypedStorage<8, 8, ::BlockTessellator&> mBlockTessellator;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatOpaqueBlock;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatOpaqueBlockColor;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatAlphaBlock;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatItem;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatBlendBlock;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatBlendBlockNoColor;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatAlphaColoredBlock;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatItemMultiColorTint;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatAlphaOneSidedBlock;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatAlphaOneSidedColoredBlock;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatOpaqueBlockGlint;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatAlphaBlockGlint;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatItemGlint;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMatFishingLine;
    ::ll::TypedStorage<8, 128, std::array<const mce::MaterialPtr*, 16>> mMaterialMatrix;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mGlintTexture;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BannerBlockActor>> mBannerEntity;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DecoratedPotBlockActor>> mDecoratedPotEntity;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SerializedActorBlockActor>> mCopperGolemStatueEntity;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ConduitBlockActor>> mConduitEntity;
    ::ll::TypedStorage<8, 24, std::map<ItemInHandRenderFrameId, ItemRenderCall>> mRenderObjects;
    ::ll::TypedStorage<4, 64, ::Matrix> mTransform;
    ::ll::TypedStorage<4, 64, ::Matrix> mPreFirstPersonItemRenderProj;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPauseStateChange;
    ::ll::TypedStorage<8, 8, std::chrono::duration<double, std::ratio<1, 1>>> mTimer;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastTime;
    ::ll::TypedStorage<1, 1, bool> mIsDeferredEnabled;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ItemInHandRenderer& operator=(ItemInHandRenderer const&);
    ItemInHandRenderer(ItemInHandRenderer const&);
    ItemInHandRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemInHandRenderer();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemInHandRenderer(::IClientInstance&, ::BlockTessellator&, std::shared_ptr<mce::TextureGroup>);

    MCNAPI void _applyDefaultItemTransforms(
        ::MatrixStack::MatrixStackRef&,
        ::ItemStack const&,
        bool,
        ::BlockType const*,
        ::BlockShape,
        ::ItemRenderCall const*,
        float,
        bool
    );

    MCNAPI bool _areNotMatchingChemistrySticks(::ItemStack&, ::ItemStack const&);

    MCNAPI ::ItemRenderCall* _getRenderCall(::Mob*, ::ItemStack const&, int);

    MCNAPI void _pushSparklerParticles(::BaseActorRenderContext&, ::ItemStack const&, ::Level&);

    MCNAPI ::ItemRenderCall& _rebuildItem(::BaseActorRenderContext&, ::Mob*, ::ItemStack const&, int);

    MCNAPI void _renderBannerBlockItem(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const,
        ::ItemStack const&,
        ::Actor&,
        ::Brightness,
        std::optional<glm::vec<3, float, (glm::qualifier)0>> const&,
        float,
        float
    ) const;

    MCNAPI void _renderChestBlockItem(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const,
        ::BlockType const*,
        ::Actor&,
        bool const
    ) const;

    MCNAPI void _renderConduitBlockItem(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const,
        ::Actor&,
        ::Brightness,
        std::optional<glm::vec<3, float, (glm::qualifier)0>> const&,
        float
    ) const;

    MCNAPI void _renderCopperGolemStatueBlockItem(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const,
        ::ItemStack const&,
        ::Actor&,
        bool const,
        bool const
    ) const;

    MCNAPI void _renderDecoratedPotBlockItem(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const,
        ::ItemStack const&,
        ::Actor&,
        bool const
    ) const;

    MCNAPI void _renderFishingRod(::BaseActorRenderContext&, ::ItemStack const&, ::Actor&) const;

    MCNAPI void _renderGlowstickBlockItem(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const,
        ::ItemStack const&,
        ::Actor&,
        ::Brightness,
        std::optional<glm::vec<3, float, (glm::qualifier)0>> const&,
        float,
        ::ItemContextFlags,
        float
    );

    MCNAPI void _renderMiniMapHand(::BaseActorRenderContext&, ::Player&, bool);

    MCNAPI void _renderPhotoMapItem(::BaseActorRenderContext&, ::Player&, float const, bool const);

    MCNAPI void _tessellateBlockItem(
        ::Tessellator&,
        ::BlockTessellator&,
        ::Block const&,
        ::mce::framebuilder::FrameLightingModelCapabilities const&
    );

    MCNAPI void _tessellateTextureItem(
        ::BaseActorRenderContext&,
        ::TextureTessellator&,
        ::Mob*,
        ::ItemStack const&,
        int,
        ushort&,
        ushort&
    );

    MCNAPI void _transformWorldMatrixFromJson(
        ::MatrixStack::MatrixStackRef&,
        ::ItemStack const&,
        bool const,
        ::ItemContextFlags,
        float
    );

    MCNAPI void clearRenderObjects();

    MCNAPI ::mce::MaterialPtr const& getObjectMaterial(::ItemRenderCall const&, ::ItemContextFlags) const;

    MCNAPI ::mce::TexturePtr const& getObjectTexture(::ItemRenderCall const&, bool) const;

    MCNAPI ::ItemRenderCall const& getRenderCallAtFrame(::BaseActorRenderContext&, ::ItemStack const&, int);

    MCNAPI void onItemUsed();

    MCNAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>&);

    MCNAPI void renderFirstPerson(::BaseActorRenderContext&, ::Matrix const&, ::ItemContextFlags);

    MCNAPI void
    renderItem(::BaseActorRenderContext&, ::Actor&, ::ItemStack const&, bool, ::ItemContextFlags, bool, bool);

    MCNAPI void
    renderItemNew(::BaseActorRenderContext&, ::Actor&, ::ItemStack const&, ::ItemContextFlags, ::Brightness);

    MCNAPI void renderObject(
        ::BaseActorRenderContext&,
        ::ItemRenderCall const&,
        ::dragon::RenderMetadata const&,
        ::ItemContextFlags
    );

    MCNAPI void renderOffhandItem(::BaseActorRenderContext&, ::Player&, ::ItemContextFlags);

    MCNAPI void shutdown();

    MCNAPI void tessellateAtFrame(::BaseActorRenderContext&, ::Mob*, ::ItemStack const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::dragon::RenderMetadata
    _createRenderMetadata(::BaseActorRenderContext const&, ::Actor const&, ::ItemStack const&);

    MCNAPI static bool canTessellateAsBlockItem(::ItemStack const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&, ::BlockTessellator&, std::shared_ptr<mce::TextureGroup>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
