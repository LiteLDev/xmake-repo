#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Random.h"
#include "mc/world/level/PortalRecord.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/PortalAxis.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/saveddata/SavedData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class BlockPos;
class BlockSource;
class CompoundTag;
class Level;
class PortalShape;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
struct DimensionTransitionComponent;
// clang-format on

class PortalForcer : public ::SavedData {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // PortalForcer inner types declare
    // clang-format off
    class PortalPosition;
    // clang-format on

#endif // @header-generator platform
    // PortalForcer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using PortalRecordSet = std::unordered_set<PortalRecord>;
#else // @header-generator platform
    class PortalPosition {};

    using CachedPortalMap = ::std::unordered_map<::BlockPos, ::PortalForcer::PortalPosition>;

    using PortalRecordSet = ::std::unordered_set<::PortalRecord>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Level&>                                                             mLevel;
    ::ll::TypedStorage<8, 2544, ::Random>                                                          mRandom;
    ::ll::TypedStorage<8, 40, std::unordered_map<DimensionType, std::unordered_set<PortalRecord>>> mPortalRecords;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Level&>    mLevel;
    ::ll::TypedStorage<8, 2544, ::Random> mRandom;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::DimensionType, ::std::unordered_set<::PortalRecord>>>
        mPortalRecords;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PortalForcer& operator=(PortalForcer const&);
    PortalForcer(PortalForcer const&);
    PortalForcer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PortalForcer();
#else // @header-generator platform
    virtual void deserialize(::CompoundTag const& tag) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deserialize(::CompoundTag const&);

    virtual void serialize(::CompoundTag&) const;
#else // @header-generator platform
    virtual void serialize(::CompoundTag& tag) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PortalForcer(::Level&);
#else // @header-generator platform
    MCAPI ::std::optional<::PortalRecord> _findPortal(
        ::DimensionType   dimensionId,
        ::BlockPos const& centerBlockPos,
        int               radius,
        ::BlockPos&       targetBlockPos
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<PortalRecord> _findPortal(::DimensionType, ::BlockPos const&, int const, ::BlockPos&) const;
#else // @header-generator platform
    MCAPI void force(::Actor& entity, ::DimensionTransitionComponent const& portalEntranceComponent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PortalRecord const& addPortalRecord(::DimensionType, ::PortalShape const&);
#else // @header-generator platform
    MCAPI void removeMisalignedPortalRecords(
        ::BlockSource&        region,
        ::PortalShape const&  referenceShape,
        ::PortalRecord const& referenceRecord
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PortalRecord const& addPortalRecord(::DimensionType, ::PortalRecord);

    MCNAPI bool findPortal(::DimensionType, ::BlockPos const&, int const, ::BlockPos&) const;

    MCNAPI void force(::Actor&, ::DimensionTransitionComponent const&);

    MCNAPI bool portalRecordExists(::DimensionType, ::PortalRecord const&) const;

    MCNAPI void removeMisalignedPortalRecords(::BlockSource&, ::PortalShape const&, ::PortalRecord const&);

    MCNAPI void removePortalRecord(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void removePortalRecord(::BlockSource& source, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BaseGameVersion const& MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION();
#else // @header-generator platform
    MCAPI static ::BaseGameVersion const& MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& PORTAL_FILE_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string const& PORTAL_FILE_ID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deserialize(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void $deserialize(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serialize(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void $serialize(::CompoundTag& tag) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
