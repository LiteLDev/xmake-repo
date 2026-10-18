#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderer;
class ActorResourceDefinition;
class ActorResourceDefinitionGroup;
class BaseActorRenderContext;
class BlockTessellator;
class DataDrivenRenderer;
class Font;
class GeometryGroup;
class ResourceLoadManager;
class ResourcePackManager;
class Tessellator;
class Vec2;
class Vec3;
struct NameTagRenderObject;
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class ActorRenderDispatcher {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::shared_ptr<ActorRenderer>>> mNonDataDrivenRenderers;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::shared_ptr<DataDrivenRenderer>>> mDataDrivenRenderers;
    ::ll::UntypedStorage<8, 24> mGameSpecificRegistrationCallbacks;
    ::ll::TypedStorage<1, 1, ::SubClientId> mClientSubId;
    ::ll::TypedStorage<8, 8, long const> mResourceLoadTimeStamp;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRenderDispatcher();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorRenderDispatcher();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorRenderDispatcher(::SubClientId);

    MCNAPI void cleanupRenderer(::HashedString const&);

    MCNAPI void clearEntityRenderers();

    MCNAPI std::vector<NameTagRenderObject>
           extractRenderTextObjects(::Font&, ::Tessellator&, ::Actor&, std::string const&, ::Vec3, float, ::mce::Color);

    MCNAPI std::shared_ptr<DataDrivenRenderer> getDataDrivenRenderer(::HashedString const&) const;

    MCNAPI std::unordered_map<HashedString, std::shared_ptr<DataDrivenRenderer>>& getDataDrivenRenderers();

    MCNAPI std::shared_ptr<ActorRenderer> getRenderer(::Actor const&) const;

    MCNAPI std::shared_ptr<ActorRenderer> getRenderer(::HashedString const&) const;

    MCNAPI bool hasWaterHole(::Actor&) const;

    MCNAPI void initializeEntityRenderers(
        ::gsl::not_null<Bedrock::NonOwnerPointer<GeometryGroup>> const&,
        std::shared_ptr<mce::TextureGroup>,
        ::BlockTessellator&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorResourceDefinitionGroup>> const&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        bool
    );

    MCNAPI bool initializePlayerRenderer(std::shared_ptr<ActorResourceDefinition>, std::shared_ptr<mce::TextureGroup>);

    MCNAPI void render(::BaseActorRenderContext&, ::Actor&, bool);

    MCNAPI void render(::BaseActorRenderContext&, ::Actor&, ::Vec3 const&, ::Vec2 const&, bool);

    MCNAPI void render(::BaseActorRenderContext&, ::Actor&, ::Vec3 const&, ::Vec3 const&, ::Vec2 const&, bool);

    MCNAPI void renderEffects(::BaseActorRenderContext&, ::Actor&);

    MCNAPI void renderWaterHole(::BaseActorRenderContext&, ::Actor&, ::Vec3 const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubClientId);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderer;
class ActorResourceDefinition;
class ActorResourceDefinitionGroup;
class BaseActorRenderContext;
class BlockTessellator;
class DataDrivenRenderer;
class Font;
class GeometryGroup;
class ResourceLoadManager;
class ResourcePackManager;
class Tessellator;
class Vec2;
class Vec3;
struct NameTagRenderObject;
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class ActorRenderDispatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::ActorRenderer>>>
        mNonDataDrivenRenderers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>>>
        mDataDrivenRenderers;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<void(
            ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const&,
            ::std::shared_ptr<::mce::TextureGroup>
        )>>>
                                            mGameSpecificRegistrationCallbacks;
    ::ll::TypedStorage<1, 1, ::SubClientId> mClientSubId;
    ::ll::TypedStorage<8, 8, int64 const>   mResourceLoadTimeStamp;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorRenderDispatcher() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ActorRenderer> _getRenderer(::Actor& actor) const;

    MCAPI void clearEntityRenderers();

    MCAPI ::std::vector<::NameTagRenderObject> extractRenderTextObjects(
        ::Font&              font,
        ::Tessellator&       tessellator,
        ::Actor&             actor,
        ::std::string const& str,
        ::Vec3               camTargetPos,
        float                a,
        ::mce::Color         color
    );

    MCAPI ::std::shared_ptr<::DataDrivenRenderer> getDataDrivenRenderer(::HashedString const& rendererName) const;

    MCAPI ::std::shared_ptr<::ActorRenderer> getRenderer(::HashedString const& rendererName) const;

    MCAPI void initializeEntityRenderers(
        ::Bedrock::NotNullNonOwnerPtr<::GeometryGroup> const&                geometryGroup,
        ::std::shared_ptr<::mce::TextureGroup>                               textureGroup,
        ::BlockTessellator&                                                  commonBlockRenderer,
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& entityResourceDefGroup,
        ::ResourcePackManager&                                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>                 resourceLoadManager,
        bool                                                                 supportsNewVertexFormat
    );

    MCAPI bool initializePlayerRenderer(
        ::std::shared_ptr<::ActorResourceDefinition> resources,
        ::std::shared_ptr<::mce::TextureGroup>       textureGroup
    );

    MCAPI void render(::BaseActorRenderContext& entityRenderContext, ::Actor& entity, bool ignoreLighting);

    MCAPI void render(
        ::BaseActorRenderContext& entityRenderContext,
        ::Actor&                  entity,
        ::Vec3 const&             cameraTargetPos,
        ::Vec3 const&             pos,
        ::Vec2 const&             rot,
        bool                      ignoreLighting
    );

    MCAPI void renderEffects(::BaseActorRenderContext& actorRenderContext, ::Actor& actor);

    MCAPI void
    renderWaterHole(::BaseActorRenderContext& actorRenderContext, ::Actor& actor, ::Vec3 const& cameraTargetPos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ActorRenderDispatcher {};
#endif // @header-generator platform
#endif // @header-generator platform
