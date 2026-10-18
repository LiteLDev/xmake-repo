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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::BlockPos getSize(::Rotation) const;
#else // @header-generator platform
    virtual ::BlockPos getSize(::Rotation rotation) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EmptyPoolElement();
#else // @header-generator platform
    virtual ::std::vector<::JigsawBlockInfo> getJigsawMarkers(::BlockPos position, ::Rotation rotation) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<JigsawBlockInfo> getJigsawMarkers(::BlockPos, ::LegacyStructureSettings&, ::BlockSource*) const;
#else // @header-generator platform
    virtual ::std::vector<::JigsawBlockInfo>
    getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<JigsawBlockInfo> getJigsawMarkers(::BlockPos, ::Rotation) const;
#else // @header-generator platform
    virtual ::BoundingBox getBoundingBox(::BlockPos position, ::Rotation rotation) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BoundingBox getBoundingBox(::BlockPos, ::Rotation) const;
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid() const;

    virtual ::StructurePoolElementType type() const;
    // clang-format on
#else // @header-generator platform
    virtual ::StructurePoolElementType type() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EmptyPoolElement(::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>);
#else // @header-generator platform
    MCAPI explicit EmptyPoolElement(::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $getSize(::Rotation) const;
#else // @header-generator platform
    MCFOLD ::BlockPos $getSize(::Rotation rotation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<JigsawBlockInfo> $getJigsawMarkers(::BlockPos, ::LegacyStructureSettings&, ::BlockSource*) const;
#else // @header-generator platform
    MCFOLD ::std::vector<::JigsawBlockInfo> $getJigsawMarkers(::BlockPos position, ::Rotation rotation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<JigsawBlockInfo> $getJigsawMarkers(::BlockPos, ::Rotation) const;
#else // @header-generator platform
    MCFOLD ::std::vector<::JigsawBlockInfo>
    $getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BoundingBox $getBoundingBox(::BlockPos, ::Rotation) const;
#else // @header-generator platform
    MCAPI ::BoundingBox $getBoundingBox(::BlockPos position, ::Rotation rotation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCFOLD bool $isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePoolElementType $type() const;
#else // @header-generator platform
    MCFOLD ::StructurePoolElementType $type() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
