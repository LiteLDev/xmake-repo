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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24> mFeature;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeature;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FeaturePoolElement();

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
    virtual ~FeaturePoolElement();
#else // @header-generator platform
    virtual ::std::vector<::JigsawBlockInfo>
    getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<JigsawBlockInfo> getJigsawMarkers(::BlockPos, ::LegacyStructureSettings&, ::BlockSource*) const;
#else // @header-generator platform
    virtual bool place(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      position,
        ::Rotation                                                                      rotation,
        ::BoundingBox                                                                   chunkBB,
        ::Random&                                                                       random,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace,
        ::BlockPos                                                                      refPos
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool place(::BlockSource&, ::BlockPos, ::BlockPos, ::BoundingBox, ::Rotation, ::IRandom&, ::br::worldgen::JigsawReplacement, ::br::worldgen::LiquidSettings) const;
#else // @header-generator platform
    virtual bool place(
        ::BlockSource&                    region,
        ::BlockPos                        position,
        ::BlockPos                        sectionOrigin,
        ::BoundingBox                     chunkBB,
        ::Rotation                        rotation,
        ::IRandom&                        random,
        ::br::worldgen::JigsawReplacement jigsaw,
        ::br::worldgen::LiquidSettings    liquidSettings
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool place(::BlockSource&, ::BlockPos, ::Rotation, ::BoundingBox, ::Random&, std::unordered_map<BlockPos, std::optional<ActorDefinitionIdentifier>>&, ::BlockPos) const;
#else // @header-generator platform
    virtual void placeActors(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::Random& random) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void placeActors(::BlockSource&, ::BlockPos, ::Rotation, ::Random&) const;
#else // @header-generator platform
    virtual void
    placeEntities(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::BoundingBox overlapBB) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void placeEntities(::BlockSource&, ::BlockPos, ::Rotation, ::BoundingBox) const;
#else // @header-generator platform
    virtual ::StructurePoolElementType type() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructurePoolElementType type() const;

    virtual std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata> createMetadata() const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata> createMetadata() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FeaturePoolElement(
        ::FeatureRegistry&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&
#else // @header-generator platform
    MCAPI FeaturePoolElement(
        ::FeatureRegistry&                                         featureRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> structureManager,
        ::std::string const&                                       name
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::FeatureRegistry&, ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::FeatureRegistry&                                         featureRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> structureManager,
        ::std::string const&                                       name
    );
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
    MCAPI ::std::vector<::JigsawBlockInfo>
    $getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $place(
        ::BlockSource&,
        ::BlockPos,
        ::BlockPos,
        ::BoundingBox,
        ::Rotation,
        ::IRandom&,
        ::br::worldgen::JigsawReplacement,
        ::br::worldgen::LiquidSettings
#else // @header-generator platform
    MCAPI bool $place(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      position,
        ::Rotation                                                                      rotation,
        ::BoundingBox                                                                   chunkBB,
        ::Random&                                                                       random,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace,
        ::BlockPos                                                                      refPos
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $place(
        ::BlockSource&,
        ::BlockPos,
        ::Rotation,
        ::BoundingBox,
        ::Random&,
        std::unordered_map<BlockPos, std::optional<ActorDefinitionIdentifier>>&,
        ::BlockPos
#else // @header-generator platform
    MCAPI bool $place(
        ::BlockSource&                    region,
        ::BlockPos                        position,
        ::BlockPos                        sectionOrigin,
        ::BoundingBox                     chunkBB,
        ::Rotation                        rotation,
        ::IRandom&                        random,
        ::br::worldgen::JigsawReplacement jigsaw,
        ::br::worldgen::LiquidSettings    liquidSettings
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $placeActors(::BlockSource&, ::BlockPos, ::Rotation, ::Random&) const;
#else // @header-generator platform
    MCFOLD void $placeActors(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::Random& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $placeEntities(::BlockSource&, ::BlockPos, ::Rotation, ::BoundingBox) const;
#else // @header-generator platform
    MCFOLD void
    $placeEntities(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::BoundingBox overlapBB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePoolElementType $type() const;
#else // @header-generator platform
    MCFOLD ::StructurePoolElementType $type() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata> $createMetadata() const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata> $createMetadata() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
