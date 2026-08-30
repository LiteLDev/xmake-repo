#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseBlockLocationIterator;
class BoundingBox;
class ChunkPos;
class SimpleBlockVolumeIterator;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SimpleBlockVolume : public ::BlockVolumeBase {
public:
    // SimpleBlockVolume inner types define
    enum class IntersectionResult : int {
        Disjoint   = 0,
        Contains   = 1,
        Intersects = 2,
    };

    enum CornerIndex : uchar {
        FrontBottomLeft  = 0,
        BackBottomLeft   = 1,
        FrontTopLeft     = 2,
        BackTopLeft      = 3,
        FrontBottomRight = 4,
        BackBottomRight  = 5,
        FrontTopRight    = 6,
        BackTopRight     = 7,
    };

    using CornerHandle = uchar;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mFrom;
    ::ll::TypedStorage<4, 12, ::BlockPos> mTo;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleBlockVolume();

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
    MCNAPI SimpleBlockVolume(::SimpleBlockVolume&&);

    MCNAPI SimpleBlockVolume(::BlockPos&&, ::BlockPos&&);

    MCNAPI ::SimpleBlockVolumeIterator begin() const;

    MCNAPI bool contains(::BlockPos const&) const;

    MCNAPI bool doesAreaTouchFaces(::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool doesBlockTouchFaces(::BlockPos const&) const;

    MCNAPI ::BlockPos getFrom() const;

    MCNAPI ::BlockPos getTo() const;

    MCNAPI ::SimpleBlockVolume::IntersectionResult intersects(::SimpleBlockVolume const&) const;

    MCNAPI ::SimpleBlockVolume& operator=(::SimpleBlockVolume const&);

    MCNAPI ::SimpleBlockVolume& operator=(::SimpleBlockVolume&&);

    MCNAPI bool operator==(::SimpleBlockVolume const&) const;

    MCNAPI ::SimpleBlockVolume translated(::glm::vec<3, int, (glm::qualifier)0> const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void cerealBindTypes(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SimpleBlockVolume&&);

    MCNAPI void* $ctor(::BlockPos&&, ::BlockPos&&);
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
