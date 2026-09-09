#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Owner.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockTypeRegistryModificationsLock;
class BlockTypeRegistryRWLock;
class BlockTypeRegistryReadLock;
class Experiments;
class LinkedAssetValidator;
class ServerScriptManager;
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

class BlockTypeRegistry {
public:
    // BlockTypeRegistry inner types declare
    // clang-format off
    class BlockComplexAliasContent;
    struct DirectAccessBlocks;
    struct BlockComplexAliasBlockState;
    struct LookupByNameImplReturnType;
    // clang-format on

    // BlockTypeRegistry inner types define
    enum class LookupByNameImplResolve : int {
        BlockType = 0,
        Block     = 1,
    };

    class BlockComplexAliasContent {
    public:
        // member variables
        // NOLINTBEGIN
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
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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

    struct LookupByNameImplReturnType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>               mBlockType;
        ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
        // NOLINTEND

    public:
        // prevent constructor by default
        LookupByNameImplReturnType();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI LookupByNameImplReturnType(::Block const*, bool);

        MCNAPI LookupByNameImplReturnType(::WeakPtr<const BlockType>, int, bool);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Block const*, bool);

        MCNAPI void* $ctor(::WeakPtr<const BlockType>, int, bool);
        // NOLINTEND
    };

    using BlockLookupMap = std::map<HashedString, SharedPtr<BlockType>>;

    using BlockAliasLookupMap = std::unordered_map<HashedString, HashedString>;

    using BlockComplexAliasLookupMap = ::entt::dense_map<
        HashedString,
        BlockTypeRegistry::BlockComplexAliasContent,
        std::hash<HashedString>,
        std::equal_to<void>,
        std::allocator<std::pair<const HashedString, BlockTypeRegistry::BlockComplexAliasContent>>>;

    using BlockComplexAliasCallback = std::function<const Block*(int)>;

    using BlockComplexAliasPostSplitBlockNamesList =
        std::vector<std::vector<std::reference_wrapper<const HashedString>>>;

    using BlockComplexAliasPostSplitBlockNamesLookupMap = ::entt::
        dense_map<ulong, ulong, std::hash<ulong>, std::equal_to<void>, std::allocator<std::pair<const ulong, ulong>>>;

    using BlockNameHashToHashedStringMap = ::entt::dense_map<
        ulong,
        HashedString,
        std::hash<ulong>,
        std::equal_to<void>,
        std::allocator<std::pair<const ulong, HashedString>>>;

    using BlockComplexAliasPostSplitBlockNames = std::vector<std::reference_wrapper<const HashedString>>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockTypeRegistry();

    MCNAPI ::BlockTypeRegistryReadLock _lockAgainstRegistryModifications() const;

    MCNAPI ::BlockTypeRegistryModificationsLock _lockForRegistryModifications() const;

    MCNAPI ::BlockTypeRegistry::LookupByNameImplReturnType
    _lookupByNameImpl(::HashedString const&, int, ::BlockTypeRegistry::LookupByNameImplResolve, bool) const;

    MCNAPI ::Block const* _lookupByNameImplSetNewBlockStates(
        ::Block const&,
        std::vector<BlockTypeRegistry::BlockComplexAliasBlockState> const&
    ) const;

    MCNAPI void addBlocksToValidator(::LinkedAssetValidator&, ::BaseGameVersion const&) const;

    MCNAPI void checkBlockPermutationCap() const;

    MCNAPI ulong computeBlockTypeRegistryChecksum(::BaseGameVersion const&) const;

    MCNAPI void finalizeBlockComponentStorage();

    MCNAPI void finalizeBlockComponentStorageForRendering(::brstd::function_ref<void(BlockType&)>);

    MCNAPI void finalizeBlockCustomComponentEvents(::ServerScriptManager const&);

    MCNAPI void forEachBlockDEPRECATED(::brstd::function_ref<bool(BlockType&)>);

    MCNAPI void forEachBlockMutable(::brstd::function_ref<bool(Block&)>);

    MCNAPI void forEachBlockType(::brstd::function_ref<bool(const BlockType&)>) const;

    MCNAPI ::HashedString const& getBlockNameFromNameHash(ulong) const;

    MCNAPI std::vector<std::reference_wrapper<const HashedString>> const&
           getComplexAliasPostSplitBlockNames(::HashedString const&) const;

    MCNAPI ::HashedString const* getComplexAliasPreSplitBlockName(::HashedString const&) const;

    MCNAPI ::Block const& getDefaultBlockState(::HashedString const&, bool) const;

    MCNAPI ::BlockTypeRegistry::DirectAccessBlocks const& getDirectAccessBlocks() const;

    MCNAPI int getStartVariantForComplexAliasBlock(::HashedString const&) const;

    MCNAPI void initHardCodedBlockComponents(::Experiments const&);

    MCNAPI void initRWLock();

    MCNAPI bool isComplexAliasBlock(::HashedString const&) const;

    MCNAPI bool isExpectFlattenedInBlocksJson(::HashedString const&, ::SemVersion const&) const;

    MCNAPI ::Block const* lookupByName(::HashedString const&, int, bool) const;

    MCNAPI ::Block const*
    lookupByName(::HashedString const&, std::vector<BlockTypeRegistry::BlockComplexAliasBlockState> const&, bool) const;

    MCNAPI ::WeakPtr<BlockType> lookupByName(::HashedString const&, bool) const;

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
    );

    MCNAPI void setupDirectAccessBlocks();

    MCNAPI void setupVoxelShapeRegistryAccessOnAllBlocks(std::shared_ptr<VoxelShapes::VoxelShapeRegistry> const&);

    MCNAPI void unregisterBlock(::HashedString const&);

    MCNAPI void unregisterBlocks();

    MCNAPI ~BlockTypeRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockTypeRegistry const& get();

    MCNAPI static ::BlockTypeRegistry& getMutable();

    MCNAPI static ::gsl::not_null<Bedrock::NonOwnerPointer<BlockTypeRegistry>> getNonOwner();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Owner<BlockTypeRegistry>& mBlockTypeRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
