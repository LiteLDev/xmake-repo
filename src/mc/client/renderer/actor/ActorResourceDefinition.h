#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/GeometryPtr.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/actor/HeldItemInfo.h"
#include "mc/client/renderer/actor/SpawnEggInfo.h"
#include "mc/client/renderer/controller/RenderControllerPtr.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialVariants.h"
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"
#include "mc/deps/minecraft_renderer/resources/NormalTextureMode.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/animation/CommonResourceDefinitionMap.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerGroup;
class ActorAnimationGroup;
class GeometryGroup;
class ResourceLocation;
class Vec2;
class Vec3;
struct PBRTexturePtrs;
namespace mce { class MaterialPtr; }
namespace mce { class TexturePtr; }
// clang-format on

class ActorResourceDefinition : public ::CommonResourceDefinitionMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                                                   mIsAttachable;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsOverriden;
    ::ll::TypedStorage<8, 40, ::HashedString>                                              mName;
    ::ll::UntypedStorage<8, 24>                                                            mFullStackMinEngineVersion;
    ::ll::UntypedStorage<8, 24>                                                            mActorJsonMinEngineVersion;
    ::ll::TypedStorage<8, 40, ::HashedString>                                              mQueryableGeometryName;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, GeometryPtr>>                mGeometryMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ActorTextureInfo>>           mTextureMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, MaterialVariants>>           mMaterialVariantMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, HashedString>>              mActorParticleEffectMap;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<RenderControllerPtr, ExpressionNode>>> mRenderControllerPtrArray;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ExpressionNode>>            mActorScripts;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::string>>               mSoundEffectMap;
    ::ll::TypedStorage<8, 24, ::HeldItemInfo>                                              mHeldItemInfo;
    ::ll::TypedStorage<1, 1, bool>                                                         mEnableAttachables;
    ::ll::TypedStorage<1, 1, bool>                                                         mHideArmor;
    ::ll::TypedStorage<8, 80, ::SpawnEggInfo>                                              mSpawnEgg;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorResourceDefinition& operator=(ActorResourceDefinition const&);
    ActorResourceDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorResourceDefinition(::ActorResourceDefinition const&);

    MCNAPI ActorResourceDefinition(::HashedString, bool, ::SemVersion const&, ::SemVersion const&);

    MCNAPI bool armorHidden() const;

    MCNAPI bool attachablesEnabled() const;

    MCNAPI ::ActorTextureInfo const getActorTextureInfo(std::string_view, bool) const;

    MCNAPI ::PBRTexturePtrs const getActorTexturePtrs(std::string const&, bool) const;

    MCNAPI ::mce::TexturePtr const getColorTexture(std::string const&, bool) const;

    MCNAPI ::ResourceLocation const getColorTextureResourceLocation(std::string const&, bool) const;

    MCNAPI std::unordered_map<std::string, GeometryPtr> const& getGeometries() const;

    MCNAPI ::HeldItemInfo const& getHeldItemInfo() const;

    MCNAPI ::MaterialVariants const& getMaterialVariants(std::string const&) const;

    MCNAPI std::unordered_map<std::string, MaterialVariants> const& getMaterials() const;

    MCNAPI ::HashedString const& getName() const;

    MCNAPI std::unordered_map<HashedString, HashedString> const& getParticleEffects() const;

    MCNAPI ::HashedString const& getQueryableGeometryName() const;

    MCNAPI std::vector<std::pair<RenderControllerPtr, ExpressionNode>> const& getRenderControllers() const;

    MCNAPI ::Vec2 getRenderDimensions(std::string const&, bool) const;

    MCNAPI ::Vec3 getRenderDimensionsOffset(std::string const&, bool) const;

    MCNAPI std::unordered_map<HashedString, ExpressionNode> const& getScripts() const;

    MCNAPI std::unordered_map<HashedString, std::string> const& getSoundEffects() const;

    MCNAPI ::SpawnEggInfo const& getSpawnEgg() const;

    MCNAPI std::unordered_map<std::string, ActorTextureInfo> const& getTextures() const;

    MCNAPI void mergeGeometry(std::string const&, ::GeometryPtr);

    MCNAPI void mergeHeldItemScale(::ExpressionNode);

    MCNAPI void mergeMaterial(std::string const&, ::mce::MaterialPtr, ::mce::MaterialPtr);

    MCNAPI void mergeRenderControllers(std::vector<std::pair<RenderControllerPtr, ExpressionNode>>);

    MCNAPI void mergeScript(std::string, ::ExpressionNode);

    MCNAPI void mergeSoundEffects(std::string, std::string);

    MCNAPI void mergeTexture(std::string const&, ::ActorTextureInfo const&);

    MCNAPI void mergeTexture(
        std::string const&,
        ::ResourceLocation const&,
        ::mce::TexturePtr,
        std::optional<ResourceLocation>,
        ::mce::TexturePtr,
        ::MERSTextureMode const,
        std::optional<ResourceLocation>,
        ::mce::TexturePtr,
        ::NormalTextureMode const
    );

    MCNAPI void patch(
        std::shared_ptr<GeometryGroup>,
        std::shared_ptr<ActorAnimationGroup>,
        std::shared_ptr<ActorAnimationControllerGroup>,
        std::string const&
    );

    MCNAPI void removeRenderController(std::string const&);

    MCNAPI void setColorTexture(std::string const&, ::ResourceLocation const&, ::mce::TexturePtr const&);

    MCNAPI ~ActorResourceDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ActorTextureInfo
    getActorTextureInfo(std::shared_ptr<ActorResourceDefinition> const, std::string_view, bool);

    MCNAPI static ::PBRTexturePtrs
    getActorTexturePtrs(std::shared_ptr<ActorResourceDefinition> const, std::string const&, bool);

    MCNAPI static ::mce::TexturePtr
    getColorTexture(std::shared_ptr<ActorResourceDefinition> const, std::string const&, bool);

    MCNAPI static ::GeometryPtr getGeometry(std::shared_ptr<ActorResourceDefinition> const, std::string_view, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorResourceDefinition const&);

    MCNAPI void* $ctor(::HashedString, bool, ::SemVersion const&, ::SemVersion const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class ActorResourceDefinition {};
#endif // @header-generator platform
