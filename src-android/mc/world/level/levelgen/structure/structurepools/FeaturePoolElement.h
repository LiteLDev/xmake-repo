#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/structurepools/JigsawReplacement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class FeatureRegistry;
class IFeature;
class IRandom;
class IStructureTemplateManager;
class JigsawBlockInfo;
class LegacyStructureSettings;
class Random;
struct ActorDefinitionIdentifier;
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
// clang-format on

class FeaturePoolElement : public ::StructurePoolElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    FeaturePoolElement();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::BlockPos getSize(::Rotation) const;

    virtual ~FeaturePoolElement();

    virtual std::vector<JigsawBlockInfo> getJigsawMarkers(::BlockPos, ::LegacyStructureSettings&, ::BlockSource*) const;

    virtual bool place(::BlockSource&, ::BlockPos, ::BlockPos, ::BoundingBox, ::Rotation, ::IRandom&, ::br::worldgen::JigsawReplacement, ::br::worldgen::LiquidSettings) const;

    virtual bool place(::BlockSource&, ::BlockPos, ::Rotation, ::BoundingBox, ::Random&, std::unordered_map<BlockPos, std::optional<ActorDefinitionIdentifier>>&, ::BlockPos) const;

    virtual void placeActors(::BlockSource&, ::BlockPos, ::Rotation, ::Random&) const;

    virtual void placeEntities(::BlockSource&, ::BlockPos, ::Rotation, ::BoundingBox) const;

    virtual ::StructurePoolElementType type() const;

    virtual std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata> createMetadata() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeaturePoolElement(
        ::FeatureRegistry&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::FeatureRegistry&, ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>, std::string const&);
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

    MCNAPI bool $place(
        ::BlockSource&,
        ::BlockPos,
        ::BlockPos,
        ::BoundingBox,
        ::Rotation,
        ::IRandom&,
        ::br::worldgen::JigsawReplacement,
        ::br::worldgen::LiquidSettings
    ) const;

    MCNAPI bool $place(
        ::BlockSource&,
        ::BlockPos,
        ::Rotation,
        ::BoundingBox,
        ::Random&,
        std::unordered_map<BlockPos, std::optional<ActorDefinitionIdentifier>>&,
        ::BlockPos
    ) const;

    MCNAPI void $placeActors(::BlockSource&, ::BlockPos, ::Rotation, ::Random&) const;

    MCNAPI void $placeEntities(::BlockSource&, ::BlockPos, ::Rotation, ::BoundingBox) const;

    MCNAPI ::StructurePoolElementType $type() const;

    MCNAPI std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata> $createMetadata() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
