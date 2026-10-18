#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/puv/Loader.h"
#include "mc/network/packet/StructureTemplateResponseType.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/world/level/chunk/QueueRequestResult.h"
#include "mc/world/level/levelgen/structure/IStructureTemplateManager.h"
#include "mc/world/level/levelgen/structure/StructureDeleteResult.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkLoadActionList;
#else // @header-generator platform
#endif // @header-generator platform
class CommandArea;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class Dimension;
class IUnknownBlockTypeRegistry;
class LegacyStructureTemplate;
class Level;
class LevelStorage;
class PackInstance;
class ResourcePackManager;
class ServerLevel;
class StructureAnimationData;
class StructurePoolElement;
class StructureSettings;
class StructureTemplate;
#if defined(LL_PLAT_A) // @header-generator platform
class StructureTemplateDataResponsePacket;
struct Tick;
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadataFile; }
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadataRegistry; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

class StructureManager : public ::IStructureTemplateManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<1, 144> mRepositoryMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<LegacyStructureTemplate>>> mLegacyStructureRepository;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<StructureTemplate>>> mStructureRepository;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<StructureAnimationData>>> mStructurePlacementQueue;
    ::ll::TypedStorage<4, 4, uint> mStructurePlacementSaveCounter;
    ::ll::UntypedStorage<8, 24> mUnknownBlockRegistry;
    ::ll::UntypedStorage<8, 24> mPackManager;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata>>> mMetadataRegistry;
    ::ll::TypedStorage<4, 40, std::mutex> mMetadataRegistryMutex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::ReflectionCtx>> mCerealContext;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mRepositoryMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::LegacyStructureTemplate>>>
        mLegacyStructureRepository;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::StructureTemplate>>>
                                                                                          mStructureRepository;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::StructureAnimationData>>> mStructurePlacementQueue;
    ::ll::TypedStorage<4, 4, uint>                                                     mStructurePlacementSaveCounter;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry>> mUnknownBlockRegistry;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourcePackManager> const> mPackManager;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<uint64, ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>>>
                                                                         mMetadataRegistry;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>               mMetadataRegistryMutex;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::ReflectionCtx>> mCerealContext;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StructureManager();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~StructureManager();
#else // @header-generator platform
    virtual ~StructureManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata> getOrCreateJigsawStructureMetadata(::StructurePoolElement const&);
#else // @header-generator platform
    virtual ::LegacyStructureTemplate& getOrCreateLegacy(::std::string const& structureName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructureTemplate& getOrCreate(std::string const&);
#else // @header-generator platform
    virtual ::StructureTemplate& getOrCreate(::std::string const& structureName) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructureTemplate* getStructure(std::string const&) const;
#else // @header-generator platform
    virtual ::StructureTemplate* getStructure(::std::string const& structureName) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LegacyStructureTemplate& getOrCreateLegacy(std::string const&);
#else // @header-generator platform
    virtual bool readStructure(::StructureTemplate& structureTemplate) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool readStructure(::StructureTemplate&);
    // clang-format on
#else // @header-generator platform
    virtual ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>
    getOrCreateJigsawStructureMetadata(::StructurePoolElement const& structurePoolElement) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit StructureManager(::ResourcePackManager&);
#else // @header-generator platform
    MCAPI explicit StructureManager(::ResourcePackManager& packManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureTemplate*
    _createAndLoadStructure(std::string const&, ::ResourcePackManager const*, ::LevelStorage*);

    MCNAPI std::string _createLevelStorageId(std::string const&, std::string const&);

    MCNAPI bool
    _findResource(::Core::PathBuffer<Core::BasicStackString<char, 1024>> const&, ::PackInstance const&, std::string&);

    MCNAPI bool _placeSegment(::StructureAnimationData&);

    MCNAPI void _removePlacementQueueItem(std::string const&, ::StructureAnimationData&);

    MCNAPI void _savePlacementQueueItem(std::string const&, ::StructureAnimationData&);

    MCNAPI void clearAndShutdownStructurePlacement();

    MCNAPI void clearLoadedStructures();

    MCNAPI ::StructureTemplate& cloneStructure(::StructureTemplate const&, std::string const&);

    MCNAPI ::StructureTemplateDataResponsePacket createStructureDataExportPacket(
        std::string const&,
        ::ResourcePackManager const*,
        ::LevelStorage*,
        ::StructureTemplateResponseType
#else // @header-generator platform
    MCAPI ::StructureTemplate* _createAndLoadStructure(
        ::std::string const&         structureName,
        ::ResourcePackManager const* packManager,
        ::LevelStorage*              levelStorage
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureDeleteResult deleteStructure(std::string const&, ::LevelStorage&);
#else // @header-generator platform
    MCAPI ::std::string _createLevelStorageId(::std::string const& dimensionPrefix, ::std::string const& saveId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureTemplate* getOrLoadStructure(std::string const&, ::ResourcePackManager const*, ::LevelStorage*);
#else // @header-generator platform
    MCAPI ::StructureTemplate&
    cloneStructure(::StructureTemplate const& structureTemplate, ::std::string const& structureName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getPackStructureNames(::mce::UUID const&);
#else // @header-generator platform
    MCAPI ::StructureDeleteResult deleteStructure(::std::string const& structureName, ::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getStructureNames(::LevelStorage&, bool) const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> getPackStructureNames(::mce::UUID const& packUUID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureTemplate* importStructure(std::string const&, ::Core::Path const&);
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> getStructureNames(::LevelStorage& levelStorage, bool includeUnremovable) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void importStructureFromTemplate(std::string, ::StructureTemplate const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::StructureTemplate* importStructure(::std::string const& structureName, ::Core::Path const& filePath);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool load(::StructureTemplate&, ::ResourcePackManager const*, ::LevelStorage*);
#else // @header-generator platform
    MCAPI void importStructureFromTemplate(::std::string name, ::StructureTemplate const& temp);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadMetadataRegistries();
#else // @header-generator platform
    MCAPI bool load(
        ::StructureTemplate&         structureTemplate,
        ::ResourcePackManager const* packManager,
        ::LevelStorage*              levelStorage
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadPlacementQueue(::LevelStorage&, ::Level&, ::Dimension&);
#else // @header-generator platform
    MCAPI void loadMetadataRegistries();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void queueLoad(std::unique_ptr<StructureAnimationData>);
#else // @header-generator platform
    MCAPI void loadPlacementQueue(::LevelStorage& storage, ::Level& level, ::Dimension& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void reset();
#else // @header-generator platform
    MCAPI void reset();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void saveToLevel(::StructureTemplate const&, ::LevelStorage&);
#else // @header-generator platform
    MCAPI void saveToLevel(::StructureTemplate const& structureTemplate, ::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setUnknownBlockRegistry(::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>);
#else // @header-generator platform
    MCAPI void setUnknownBlockRegistry(::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick(::Dimension const&);
#else // @header-generator platform
    MCAPI void tick(::Dimension const& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::QueueRequestResult tryPlaceStructureInWorld(
        std::unique_ptr<CommandArea>,
        ::ServerLevel&,
        ::Dimension&,
        ::BoundingBox const&,
        ::BlockPos const&,
        ::StructureSettings const&,
        ::StructureTemplate const&,
        std::unique_ptr<StructureAnimationData>
#else // @header-generator platform
    MCAPI ::QueueRequestResult tryPlaceStructureInWorld(
        ::std::unique_ptr<::CommandArea>            cmdArea,
        ::ServerLevel&                              level,
        ::Dimension&                                dimension,
        ::BoundingBox const&                        bounds,
        ::BlockPos const&                           loadPosition,
        ::StructureSettings const&                  settings,
        ::StructureTemplate const&                  structureTemplate,
        ::std::unique_ptr<::StructureAnimationData> structureAnimationData
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool exportStructure(::StructureTemplate const&, ::Core::Path const&);
#else // @header-generator platform
    MCAPI static bool _findResource(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& structurePath,
        ::PackInstance const&                                           pack,
        ::std::string&                                                  resourceStream
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> getStructurePath(std::string_view const);
#else // @header-generator platform
    MCAPI static void
    _removePlacementQueueItem(::std::string const& dimensionPrefix, ::StructureAnimationData& structureAnimationData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>>
    getStructurePath(std::string_view const, std::string_view const);
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static bool exportStructure(::StructureTemplate const& structureTemplate, ::Core::Path const& filePath);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& BEHAVIOR_PACK_STRUCTURES_FOLDER();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getStructurePath(::std::string_view structureFullName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getStructurePath(::std::string_view structureNamespace, ::std::string_view structureName);

#ifdef LL_PLAT_S
    MCAPI static bool loadLegacy(::LegacyStructureTemplate& structure, ::std::string& data);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ResourcePackManager&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ResourcePackManager& packManager);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata>
           $getOrCreateJigsawStructureMetadata(::StructurePoolElement const&);
#else // @header-generator platform
    MCAPI ::LegacyStructureTemplate& $getOrCreateLegacy(::std::string const& structureName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureTemplate& $getOrCreate(std::string const&);
#else // @header-generator platform
    MCAPI ::StructureTemplate& $getOrCreate(::std::string const& structureName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureTemplate* $getStructure(std::string const&) const;
#else // @header-generator platform
    MCAPI ::StructureTemplate* $getStructure(::std::string const& structureName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LegacyStructureTemplate& $getOrCreateLegacy(std::string const&);
#else // @header-generator platform
    MCAPI bool $readStructure(::StructureTemplate& structureTemplate);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $readStructure(::StructureTemplate&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>
    $getOrCreateJigsawStructureMetadata(::StructurePoolElement const& structurePoolElement);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
