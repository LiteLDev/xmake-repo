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
#if defined(LL_PLAT_A) // @header-generator platform
class ListBlockVolumeIterator;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
// clang-format on

class ListBlockVolume : public ::BlockVolumeBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<BlockPos>> mBlockPositions;
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mMax;
    ::ll::TypedStorage<8, 8, ulong>                         mChangeCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockPos>> mBlockPositions;
    ::ll::TypedStorage<4, 12, ::BlockPos>                       mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                       mMax;
    ::ll::TypedStorage<8, 8, uint64>                            mChangeCount;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ListBlockVolume();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ListBlockVolume();
#else // @header-generator platform
    virtual ::BlockPos getMin() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BoundingBox getBoundingBox() const;
#else // @header-generator platform
    virtual ::BlockPos getMax() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos getMin() const;
#else // @header-generator platform
    virtual ::BoundingBox getBoundingBox() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos getMax() const;
#else // @header-generator platform
    virtual ::glm::ivec3 getSpan() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::glm::vec<3, int, (glm::qualifier)0> getSpan() const;
#else // @header-generator platform
    virtual int getCapacity() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getCapacity() const;
#else // @header-generator platform
    virtual bool isInside(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInside(::BlockPos const&) const;
#else // @header-generator platform
    virtual void translate(::BlockPos const& delta) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void translate(::BlockPos const&);
#else // @header-generator platform
    virtual void forEach(::brstd::function_ref<bool(::BlockPos const&)> callback) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEach(::brstd::function_ref<bool(const BlockPos&)>) const;
#else // @header-generator platform
    virtual ::std::set<::ChunkPos> getChunks() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::set<ChunkPos> getChunks() const;
#else // @header-generator platform
    virtual ::std::unordered_set<::BlockPos> getFlattenedBlockPositions() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_set<BlockPos> getFlattenedBlockPositions() const;

    virtual std::unique_ptr<BaseBlockLocationIterator> getIterator() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::BaseBlockLocationIterator> getIterator() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ListBlockVolume(::ListBlockVolume const&);
#else // @header-generator platform
    MCAPI explicit ListBlockVolume(::std::vector<::BlockPos> const& blockPositions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ListBlockVolume(std::vector<Vec3> const&);
#else // @header-generator platform
    MCAPI explicit ListBlockVolume(::std::vector<::Vec3> const& blockPositions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ListBlockVolume(std::vector<BlockPos> const&);
#else // @header-generator platform
    MCAPI void erase(::std::vector<::Vec3> const& blockPositions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ListBlockVolumeIterator begin() const;

    MCNAPI void erase(std::vector<Vec3> const&);

    MCNAPI ulong getChangeCount() const;

    MCNAPI void insert(std::vector<Vec3> const&);

    MCNAPI ::ListBlockVolume& operator=(::ListBlockVolume const&);
#else // @header-generator platform
    MCAPI void insert(::std::vector<::Vec3> const& blockPositions);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ListBlockVolume const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::vector<::BlockPos> const& blockPositions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<Vec3> const&);

    MCNAPI void* $ctor(std::vector<BlockPos> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::vector<::Vec3> const& blockPositions);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BoundingBox $getBoundingBox() const;
#else // @header-generator platform
    MCAPI ::BlockPos $getMin() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $getMin() const;
#else // @header-generator platform
    MCAPI ::BlockPos $getMax() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $getMax() const;
#else // @header-generator platform
    MCAPI ::BoundingBox $getBoundingBox() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::glm::vec<3, int, (glm::qualifier)0> $getSpan() const;
#else // @header-generator platform
    MCAPI ::glm::ivec3 $getSpan() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getCapacity() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI int $getCapacity() const;
#else // LL_PLAT_C
    MCFOLD int $getCapacity() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInside(::BlockPos const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool $isInside(::BlockPos const& pos) const;
#else // LL_PLAT_C
    MCFOLD bool $isInside(::BlockPos const& pos) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $translate(::BlockPos const&);
#else // @header-generator platform
    MCAPI void $translate(::BlockPos const& delta);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $forEach(::brstd::function_ref<bool(const BlockPos&)>) const;
#else // @header-generator platform
    MCAPI void $forEach(::brstd::function_ref<bool(::BlockPos const&)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::set<ChunkPos> $getChunks() const;
#else // @header-generator platform
    MCAPI ::std::set<::ChunkPos> $getChunks() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_set<BlockPos> $getFlattenedBlockPositions() const;
#else // @header-generator platform
    MCAPI ::std::unordered_set<::BlockPos> $getFlattenedBlockPositions() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BaseBlockLocationIterator> $getIterator() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BaseBlockLocationIterator> $getIterator() const;


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
