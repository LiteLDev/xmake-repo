#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class DataLoadHelper {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~DataLoadHelper();
#else // @header-generator platform
    virtual ~DataLoadHelper() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 loadPosition(::Vec3 const&) = 0;
#else // @header-generator platform
    virtual ::Vec3 loadPosition(::Vec3 const& position) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos loadBlockPosition(::BlockPos const&) = 0;
#else // @header-generator platform
    virtual ::BlockPos loadBlockPosition(::BlockPos const& blockPos) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos loadBlockPositionOffset(::BlockPos const&) = 0;
#else // @header-generator platform
    virtual ::BlockPos loadBlockPositionOffset(::BlockPos const& blockPosOffset) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float loadRotationDegreesX(float) = 0;
#else // @header-generator platform
    virtual float loadRotationDegreesX(float x) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float loadRotationDegreesY(float) = 0;
#else // @header-generator platform
    virtual float loadRotationDegreesY(float y) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float loadRotationRadiansX(float) = 0;
#else // @header-generator platform
    virtual float loadRotationRadiansX(float x) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float loadRotationRadiansY(float) = 0;
#else // @header-generator platform
    virtual float loadRotationRadiansY(float y) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uchar loadFacingID(uchar) = 0;
#else // @header-generator platform
    virtual uchar loadFacingID(uchar facing) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Direction::Type loadDirection(::Direction::Type) = 0;
#else // @header-generator platform
    virtual ::Vec3 loadDirection(::Vec3 const& direction) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 loadDirection(::Vec3 const&) = 0;
#else // @header-generator platform
    virtual ::Direction::Type loadDirection(::Direction::Type direction) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Rotation loadRotation(::Rotation) = 0;
#else // @header-generator platform
    virtual ::Rotation loadRotation(::Rotation rotation) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Mirror loadMirror(::Mirror) = 0;
#else // @header-generator platform
    virtual ::Mirror loadMirror(::Mirror mirror) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorUniqueID loadActorUniqueID(::ActorUniqueID) = 0;
#else // @header-generator platform
    virtual ::ActorUniqueID loadActorUniqueID(::ActorUniqueID id) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorUniqueID loadOwnerID(::ActorUniqueID) = 0;
#else // @header-generator platform
    virtual ::ActorUniqueID loadOwnerID(::ActorUniqueID id) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InternalComponentRegistry::ComponentInfo const* loadActorInternalComponentInfo(std::unordered_map<HashedString, InternalComponentRegistry::ComponentInfo> const&, std::string const&) = 0;
#else // @header-generator platform
    virtual ::InternalComponentRegistry::ComponentInfo const* loadActorInternalComponentInfo(
        ::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo> const& registry,
        ::std::string const&                                                                    componentName
    ) = 0;
#endif // @header-generator platform

    virtual ::DataLoadHelperType getType() const = 0;

    virtual bool shouldResetTime() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
