#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/Owner.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/BaseGameVersion.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/BlockType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockTypeRegistryModificationsLock;
#else // @header-generator platform
class BlockType;
#endif // @header-generator platform
class BlockTypeRegistryRWLock;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockTypeRegistryReadLock;
#else // @header-generator platform
#endif // @header-generator platform
class Experiments;
class LinkedAssetValidator;
class ServerScriptManager;
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

class BlockTypeRegistry {
public:
    // BlockTypeRegistry inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct BlockComplexAliasBlockState;
#endif // @header-generator platform
    class BlockComplexAliasContent;
    struct DirectAccessBlocks;
#if defined(LL_PLAT_A) // @header-generator platform
    struct BlockComplexAliasBlockState;
#else // @header-generator platform
#endif // @header-generator platform
    struct LookupByNameImplReturnType;
    // clang-format on

    // BlockTypeRegistry inner types define
    enum class LookupByNameImplResolve : int {
        BlockType = 0,
        Block     = 1,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    class BlockComplexAliasContent {
#else // @header-generator platform
    struct BlockComplexAliasBlockState {
    public:
        BlockComplexAliasBlockState(HashedString const& stateName, int value) noexcept
        : stateName(stateName),
          value(value) {}

#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 48>   mCallback;
        ::ll::UntypedStorage<8, 32>   mMinRequiredVersion;
        ::ll::UntypedStorage<8, 24>   mFlattenedInBlocksJsonVersion;
        ::ll::TypedStorage<4, 4, int> mStartVariant;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockComplexAliasContent& operator=(BlockComplexAliasContent const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::BaseGameVersion const& getRequiredBaseGameVersion() const;

        MCNAPI ~BlockComplexAliasContent();
#else // @header-generator platform
        ::HashedString stateName;
        int            value;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCFOLD void $dtor();
        // NOLINTEND
    };

    class BlockComplexAliasContent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<::Block const*(int)>> mCallback;
        ::ll::TypedStorage<8, 32, ::BaseGameVersion>                    mMinRequiredVersion;
        ::ll::TypedStorage<8, 24, ::SemVersion>                         mFlattenedInBlocksJsonVersion;
        ::ll::TypedStorage<4, 4, int>                                   mStartVariant;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct DirectAccessBlocks {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockType const&> mAirBlock;
        // NOLINTEND

    public:
        // prevent constructor by default
        DirectAccessBlocks& operator=(DirectAccessBlocks const&);
        DirectAccessBlocks(DirectAccessBlocks const&);
        DirectAccessBlocks();
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct BlockComplexAliasBlockState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString> stateName;
        ::ll::TypedStorage<4, 4, int>             value;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockComplexAliasBlockState& operator=(BlockComplexAliasBlockState const&);
        BlockComplexAliasBlockState(BlockComplexAliasBlockState const&);
        BlockComplexAliasBlockState();
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct LookupByNameImplReturnType {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 8>               mBlockType;
        ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockType const>> mBlockType;
        ::ll::TypedStorage<8, 8, ::Block const*>               mBlock;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        LookupByNameImplReturnType();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI LookupByNameImplReturnType(::Block const*, bool);
#else // @header-generator platform
        MCAPI LookupByNameImplReturnType(::Block const* block, bool resolveBlockType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI LookupByNameImplReturnType(::WeakPtr<const BlockType>, int, bool);
#else // @header-generator platform
        MCAPI LookupByNameImplReturnType(::WeakPtr<::BlockType const> blockType, int data, bool resolveBlock);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::Block const*, bool);
#else // @header-generator platform
        MCAPI void* $ctor(::Block const* block, bool resolveBlockType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::WeakPtr<const BlockType>, int, bool);
#else // @header-generator platform
        MCAPI void* $ctor(::WeakPtr<::BlockType const> blockType, int data, bool resolveBlock);
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using BlockLookupMap = std::map<HashedString, SharedPtr<BlockType>>;
#else // @header-generator platform
    using BlockAliasLookupMap = ::std::unordered_map<::HashedString, ::HashedString>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BlockAliasLookupMap = std::unordered_map<HashedString, HashedString>;
#else // @header-generator platform
    using BlockComplexAliasCallback = ::std::function<::Block const*(int)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BlockComplexAliasLookupMap = ::entt::dense_map<
        HashedString,
        BlockTypeRegistry::BlockComplexAliasContent,
        std::hash<HashedString>,
        std::equal_to<void>,
        std::allocator<std::pair<const HashedString, BlockTypeRegistry::BlockComplexAliasContent>>>;
#else // @header-generator platform
    using BlockComplexAliasLookupMap = ::entt::dense_map<::HashedString, ::BlockTypeRegistry::BlockComplexAliasContent>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BlockComplexAliasCallback = std::function<const Block*(int)>;
#else // @header-generator platform
    using BlockComplexAliasPostSplitBlockNames = ::std::vector<::std::reference_wrapper<::HashedString const>>;
#endif // @header-generator platform

    using BlockComplexAliasPostSplitBlockNamesList =
#if defined(LL_PLAT_A) // @header-generator platform
        std::vector<std::vector<std::reference_wrapper<const HashedString>>>;
#else // @header-generator platform
        ::std::vector<::std::vector<::std::reference_wrapper<::HashedString const>>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BlockComplexAliasPostSplitBlockNamesLookupMap = ::entt::
        dense_map<ulong, ulong, std::hash<ulong>, std::equal_to<void>, std::allocator<std::pair<const ulong, ulong>>>;
#else // @header-generator platform
    using BlockComplexAliasPostSplitBlockNamesLookupMap = ::entt::dense_map<uint64, uint64>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BlockNameHashToHashedStringMap = ::entt::dense_map<
        ulong,
        HashedString,
        std::hash<ulong>,
        std::equal_to<void>,
        std::allocator<std::pair<const ulong, HashedString>>>;
#else // @header-generator platform
    using BlockLookupMap = ::std::map<::HashedString, ::SharedPtr<::BlockType>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BlockComplexAliasPostSplitBlockNames = std::vector<std::reference_wrapper<const HashedString>>;
#else // @header-generator platform
    using BlockNameHashToHashedStringMap = ::entt::dense_map<uint64, ::HashedString>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 24> mBlockLookupMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, HashedString>> mBlockAliasLookupMap;
    ::ll::TypedStorage<8, 56, ::entt::dense_map<HashedString, BlockTypeRegistry::BlockComplexAliasContent, std::hash<HashedString>, std::equal_to<void>, std::allocator<std::pair<const HashedString, BlockTypeRegistry::BlockComplexAliasContent>>>> mBlockComplexAliasLookupMap;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<std::reference_wrapper<const HashedString>>>> mBlockComplexAliasPostSplitBlockNamesList;
    ::ll::TypedStorage<8, 56, ::entt::dense_map<ulong, ulong, std::hash<ulong>, std::equal_to<void>, std::allocator<std::pair<const ulong, ulong>>>> mBlockComplexAliasPostSplitBlockNamesLookupMap;
    ::ll::TypedStorage<8, 24, std::map<HashedString, HashedString>> mBlockComplexAliasPreSplitBlockNamesLookupMap;
    ::ll::TypedStorage<8, 24, std::set<std::string>> mKnownNamespaces;
    ::ll::TypedStorage<8, 56, ::entt::dense_map<ulong, HashedString, std::hash<ulong>, std::equal_to<void>, std::allocator<std::pair<const ulong, HashedString>>>> mBlockNameHashToStringMap;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockTypeRegistry::DirectAccessBlocks>> mDirectAccessBlocks;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockTypeRegistryRWLock>> mRWLock;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::SharedPtr<::BlockType>>> mBlockLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mBlockAliasLookupMap;
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::HashedString, ::BlockTypeRegistry::BlockComplexAliasContent>>
        mBlockComplexAliasLookupMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::std::reference_wrapper<::HashedString const>>>>
                                                                 mBlockComplexAliasPostSplitBlockNamesList;
    ::ll::TypedStorage<8, 72, ::entt::dense_map<uint64, uint64>> mBlockComplexAliasPostSplitBlockNamesLookupMap;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::HashedString>> mBlockComplexAliasPreSplitBlockNamesLookupMap;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>>                  mKnownNamespaces;
    ::ll::TypedStorage<8, 72, ::entt::dense_map<uint64, ::HashedString>>  mBlockNameHashToStringMap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTypeRegistry::DirectAccessBlocks>> mDirectAccessBlocks;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockTypeRegistryRWLock>>              mRWLock;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockTypeRegistry();
#else // @header-generator platform
    MCAPI BlockTypeRegistry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockTypeRegistryReadLock _lockAgainstRegistryModifications() const;

    MCNAPI ::BlockTypeRegistryModificationsLock _lockForRegistryModifications() const;

    MCNAPI ::BlockTypeRegistry::LookupByNameImplReturnType
    _lookupByNameImpl(::HashedString const&, int, ::BlockTypeRegistry::LookupByNameImplResolve, bool) const;

    MCNAPI ::Block const* _lookupByNameImplSetNewBlockStates(
        ::Block const&,
        std::vector<BlockTypeRegistry::BlockComplexAliasBlockState> const&
#else // @header-generator platform
    MCAPI ::BlockTypeRegistry::LookupByNameImplReturnType _lookupByNameImpl(
        ::HashedString const&                        name,
        int                                          data,
        ::BlockTypeRegistry::LookupByNameImplResolve resolve,
        bool                                         logNotFound
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addBlocksToValidator(::LinkedAssetValidator&, ::BaseGameVersion const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void addBlocksToValidator(::LinkedAssetValidator& validator, ::BaseGameVersion const& baseGameVersion) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkBlockPermutationCap() const;
#else // @header-generator platform
    MCAPI void checkBlockPermutationCap() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong computeBlockTypeRegistryChecksum(::BaseGameVersion const&) const;
#else // @header-generator platform
    MCAPI uint64 computeBlockTypeRegistryChecksum(::BaseGameVersion const& worldBaseGameVersion) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finalizeBlockComponentStorage();
#else // @header-generator platform
    MCAPI void finalizeBlockComponentStorage();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finalizeBlockComponentStorageForRendering(::brstd::function_ref<void(BlockType&)>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void finalizeBlockComponentStorageForRendering(::brstd::function_ref<void(::BlockType&)> finalizer);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finalizeBlockCustomComponentEvents(::ServerScriptManager const&);
#else // @header-generator platform
    MCAPI void finalizeBlockCustomComponentEvents(::ServerScriptManager const& scriptManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachBlockDEPRECATED(::brstd::function_ref<bool(BlockType&)>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void forEachBlockDEPRECATED(::brstd::function_ref<bool(::BlockType&)> callback);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachBlockMutable(::brstd::function_ref<bool(Block&)>);
#else // @header-generator platform
    MCFOLD void forEachBlockType(::brstd::function_ref<bool(::BlockType const&)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachBlockType(::brstd::function_ref<bool(const BlockType&)>) const;
#else // @header-generator platform
    MCAPI ::HashedString const& getBlockNameFromNameHash(uint64 hash) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& getBlockNameFromNameHash(ulong) const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasPostSplitBlockNames(::HashedString const& oldName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::reference_wrapper<const HashedString>> const&
           getComplexAliasPostSplitBlockNames(::HashedString const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::HashedString const* getComplexAliasPreSplitBlockName(::HashedString const& postSplitName) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const* getComplexAliasPreSplitBlockName(::HashedString const&) const;
#else // @header-generator platform
    MCAPI ::Block const& getDefaultBlockState(::HashedString const& name, bool logNotFound = false) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& getDefaultBlockState(::HashedString const&, bool) const;
#else // @header-generator platform
    MCAPI ::BlockTypeRegistry::DirectAccessBlocks const& getDirectAccessBlocks() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockTypeRegistry::DirectAccessBlocks const& getDirectAccessBlocks() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI int getStartVariantForComplexAliasBlock(::HashedString const& blockName) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getStartVariantForComplexAliasBlock(::HashedString const&) const;
#else // @header-generator platform
    MCAPI void initHardCodedBlockComponents(::Experiments const& experiments);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initHardCodedBlockComponents(::Experiments const&);
#else // @header-generator platform
    MCAPI void initRWLock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initRWLock();
#else // @header-generator platform
    MCAPI bool isComplexAliasBlock(::HashedString const& blockName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isComplexAliasBlock(::HashedString const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool isExpectFlattenedInBlocksJson(::HashedString const& blockName, ::SemVersion const& currentVersion) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isExpectFlattenedInBlocksJson(::HashedString const&, ::SemVersion const&) const;
#else // @header-generator platform
    MCAPI ::Block const* lookupByName(
        ::HashedString const&                                                  name,
        ::std::vector<::BlockTypeRegistry::BlockComplexAliasBlockState> const& states,
        bool                                                                   logNotFound
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* lookupByName(::HashedString const&, int, bool) const;
#else // @header-generator platform
    MCAPI ::WeakPtr<::BlockType> lookupByName(::HashedString const& name, bool logNotFound = false) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const*
    lookupByName(::HashedString const&, std::vector<BlockTypeRegistry::BlockComplexAliasBlockState> const&, bool) const;
#else // @header-generator platform
    MCAPI void prepareBlocks(uint latestUpdaterVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<BlockType> lookupByName(::HashedString const&, bool) const;
#else // @header-generator platform
    MCAPI void registerAlias(::HashedString const& alias, ::HashedString const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void prepareBlocks(uint);

    MCNAPI void registerAlias(::HashedString const&, ::HashedString const&);

    MCNAPI void registerComplexAlias(
        ::HashedString const&,
        std::function<const Block*(int)>,
        std::vector<std::reference_wrapper<const HashedString>> const&,
        ::BaseGameVersion const&,
        ::SemVersion const&,
        ::HashedString const,
        int
#else // @header-generator platform
    MCAPI void registerComplexAlias(
        ::HashedString const&                                                alias,
        ::std::function<::Block const*(int)>                                 callback,
        ::std::vector<::std::reference_wrapper<::HashedString const>> const& postSplitBlockNames,
        ::BaseGameVersion const&                                             minRequiredVersion,
        ::SemVersion const&                                                  blocksJsonFormatVersion,
        ::HashedString                                                       defaultNewBlockName,
        int                                                                  startVariant
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setupDirectAccessBlocks();
#else // @header-generator platform
    MCAPI void setupDirectAccessBlocks();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setupVoxelShapeRegistryAccessOnAllBlocks(std::shared_ptr<VoxelShapes::VoxelShapeRegistry> const&);
#else // @header-generator platform
    MCAPI void setupVoxelShapeRegistryAccessOnAllBlocks(
        ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry> const& voxelShapeRegistry
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void unregisterBlock(::HashedString const&);
#else // @header-generator platform
    MCAPI void unregisterBlock(::HashedString const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void unregisterBlocks();
#else // @header-generator platform
    MCAPI void unregisterBlocks();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BlockTypeRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockTypeRegistry const& get();

    MCNAPI static ::BlockTypeRegistry& getMutable();

    MCNAPI static ::gsl::not_null<Bedrock::NonOwnerPointer<BlockTypeRegistry>> getNonOwner();
#else // @header-generator platform
    MCAPI ~BlockTypeRegistry();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Owner<BlockTypeRegistry>& mBlockTypeRegistry();
#else // @header-generator platform
    MCAPI static ::Bedrock::Owner<::BlockTypeRegistry>& mBlockTypeRegistry();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
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
};
