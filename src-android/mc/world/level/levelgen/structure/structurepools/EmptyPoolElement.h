#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class IStructureTemplateManager;
class JigsawBlockInfo;
class LegacyStructureSettings;
// clang-format on

class EmptyPoolElement : public ::StructurePoolElement {
public:
    // prevent constructor by default
    EmptyPoolElement();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::BlockPos getSize(::Rotation) const;

    virtual ~EmptyPoolElement();

    virtual std::vector<JigsawBlockInfo> getJigsawMarkers(::BlockPos, ::LegacyStructureSettings&, ::BlockSource*) const;

    virtual std::vector<JigsawBlockInfo> getJigsawMarkers(::BlockPos, ::Rotation) const;

    virtual ::BoundingBox getBoundingBox(::BlockPos, ::Rotation) const;

    virtual bool isValid() const;

    virtual ::StructurePoolElementType type() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EmptyPoolElement(::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockPos $getSize(::Rotation) const;

    MCNAPI std::vector<JigsawBlockInfo> $getJigsawMarkers(::BlockPos, ::LegacyStructureSettings&, ::BlockSource*) const;

    MCNAPI std::vector<JigsawBlockInfo> $getJigsawMarkers(::BlockPos, ::Rotation) const;

    MCNAPI ::BoundingBox $getBoundingBox(::BlockPos, ::Rotation) const;

    MCNAPI bool $isValid() const;

    MCNAPI ::StructurePoolElementType $type() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
