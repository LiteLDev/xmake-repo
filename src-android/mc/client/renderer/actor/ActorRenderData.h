#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/framebuilder/CustomSurfaceShaderMetadata.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AnimationComponent;
class BaseActorRenderContext;
class ItemStack;
class Matrix;
class Mob;
class MolangVariableMap;
class RenderParams;
class Vec4;
namespace mce { class Color; }
// clang-format on

class ActorRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor*>                                         mActor;
    ::ll::TypedStorage<8, 8, ::ItemStack const*>                               mItemStack;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          position;
    ::ll::TypedStorage<4, 8, ::Vec2>                                           rotation;
    ::ll::TypedStorage<4, 8, ::Vec2>                                           mHeadRot;
    ::ll::TypedStorage<1, 1, bool>                                             glint;
    ::ll::TypedStorage<1, 1, bool>                                             mIgnoreLighting;
    ::ll::TypedStorage<1, 1, bool>                                             mIsInUI;
    ::ll::TypedStorage<4, 4, float>                                            mDeltaTime;
    ::ll::TypedStorage<8, 8, ::AnimationComponent&>                            mAnimationComponent;
    ::ll::TypedStorage<8, 8, ::MolangVariableMap&>                             mVariables;
    ::ll::TypedStorage<4, 8, ::mce::framebuilder::CustomSurfaceShaderMetadata> mCSSMetadata;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRenderData& operator=(ActorRenderData const&);
    ActorRenderData(ActorRenderData const&);
    ActorRenderData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorRenderData(bool, ::AnimationComponent&, ::MolangVariableMap&, ::Vec3 const&, float);

    MCNAPI void _Level_setupShading(
        ::BaseActorRenderContext&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::Vec4 const&,
        float,
        bool,
        bool,
        bool
    ) const;

    MCNAPI void _UI_setupShading(
        ::BaseActorRenderContext&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::Vec4 const&,
        float,
        bool,
        bool
    ) const;

    MCNAPI ::Actor* getActor() const;

    MCNAPI ::AnimationComponent& getAnimationComponent() const;

    MCNAPI bool getIgnoreLighting() const;

    MCNAPI ::ItemStack const* getItemStack() const;

    MCNAPI ::MolangVariableMap& getMolangVariables() const;

    MCNAPI void setItemStack(::ItemStack const*);

    MCNAPI void setupShading(
        ::BaseActorRenderContext&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::mce::Color const&,
        ::Vec4 const&,
        float,
        bool,
        bool,
        bool
    ) const;

    MCNAPI bool shouldRender() const;

    MCNAPI void updateMolangVariables(::RenderParams&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float additionalDamageNearbyMobsYRotation(::Mob const&, float, bool);

    MCNAPI static std::optional<std::pair<float, float>> getDamageOrGlidingXYRotation(::Mob const&, float, bool);

    MCNAPI static float getDeathRotation(::Mob const&, float);

    MCNAPI static bool getIsFirstPersonPlayer(::Mob&);

    MCNAPI static std::optional<std::pair<float, float>> getNamedRotationAndOffset(::Mob const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, ::AnimationComponent&, ::MolangVariableMap&, ::Vec3 const&, float);
    // NOLINTEND
};
