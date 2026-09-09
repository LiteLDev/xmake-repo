#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Random.h"
#include "mc/world/level/PortalRecord.h"
#include "mc/world/level/block/PortalAxis.h"
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
class Vec3;
struct DimensionTransitionComponent;
// clang-format on

class PortalForcer : public ::SavedData {
public:
    // PortalForcer inner types define
    using PortalRecordSet = std::unordered_set<PortalRecord>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>                                                             mLevel;
    ::ll::TypedStorage<8, 2544, ::Random>                                                          mRandom;
    ::ll::TypedStorage<8, 40, std::unordered_map<DimensionType, std::unordered_set<PortalRecord>>> mPortalRecords;
    // NOLINTEND

public:
    // prevent constructor by default
    PortalForcer& operator=(PortalForcer const&);
    PortalForcer(PortalForcer const&);
    PortalForcer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PortalForcer();

    virtual void deserialize(::CompoundTag const&);

    virtual void serialize(::CompoundTag&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PortalForcer(::Level&);

    MCNAPI std::optional<PortalRecord> _findPortal(::DimensionType, ::BlockPos const&, int const, ::BlockPos&) const;

    MCNAPI ::PortalRecord const& addPortalRecord(::DimensionType, ::PortalShape const&);

    MCNAPI ::PortalRecord const& addPortalRecord(::DimensionType, ::PortalRecord);

    MCNAPI bool findPortal(::DimensionType, ::BlockPos const&, int const, ::BlockPos&) const;

    MCNAPI void force(::Actor&, ::DimensionTransitionComponent const&);

    MCNAPI bool portalRecordExists(::DimensionType, ::PortalRecord const&) const;

    MCNAPI void removeMisalignedPortalRecords(::BlockSource&, ::PortalShape const&, ::PortalRecord const&);

    MCNAPI void removePortalRecord(::BlockSource&, ::BlockPos const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION();

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $deserialize(::CompoundTag const&);

    MCNAPI void $serialize(::CompoundTag&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
