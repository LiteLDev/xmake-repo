#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/LegacyStructureSettings.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class LegacyStructureTemplate;
class Random;
// clang-format on

class TemplateStructurePiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LegacyStructureTemplate*>  mTemplate;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 176, ::LegacyStructureSettings> mSettings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 192, ::LegacyStructureSettings> mSettings;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                 mTemplatePosition;
    ::ll::TypedStorage<1, 1, bool>                        mPostProcessed;
    // NOLINTEND

public:
    // prevent constructor by default
    TemplateStructurePiece();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~TemplateStructurePiece();
#else // @header-generator platform
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void moveBoundingBox(int, int, int);
#else // @header-generator platform
    virtual void moveBoundingBox(int dx, int dy, int dz) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual void _handleDataMarker(std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void _handleDataMarker(
        ::std::string const& markerId,
        ::BlockPos const&    position,
        ::BlockSource&       region,
        ::Random&            random,
        ::BoundingBox const& chunkBB
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit TemplateStructurePiece(int);
#else // @header-generator platform
    MCAPI explicit TemplateStructurePiece(int depth);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setBoundingBoxFromTemplate();

    MCNAPI void _setup(::LegacyStructureTemplate&, ::LegacyStructureSettings const&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void _setBoundingBoxFromTemplate();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(int depth);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $moveBoundingBox(int, int, int);
#else // @header-generator platform
    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
#else // @header-generator platform
    MCAPI void $moveBoundingBox(int dx, int dy, int dz);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
