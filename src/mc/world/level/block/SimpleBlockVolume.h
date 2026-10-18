#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AABB;
#else // @header-generator platform
#endif // @header-generator platform
class BaseBlockLocationIterator;
class BoundingBox;
class ChunkPos;
#if defined(LL_PLAT_A) // @header-generator platform
class SimpleBlockVolumeIterator;
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SimpleBlockVolume : public ::BlockVolumeBase {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // SimpleBlockVolume inner types define
    enum class IntersectionResult : int {
        Disjoint   = 0,
        Contains   = 1,
        Intersects = 2,
    };
#else // @header-generator platform
    // SimpleBlockVolume inner types declare
    // clang-format off
    template<typename T0> class allocator;
    // clang-format on
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum CornerIndex : uchar {
#else // @header-generator platform
    // SimpleBlockVolume inner types define
    enum class CornerIndex : uchar {
#endif // @header-generator platform
        FrontBottomLeft  = 0,
        BackBottomLeft   = 1,
        FrontTopLeft     = 2,
        BackTopLeft      = 3,
        FrontBottomRight = 4,
        BackBottomRight  = 5,
        FrontTopRight    = 6,
        BackTopRight     = 7,
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    enum class IntersectionResult : int {
        Disjoint   = 0,
        Contains   = 1,
        Intersects = 2,
    };

    template <typename T0>
    class allocator {};
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SimpleBlockVolume();
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
    MCNAPI SimpleBlockVolume(::SimpleBlockVolume&&);
#else // @header-generator platform
    MCAPI bool doesAreaTouchFaces(::BlockPos const& min, ::BlockPos const& max) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::SimpleBlockVolume::IntersectionResult intersects(::SimpleBlockVolume const& other) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static void cerealBindTypes(::cereal::ReflectionCtx& ctx);
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
    MCAPI int $getCapacity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInside(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool $isInside(::BlockPos const& pos) const;
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
