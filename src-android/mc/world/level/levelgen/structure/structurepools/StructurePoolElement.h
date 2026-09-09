#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/once_flag.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/LegacyStructureTemplate.h"
#include "mc/world/level/levelgen/structure/PostProcessSettings.h"
#include "mc/world/level/levelgen/structure/Projection.h"
#include "mc/world/level/levelgen/structure/StructureTemplate.h"
#include "mc/world/level/levelgen/structure/structurepools/JigsawBlockInfo.h"
#include "mc/world/level/levelgen/structure/structurepools/JigsawReplacement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementSettings.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"
#include "mc/world/level/levelgen/structure/structurepools/jigsaw_structure_utils/StructureElementId.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class IRandom;
class IStructureTemplateManager;
class JigsawStructureBlockInfo;
class LegacyStructureSettings;
class Random;
class StructurePoolActorRule;
class StructurePoolBlockRule;
class StructurePoolBlockTagRule;
class Vec3;
struct ActorDefinitionIdentifier;
struct StructureTemplateRegistrationContext;
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
namespace br::worldgen { struct StructureProcessor; }
// clang-format on

class StructurePoolElement {
public:
    // StructurePoolElement inner types declare
    // clang-format off
    class ITemplate;
    class LazyTemplate;
    // clang-format on

    // StructurePoolElement inner types define
    class ITemplate {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ITemplate() = default;

        virtual std::vector<JigsawBlockInfo> const& getJigsawMarkers() const = 0;

        virtual ::BlockPos getSize(::Rotation) const = 0;

        virtual bool isLegacyStructure() const = 0;
        // NOLINTEND
    };

    class LazyTemplate : public ::StructurePoolElement::ITemplate {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 16, std::variant<std::reference_wrapper<StructureTemplate>, std::reference_wrapper<LegacyStructureTemplate>>> mStructureVariant;
        ::ll::TypedStorage<8, 24, std::vector<JigsawBlockInfo>> mJigsawMarkers;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        LazyTemplate();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~LazyTemplate();

        virtual std::vector<JigsawBlockInfo> const& getJigsawMarkers() const;

        virtual ::BlockPos getSize(::Rotation) const;

        virtual bool isLegacyStructure() const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static std::vector<JigsawBlockInfo> _findJigsawBlocks(
            std::vector<JigsawStructureBlockInfo>&,
            std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI std::vector<JigsawBlockInfo> const& $getJigsawMarkers() const;

        MCNAPI ::BlockPos $getSize(::Rotation) const;

        MCNAPI bool $isLegacyStructure() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata>> mMetadata;
    ::ll::TypedStorage<4, 40, std::mutex> mMetadataMutex;
    ::ll::TypedStorage<4, 4, ::brstd::once_flag> mTemplateOnceFlag;
    ::ll::TypedStorage<8, 56, std::optional<StructurePoolElement::LazyTemplate>> mTemplate;
    ::ll::TypedStorage<8, 8, ulong> mMetadataKey;
    ::ll::TypedStorage<8, 24, std::string> mLocation;
    ::ll::TypedStorage<8, 24, ::JigsawStructureUtils::StructureElementId> mId;
    ::ll::UntypedStorage<8, 24> mManager;
    ::ll::TypedStorage<8, 32, ::StructurePoolElementSettings> mSettings;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<const std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>>> mProcessors;
    ::ll::TypedStorage<1, 1, bool> mValid;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolElement();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::BlockPos getSize(::Rotation) const;

    virtual ~StructurePoolElement();

    virtual std::vector<JigsawBlockInfo> getJigsawMarkers(::BlockPos, ::LegacyStructureSettings&, ::BlockSource*) const;

    virtual std::vector<JigsawBlockInfo> getJigsawMarkers(::BlockPos, ::Rotation) const;

    virtual ::BoundingBox getBoundingBox(::BlockPos, ::Rotation) const;

    virtual void setProjection(::Projection);

    virtual ::Projection getProjection() const;

    virtual ::PostProcessSettings getPostProcessSettings() const;

    virtual bool place(::BlockSource&, ::BlockPos, ::BlockPos, ::BoundingBox, ::Rotation, ::IRandom&, ::br::worldgen::JigsawReplacement, ::br::worldgen::LiquidSettings) const;

    virtual bool place(::BlockSource&, ::BlockPos, ::Rotation, ::BoundingBox, ::Random&, std::unordered_map<BlockPos, std::optional<ActorDefinitionIdentifier>>&, ::BlockPos) const;

    virtual void placeActors(::BlockSource&, ::BlockPos, ::Rotation, ::Random&) const;

    virtual void placeEntities(::BlockSource&, ::BlockPos, ::Rotation, ::BoundingBox) const;

    virtual void handleJigsawBlock(::BlockSource&, ::JigsawBlockInfo&, ::LegacyStructureSettings&) const;

    virtual void handleDataMarker(::BlockSource&, ::BlockPos, std::string, std::unordered_map<BlockPos, std::optional<ActorDefinitionIdentifier>>&) const;

    virtual bool isValid() const;

    virtual ::StructurePoolElementType type() const;

    virtual std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata> createMetadata() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructurePoolElement(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        ::StructurePoolElementSettings
    );

    MCNAPI StructurePoolElement(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        ::Projection,
        ::PostProcessSettings
    );

    MCNAPI StructurePoolElement(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        ::gsl::not_null<
            std::shared_ptr<const std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>>,
        ::Projection
    );

    MCNAPI StructurePoolElement(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        std::vector<std::unique_ptr<StructurePoolBlockRule>> const*,
        std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*,
        std::vector<std::unique_ptr<StructurePoolActorRule>> const*,
        ::Projection,
        ::PostProcessSettings
    );

    MCNAPI ::SharedTypes::v1_21_80::JigsawStructureMetadata const& _getMetadata() const;

    MCNAPI ulong _getMetadataKey() const;

    MCNAPI std::string const& getId() const;

    MCNAPI ::SharedTypes::v1_21_80::JigsawStructureMetadata const& getMetadata() const;

    MCNAPI ulong getMetadataKey() const;

    MCNAPI bool operator!=(::StructurePoolElement const&) const;

    MCNAPI void setId(::JigsawStructureUtils::StructureElementId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::function<const StructurePoolElement&(StructureTemplateRegistrationContext, Projection)> empty();

    MCNAPI static std::function<const StructurePoolElement&(StructureTemplateRegistrationContext, Projection)>
        single(std::string_view);

    MCNAPI static std::function<const StructurePoolElement&(StructureTemplateRegistrationContext, Projection)>
        single(std::string_view, std::string);

    MCNAPI static std::function<const StructurePoolElement&(StructureTemplateRegistrationContext, Projection)> single(
        std::string_view,
        ::gsl::not_null<
            std::shared_ptr<const std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        ::StructurePoolElementSettings
    );

    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        ::Projection,
        ::PostProcessSettings
    );

    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        ::gsl::not_null<
            std::shared_ptr<const std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>>,
        ::Projection
    );

    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        std::vector<std::unique_ptr<StructurePoolBlockRule>> const*,
        std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*,
        std::vector<std::unique_ptr<StructurePoolActorRule>> const*,
        ::Projection,
        ::PostProcessSettings
    );
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

    MCNAPI void $setProjection(::Projection);

    MCNAPI ::Projection $getProjection() const;

    MCNAPI ::PostProcessSettings $getPostProcessSettings() const;

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

    MCNAPI void $handleJigsawBlock(::BlockSource&, ::JigsawBlockInfo&, ::LegacyStructureSettings&) const;

    MCNAPI void $handleDataMarker(
        ::BlockSource&,
        ::BlockPos,
        std::string,
        std::unordered_map<BlockPos, std::optional<ActorDefinitionIdentifier>>&
    ) const;

    MCNAPI bool $isValid() const;

    MCNAPI ::StructurePoolElementType $type() const;

    MCNAPI std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata> $createMetadata() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
