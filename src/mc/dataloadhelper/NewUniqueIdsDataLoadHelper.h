#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/dataloadhelper/DataLoadHelper.h"
#include "mc/dataloadhelper/DataLoadHelperType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class ILevel;
class Vec3;
// clang-format on

class NewUniqueIdsDataLoadHelper : public ::DataLoadHelper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ILevel*>                                         mLevel;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, ActorUniqueID>> mOldIDToNewID;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ILevel*>                                               mLevel;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::ActorUniqueID>> mOldIDToNewID;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    NewUniqueIdsDataLoadHelper();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~NewUniqueIdsDataLoadHelper();
#else // @header-generator platform
    virtual ::Vec3 loadPosition(::Vec3 const& position) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 loadPosition(::Vec3 const&);
#else // @header-generator platform
    virtual ::BlockPos loadBlockPosition(::BlockPos const& blockPos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos loadBlockPosition(::BlockPos const&);
#else // @header-generator platform
    virtual ::BlockPos loadBlockPositionOffset(::BlockPos const& blockPosOffset) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos loadBlockPositionOffset(::BlockPos const&);
#else // @header-generator platform
    virtual float loadRotationDegreesX(float x) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float loadRotationDegreesX(float);
#else // @header-generator platform
    virtual float loadRotationDegreesY(float y) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float loadRotationDegreesY(float);
#else // @header-generator platform
    virtual float loadRotationRadiansX(float x) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float loadRotationRadiansX(float);
#else // @header-generator platform
    virtual float loadRotationRadiansY(float y) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float loadRotationRadiansY(float);
#else // @header-generator platform
    virtual uchar loadFacingID(uchar facing) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uchar loadFacingID(uchar);
#else // @header-generator platform
    virtual ::Vec3 loadDirection(::Vec3 const& direction) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Direction::Type loadDirection(::Direction::Type);
#else // @header-generator platform
    virtual ::Direction::Type loadDirection(::Direction::Type direction) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 loadDirection(::Vec3 const&);
#else // @header-generator platform
    virtual ::Rotation loadRotation(::Rotation rotation) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Rotation loadRotation(::Rotation);
#else // @header-generator platform
    virtual ::Mirror loadMirror(::Mirror mirror) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Mirror loadMirror(::Mirror);
#else // @header-generator platform
    virtual ::ActorUniqueID loadActorUniqueID(::ActorUniqueID id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorUniqueID loadActorUniqueID(::ActorUniqueID);
#else // @header-generator platform
    virtual ::ActorUniqueID loadOwnerID(::ActorUniqueID id) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorUniqueID loadOwnerID(::ActorUniqueID);
#else // @header-generator platform
    virtual ::InternalComponentRegistry::ComponentInfo const* loadActorInternalComponentInfo(
        ::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo> const& registry,
        ::std::string const&                                                                    componentName
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InternalComponentRegistry::ComponentInfo const* loadActorInternalComponentInfo(std::unordered_map<HashedString, InternalComponentRegistry::ComponentInfo> const&, std::string const&);
#else // @header-generator platform
    virtual bool shouldResetTime() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::DataLoadHelperType getType() const;
#else // @header-generator platform
    virtual ::DataLoadHelperType getType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldResetTime();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NewUniqueIdsDataLoadHelper(::ILevel&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ILevel&);
#else // @header-generator platform
    virtual ~NewUniqueIdsDataLoadHelper() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $loadPosition(::Vec3 const&);
#else // @header-generator platform
    MCFOLD ::Vec3 $loadPosition(::Vec3 const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $loadBlockPosition(::BlockPos const&);
#else // @header-generator platform
    MCFOLD ::BlockPos $loadBlockPosition(::BlockPos const& blockPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $loadBlockPositionOffset(::BlockPos const&);
#else // @header-generator platform
    MCFOLD ::BlockPos $loadBlockPositionOffset(::BlockPos const& blockPosOffset);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $loadRotationDegreesX(float);
#else // @header-generator platform
    MCFOLD float $loadRotationDegreesX(float x);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $loadRotationDegreesY(float);
#else // @header-generator platform
    MCFOLD float $loadRotationDegreesY(float y);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $loadRotationRadiansX(float);
#else // @header-generator platform
    MCFOLD float $loadRotationRadiansX(float x);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $loadRotationRadiansY(float);
#else // @header-generator platform
    MCFOLD float $loadRotationRadiansY(float y);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar $loadFacingID(uchar);
#else // @header-generator platform
    MCFOLD uchar $loadFacingID(uchar facing);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Direction::Type $loadDirection(::Direction::Type);
#else // @header-generator platform
    MCFOLD ::Vec3 $loadDirection(::Vec3 const& direction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $loadDirection(::Vec3 const&);
#else // @header-generator platform
    MCFOLD ::Direction::Type $loadDirection(::Direction::Type direction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Rotation $loadRotation(::Rotation);
#else // @header-generator platform
    MCFOLD ::Rotation $loadRotation(::Rotation rotation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Mirror $loadMirror(::Mirror);
#else // @header-generator platform
    MCFOLD ::Mirror $loadMirror(::Mirror mirror);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $loadActorUniqueID(::ActorUniqueID);
#else // @header-generator platform
    MCAPI ::ActorUniqueID $loadActorUniqueID(::ActorUniqueID id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $loadOwnerID(::ActorUniqueID);
#else // @header-generator platform
    MCFOLD ::ActorUniqueID $loadOwnerID(::ActorUniqueID id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InternalComponentRegistry::ComponentInfo const* $loadActorInternalComponentInfo(
        std::unordered_map<HashedString, InternalComponentRegistry::ComponentInfo> const&,
        std::string const&
#else // @header-generator platform
    MCFOLD ::InternalComponentRegistry::ComponentInfo const* $loadActorInternalComponentInfo(
        ::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo> const& registry,
        ::std::string const&                                                                    componentName
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DataLoadHelperType $getType() const;
#else // @header-generator platform
    MCFOLD bool $shouldResetTime();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldResetTime();
#else // @header-generator platform
    MCFOLD ::DataLoadHelperType $getType() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
