#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class ActorRenderDispatcher;
class ActorResourceDefinition;
class ActorResourceDefinitionGroup;
class AnimationComponent;
class ClientLevel;
class EntityId;
class ExpressionNode;
class FrameUpdateContext;
class GeometryGroup;
class HashedString;
class IClientInstance;
class Player;
class RenderControllerGroup;
class RenderControllerPtr;
class ResourceLoadManager;
class SerializedSkinRef;
class WeakEntityRef;
struct ClientSkin;
namespace mce { class TextureGroup; }
namespace mce { struct Image; }
// clang-format on

class ClientSkinSystem {
public:
    // ClientSkinSystem inner types define
    using RenderControllerList = std::vector<std::pair<RenderControllerPtr, ExpressionNode>>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _initializeClientSkin(
        ::IClientInstance&,
        ::ClientSkin&,
        std::shared_ptr<ActorRenderDispatcher>,
        std::shared_ptr<GeometryGroup>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorResourceDefinitionGroup>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<RenderControllerGroup>> const&,
        std::shared_ptr<mce::TextureGroup>,
        std::vector<OwnerPtr<EntityId>>&
    );

    MCNAPI static void _setupPersonaLodRenderControllers(
        ::ClientSkin const&,
        std::shared_ptr<ActorResourceDefinition> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<RenderControllerGroup>> const&
    );

    MCNAPI static void _setupPersonaLodTextureAndGeometry(
        ::ClientSkin const&,
        ::SerializedSkinRef const&,
        std::shared_ptr<ActorResourceDefinition> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorResourceDefinitionGroup>> const&
    );

    MCNAPI static void _updateClientSkin(
        ::IClientInstance&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::ClientSkin&,
        ::SerializedSkinRef const&,
        ::mce::Image const*,
        ::mce::Image const*,
        bool,
        std::function<void()>
    );

    MCNAPI static void addPlayerToFireEvent(::HashedString const, ::Player const*);

    MCNAPI static void createOrUpdate(
        ::IClientInstance&,
        ::AnimationComponent&,
        ::SerializedSkinRef const&,
        ::mce::Image const*,
        ::mce::Image const*,
        bool,
        std::function<void()>
    );

    MCNAPI static bool doesRenderControllerListHaveRenderer(
        std::vector<std::pair<RenderControllerPtr, ExpressionNode>> const&,
        ::HashedString
    );

    MCNAPI static void fireEventToPlayers(::HashedString const, ::ClientLevel*);

    MCNAPI static void frameUpdate(::FrameUpdateContext&, ::IClientInstance&);

    MCNAPI static bool isAnySkinOfNameInitialized(::IClientInstance&, std::string_view);

    MCNAPI static void reload(::IClientInstance&);

    MCNAPI static void remove(::IClientInstance&, std::string const&);

    MCNAPI static void setPersonaSkinLodDistance(int);

    MCNAPI static void shutdown(::IClientInstance&);

    MCNAPI static void tick(::IClientInstance&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::map<HashedString, std::vector<WeakEntityRef>>& mSkinIdToPlayersMap();

    MCNAPI static int& sPersonaSkinLodDistance();
    // NOLINTEND
};
#else // @header-generator platform
class ClientSkinSystem {};
#endif // @header-generator platform
