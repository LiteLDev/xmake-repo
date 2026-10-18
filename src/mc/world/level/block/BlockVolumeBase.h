#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BlockPos;
class BoundingBox;
class ChunkPos;
// clang-format on

class BlockVolumeBase {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockVolumeBase();
#else // @header-generator platform
    virtual ~BlockVolumeBase() = default;
#endif // @header-generator platform

    virtual ::BoundingBox getBoundingBox() const = 0;

    virtual ::BlockPos getMin() const = 0;

    virtual ::BlockPos getMax() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::glm::vec<3, int, (glm::qualifier)0> getSpan() const = 0;
#else // @header-generator platform
    virtual ::glm::ivec3 getSpan() const = 0;
#endif // @header-generator platform

    virtual int getCapacity() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInside(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual bool isInside(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void translate(::BlockPos const&) = 0;
#else // @header-generator platform
    virtual void translate(::BlockPos const& delta) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEach(::brstd::function_ref<bool(const BlockPos&)>) const = 0;
#else // @header-generator platform
    virtual void forEach(::brstd::function_ref<bool(::BlockPos const&)> callback) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::set<ChunkPos> getChunks() const = 0;
#else // @header-generator platform
    virtual ::std::set<::ChunkPos> getChunks() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_set<BlockPos> getFlattenedBlockPositions() const = 0;
#else // @header-generator platform
    virtual ::std::unordered_set<::BlockPos> getFlattenedBlockPositions() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BaseBlockLocationIterator> getIterator() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::BaseBlockLocationIterator> getIterator() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
