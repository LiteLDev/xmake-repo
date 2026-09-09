#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorLifetimeState.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionPtr;
class EntityContext;
class MobEffect;
class Scoreboard;
class ServerLevel;
class Vec2;
class Vec3;
class VecXZ;
struct DynamicPropertyDefinition;
struct ScoreboardId;
namespace ScriptModuleMinecraft { class ScriptAABB; }
namespace ScriptModuleMinecraft { class ScriptActorComponents; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptEffectType; }
namespace ScriptModuleMinecraft { class ScriptEntityRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptMobEffectInstance; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptVector; }
namespace ScriptModuleMinecraft { struct ScriptActorApplyDamageByProjectileOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorApplyDamageOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace ScriptModuleMinecraft { struct ScriptActorInvalidComponentError; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
namespace ScriptModuleMinecraft { struct ScriptEntityEffectOptions; }
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptGetBlocksStandingOnOptions; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptPlayAnimationOptions; }
namespace ScriptModuleMinecraft { struct ScriptTeleportOptions; }
namespace ScriptModuleMinecraft { struct ScriptXYRotation; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct JSON; }
namespace Scripting { struct UnsupportedAPIError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActor {
public:
    // ScriptActor inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptActor inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorUniqueID> mId;
        // NOLINTEND
    };

    using ActorPropertyVariant = std::variant<float, bool, std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                   mScope;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                                  mEntityRef;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                   mUniqueId;
    ::ll::UntypedStorage<8, 40>                                                 mAttachedComponents;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptActorLifetimeState> mLifetimeState;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>                     mLevel;
    ::ll::TypedStorage<8, 24, std::string>                                      mTypeId;
    ::ll::TypedStorage<8, 24, std::string>                                      mUniqueIdString;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActor& operator=(ScriptActor const&);
    ScriptActor(ScriptActor const&);
    ScriptActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptActor();

    virtual void setLoading(::Actor const&);

    virtual void setUnloaded(::Actor&);

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError> lookAt(::Actor&, ::Vec3 const&);

    virtual ::Scripting::Result<std::string, ScriptModuleMinecraft::ScriptInvalidActorError> getNameTag(::Actor const&) const;

    virtual ::Scripting::Result_deprecated<std::string> getNameTag_010(::Actor const&) const;

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError> setNameTag(::Actor&, std::string const&);

    virtual ::Scripting::Result_deprecated<void> setNameTag_010(::Actor&, std::string const&);

    virtual ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> getSneaking(::Actor const&) const;

    virtual ::Scripting::Result_deprecated<bool> getSneaking_010(::Actor const&) const;

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError> setSneaking(::Actor&, bool);

    virtual ::Scripting::Result_deprecated<void> setSneaking_010(::Actor&, bool);

    virtual ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> getNameplateDepthTested(::Actor const&) const;

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError> setNameplateDepthTested(::Actor&, bool);

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError> remove(::Actor&);

    virtual bool isValid() const;

    virtual ::ScoreboardId const& _getScoreboardId(::Scoreboard const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActor(::Actor const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI ScriptActor(::ScriptModuleMinecraft::ScriptActorData const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI ::MobEffect const* _getEffectHelper(
        std::variant<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptEffectType>> const&
    ) const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    _teleport(::Actor&, ::Vec3 const&, std::optional<ScriptModuleMinecraft::ScriptTeleportOptions> const&, bool);

    MCNAPI std::optional<Scripting::Error> _validateDynamicProperty_V010(
        ::Actor&,
        std::string const&,
        std::variant<double, float, bool, std::string, Vec3> const*,
        std::string const&
    );

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptMobEffectInstance>>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::ArgumentOutOfBoundsError,
        Scripting::InvalidArgumentError>
    addEffect(
        ::Actor&,
        std::variant<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptEffectType>> const&,
        int,
        std::optional<ScriptModuleMinecraft::ScriptEntityEffectOptions> const&
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    addEffect_V010(::Actor&, ::ScriptModuleMinecraft::ScriptEffectType const&, int, int, bool);

    MCNAPI ::Scripting::
        Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::ArgumentOutOfBoundsError>
        addTag(::Actor&, std::string const&);

    MCNAPI ::Scripting::Result_deprecated<bool> addTag_010(::Actor&, std::string const&);

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::UnsupportedAPIError,
        Scripting::EngineError>
    applyDamage(
        ::Actor&,
        float,
        std::optional<std::variant<
            ScriptModuleMinecraft::ScriptActorApplyDamageOptions,
            ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions>> const&
    );

    MCNAPI ::Scripting::
        Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::ArgumentOutOfBoundsError>
        applyImpulse(::Actor&, ::Vec3 const&);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    applyKnockback_V1(::Actor&, float, float, float, float);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    applyKnockback_V2(::Actor&, ::VecXZ const&, float);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError>
    clearDynamicProperties(::Actor&, ::Scripting::ContextConfig const&);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError> clearVelocity(::Actor&);

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> extinguishFire(::Actor&, bool);

    MCNAPI ::Scripting::Result<ScriptModuleMinecraft::ScriptAABB, ScriptModuleMinecraft::ScriptInvalidActorError>
    getAABB(::Actor const&) const;

    MCNAPI ::Scripting::Result<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>,
        ScriptModuleMinecraft::ScriptInvalidActorError>
    getAllBlocksStandingOn(
        ::Actor const&,
        ::Scripting::WeakLifetimeScope,
        std::optional<ScriptModuleMinecraft::ScriptGetBlocksStandingOnOptions> const&
    ) const;

    MCNAPI ::Scripting::Result<
        std::optional<ScriptModuleMinecraft::ScriptBlockRaycastHit>,
        ScriptModuleMinecraft::ScriptInvalidActorError>
    getBlockFromViewDirection(
        ::Actor const&,
        ::Scripting::WeakLifetimeScope,
        std::optional<ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>>
    getBlockFromViewVector_010(
        ::Actor const&,
        ::Scripting::WeakLifetimeScope,
        std::optional<ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&
    ) const;

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>,
        ScriptModuleMinecraft::ScriptInvalidActorError>
    getBlockStandingOn(
        ::Actor const&,
        ::Scripting::WeakLifetimeScope,
        std::optional<ScriptModuleMinecraft::ScriptGetBlocksStandingOnOptions> const&
    ) const;

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorComponent>> getComponent(
        ::Scripting::WeakLifetimeScope,
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorComponents> const&,
        std::string_view
    );

    MCNAPI std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorComponent>>
    getComponents(::Scripting::WeakLifetimeScope, std::shared_ptr<ScriptModuleMinecraft::ScriptActorComponents> const&);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimension>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::EngineError>
    getDimension(::Actor const&) const;

    MCNAPI ::Scripting::Result_deprecated<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimension>>
    getDimension_010(::Actor const&) const;

    MCNAPI ::Scripting::Result<
        std::optional<std::variant<double, float, bool, std::string, Vec3>>,
        ScriptModuleMinecraft::ScriptInvalidActorError>
    getDynamicProperty(::Actor&, ::Scripting::ContextConfig const&, std::string const&);

    MCNAPI ::Scripting::Result<std::vector<std::string>, ScriptModuleMinecraft::ScriptInvalidActorError>
    getDynamicPropertyIds(::Actor&, ::Scripting::ContextConfig const&);

    MCNAPI ::Scripting::Result<int, ScriptModuleMinecraft::ScriptInvalidActorError>
    getDynamicPropertyTotalByteCount(::Actor&, ::Scripting::ContextConfig const&);

    MCNAPI ::Scripting::Result_deprecated<std::optional<std::variant<double, float, bool, std::string, Vec3>>>
    getDynamicProperty_V010(::Actor&, ::Scripting::ContextConfig const&, std::string const&);

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptMobEffectInstance>>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError>
    getEffect(
        ::Actor const&,
        std::variant<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptEffectType>> const&
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffect_V010(::Actor const&, ::ScriptModuleMinecraft::ScriptEffectType const&) const;

    MCNAPI ::Scripting::Result<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptMobEffectInstance>>,
        ScriptModuleMinecraft::ScriptInvalidActorError>
    getEffects(::Actor const&) const;

    MCNAPI ::Scripting::Result<
        std::vector<ScriptModuleMinecraft::ScriptEntityRaycastHit>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError,
        Scripting::EngineError,
        Scripting::UnsupportedAPIError>
    getEntitiesFromViewDirection(
        ::Actor const&,
        ::Scripting::WeakLifetimeScope,
        std::optional<ScriptModuleMinecraft::ScriptEntityRaycastOptions> const&
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>>>
    getEntitiesFromViewVector_010(
        ::Actor const&,
        ::Scripting::WeakLifetimeScope,
        std::optional<ScriptModuleMinecraft::ScriptEntityRaycastOptions> const&
    ) const;

    MCNAPI ::Scripting::Result<Vec3, ScriptModuleMinecraft::ScriptInvalidActorError>
    getHeadLocation(::Actor const&) const;

    MCNAPI ::Scripting::Result_deprecated<Vec3> getHeadLocation_010(::Actor const&) const;

    MCNAPI std::string getId() const;

    MCNAPI ::Scripting::Result_deprecated<std::string> getId_010(::Actor const&) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptActorLifetimeState getLifetimeState() const;

    MCNAPI ::Scripting::Result<std::string, ScriptModuleMinecraft::ScriptInvalidActorError>
    getLocalizationKey(::Actor const&) const;

    MCNAPI ::Scripting::Result<Vec3, ScriptModuleMinecraft::ScriptInvalidActorError> getLocation(::Actor const&) const;

    MCNAPI ::Scripting::Result_deprecated<Vec3> getLocation_010(::Actor const&) const;

    MCNAPI ::Scripting::Result<float, ScriptModuleMinecraft::ScriptInvalidActorError>
    getNameplateRenderDistance(::Actor const&) const;

    MCNAPI ::Scripting::
        Result<std::optional<std::variant<float, bool, std::string>>, ScriptModuleMinecraft::ScriptInvalidActorError>
        getProperty(::Actor const&, std::string const&) const;

    MCNAPI ::Scripting::Result<Vec2, ScriptModuleMinecraft::ScriptInvalidActorError> getRotation(::Actor const&) const;

    MCNAPI ::Scripting::Result_deprecated<ScriptModuleMinecraft::ScriptXYRotation>
    getRotation_V010(::Actor const&) const;

    MCNAPI ::Scripting::Result<std::vector<std::string>, ScriptModuleMinecraft::ScriptInvalidActorError>
    getTags(::Actor const&) const;

    MCNAPI ::Scripting::Result_deprecated<std::vector<std::string>> getTags_010(::Actor const&) const;

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>>,
        ScriptModuleMinecraft::ScriptInvalidActorError>
    getTarget(::Actor const&) const;

    MCNAPI ::Scripting::Result_deprecated<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>>
    getTarget_010(::Actor const&) const;

    MCNAPI std::string getTypeId() const;

    MCNAPI ::Scripting::Result<Vec3, ScriptModuleMinecraft::ScriptInvalidActorError> getVelocity(::Actor const&) const;

    MCNAPI ::Scripting::Result_deprecated<ScriptModuleMinecraft::ScriptVector> getVelocity_010(::Actor const&) const;

    MCNAPI ::Scripting::Result<Vec3, ScriptModuleMinecraft::ScriptInvalidActorError>
    getViewDirection(::Actor const&) const;

    MCNAPI ::Scripting::Result_deprecated<ScriptModuleMinecraft::ScriptVector> getViewVector_010(::Actor const&) const;

    MCNAPI ::WeakRef<EntityContext> getWeakEntity() const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError>
    hasTag(::Actor const&, std::string const&) const;

    MCNAPI ::Scripting::Result_deprecated<bool> hasTag_010(::Actor const&, std::string const&) const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> isClimbing(::Actor const&) const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> isFalling(::Actor const&) const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> isInWater(::Actor const&) const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> isOnGround(::Actor const&) const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> isSleeping(::Actor const&) const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> isSprinting(::Actor const&) const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> isSwimming(::Actor const&) const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> kill(::Actor&);

    MCNAPI ::Scripting::Result_deprecated<void> kill_010(::Actor&);

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError,
        Scripting::UnsupportedAPIError>
    matches(::Actor const&, ::ScriptModuleMinecraft::ScriptActorQueryOptions) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptActor& operator=(::ScriptModuleMinecraft::ScriptActor&&);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError> playAnimation(
        ::Actor&,
        std::string const&,
        std::optional<ScriptModuleMinecraft::ScriptPlayAnimationOptions> const&
    );

    MCNAPI ::Scripting::Result_deprecated<bool>
    removeDynamicProperty_V010(::Actor&, ::Scripting::ContextConfig const&, std::string const&);

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::InvalidArgumentError>
    removeEffect(
        ::Actor&,
        std::variant<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptEffectType>> const&
    );

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError>
    removeTag(::Actor&, std::string const&);

    MCNAPI ::Scripting::Result_deprecated<bool> removeTag_010(::Actor&, std::string const&);

    MCNAPI ::Scripting::Result<
        std::variant<float, bool, std::string>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::EngineError,
        Scripting::Error>
    resetProperty(::Actor&, std::string const&);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCommandResult>,
        ScriptModuleMinecraft::ScriptCommandError,
        ScriptModuleMinecraft::ScriptInvalidActorError>
    runCommand(::Actor&, ::Scripting::ContextConfig const&, std::string const&);

    MCNAPI ::Scripting::Result<
        Scripting::Promise<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCommandResult>,
            ScriptModuleMinecraft::ScriptCommandError>,
        ScriptModuleMinecraft::ScriptCommandError,
        ScriptModuleMinecraft::ScriptInvalidActorError>
    runCommandAsync(::Actor&, ::Scripting::ContextConfig const&, ::Scripting::ScriptObjectFactory&, std::string const&);

    MCNAPI ::Scripting::Result_deprecated<Scripting::JSON>
    runCommand_V010(::Actor&, ::Scripting::ContextConfig const&, std::string const&);

    MCNAPI ::Scripting::
        Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::ArgumentOutOfBoundsError>
        setDynamicProperties(
            ::Actor&,
            ::Scripting::ContextConfig const&,
            std::unordered_map<std::string, std::optional<std::variant<double, float, bool, std::string, Vec3>>> const&
        );

    MCNAPI ::Scripting::
        Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::ArgumentOutOfBoundsError>
        setDynamicProperty(
            ::Actor&,
            ::Scripting::ContextConfig const&,
            std::string const&,
            std::optional<std::variant<double, float, bool, std::string, Vec3>> const&
        );

    MCNAPI ::Scripting::Result_deprecated<void> setDynamicProperty_V010(
        ::Actor&,
        ::Scripting::ContextConfig const&,
        std::string const&,
        std::variant<double, float, bool, std::string, Vec3>&
    );

    MCNAPI void setLoaded();

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError>
    setNameplateRenderDistance(::Actor&, float);

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError>
    setOnFire(::Actor&, int const, bool);

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError,
        Scripting::ArgumentOutOfBoundsError>
    setProperty(::Actor&, std::string const&, std::variant<float, bool, std::string> const&);

    MCNAPI void setRemoved();

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError> setRotation(::Actor&, ::Vec2);

    MCNAPI ::Scripting::Result_deprecated<void> setRotation_V010(::Actor&, float, float);

    MCNAPI ::Scripting::Result_deprecated<void> setTarget_010(::Actor&, ::ScriptModuleMinecraft::ScriptActor&);

    MCNAPI ::Scripting::Result_deprecated<void> setVelocity_010(::Actor&, ::ScriptModuleMinecraft::ScriptVector const&);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    teleport(::Actor&, ::Vec3 const&, std::optional<ScriptModuleMinecraft::ScriptTeleportOptions> const&);

    MCNAPI ::Scripting::Result_deprecated<void>
    teleportFacing_V010(::Actor&, ::Vec3 const&, ::ScriptModuleMinecraft::ScriptDimension&, ::Vec3 const&, bool);

    MCNAPI ::Scripting::Result_deprecated<void>
    teleport_V010(::Actor&, ::Vec3 const&, ::ScriptModuleMinecraft::ScriptDimension&, float, float, bool);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::InvalidArgumentError>
    triggerEvent(::Actor&, std::string const&);

    MCNAPI ::Scripting::Result_deprecated<void> triggerEvent_V010(::Actor&, std::string const&);

    MCNAPI ::Actor* tryGetActor() const;

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    tryTeleport(::Actor&, ::Vec3 const&, std::optional<ScriptModuleMinecraft::ScriptTeleportOptions> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(std::shared_ptr<ScriptModuleMinecraft::ScriptActorComponents> const&);

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>
    getHandle(::Actor const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI static std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>>
    getHandle(::WeakEntityRef, ::Scripting::WeakLifetimeScope const&);

    MCNAPI static ::Actor* tryGetActor(
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptActor> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorData const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setLoading(::Actor const&);

    MCNAPI void $setUnloaded(::Actor&);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    $lookAt(::Actor&, ::Vec3 const&);

    MCNAPI ::Scripting::Result<std::string, ScriptModuleMinecraft::ScriptInvalidActorError>
    $getNameTag(::Actor const&) const;

    MCNAPI ::Scripting::Result_deprecated<std::string> $getNameTag_010(::Actor const&) const;

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError>
    $setNameTag(::Actor&, std::string const&);

    MCNAPI ::Scripting::Result_deprecated<void> $setNameTag_010(::Actor&, std::string const&);

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError> $getSneaking(::Actor const&) const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getSneaking_010(::Actor const&) const;

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError> $setSneaking(::Actor&, bool);

    MCNAPI ::Scripting::Result_deprecated<void> $setSneaking_010(::Actor&, bool);

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError>
    $getNameplateDepthTested(::Actor const&) const;

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError>
    $setNameplateDepthTested(::Actor&, bool);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    $remove(::Actor&);

    MCNAPI bool $isValid() const;

    MCNAPI ::ScoreboardId const& $_getScoreboardId(::Scoreboard const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
