#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinitionGroup;
class BaseActorRenderContext;
class BaseGameVersion;
class Block;
class BlockActorRenderer;
class BlockPos;
class BlockSource;
class BlockTessellator;
class Experiments;
class Font;
class GeometryGroup;
class HashedString;
class IVanillaRenderBlockActorComponent;
class ItemStack;
class ResourceLoadManager;
class ResourcePackManager;
class Tessellator;
class Vec3;
struct NameTagRenderObject;
namespace dragon { struct RenderMetadata; }
namespace mce { class MaterialPtr; }
namespace mce { class TextureGroup; }
namespace mce { struct ClientTexture; }
// clang-format on

class BlockActorRenderDispatcher {
public:
    // BlockActorRenderDispatcher inner types define
    using RendererMap =
        ::Bedrock::DenseEnumMap<BlockActorRendererId, std::unique_ptr<BlockActorRenderer>, (BlockActorRendererId)28>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mRenderers;
    ::ll::UntypedStorage<8, 24>  mGameSpecificRegistrationCallbacks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockActorRenderDispatcher();

    MCNAPI void clearEntityRenderers();

    MCNAPI std::vector<NameTagRenderObject>
    extractRenderTextObjects(::Font&, ::Tessellator&, ::IVanillaRenderBlockActorComponent&, std::string const&, ::Vec3);

    MCNAPI ::BlockActorRenderer* getRenderer(::IVanillaRenderBlockActorComponent&);

    MCNAPI ::BlockActorRenderer* getRenderer(::BlockActorRendererId);

    MCNAPI void initializeBlockEntityRenderers(
        ::gsl::not_null<Bedrock::NonOwnerPointer<GeometryGroup>> const&,
        std::shared_ptr<mce::TextureGroup>,
        ::BlockTessellator&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const ActorResourceDefinitionGroup>> const&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::BaseGameVersion const&,
        ::Experiments const&
    );

    MCNAPI void
    registerAdditionalBlockActorRenderers(::BlockActorRendererId const&, std::unique_ptr<BlockActorRenderer>);

    MCNAPI void registerGameSpecificBlockActorRendererCallback(
        std::function<void(
            const gsl::not_null<Bedrock::NonOwnerPointer<const ActorResourceDefinitionGroup>>&,
            std::shared_ptr<mce::TextureGroup>
        )>
    );

    MCNAPI void render(
        ::BaseActorRenderContext&,
        ::BlockSource&,
        ::IVanillaRenderBlockActorComponent&,
        ::Block const&,
        bool,
        ::mce::MaterialPtr const&,
        ::mce::ClientTexture const*,
        int,
        std::optional<dragon::RenderMetadata> const
    );

    MCNAPI void render(
        ::BaseActorRenderContext&,
        ::BlockSource&,
        ::IVanillaRenderBlockActorComponent&,
        ::Block const&,
        ::Vec3 const&,
        ::BlockPos const&,
        bool,
        ::mce::MaterialPtr const&,
        ::mce::ClientTexture const*,
        int,
        std::optional<dragon::RenderMetadata> const
    );

    MCNAPI void
    renderBanner(::BaseActorRenderContext&, ::dragon::RenderMetadata const&, ::ItemStack const&, bool const);

    MCNAPI void renderShulkerBox(::BaseActorRenderContext&, ::dragon::RenderMetadata const&, ::ItemStack const&);

    MCNAPI void renderSkull(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const&,
        ::Vec3 const&,
        int,
        float,
        ::HashedString const&,
        ::mce::MaterialPtr const*,
        ::mce::ClientTexture const*,
        int,
        float,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinitionGroup;
class BaseActorRenderContext;
class BaseGameVersion;
class Block;
class BlockActorRenderer;
class BlockPos;
class BlockSource;
class BlockTessellator;
class Experiments;
class Font;
class GeometryGroup;
class IVanillaRenderBlockActorComponent;
class ResourceLoadManager;
class ResourcePackManager;
class Tessellator;
class Vec3;
struct NameTagRenderObject;
namespace dragon { struct RenderMetadata; }
namespace mce { class MaterialPtr; }
namespace mce { class TextureGroup; }
namespace mce { struct ClientTexture; }
// clang-format on

class BlockActorRenderDispatcher {
public:
    // BlockActorRenderDispatcher inner types define
    using RendererMap = ::Bedrock::DenseEnumMap<::BlockActorRendererId, ::std::unique_ptr<::BlockActorRenderer>, 28>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        224,
        ::Bedrock::DenseEnumMap<::BlockActorRendererId, ::std::unique_ptr<::BlockActorRenderer>, 28>>
        mRenderers;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<void(
            ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> const&,
            ::std::shared_ptr<::mce::TextureGroup>
        )>>>
        mGameSpecificRegistrationCallbacks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::NameTagRenderObject> extractRenderTextObjects(
        ::Font&                              font,
        ::Tessellator&                       tessellator,
        ::IVanillaRenderBlockActorComponent& renderComponent,
        ::std::string const&                 str,
        ::Vec3                               camTargetPos
    );

    MCAPI void initializeBlockEntityRenderers(
        ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> const&                      geometryGroup,
        ::std::shared_ptr<::mce::TextureGroup>                                     textureGroup,
        ::BlockTessellator&                                                        blockTessellator,
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> const& actorResourceDefinitionGroup,
        ::ResourcePackManager&                                                     resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>                       resourceLoadManager,
        ::BaseGameVersion const&                                                   baseGameVersion,
        ::Experiments const&                                                       experiments
    );

    MCAPI void registerGameSpecificBlockActorRendererCallback(
        ::std::function<void(
            ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup const> const&,
            ::std::shared_ptr<::mce::TextureGroup>
        )> callback
    );

    MCAPI void render(
        ::BaseActorRenderContext&                 entityRenderContext,
        ::BlockSource&                            renderSource,
        ::IVanillaRenderBlockActorComponent&      renderComponent,
        ::Block const&                            block,
        bool                                      renderAlphaLayer,
        ::mce::MaterialPtr const&                 forcedMat,
        ::mce::ClientTexture const*               forceTex,
        int                                       breakingAmount,
        ::std::optional<::dragon::RenderMetadata> renderMetadata
    );

    MCAPI void render(
        ::BaseActorRenderContext&                 entityRenderContext,
        ::BlockSource&                            renderSource,
        ::IVanillaRenderBlockActorComponent&      renderComponent,
        ::Block const&                            block,
        ::Vec3 const&                             renderPos,
        ::BlockPos const&                         worldPos,
        bool                                      renderAlphaLayer,
        ::mce::MaterialPtr const&                 forcedMat,
        ::mce::ClientTexture const*               forceTex,
        int                                       breakingAmount,
        ::std::optional<::dragon::RenderMetadata> renderMetadata
    );
    // NOLINTEND
};
#else // @header-generator platform
class BlockActorRenderDispatcher {};
#endif // @header-generator platform
#endif // @header-generator platform
