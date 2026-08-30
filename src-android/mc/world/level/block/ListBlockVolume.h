#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BoundingBox;
class ChunkPos;
class ListBlockVolumeIterator;
class Vec3;
// clang-format on

class ListBlockVolume : public ::BlockVolumeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_set<BlockPos>> mBlockPositions;
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mMax;
    ::ll::TypedStorage<8, 8, ulong>                         mChangeCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ListBlockVolume();

    virtual ::BoundingBox getBoundingBox() const;

    virtual ::BlockPos getMin() const;

    virtual ::BlockPos getMax() const;

    virtual ::glm::vec<3, int, (glm::qualifier)0> getSpan() const;

    virtual int getCapacity() const;

    virtual bool isInside(::BlockPos const&) const;

    virtual void translate(::BlockPos const&);

    virtual void forEach(::brstd::function_ref<bool(const BlockPos&)>) const;

    virtual std::set<ChunkPos> getChunks() const;

    virtual std::unordered_set<BlockPos> getFlattenedBlockPositions() const;

    virtual std::unique_ptr<BaseBlockLocationIterator> getIterator() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ListBlockVolume(::ListBlockVolume const&);

    MCNAPI explicit ListBlockVolume(std::vector<Vec3> const&);

    MCNAPI explicit ListBlockVolume(std::vector<BlockPos> const&);

    MCNAPI ::ListBlockVolumeIterator begin() const;

    MCNAPI void erase(std::vector<Vec3> const&);

    MCNAPI ulong getChangeCount() const;

    MCNAPI void insert(std::vector<Vec3> const&);

    MCNAPI ::ListBlockVolume& operator=(::ListBlockVolume const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ListBlockVolume const&);

    MCNAPI void* $ctor(std::vector<Vec3> const&);

    MCNAPI void* $ctor(std::vector<BlockPos> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BoundingBox $getBoundingBox() const;

    MCNAPI ::BlockPos $getMin() const;

    MCNAPI ::BlockPos $getMax() const;

    MCNAPI ::glm::vec<3, int, (glm::qualifier)0> $getSpan() const;

    MCNAPI int $getCapacity() const;

    MCNAPI bool $isInside(::BlockPos const&) const;

    MCNAPI void $translate(::BlockPos const&);

    MCNAPI void $forEach(::brstd::function_ref<bool(const BlockPos&)>) const;

    MCNAPI std::set<ChunkPos> $getChunks() const;

    MCNAPI std::unordered_set<BlockPos> $getFlattenedBlockPositions() const;

    MCNAPI std::unique_ptr<BaseBlockLocationIterator> $getIterator() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
