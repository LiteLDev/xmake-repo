#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
class WeakEntityRef;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptProjectileShootOptions; }
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptProjectileComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptProjectileComponent& operator=(ScriptProjectileComponent const&);
    ScriptProjectileComponent();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptProjectileComponent();

    virtual bool _isValid() const;
#else // @header-generator platform
    virtual bool _isValid() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<float> getAirInertia() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<float> getAirInertia() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> getCatchFireOnHurt() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> getCatchFireOnHurt() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> getCritParticlesOnProjectileHurt() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> getCritParticlesOnProjectileHurt() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> getDestroyOnProjectileHurt() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> getDestroyOnProjectileHurt() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<float> getGravity() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<float> getGravity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::optional<std::string>> getHitEntitySound() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHitEntitySound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::optional<std::string>> getHitGroundSound() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHitGroundSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::optional<std::string>> getHitParticle() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHitParticle() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> getLightningStrikeOnHit() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> getLightningStrikeOnHit() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<float> getLiquidInertia() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<float> getLiquidInertia() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<float> getOnFireTime() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<float> getOnFireTime() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>>>
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
#endif // @header-generator platform
    getOwner() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> getShouldBounceOnHit() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> getShouldBounceOnHit() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> getStopOnHit() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> getStopOnHit() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setAirInertia(float);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setAirInertia(float value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setCatchFireOnHurt(bool);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setCatchFireOnHurt(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setCritParticlesOnProjectileHurt(bool);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setCritParticlesOnProjectileHurt(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setDestroyOnProjectileHurt(bool);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setDestroyOnProjectileHurt(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setGravity(float);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setGravity(float value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setHitEntitySound(std::optional<std::string> const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setHitEntitySound(::std::optional<::std::string> const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setHitGroundSound(std::optional<std::string> const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setHitGroundSound(::std::optional<::std::string> const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setHitParticle(std::optional<std::string> const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setHitParticle(::std::optional<::std::string> const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setLightningStrikeOnHit(bool);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setLightningStrikeOnHit(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setLiquidInertia(float);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setLiquidInertia(float value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setOnFireTime(float);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setOnFireTime(float value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setShouldBounceOnHit(bool);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setShouldBounceOnHit(bool value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setStopOnHit(bool);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setStopOnHit(bool value);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static char const*& ComponentId();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_isValid() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $_isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
