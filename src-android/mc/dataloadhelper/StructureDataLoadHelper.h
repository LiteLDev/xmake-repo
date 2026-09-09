#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/dataloadhelper/DataLoadHelper.h"
#include "mc/dataloadhelper/DataLoadHelperType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Level;
// clang-format on

class StructureDataLoadHelper : public ::DataLoadHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                       mStructurePlacementLocation;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                       mStructureWorldOrigin;
    ::ll::TypedStorage<4, 12, ::Vec3>                                           mPivot;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                   mOwner;
    ::ll::TypedStorage<1, 1, ::Rotation>                                        mRotation;
    ::ll::TypedStorage<1, 1, ::Mirror>                                          mMirror;
    ::ll::TypedStorage<8, 8, ::Level*>                                          mLevel;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, ActorUniqueID>> mOldIDToNewID;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDataLoadHelper();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StructureDataLoadHelper();

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

    virtual ::ActorUniqueID _generateNewID();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureDataLoadHelper(
        ::BlockPos const&,
        ::BlockPos const&,
        ::Vec3 const&,
        ::ActorUniqueID,
        ::Rotation,
        ::Mirror,
        ::Level&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::BlockPos const&, ::BlockPos const&, ::Vec3 const&, ::ActorUniqueID, ::Rotation, ::Mirror, ::Level&);
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

    MCNAPI ::ActorUniqueID $_generateNewID();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
