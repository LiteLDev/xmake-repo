#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/dataloadhelper/DataLoadHelper.h"
#include "mc/dataloadhelper/DataLoadHelperType.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class Vec3;
struct ActorUniqueID;
// clang-format on

class DefaultDataLoadHelper : public ::DataLoadHelper {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DefaultDataLoadHelper();

    virtual ::Vec3 loadPosition(::Vec3 const&);

    virtual ::BlockPos loadBlockPosition(::BlockPos const&);

    virtual ::BlockPos loadBlockPositionOffset(::BlockPos const&);

    virtual float loadRotationDegreesX(float);

    virtual float loadRotationDegreesY(float);

    virtual float loadRotationRadiansX(float);

    virtual float loadRotationRadiansY(float);

    virtual uchar loadFacingID(uchar);

    virtual ::Direction::Type loadDirection(::Direction::Type);

    virtual ::Vec3 loadDirection(::Vec3 const&);

    virtual ::Rotation loadRotation(::Rotation);

    virtual ::Mirror loadMirror(::Mirror);

    virtual ::ActorUniqueID loadActorUniqueID(::ActorUniqueID);

    virtual ::ActorUniqueID loadOwnerID(::ActorUniqueID);

    virtual ::InternalComponentRegistry::ComponentInfo const* loadActorInternalComponentInfo(std::unordered_map<HashedString, InternalComponentRegistry::ComponentInfo> const&, std::string const&);

    virtual ::DataLoadHelperType getType() const;

    virtual bool shouldResetTime();
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Vec3 $loadPosition(::Vec3 const&);

    MCNAPI ::BlockPos $loadBlockPosition(::BlockPos const&);

    MCNAPI ::BlockPos $loadBlockPositionOffset(::BlockPos const&);

    MCNAPI float $loadRotationDegreesX(float);

    MCNAPI float $loadRotationDegreesY(float);

    MCNAPI float $loadRotationRadiansX(float);

    MCNAPI float $loadRotationRadiansY(float);

    MCNAPI uchar $loadFacingID(uchar);

    MCNAPI ::Direction::Type $loadDirection(::Direction::Type);

    MCNAPI ::Vec3 $loadDirection(::Vec3 const&);

    MCNAPI ::Rotation $loadRotation(::Rotation);

    MCNAPI ::Mirror $loadMirror(::Mirror);

    MCNAPI ::ActorUniqueID $loadActorUniqueID(::ActorUniqueID);

    MCNAPI ::ActorUniqueID $loadOwnerID(::ActorUniqueID);

    MCNAPI ::InternalComponentRegistry::ComponentInfo const* $loadActorInternalComponentInfo(
        std::unordered_map<HashedString, InternalComponentRegistry::ComponentInfo> const&,
        std::string const&
    );

    MCNAPI ::DataLoadHelperType $getType() const;

    MCNAPI bool $shouldResetTime();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
