#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/CompoundBlockVolumeItem.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundBlockVolumeIterator;
class SimpleBlockVolume;
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
class CompoundBlockVolumeItem;
#endif // @header-generator platform
// clang-format on

class CompoundBlockVolume : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<CompoundBlockVolumeItem>> mVolumeList;
    ::ll::TypedStorage<4, 12, ::BlockPos>                           mOrigin;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                        mBounds;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompoundBlockVolume();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::CompoundBlockVolumeItem>> mVolumeList;
    ::ll::TypedStorage<4, 12, ::BlockPos>                               mOrigin;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                            mBounds;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CompoundBlockVolume();
#else // @header-generator platform
    MCAPI void _recalculateBounds();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _recalculateBounds();
#else // @header-generator platform
    MCAPI ::std::vector<::CompoundBlockVolumeItem> getAbsoluteVolumeList() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong capacity() const;
#else // @header-generator platform
    MCAPI bool isInside(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void setOrigin(::BlockPos const& newPos, bool preserveExistingVolumes);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
