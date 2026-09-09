#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/minecraft_camera/ICameraAPI.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class EntityRegistry;
class IClientInstance;
class Vec2;
class Vec3;
// clang-format on

class CameraAPI : public ::ICameraAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAPI& operator=(CameraAPI const&);
    CameraAPI(CameraAPI const&);
    CameraAPI();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CameraAPI();

    virtual std::optional<Vec3> tryGetActorRelativeLocation(::WeakRef<EntityContext> const, ::SharedTypes::Legacy::ActorLocation) const;

    virtual std::optional<Vec3> tryGetActorInterpolatedPosition(::WeakRef<EntityContext> const, float) const;

    virtual std::optional<Vec2> tryGetActorRotation(::WeakRef<const EntityContext> const) const;

    virtual std::optional<Vec3> tryGetActorPositionDelta(::WeakRef<EntityContext> const) const;

    virtual std::vector<ICameraAPI::ShakeParameters> tryGetShakeParameters(::WeakRef<EntityContext>, float, float, float) const;

    virtual std::optional<float> tryGetFOV() const;

    virtual ::ICameraAPI::CameraMovementData getCameraMovementVector() const;

    virtual float getSecondsSinceProgramStart() const;

    virtual ::WeakRef<EntityContext> getDefaultCameraTarget() const;

    virtual ::WeakRef<EntityContext> getWeakEntity(long) const;

    virtual ::WeakRef<EntityRegistry> getRegistryWeakEntity_DONOTUSE() const;

    virtual float getFrameAlpha() const;

    virtual ::glm::vec<2, float, (glm::qualifier)0> getViewportSize() const;

    virtual std::optional<Vec3> clip(::glm::vec<3, float, (glm::qualifier)0> const&, ::glm::vec<3, float, (glm::qualifier)0> const&);

    virtual bool isInWall(::Vec3 const&) const;

    virtual bool isAlive(::WeakRef<EntityContext> const) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CameraAPI(::IClientInstance&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<Vec3>
           $tryGetActorRelativeLocation(::WeakRef<EntityContext> const, ::SharedTypes::Legacy::ActorLocation) const;

    MCNAPI std::optional<Vec3> $tryGetActorInterpolatedPosition(::WeakRef<EntityContext> const, float) const;

    MCNAPI std::optional<Vec2> $tryGetActorRotation(::WeakRef<const EntityContext> const) const;

    MCNAPI std::optional<Vec3> $tryGetActorPositionDelta(::WeakRef<EntityContext> const) const;

    MCNAPI std::vector<ICameraAPI::ShakeParameters>
           $tryGetShakeParameters(::WeakRef<EntityContext>, float, float, float) const;

    MCNAPI std::optional<float> $tryGetFOV() const;

    MCNAPI ::ICameraAPI::CameraMovementData $getCameraMovementVector() const;

    MCNAPI float $getSecondsSinceProgramStart() const;

    MCNAPI ::WeakRef<EntityContext> $getDefaultCameraTarget() const;

    MCNAPI ::WeakRef<EntityContext> $getWeakEntity(long) const;

    MCNAPI ::WeakRef<EntityRegistry> $getRegistryWeakEntity_DONOTUSE() const;

    MCNAPI float $getFrameAlpha() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> $getViewportSize() const;

    MCNAPI std::optional<Vec3>
           $clip(::glm::vec<3, float, (glm::qualifier)0> const&, ::glm::vec<3, float, (glm::qualifier)0> const&);

    MCNAPI bool $isInWall(::Vec3 const&) const;

    MCNAPI bool $isAlive(::WeakRef<EntityContext> const) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
