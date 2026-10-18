#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class HitResult;
class IBlockWorldGenAPI;
class IConstBlockSource;
class Material;
class MultifaceSpreader;
class Vec3;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class MultifaceBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<const MultifaceSpreader>> mSpreader;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MultifaceSpreader const>> mSpreader;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MultifaceBlock();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MultifaceBlock();
#else // @header-generator platform
    virtual ~MultifaceBlock() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::HitResult clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::ShapeType, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    virtual ::AABB const&
    getVisualShapeInWorld(::Block const& block, ::IConstBlockSource const&, ::BlockPos const&, ::AABB& bufferAABB) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;
#else // @header-generator platform
    virtual ::AABB const& getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;
#else // @header-generator platform
    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLavaBlocking() const;
#else // @header-generator platform
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isMultifaceBlock() const;
#else // @header-generator platform
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& sanitizeFillBlock(::Block const&) const;
#else // @header-generator platform
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;
#else // @header-generator platform
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool isMultifaceBlock() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;
#else // @header-generator platform
    virtual bool isLavaBlocking() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::Block const& sanitizeFillBlock(::Block const& block) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MultifaceBlock(std::string const&, int, ::Material const&);
#else // @header-generator platform
    MCAPI MultifaceBlock(
        ::std::string const&                         nameId,
        int                                          id,
        ::Material const&                            material,
        ::std::unique_ptr<::MultifaceSpreader const> spreader
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MultifaceBlock(std::string const&, int, ::Material const&, std::unique_ptr<const MultifaceSpreader>);
#else // @header-generator platform
    MCAPI bool
    _canSpread(::IBlockWorldGenAPI& target, ::Block const& block, ::BlockPos const& pos, uchar startingFace) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canSpread(::IBlockWorldGenAPI&, ::Block const&, ::BlockPos const&, uchar const) const;
#else // @header-generator platform
    MCAPI void removeFace(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::Block const&       block,
        ::BlockPos const&    pos,
        uchar                faceDirection,
        bool                 canSpawnParticles
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    removeFace(::IBlockWorldGenAPI&, ::BlockSource*, ::Block const&, ::BlockPos const&, uchar, bool const) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
#else // @header-generator platform
    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int _getNumSides(::Block const&);
#else // @header-generator platform
    MCAPI static int _getNumSides(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int convertOldMultifaceToNewMultifaceValue(int);
#else // @header-generator platform
    MCAPI static bool _hasAnyFace(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const&
    getBlockForPlacement(::Block const&, ::Block const&, ::BlockSource&, ::BlockPos const&, uchar);
#else // @header-generator platform
    MCAPI static ::Block const& getBlockForPlacementWorldGen(
        ::Block const&       oldBlock,
        ::Block const&       placementBlock,
        ::IBlockWorldGenAPI& region,
        ::BlockPos const&    placementPos,
        uchar                placementDirection
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const&
    getBlockForPlacementWorldGen(::Block const&, ::Block const&, ::IBlockWorldGenAPI&, ::BlockPos const&, uchar);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::vector<uchar> getFacingListFromMask(uchar faceDirectionBits);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<uchar> getFacingListFromMask(uchar const);

    MCNAPI static bool hasFace(::Block const&, uchar);
#else // @header-generator platform
    MCAPI static bool hasFace(::Block const& block, uchar faceDirection);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MULTIFACE_ALL();
#else // @header-generator platform
    MCAPI static int const& MULTIFACE_ALL();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MULTIFACE_DOWN();
#else // @header-generator platform
    MCAPI static int const& MULTIFACE_DOWN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MULTIFACE_EAST();
#else // @header-generator platform
    MCAPI static int const& MULTIFACE_EAST();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MULTIFACE_NORTH();
#else // @header-generator platform
    MCAPI static int const& MULTIFACE_NORTH();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MULTIFACE_SIDES();
#else // @header-generator platform
    MCAPI static int const& MULTIFACE_SIDES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MULTIFACE_SOUTH();
#else // @header-generator platform
    MCAPI static int const& MULTIFACE_SOUTH();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MULTIFACE_UP();
#else // @header-generator platform
    MCAPI static int const& MULTIFACE_UP();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& MULTIFACE_WEST();
#else // @header-generator platform
    MCAPI static int const& MULTIFACE_WEST();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int, ::Material const&);

    MCNAPI void* $ctor(std::string const&, int, ::Material const&, std::unique_ptr<const MultifaceSpreader>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const&                         nameId,
        int                                          id,
        ::Material const&                            material,
        ::std::unique_ptr<::MultifaceSpreader const> spreader
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HitResult $clip(
        ::Block const&,
        ::BlockSource const&,
#else // @header-generator platform
    MCAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
#endif // @header-generator platform
        ::BlockPos const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::Vec3 const&,
        ::Vec3 const&,
        ::ShapeType,
        ::optional_ref<const GetCollisionShapeInterface>
#else // @header-generator platform
        ::AABB& bufferAABB
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB $getCollisionShape(
#else // @header-generator platform
    MCFOLD ::AABB $getCollisionShape(
#endif // @header-generator platform
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::optional_ref<const GetCollisionShapeInterface>
#else // @header-generator platform
        ::optional_ref<::GetCollisionShapeInterface const>
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;
#else // @header-generator platform
    MCFOLD ::AABB const& $getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB const&
    $getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;
#else // @header-generator platform
    MCAPI ::HitResult $clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLavaBlocking() const;
#else // @header-generator platform
    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isMultifaceBlock() const;
#else // @header-generator platform
    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $sanitizeFillBlock(::Block const&) const;
#else // @header-generator platform
    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;
#else // @header-generator platform
    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool $isMultifaceBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;
#else // @header-generator platform
    MCFOLD bool $isLavaBlocking() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::Block const& $sanitizeFillBlock(::Block const& block) const;


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
