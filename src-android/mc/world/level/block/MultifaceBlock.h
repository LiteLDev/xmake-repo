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
    ::ll::TypedStorage<8, 8, std::unique_ptr<const MultifaceSpreader>> mSpreader;
    // NOLINTEND

public:
    // prevent constructor by default
    MultifaceBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MultifaceBlock();

    virtual ::HitResult clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::ShapeType, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual ::AABB const& getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    virtual bool isLavaBlocking() const;

    virtual bool isMultifaceBlock() const;

    virtual ::Block const& sanitizeFillBlock(::Block const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultifaceBlock(std::string const&, int, ::Material const&);

    MCNAPI MultifaceBlock(std::string const&, int, ::Material const&, std::unique_ptr<const MultifaceSpreader>);

    MCNAPI bool _canSpread(::IBlockWorldGenAPI&, ::Block const&, ::BlockPos const&, uchar const) const;

    MCNAPI void
    removeFace(::IBlockWorldGenAPI&, ::BlockSource*, ::Block const&, ::BlockPos const&, uchar, bool const) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int _getNumSides(::Block const&);

    MCNAPI static int convertOldMultifaceToNewMultifaceValue(int);

    MCNAPI static ::Block const&
    getBlockForPlacement(::Block const&, ::Block const&, ::BlockSource&, ::BlockPos const&, uchar);

    MCNAPI static ::Block const&
    getBlockForPlacementWorldGen(::Block const&, ::Block const&, ::IBlockWorldGenAPI&, ::BlockPos const&, uchar);

    MCNAPI static std::vector<uchar> getFacingListFromMask(uchar const);

    MCNAPI static bool hasFace(::Block const&, uchar);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MULTIFACE_ALL();

    MCNAPI static int const& MULTIFACE_DOWN();

    MCNAPI static int const& MULTIFACE_EAST();

    MCNAPI static int const& MULTIFACE_NORTH();

    MCNAPI static int const& MULTIFACE_SIDES();

    MCNAPI static int const& MULTIFACE_SOUTH();

    MCNAPI static int const& MULTIFACE_UP();

    MCNAPI static int const& MULTIFACE_WEST();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&);

    MCNAPI void* $ctor(std::string const&, int, ::Material const&, std::unique_ptr<const MultifaceSpreader>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HitResult $clip(
        ::Block const&,
        ::BlockSource const&,
        ::BlockPos const&,
        ::Vec3 const&,
        ::Vec3 const&,
        ::ShapeType,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI ::AABB const&
    $getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI bool $isMultifaceBlock() const;

    MCNAPI ::Block const& $sanitizeFillBlock(::Block const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
