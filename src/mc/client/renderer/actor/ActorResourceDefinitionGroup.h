#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/AttachableItemOverride.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class ActorResourceDefinition;
class GeometryGroup;
class MinEngineVersion;
class PackStats;
class ParticleEffectGroup;
class RenderControllerGroup;
class ResourceLoadManager;
class ResourcePackManager;
class SemVersion;
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
namespace mce { class TextureGroup; }
// clang-format on

class ActorResourceDefinitionGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryGroup>> mGeometryGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>> mTextureGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationGroup>> mActorAnimationGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationControllerGroup>> mActorAnimationControllerGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderControllerGroup>> mRenderControllerGroup;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ActorResourceDefinition>>> _mEntityResourceDefinitionTemplates;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::shared_ptr<ActorResourceDefinition>>> _mEntityResourceDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::vector<AttachableItemOverride>>> _mAttachableResourceOverridesByItemId;
    ::ll::TypedStorage<8, 8, long const> mResourceLoadTimeStamp;
    ::ll::UntypedStorage<8, 24> mResourceLoadManager;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ActorResourceDefinitionGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorResourceDefinitionGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorResourceDefinitionGroup(
        std::shared_ptr<GeometryGroup>,
        std::shared_ptr<mce::TextureGroup>,
        std::shared_ptr<ActorAnimationGroup>,
        std::shared_ptr<ActorAnimationControllerGroup>,
        std::shared_ptr<RenderControllerGroup>
    );

    MCNAPI std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, bool>>
           _buildAnimationResourceDefinitionFileSchema_v1_10();

    MCNAPI std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, bool>>
           _buildAnimationResourceDefinitionFileSchema_v1_26();

    MCNAPI std::shared_ptr<ActorResourceDefinition>
           _getActorResourceDefinition(::HashedString const&, bool, ::SemVersion const&, ::SemVersion const&, bool);

    MCNAPI void _loadActorResourceDefinition(
        ::Json::Value&,
        std::string const&,
        ::MinEngineVersion const&,
        ::SemVersion const&,
        ::ParticleEffectGroup&,
        ::PackStats*,
        bool
    );

    MCNAPI bool _readActorDefinitionFile(std::string const&, std::string const&, ::Json::Value&);

    MCNAPI std::shared_ptr<ActorAnimationControllerGroup> getAnimationControllers();

    MCNAPI std::shared_ptr<ActorAnimationGroup> getAnimations();

    MCNAPI std::unordered_map<HashedString, std::vector<AttachableItemOverride>> const&
           getAttachableResourceOverridesByItem() const;

    MCNAPI std::shared_ptr<ActorResourceDefinition> const getEntityResourceDefinition(::HashedString const&) const;

    MCNAPI std::unordered_map<HashedString, std::shared_ptr<ActorResourceDefinition>> const&
           getEntityResourceDefinitions() const;

    MCNAPI std::shared_ptr<GeometryGroup> getGeometries();

    MCNAPI std::shared_ptr<ActorResourceDefinition> getPlayerDefinition(::HashedString const&);

    MCNAPI void loadActorResourceDefinition(
        std::string const&,
        std::string const&,
        ::MinEngineVersion const&,
        ::SemVersion const&,
        ::ParticleEffectGroup&,
        ::PackStats*,
        bool
    );

    MCNAPI void loadAsync(
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::ParticleEffectGroup&
    );

    MCNAPI void unloadDefinition(::HashedString const&);

    MCNAPI bool upgrade_v1_8_to_v1_10(::Json::Value&, ::MinEngineVersion const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::NonOwnerPointer<const ActorResourceDefinitionGroup>& mSelf();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<GeometryGroup>,
        std::shared_ptr<mce::TextureGroup>,
        std::shared_ptr<ActorAnimationGroup>,
        std::shared_ptr<ActorAnimationControllerGroup>,
        std::shared_ptr<RenderControllerGroup>
    );
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
class ActorResourceDefinitionGroup {};
#endif // @header-generator platform
