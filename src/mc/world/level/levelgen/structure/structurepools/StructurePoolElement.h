#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/once_flag.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/util/Rotation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/structure/LegacyStructureTemplate.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/PostProcessSettings.h"
#include "mc/world/level/levelgen/structure/Projection.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/structure/StructureTemplate.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class JigsawBlockInfo;
#endif // @header-generator platform
class JigsawStructureBlockInfo;
class LegacyStructureSettings;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class LegacyStructureTemplate;
#endif // @header-generator platform
class Random;
class StructurePoolActorRule;
class StructurePoolBlockRule;
class StructurePoolBlockTagRule;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
class StructureTemplate;
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::vector<JigsawBlockInfo> const& getJigsawMarkers() const = 0;
#else // @header-generator platform
        virtual ::std::vector<::JigsawBlockInfo> const& getJigsawMarkers() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::BlockPos getSize(::Rotation) const = 0;
#else // @header-generator platform
        virtual ::BlockPos getSize(::Rotation rotation) const = 0;
#endif // @header-generator platform

        virtual bool isLegacyStructure() const = 0;
        // NOLINTEND
    };

    class LazyTemplate : public ::StructurePoolElement::ITemplate {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 16, std::variant<std::reference_wrapper<StructureTemplate>, std::reference_wrapper<LegacyStructureTemplate>>> mStructureVariant;
        ::ll::TypedStorage<8, 24, std::vector<JigsawBlockInfo>> mJigsawMarkers;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            16,
            ::std::variant<
                ::std::reference_wrapper<::StructureTemplate>,
                ::std::reference_wrapper<::LegacyStructureTemplate>>>
                                                                    mStructureVariant;
        ::ll::TypedStorage<8, 24, ::std::vector<::JigsawBlockInfo>> mJigsawMarkers;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        LazyTemplate();
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~LazyTemplate();
#else // @header-generator platform
        virtual ::std::vector<::JigsawBlockInfo> const& getJigsawMarkers() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::vector<JigsawBlockInfo> const& getJigsawMarkers() const;
#else // @header-generator platform
        virtual ::BlockPos getSize(::Rotation rotation) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::BlockPos getSize(::Rotation) const;

        virtual bool isLegacyStructure() const;
#else // @header-generator platform
        virtual bool isLegacyStructure() const /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static std::vector<JigsawBlockInfo> _findJigsawBlocks(
            std::vector<JigsawStructureBlockInfo>&,
            std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*
#else // @header-generator platform
        MCAPI static ::std::vector<::JigsawBlockInfo> _findJigsawBlocks(
            ::std::vector<::JigsawStructureBlockInfo>&                           jigsawMarkers,
            ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* blockTagRules
#endif // @header-generator platform
        );
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::vector<JigsawBlockInfo> const& $getJigsawMarkers() const;
#else // @header-generator platform
        MCFOLD ::std::vector<::JigsawBlockInfo> const& $getJigsawMarkers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::BlockPos $getSize(::Rotation) const;
#else // @header-generator platform
        MCAPI ::BlockPos $getSize(::Rotation rotation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $isLegacyStructure() const;
#else // @header-generator platform
        MCAPI bool $isLegacyStructure() const;


#endif // @header-generator platform
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    using StructureProcessorList =
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>>;

    using StructureProcessorPtr = ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>> mMetadata;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                         mMetadataMutex;
    ::ll::TypedStorage<4, 4, ::brstd::once_flag>                                                   mTemplateOnceFlag;
    ::ll::TypedStorage<8, 56, ::std::optional<::StructurePoolElement::LazyTemplate>>               mTemplate;
    ::ll::TypedStorage<8, 8, uint64>                                                               mMetadataKey;
    ::ll::TypedStorage<8, 32, ::std::string>                                                       mLocation;
    ::ll::TypedStorage<8, 32, ::JigsawStructureUtils::StructureElementId>                          mId;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>>          mManager;
    ::ll::TypedStorage<8, 32, ::StructurePoolElementSettings>                                      mSettings;
    ::ll::TypedStorage<
        8,
        16,
        ::gsl::not_null<::std::shared_ptr<
            ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>>
                                   mProcessors;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mValid;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolElement();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::BlockPos getSize(::Rotation) const;
#else // @header-generator platform
    virtual ::BlockPos getSize(::Rotation rotation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StructurePoolElement();
#else // @header-generator platform
    virtual ::std::vector<::JigsawBlockInfo> getJigsawMarkers(::BlockPos position, ::Rotation rotation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<JigsawBlockInfo> getJigsawMarkers(::BlockPos, ::LegacyStructureSettings&, ::BlockSource*) const;
#else // @header-generator platform
    virtual ::std::vector<::JigsawBlockInfo>
    getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<JigsawBlockInfo> getJigsawMarkers(::BlockPos, ::Rotation) const;
#else // @header-generator platform
    virtual ::BoundingBox getBoundingBox(::BlockPos position, ::Rotation rotation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BoundingBox getBoundingBox(::BlockPos, ::Rotation) const;

    virtual void setProjection(::Projection);
#else // @header-generator platform
    virtual void setProjection(::Projection projection);
#endif // @header-generator platform

    virtual ::Projection getProjection() const;

    virtual ::PostProcessSettings getPostProcessSettings() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool place(::BlockSource&, ::BlockPos, ::BlockPos, ::BoundingBox, ::Rotation, ::IRandom&, ::br::worldgen::JigsawReplacement, ::br::worldgen::LiquidSettings) const;
#else // @header-generator platform
    virtual bool place(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      position,
        ::Rotation                                                                      rotation,
        ::BoundingBox                                                                   chunkBB,
        ::Random&                                                                       random,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace,
        ::BlockPos                                                                      refPos
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool place(::BlockSource&, ::BlockPos, ::Rotation, ::BoundingBox, ::Random&, std::unordered_map<BlockPos, std::optional<ActorDefinitionIdentifier>>&, ::BlockPos) const;
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
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void placeActors(::BlockSource&, ::BlockPos, ::Rotation, ::Random&) const;
#else // @header-generator platform
    virtual void placeActors(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::Random& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void placeEntities(::BlockSource&, ::BlockPos, ::Rotation, ::BoundingBox) const;
#else // @header-generator platform
    virtual void
    placeEntities(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::BoundingBox overlapBB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleJigsawBlock(::BlockSource&, ::JigsawBlockInfo&, ::LegacyStructureSettings&) const;
#else // @header-generator platform
    virtual void
    handleJigsawBlock(::BlockSource& region, ::JigsawBlockInfo& jigsawBlock, ::LegacyStructureSettings& settings) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleDataMarker(::BlockSource&, ::BlockPos, std::string, std::unordered_map<BlockPos, std::optional<ActorDefinitionIdentifier>>&) const;
#else // @header-generator platform
    virtual void handleDataMarker(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      markerPos,
        ::std::string                                                                   markerData,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace
    ) const;
#endif // @header-generator platform

    virtual bool isValid() const;

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual ~StructurePoolElement();

#endif // @header-generator platform
    virtual ::StructurePoolElementType type() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata> createMetadata() const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata> createMetadata() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructurePoolElement(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        ::StructurePoolElementSettings
#else // @header-generator platform
    MCAPI StructurePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::std::string const&                                       location,
        ::StructurePoolElementSettings                             settings
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructurePoolElement(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        ::Projection,
        ::PostProcessSettings
#else // @header-generator platform
    MCAPI StructurePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::std::string const&                                       location,
        ::gsl::not_null<::std::shared_ptr<
            ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>
                     processors,
        ::Projection projection
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructurePoolElement(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        ::gsl::not_null<
            std::shared_ptr<const std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>>,
        ::Projection
#else // @header-generator platform
    MCAPI StructurePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::std::string const&                                       location,
        ::Projection                                               projection,
        ::PostProcessSettings                                      postProcessSettings
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructurePoolElement(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        std::vector<std::unique_ptr<StructurePoolBlockRule>> const*,
        std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*,
        std::vector<std::unique_ptr<StructurePoolActorRule>> const*,
        ::Projection,
        ::PostProcessSettings
#else // @header-generator platform
    MCAPI StructurePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>           manager,
        ::std::string const&                                                 location,
        ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*    blockRules,
        ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* blockTagRules,
        ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const*    actorRules,
        ::Projection                                                         projection,
        ::PostProcessSettings                                                postProcessSettings
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_80::JigsawStructureMetadata const& _getMetadata() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_80::JigsawStructureMetadata const& _getMetadata() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong _getMetadataKey() const;
#else // @header-generator platform
    MCAPI uint64 _getMetadataKey() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getId() const;

    MCNAPI ::SharedTypes::v1_21_80::JigsawStructureMetadata const& getMetadata() const;

    MCNAPI ulong getMetadataKey() const;

    MCNAPI bool operator!=(::StructurePoolElement const&) const;

    MCNAPI void setId(::JigsawStructureUtils::StructureElementId);
#else // @header-generator platform
    MCAPI void setId(::JigsawStructureUtils::StructureElementId id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::function<const StructurePoolElement&(StructureTemplateRegistrationContext, Projection)> empty();
#else // @header-generator platform
    MCAPI static ::std::function<::StructurePoolElement const&(::StructureTemplateRegistrationContext, ::Projection)>
    single(::std::string_view location, ::std::string id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::function<const StructurePoolElement&(StructureTemplateRegistrationContext, Projection)>
        single(std::string_view);

    MCNAPI static std::function<const StructurePoolElement&(StructureTemplateRegistrationContext, Projection)>
        single(std::string_view, std::string);

    MCNAPI static std::function<const StructurePoolElement&(StructureTemplateRegistrationContext, Projection)> single(
        std::string_view,
        ::gsl::not_null<
            std::shared_ptr<const std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>>
#else // @header-generator platform
    MCAPI static ::std::function<::StructurePoolElement const&(::StructureTemplateRegistrationContext, ::Projection)>
    single(
        ::std::string_view location,
        ::gsl::not_null<::std::shared_ptr<
            ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>
            processors
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        ::StructurePoolElementSettings
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::std::string const&                                       location,
        ::StructurePoolElementSettings                             settings
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        ::Projection,
        ::PostProcessSettings
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::std::string const&                                       location,
        ::gsl::not_null<::std::shared_ptr<
            ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>
                     processors,
        ::Projection projection
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        ::gsl::not_null<
            std::shared_ptr<const std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>>,
        ::Projection
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::std::string const&                                       location,
        ::Projection                                               projection,
        ::PostProcessSettings                                      postProcessSettings
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        std::string const&,
        std::vector<std::unique_ptr<StructurePoolBlockRule>> const*,
        std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*,
        std::vector<std::unique_ptr<StructurePoolActorRule>> const*,
        ::Projection,
        ::PostProcessSettings
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>           manager,
        ::std::string const&                                                 location,
        ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*    blockRules,
        ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* blockTagRules,
        ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const*    actorRules,
        ::Projection                                                         projection,
        ::PostProcessSettings                                                postProcessSettings
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $getSize(::Rotation) const;
#else // @header-generator platform
    MCAPI ::BlockPos $getSize(::Rotation rotation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<JigsawBlockInfo> $getJigsawMarkers(::BlockPos, ::LegacyStructureSettings&, ::BlockSource*) const;
#else // @header-generator platform
    MCAPI ::std::vector<::JigsawBlockInfo> $getJigsawMarkers(::BlockPos position, ::Rotation rotation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<JigsawBlockInfo> $getJigsawMarkers(::BlockPos, ::Rotation) const;
#else // @header-generator platform
    MCAPI ::std::vector<::JigsawBlockInfo>
    $getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BoundingBox $getBoundingBox(::BlockPos, ::Rotation) const;
#else // @header-generator platform
    MCAPI ::BoundingBox $getBoundingBox(::BlockPos position, ::Rotation rotation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setProjection(::Projection);
#else // @header-generator platform
    MCAPI void $setProjection(::Projection projection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Projection $getProjection() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::Projection $getProjection() const;
#else // LL_PLAT_C
    MCFOLD ::Projection $getProjection() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PostProcessSettings $getPostProcessSettings() const;
#else // @header-generator platform
    MCAPI ::PostProcessSettings $getPostProcessSettings() const;
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
    MCAPI void $placeActors(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::Random& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $placeEntities(::BlockSource&, ::BlockPos, ::Rotation, ::BoundingBox) const;
#else // @header-generator platform
    MCAPI void
    $placeEntities(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::BoundingBox overlapBB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleJigsawBlock(::BlockSource&, ::JigsawBlockInfo&, ::LegacyStructureSettings&) const;

    MCNAPI void $handleDataMarker(
        ::BlockSource&,
        ::BlockPos,
        std::string,
        std::unordered_map<BlockPos, std::optional<ActorDefinitionIdentifier>>&
#else // @header-generator platform
    MCAPI void $handleJigsawBlock(
        ::BlockSource&             region,
        ::JigsawBlockInfo&         jigsawBlock,
        ::LegacyStructureSettings& settings
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCAPI void $handleDataMarker(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      markerPos,
        ::std::string                                                                   markerData,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePoolElementType $type() const;
#else // @header-generator platform
    MCAPI bool $isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata> $createMetadata() const;
#else // @header-generator platform
    MCFOLD ::StructurePoolElementType $type() const;

    MCAPI ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata> $createMetadata() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
