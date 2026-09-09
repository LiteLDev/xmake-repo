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
    ::ll::TypedStorage<8, 176, ::LegacyStructureSettings> mSettings;
    ::ll::TypedStorage<4, 12, ::BlockPos>                 mTemplatePosition;
    ::ll::TypedStorage<1, 1, bool>                        mPostProcessed;
    // NOLINTEND

public:
    // prevent constructor by default
    TemplateStructurePiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TemplateStructurePiece();

    virtual void moveBoundingBox(int, int, int);

    virtual bool postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);

    virtual void _handleDataMarker(std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TemplateStructurePiece(int);

    MCNAPI void _setBoundingBoxFromTemplate();

    MCNAPI void _setup(::LegacyStructureTemplate&, ::LegacyStructureSettings const&, ::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $moveBoundingBox(int, int, int);

    MCNAPI bool $postProcess(::BlockSource&, ::Random&, ::BoundingBox const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
