#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/Loader.h"
#include "mc/network/packet/StructureTemplateResponseType.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"
#include "mc/world/level/chunk/QueueRequestResult.h"
#include "mc/world/level/levelgen/structure/IStructureTemplateManager.h"
#include "mc/world/level/levelgen/structure/StructureDeleteResult.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class ChunkLoadActionList;
class CommandArea;
class CompoundTag;
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
class StructureTemplateDataResponsePacket;
struct Tick;
namespace Core { class Path; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadataFile; }
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadataRegistry; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

class StructureManager : public ::IStructureTemplateManager {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StructureManager();

    virtual std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata> getOrCreateJigsawStructureMetadata(::StructurePoolElement const&);

    virtual ::StructureTemplate& getOrCreate(std::string const&);

    virtual ::StructureTemplate* getStructure(std::string const&) const;

    virtual ::LegacyStructureTemplate& getOrCreateLegacy(std::string const&);

    virtual bool readStructure(::StructureTemplate&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StructureManager(::ResourcePackManager&);

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
    );

    MCNAPI ::StructureDeleteResult deleteStructure(std::string const&, ::LevelStorage&);

    MCNAPI ::StructureTemplate* getOrLoadStructure(std::string const&, ::ResourcePackManager const*, ::LevelStorage*);

    MCNAPI std::vector<std::string> getPackStructureNames(::mce::UUID const&);

    MCNAPI std::vector<std::string> getStructureNames(::LevelStorage&, bool) const;

    MCNAPI ::StructureTemplate* importStructure(std::string const&, ::Core::Path const&);

    MCNAPI void importStructureFromTemplate(std::string, ::StructureTemplate const&);

    MCNAPI bool load(::StructureTemplate&, ::ResourcePackManager const*, ::LevelStorage*);

    MCNAPI void loadMetadataRegistries();

    MCNAPI void loadPlacementQueue(::LevelStorage&, ::Level&, ::Dimension&);

    MCNAPI void queueLoad(std::unique_ptr<StructureAnimationData>);

    MCNAPI void reset();

    MCNAPI void saveToLevel(::StructureTemplate const&, ::LevelStorage&);

    MCNAPI void setUnknownBlockRegistry(::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>);

    MCNAPI void tick(::Dimension const&);

    MCNAPI ::QueueRequestResult tryPlaceStructureInWorld(
        std::unique_ptr<CommandArea>,
        ::ServerLevel&,
        ::Dimension&,
        ::BoundingBox const&,
        ::BlockPos const&,
        ::StructureSettings const&,
        ::StructureTemplate const&,
        std::unique_ptr<StructureAnimationData>
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool exportStructure(::StructureTemplate const&, ::Core::Path const&);

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> getStructurePath(std::string_view const);

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>>
    getStructurePath(std::string_view const, std::string_view const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& BEHAVIOR_PACK_STRUCTURES_FOLDER();

    MCNAPI static char const*& LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourcePackManager&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata>
           $getOrCreateJigsawStructureMetadata(::StructurePoolElement const&);

    MCNAPI ::StructureTemplate& $getOrCreate(std::string const&);

    MCNAPI ::StructureTemplate* $getStructure(std::string const&) const;

    MCNAPI ::LegacyStructureTemplate& $getOrCreateLegacy(std::string const&);

    MCNAPI bool $readStructure(::StructureTemplate&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
