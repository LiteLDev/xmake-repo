#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/CompoundBlockVolumeItem.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolumeIterator;
class SimpleBlockVolume;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CompoundBlockVolume : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<CompoundBlockVolumeItem>> mVolumeList;
    ::ll::TypedStorage<4, 12, ::BlockPos>                           mOrigin;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                        mBounds;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompoundBlockVolume();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompoundBlockVolume();

    MCNAPI void _recalculateBounds();

    MCNAPI ulong capacity() const;

    MCNAPI void clear(bool);

    MCNAPI std::vector<CompoundBlockVolumeItem> getAbsoluteVolumeList() const;

    MCNAPI ::BoundingBox getBoundingBox() const;

    MCNAPI ::BlockPos getMax() const;

    MCNAPI ::BlockPos getMin() const;

    MCNAPI ::BlockPos const& getOrigin() const;

    MCNAPI std::vector<CompoundBlockVolumeItem> getVolumeList() const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool isInside(::BlockPos const&) const;

    MCNAPI std::optional<CompoundBlockVolumeItem>
           peekLastVolume(std::optional<CompoundBlockVolumePositionRelativity>) const;

    MCNAPI bool popVolume();

    MCNAPI void pushVolume(::CompoundBlockVolumeItem&&);

    MCNAPI void setOrigin(::BlockPos const&, bool);

    MCNAPI void translateOrigin(::BlockPos const&, bool);

    MCNAPI ulong volumeCount() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
