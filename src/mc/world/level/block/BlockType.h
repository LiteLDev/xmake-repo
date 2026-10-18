#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/AttachmentType.h"
#include "mc/world/level/block/BigDripleafTilt.h"
#include "mc/world/level/block/states/BlockState.h"
#include "mc/world/level/block/states/BlockStateInstance.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/common/Brightness.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/WeakPtr.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/buffer_span.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/util/IntRange.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockClientPredictionOverrides.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/NewBlockID.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/block_events/BlockEventManager.h"
#include "mc/world/level/block/components/BlockComponentStorage.h"
#include "mc/world/level/block/components/NetEaseBlockComponentStorage.h"
#include "mc/world/level/block/core/Cache.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/states/BlockStateInstance.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockComponentEventSubscriber;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockConnectionComponent;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
class BlockSource;
class BlockState;
class BlockStateGroup;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockStateInstance;
#endif // @header-generator platform
class Container;
class EntityContext;
class Experiments;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class IRandom;
class IResourceDropsStrategy;
class ItemActor;
class ItemInstance;
class ItemStack;
class Material;
class MobSpawnerData;
class NeighborBlockDirections;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
class ScriptBlockCustomComponentsFinalizer;
class SemVersion;
class SpawnConditions;
class Vec3;
struct ActorBlockSyncMessage;
struct BlockAnimateTickData;
#if defined(LL_PLAT_A) // @header-generator platform
struct BlockComponentDescription;
struct BlockGraphicsModeChangeContext;
#else // @header-generator platform
#endif // @header-generator platform
struct CommandName;
struct CopperBehavior;
struct ResourceDrops;
struct ResourceDropsContext;
namespace BlockEvents { class BlockEntityFallOnEvent; }
namespace BlockTrait { class IGetPlacementBlockCallback; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace BlockTrait { class ITrait; }
#else // @header-generator platform
#endif // @header-generator platform
namespace VoxelShapes { class VoxelShapeRegistry; }
namespace br::spawn { struct EntityType; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BlockGraphicsModeChangeContext;
#endif // @header-generator platform
// clang-format on

class BlockType {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    template <typename T>
        requires(std::is_integral_v<T> || std::is_enum_v<T>)
    std::optional<T> getState(uint64 id, ushort data) const {
        auto it = mStates->find(id);

        if (it == mStates->end()) {
            for (auto const& collection : *mAlteredStateCollections) {
                if (collection && collection->mBlockState->get().mID == id) {
                    auto result = collection->getState(*this, data);
                    if (result) {
                        return std::optional<T>{static_cast<T>(*result)};
                    }
                }
            }

            return std::nullopt;
        }

        return it->second.get<T>(data);
    }

    template <typename T>
    std::optional<T> getState(BlockState const& stateType, ushort data) const {
        return getState<T>(stateType.mID, data);
    }

    template <typename T>
        requires(std::is_integral_v<T> || std::is_enum_v<T>)
    optional_ref<Block const> trySetState(uint64 id, T val, ushort data) {
        auto it = mStates->find(id);

        if (it != mStates->end()) {
            auto& stateInstance = it->second;

            if (static_cast<uchar>(val) < stateInstance.mVariationCount) {
                ushort maskedData = (data & ~stateInstance.mMask)
                                  | (static_cast<ushort>(val) << (stateInstance.mEndBit - stateInstance.mNumBits + 1));

                if (maskedData < mBlockPermutations->size()) {
                    return *mBlockPermutations->at(maskedData);
                }
                return nullptr;
            }
        }

        for (auto& collection : *mAlteredStateCollections) {
            if (collection && collection->mBlockState->get().mID == id) {
                auto result = collection->setState(*this, data, val);
                if (result) {
                    return result;
                }
            }
        }

        return mReturnDefaultBlockOnUnidentifiedBlockState ? mDefaultState : nullptr;
    }

    template <typename T>
    optional_ref<Block const> trySetState(BlockState const& stateType, T val, ushort data) {
        return trySetState(stateType.mID, val, data);
    }

public:
#endif // @header-generator platform
    // BlockType inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct NameInfo;
#else // @header-generator platform
#endif // @header-generator platform
    struct AlteredStateCollection;
    struct HorizontalDirectionBits;
#if defined(LL_PLAT_A) // @header-generator platform
    struct RemovedStateCollection;
#else // @header-generator platform
    struct NameInfo;
#endif // @header-generator platform
    struct RearrangedStateCollection;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct RemovedStateCollection;
#endif // @header-generator platform
    // clang-format on

    // BlockType inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct NameInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString> mRawName;
        ::ll::TypedStorage<8, 24, std::string>    mNamespaceName;
        ::ll::TypedStorage<8, 40, ::HashedString> mFullName;
        ::ll::TypedStorage<8, 24, std::string>    mPreFlatteningName;
        // NOLINTEND

    public:
        // prevent constructor by default
        NameInfo& operator=(NameInfo const&);
        NameInfo(NameInfo const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~NameInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct AlteredStateCollection {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::reference_wrapper<const BlockState>> mBlockState;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::BlockState const>> mBlockState;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        AlteredStateCollection();
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::optional<int> getState(::BlockType const&, int) const = 0;
#else // @header-generator platform
        virtual ::std::optional<int> getState(::BlockType const& blockType, int blockData) const = 0;

        virtual ::Block const* setState(::BlockType const& blockType, int blockData, int stateData) const = 0;
#endif // @header-generator platform

        virtual ~AlteredStateCollection() = default;
#if defined(LL_PLAT_A) // @header-generator platform

        virtual ::Block const* setState(::BlockType const&, int, int) const = 0;
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static bool _checkVersioningRequirements(::SemVersion const&);
#else // @header-generator platform
        MCAPI static bool _checkVersioningRequirements(::SemVersion const& removedSupportVersion);
#endif // @header-generator platform
        // NOLINTEND
    };

    struct HorizontalDirectionBits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mNorth;
        ::ll::TypedStorage<1, 1, bool> mEast;
        ::ll::TypedStorage<1, 1, bool> mSouth;
        ::ll::TypedStorage<1, 1, bool> mWest;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        // NOLINTEND
    };

    struct NameInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString> mRawName;
        ::ll::TypedStorage<8, 32, ::std::string>  mNamespaceName;
        ::ll::TypedStorage<8, 48, ::HashedString> mFullName;
        ::ll::TypedStorage<8, 32, ::std::string>  mPreFlatteningName;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~NameInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct RearrangedStateCollection : public ::BlockType::AlteredStateCollection {
    public:
        // RearrangedStateCollection inner types define
        using GetterType = ::std::function<::std::optional<int>(::BlockType const&, int)>;

        using SetterType = ::std::function<::Block const*(::BlockType const&, int, int)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<::std::optional<int>(::BlockType const&, int)>> mGetter;
        ::ll::TypedStorage<8, 64, ::std::function<::Block const*(::BlockType const&, int, int)>>  mSetter;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::std::optional<int> getState(::BlockType const& blockType, int blockData) const /*override*/;

        virtual ::Block const* setState(::BlockType const& blockType, int blockData, int stateData) const /*override*/;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void
        add(::BlockType&                                                   blockType,
            ::BlockState const&                                            stateRef,
            ::std::function<::std::optional<int>(::BlockType const&, int)> getter,
            ::std::function<::Block const*(::BlockType const&, int, int)>  setter,
            ::SemVersion const&                                            removedSupportVersion);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::std::optional<int> $getState(::BlockType const& blockType, int blockData) const;

        MCAPI ::Block const* $setState(::BlockType const& blockType, int blockData, int stateData) const;


#endif // @header-generator platform
        // NOLINTEND
    };

    struct RemovedStateCollection : public ::BlockType::AlteredStateCollection {
    public:
        // RemovedStateCollection inner types declare
        // clang-format off
        struct SplitBlock;
        // clang-format on

        // RemovedStateCollection inner types define
        struct SplitBlock {
        public:
            // member variables
            // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::TypedStorage<4, 4, int>                               mData;
            ::ll::TypedStorage<8, 8, std::reference_wrapper<BlockType>> mBlockType;
            // NOLINTEND

        public:
            // prevent constructor by default
            SplitBlock();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI SplitBlock(int, ::BlockType&);
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(int, ::BlockType&);
#else // @header-generator platform
            ::ll::TypedStorage<4, 4, int>                                   mData;
            ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::BlockType>> mBlockType;
#endif // @header-generator platform
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<BlockType::RemovedStateCollection::SplitBlock>> mSplitBlocks;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockType::RemovedStateCollection::SplitBlock>> mSplitBlocks;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        RemovedStateCollection();
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::optional<int> getState(::BlockType const&, int) const;
#else // @header-generator platform
        virtual ::std::optional<int> getState(::BlockType const& blockType, int) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~RemovedStateCollection();

        virtual ::Block const* setState(::BlockType const&, int, int) const;
#else // @header-generator platform
        virtual ::Block const* setState(::BlockType const& blockType, int blockData, int stateData) const /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void
        add(::BlockState const&, std::vector<BlockType::RemovedStateCollection::SplitBlock>&&, ::SemVersion const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI static void
        add(::BlockState const&                                              stateRef,
            ::std::vector<::BlockType::RemovedStateCollection::SplitBlock>&& splitBlocks,
            ::SemVersion const&                                              removedSupportVersion);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::optional<int> $getState(::BlockType const&, int) const;
#else // @header-generator platform
        MCAPI ::std::optional<int> $getState(::BlockType const& blockType, int) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::Block const* $setState(::BlockType const&, int, int) const;
        // NOLINTEND
#else // @header-generator platform
        MCAPI ::Block const* $setState(::BlockType const& blockType, int blockData, int stateData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct RearrangedStateCollection : public ::BlockType::AlteredStateCollection {
    public:
        // RearrangedStateCollection inner types define
        using GetterType = std::function<std::optional<int>(const BlockType&, int)>;

        using SetterType = std::function<const Block*(const BlockType&, int, int)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mGetter;
        ::ll::UntypedStorage<8, 48> mSetter;
        // NOLINTEND

    public:
        // prevent constructor by default
        RearrangedStateCollection();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual std::optional<int> getState(::BlockType const&, int) const;

        virtual ~RearrangedStateCollection();

        virtual ::Block const* setState(::BlockType const&, int, int) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void
        add(::BlockType&,
            ::BlockState const&,
            std::function<std::optional<int>(const BlockType&, int)>,
            std::function<const Block*(const BlockType&, int, int)>,
            ::SemVersion const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI std::optional<int> $getState(::BlockType const&, int) const;

        MCNAPI ::Block const* $setState(::BlockType const&, int, int) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LLNDAPI std::string const& getTypeName() const;

    LLNDAPI static optional_ref<BlockType>       tryGetFromRegistry(HashedString const& name);
    LLNDAPI static optional_ref<BlockType const> tryGetFromRegistry(uint legacyBlockID);

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mDescriptionId;
    ::ll::TypedStorage<8, 8, ::Material const&> mMaterial;
    ::ll::TypedStorage<8, 96, ::BlockComponentStorage> mComponents;
    ::ll::TypedStorage<8, 128, ::BlockType::NameInfo> mNameInfo;
    ::ll::TypedStorage<8, 8, ::BlockProperty> mProperties;
    ::ll::TypedStorage<8, 24, std::string> mCreativeGroup;
    ::ll::TypedStorage<4, 4, float> mThickness;
    ::ll::TypedStorage<4, 4, float> mTranslucency;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                      mDescriptionId;
    ::ll::TypedStorage<8, 8, ::Material const&>                   mMaterial;
    ::ll::TypedStorage<8, 96, ::BlockComponentStorage>            mComponents;
    ::ll::TypedStorage<8, 160, ::BlockType::NameInfo>             mNameInfo;
    ::ll::TypedStorage<8, 8, ::BlockProperty>                     mProperties;
    ::ll::TypedStorage<8, 32, ::std::string>                      mCreativeGroup;
    ::ll::TypedStorage<4, 4, float>                               mThickness;
    ::ll::TypedStorage<4, 4, float>                               mTranslucency;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory> mCreativeCategory;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::BlockActorType> mBlockEntityType;
    ::ll::UntypedStorage<1, 1> mRenderLayer;
    bool mFancy : 1;
    bool mRenderLayerCanRenderAsOpaque : 1;
    bool mCanSlide : 1;
    bool mCanReactToNeighborsDuringInstatick : 1;
    bool mFalling : 1;
    bool mIsHiddenInCommands : 1;
    bool mAllowsRunes : 1;
    bool mCanBeBrokenFromFalling : 1;
    bool mCanBeOriginalSurface : 1;
    bool mSolid : 1;
    bool mPushesOutItems : 1;
    bool mIgnoreBlockForInsideCubeRenderer : 1;
    bool mIsOpaqueFullBlock : 1;
    bool mShouldRandomTickExtraLayer : 1;
    bool mIsMobPiece : 1;
    bool mCanBeExtraBlock : 1;
    bool mIsVanilla : 1;
    bool mDataDrivenVanillaBlocksAndItemsEnabled : 1;
    bool mRequiresCorrectToolForDrops : 1;
    bool mReturnDefaultBlockOnUnidentifiedBlockState : 1;
    ::ll::TypedStorage<1, 1, ::Brightness> mLightBlock;
    ::ll::TypedStorage<1, 1, ::Brightness> mLightEmission;
    ::ll::TypedStorage<4, 16, ::mce::Color> mMapColor;
    ::ll::TypedStorage<4, 4, float> mFriction;
    ::ll::TypedStorage<1, 1, ::TintMethod> mTintMethod;
    ::ll::UntypedStorage<1, 1> mClientPredictionOverrides;
    ::ll::UntypedStorage<2, 2> mID;
    ::ll::UntypedStorage<8, 32> mMinRequiredBaseGameVersion;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mTags;
    ::ll::TypedStorage<4, 24, ::AABB> mVisualShape;
    ::ll::TypedStorage<4, 4, uint> mBitsUsed;
    ::ll::TypedStorage<4, 4, uint> mTotalBitsUsed;
    ::ll::TypedStorage<8, 24, std::map<ulong, BlockStateInstance>> mStates;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ulong>> mStateNameMap;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Block>>> mBlockPermutations;
    ::ll::TypedStorage<8, 8, ::Block const*> mDefaultState;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<BlockTrait::IGetPlacementBlockCallback>>> mGetPlacementBlockCallbacks;
    ::ll::UntypedStorage<8, 184> mLegacyDataLookupTable;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockStateGroup>> mBlockStateGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IResourceDropsStrategy>> mResourceDropsStrategy;
    ::ll::TypedStorage<4, 8, ::IntRange> mExperienceDropRange;
    ::ll::TypedStorage<8, 96, ::NetEaseBlockComponentStorage> mNetEaseComponentStorage;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<BlockType::AlteredStateCollection>>> mAlteredStateCollections;
    ::ll::TypedStorage<8, 32, ::BlockEvents::BlockEventManager> mEventManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockComponentEventSubscriber>> mBlockComponentEventSubscriber;
    ::ll::TypedStorage<8, 16, std::shared_ptr<VoxelShapes::VoxelShapeRegistry>> mShapeRegistry;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::BlockActorType>                    mBlockEntityType;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>                  mRenderLayer;
    bool                                                          mFancy                                      : 1;
    bool                                                          mRenderLayerCanRenderAsOpaque               : 1;
    bool                                                          mCanSlide                                   : 1;
    bool                                                          mCanReactToNeighborsDuringInstatick         : 1;
    bool                                                          mFalling                                    : 1;
    bool                                                          mIsHiddenInCommands                         : 1;
    bool                                                          mAllowsRunes                                : 1;
    bool                                                          mCanBeBrokenFromFalling                     : 1;
    bool                                                          mCanBeOriginalSurface                       : 1;
    bool                                                          mSolid                                      : 1;
    bool                                                          mPushesOutItems                             : 1;
    bool                                                          mIgnoreBlockForInsideCubeRenderer           : 1;
    bool                                                          mIsOpaqueFullBlock                          : 1;
    bool                                                          mShouldRandomTickExtraLayer                 : 1;
    bool                                                          mIsMobPiece                                 : 1;
    bool                                                          mCanBeExtraBlock                            : 1;
    bool                                                          mIsVanilla                                  : 1;
    bool                                                          mDataDrivenVanillaBlocksAndItemsEnabled     : 1;
    bool                                                          mRequiresCorrectToolForDrops                : 1;
    bool                                                          mReturnDefaultBlockOnUnidentifiedBlockState : 1;
    ::ll::TypedStorage<1, 1, ::Brightness>                        mLightBlock;
    ::ll::TypedStorage<1, 1, ::Brightness>                        mLightEmission;
    ::ll::TypedStorage<4, 16, ::mce::Color>                       mMapColor;
    ::ll::TypedStorage<4, 4, float>                               mFriction;
    ::ll::TypedStorage<1, 1, ::TintMethod>                        mTintMethod;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::BlockClientPredictionOverrides, 7>> mClientPredictionOverrides;
    ::ll::TypedStorage<2, 2, ::NewBlockID>                                            mID;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                                      mMinRequiredBaseGameVersion;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                          mTags;
    ::ll::TypedStorage<4, 24, ::AABB>                                                 mVisualShape;
    ::ll::TypedStorage<4, 4, uint>                                                    mBitsUsed;
    ::ll::TypedStorage<4, 4, uint>                                                    mTotalBitsUsed;
    ::ll::TypedStorage<8, 16, ::std::map<uint64, ::BlockStateInstance>>               mStates;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint64>>           mStateNameMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::Block>>>              mBlockPermutations;
    ::ll::TypedStorage<8, 8, ::Block const*>                                          mDefaultState;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::BlockTrait::IGetPlacementBlockCallback>>>
                                                                                     mGetPlacementBlockCallbacks;
    ::ll::TypedStorage<8, 72, ::Core::Cache<ushort, ::Block const*, ::Block const*>> mLegacyDataLookupTable;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockStateGroup>>                   mBlockStateGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IResourceDropsStrategy>>            mResourceDropsStrategy;
    ::ll::TypedStorage<4, 8, ::IntRange>                                             mExperienceDropRange;
    ::ll::TypedStorage<8, 96, ::NetEaseBlockComponentStorage>                        mNetEaseComponentStorage;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::BlockType::AlteredStateCollection>>>
                                                                                    mAlteredStateCollections;
    ::ll::TypedStorage<8, 32, ::BlockEvents::BlockEventManager>                     mEventManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockComponentEventSubscriber>>   mBlockComponentEventSubscriber;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::VoxelShapes::VoxelShapeRegistry>> mShapeRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BlockType& operator=(BlockType const&);
    BlockType(BlockType const&);
#endif // @header-generator platform
    BlockType();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~BlockType();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* getNextBlockPermutation(::Block const&) const;
#else // @header-generator platform
    virtual ::Block const* getNextBlockPermutation(::Block const& currentBlock) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::HitResult clip(::Block const&, ::BlockSource const&, ::BlockPos const&, ::Vec3 const&, ::Vec3 const&, ::ShapeType, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    virtual bool
    hasTag(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::std::string const& tagName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getCollisionShapeForCamera(::AABB&, ::Block const&, ::IConstBlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual ::AABB getCollisionShape(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addCollisionShapes(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    virtual bool getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;
#else // @header-generator platform
    virtual bool addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;
#else // @header-generator platform
    virtual void addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;
#else // @header-generator platform
    virtual ::AABB const& getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;
#else // @header-generator platform
    virtual ::AABB const& getVisualShapeInWorld(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferAABB
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB const& getUIShape(::Block const&, ::AABB&) const;
#else // @header-generator platform
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getLiquidClipVolume(::Block const&, ::BlockSource&, ::BlockPos const&, ::AABB&) const;
#else // @header-generator platform
    virtual ::AABB const& getUIShape(::Block const& block, ::AABB& bufferAABB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isObstructingChests(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 randomlyModifyPosition(::BlockPos const&) const;
#else // @header-generator platform
    virtual bool isObstructingChests(::BlockSource& region, ::BlockPos const& pos, ::Block const& thisBlock) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;
#else // @header-generator platform
    virtual ::Vec3 randomlyModifyPosition(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLightningHit(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool liquidCanFlowIntoFromDirection(uchar, std::function<const Block&(const BlockPos&)> const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;
#else // @header-generator platform
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canProvideMultifaceSupport(::Block const&, uchar) const;
#else // @header-generator platform
    virtual bool canProvideSupport(::Block const& block, uchar face, ::BlockSupportType type) const;

    virtual bool canProvideMultifaceSupport(::Block const& block, uchar face) const;
#endif // @header-generator platform

    virtual bool isMovingBlock() const;

    virtual ::CopperBehavior const* tryGetCopperBehavior() const;

    virtual bool isStemBlock() const;

    virtual bool isContainerBlock() const;

    virtual bool isCraftingBlock() const;

    virtual bool isLavaBlocking() const;

    virtual bool isFenceBlock() const;

    virtual bool isThinFenceBlock() const;

    virtual bool isWallBlock() const;

    virtual bool isSlabBlock() const;

    virtual bool isChestBlock() const;

    virtual bool isRailBlock() const;

    virtual bool isLeverBlock() const;

    virtual bool isCandleCakeBlock() const;

    virtual bool isMultifaceBlock() const;

    virtual bool isSignalSource() const;

    virtual bool isConsumerComponent() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeOriginalSurface(bool) const;
#else // @header-generator platform
    virtual bool canBeOriginalSurface(bool aboveSeaLevel) const;
#endif // @header-generator platform

    virtual bool isSilentWhenJumpingOff() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidAuxValue(int) const;
#else // @header-generator platform
    virtual bool isValidAuxValue(int value) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canFillAtPos(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& sanitizeFillBlock(::Block const&) const;
#else // @header-generator platform
    virtual ::Block const& sanitizeFillBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual void onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getDirectSignal(::BlockSource&, ::BlockPos const&, int) const;
#else // @header-generator platform
    virtual int getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<HashedString> getRequiredMedium() const;
#else // @header-generator platform
    virtual ::std::optional<::HashedString> getRequiredMedium() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;
#else // @header-generator platform
    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handlePrecipitation(::BlockSource&, ::BlockPos const&, float, float) const;
#else // @header-generator platform
    virtual void
    handlePrecipitation(::BlockSource& region, ::BlockPos const& pos, float downfallAmount, float temperature) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeUsedInCommands(::BaseGameVersion const&) const;
#else // @header-generator platform
    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldDispense(::BlockSource&, ::Container&) const;
#else // @header-generator platform
    virtual bool shouldDispense(::BlockSource& region, ::Container& container) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void transformOnFall(::BlockSource&, ::BlockPos const&, ::Actor*, float) const;
#else // @header-generator platform
    virtual void
    transformOnFall(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, float fallDistance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMove(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool detachesOnPistonMove(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool detachesOnPistonMove(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void movedByPiston(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void movedByPiston(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onStructureBlockPlace(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void onStructureBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPreservingMediumWhenPlaced(::BlockType const*) const;
#else // @header-generator platform
    virtual bool isPreservingMediumWhenPlaced(::BlockType const* medium) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isFilteredOut(::BlockRenderLayer) const;
#else // @header-generator platform
    virtual bool isFilteredOut(::BlockRenderLayer heldItemRenderLayer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canRenderSelectionOverlay(::BlockRenderLayer) const;
#else // @header-generator platform
    virtual bool canRenderSelectionOverlay(::BlockRenderLayer heldItemRenderLayer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool ignoreEntitiesOnPistonMove(::Block const&) const;
#else // @header-generator platform
    virtual bool ignoreEntitiesOnPistonMove(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;
#else // @header-generator platform
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayConsumeFertilizer(::BlockSource&) const;
#else // @header-generator platform
    virtual bool mayConsumeFertilizer(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    virtual bool mayPick(::BlockSource const&, ::Block const&, bool) const;
#else // @header-generator platform
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;
#endif // @header-generator platform

    virtual bool mayPick() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;
#else // @header-generator platform
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlaceOn(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool tryToPlace(::BlockSource&, ::BlockPos const&, ::Block const&, ::ActorBlockSyncMessage const*) const;
#else // @header-generator platform
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool tryToTill(::BlockSource&, ::BlockPos const&, ::Actor&, ::ItemStack&) const;
#else // @header-generator platform
    virtual bool tryToPlace(
        ::BlockSource&                 region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        ::ActorBlockSyncMessage const* syncMsg
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;
#else // @header-generator platform
    virtual bool tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void destroy(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor*) const;
#else // @header-generator platform
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getIgnoresDestroyPermissions(::Actor&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void
    destroy(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor* entitySource) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool getIgnoresDestroyPermissions(::Actor& entity, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;
#else // @header-generator platform
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;
#else // @header-generator platform
    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;
#else // @header-generator platform
    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const* blockActor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;
#else // @header-generator platform
    virtual void
    spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isAttachedTo(::BlockSource&, ::BlockPos const&, ::BlockPos&) const;
#else // @header-generator platform
    virtual ::Block const& getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool attack(::Player*, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldTriggerEntityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
#else // @header-generator platform
    virtual bool attack(::Player* player, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeBuiltOver(::Block const&, ::BlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool shouldTriggerEntityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeBuiltOver(::Block const&, ::BlockSource const&, ::BlockPos const&, ::BlockType const&) const;
#else // @header-generator platform
    virtual bool canBeBuiltOver(
        ::Block const&       block,
        ::BlockSource const& region,
        ::BlockPos const&    pos,
        ::BlockType const&   newBlock
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void triggerEvent(::BlockSource&, ::BlockPos const&, int, int) const;
#else // @header-generator platform
    virtual bool canBeBuiltOver(::Block const& block, ::BlockSource const&, ::BlockPos const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasTag(::BlockSource&, ::BlockPos const&, ::Block const&, std::string const&) const;
#else // @header-generator platform
    virtual void triggerEvent(::BlockSource& region, ::BlockPos const& pos, int b0, int b1) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MobSpawnerData const* getMobToSpawn(::SpawnConditions const&, ::BlockSource&) const;
#else // @header-generator platform
    virtual ::MobSpawnerData const* getMobToSpawn(::SpawnConditions const& conditions, ::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldStopFalling(::Actor&) const;
#else // @header-generator platform
    virtual bool shouldStopFalling(::Actor& entity) const;
#endif // @header-generator platform

    virtual bool pushesUpFallingBlocks() const;

    virtual bool canHaveExtraData() const;

    virtual bool hasComparatorSignal() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;
#else // @header-generator platform
    virtual int
    getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canSlide(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool canSlide(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

    virtual bool canInstatick() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canSpawnAt(::BlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void notifySpawnedAt(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void notifySpawnedAt(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

    virtual bool causesFreezeEffect() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildDescriptionId(::Block const&) const;
#else // @header-generator platform
    virtual ::std::string buildDescriptionId(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSeasonTinted(::Block const&, ::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);
#else // @header-generator platform
    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadeBrightness(::Block const&) const;
#else // @header-generator platform
    virtual float getShadeBrightness(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int telemetryVariant(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual int telemetryVariant(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getVariant(::Block const&) const;
#else // @header-generator platform
    virtual int getVariant(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canSpawnOn(::Actor*) const;
#else // @header-generator platform
    virtual bool canSpawnOn(::Actor* actor) const;
#endif // @header-generator platform

    virtual ::Block const& getRenderBlock() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uchar getMappedFace(uchar, ::Block const&) const;
#else // @header-generator platform
    virtual uchar getMappedFace(uchar face, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Flip getFaceFlip(uchar, ::Block const&) const;
#else // @header-generator platform
    virtual ::Flip getFaceFlip(uchar face, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void animateTick(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    virtual void animateTick(::BlockAnimateTickData const& tickData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* tryLegacyUpgrade(ushort) const;
#else // @header-generator platform
    virtual ::Brightness getLightEmission(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool dealsContactDamage(::Actor const&, ::Block const&, bool) const;
#else // @header-generator platform
    virtual ::Block const* tryLegacyUpgrade(ushort extraData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* tryGetInfested(::Block const&) const;
#else // @header-generator platform
    virtual bool dealsContactDamage(::Actor const& actor, ::Block const& block, bool isPathFinding) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* tryGetUninfested(::Block const&) const;
#else // @header-generator platform
    virtual ::Block const* tryGetInfested(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _addHardCodedBlockComponents(::Experiments const&);
#else // @header-generator platform
    virtual ::Block const* tryGetUninfested(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRemove(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;
#else // @header-generator platform
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onStandOn(::EntityContext&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;
#endif // @header-generator platform

    virtual bool shouldTickOnSetBlock() const;

    virtual bool isInteractiveBlock() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool allowStateMismatchOnPlacement(::Block const&, ::Block const&) const;
#else // @header-generator platform
    virtual bool allowStateMismatchOnPlacement(::Block const& clientTarget, ::Block const& serverTarget) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockRenderLayer getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual ::BlockRenderLayer getRenderLayer(::Block const& block, ::BlockSource&, ::BlockPos const& pos) const;
#endif // @header-generator platform

    virtual int getExtraRenderLayers() const;

    virtual ::HashedString const& getCullingLayer() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual float getBounciness(::IConstBlockSource const& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Brightness getLight(::Block const&) const;
#else // @header-generator platform
    virtual ::Brightness getLight(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Brightness getLightEmission(::Block const&) const;
#else // @header-generator platform
    virtual ::Brightness getEmissiveBrightness(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Brightness getEmissiveBrightness(::Block const&) const;

    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual ::mce::Color getMapColor(::BlockSource& source, ::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

    virtual ::Block const& getInitialDefaultState();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;
#else // @header-generator platform
    virtual void _onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // clang-format on
#else // @header-generator platform
    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockType(::BlockType const&);
#else // @header-generator platform
    MCAPI BlockType(::std::string const& nameId, int id, ::Material const& material);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockType(::BlockType&&);
#else // @header-generator platform
    MCAPI ::std::optional<int> _tryLookupAlteredStateCollection(uint64 stateId, ushort blockData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockType(std::string const&, int, ::Material const&);
#else // @header-generator platform
    MCAPI ::Block const* _trySetStateFromAlteredStateCollection(uint64 stateId, int val, ushort blockData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<int> _tryLookupAlteredStateCollection(ulong, ushort) const;
#else // @header-generator platform
    MCAPI void addGetPlacementBlockCallback(::std::unique_ptr<::BlockTrait::IGetPlacementBlockCallback> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* _trySetStateFromAlteredStateCollection(ulong, int, ushort) const;
#else // @header-generator platform
    MCAPI ::BlockType& addState(::BlockState const& state, uint64 variationCount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockType& addBlockProperties(::BlockProperty);
#else // @header-generator platform
    MCAPI ::BlockType& addTag(::HashedString const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockType& addComponent(::BlockComponentDescription const&);
#else // @header-generator platform
    MCAPI ::std::string buildDescriptionName(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addGetPlacementBlockCallback(std::unique_ptr<BlockTrait::IGetPlacementBlockCallback>);
#else // @header-generator platform
    MCAPI bool canProvideFullSupport(::Block const& block, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockType& addState(::BlockState const&);

    MCNAPI ::BlockType& addState(::BlockState const&, ulong);

    MCNAPI ::BlockType& addTag(::HashedString const&);

    MCNAPI ::BlockType& addTrait(::BlockTrait::ITrait const&);

    MCNAPI bool anyOf(std::initializer_list<std::reference_wrapper<const HashedString>>) const;

    MCNAPI bool anyOf(::gsl::span<const std::reference_wrapper<const HashedString>> const&) const;

    MCNAPI std::string buildDescriptionName(::Block const&) const;

    MCNAPI bool canHurtAndBreakItem() const;

    MCNAPI bool canProvideFullSupport(::Block const&, uchar) const;

    MCNAPI bool canReactToNeighborsDuringInstatick() const;

    MCNAPI ::Block const&
    connectionUpdate(::BlockSource&, ::Block const&, ::BlockPos const&, ::NeighborBlockDirections const&) const;

    MCNAPI void createBlockPermutations(uint);

    MCNAPI ::WeakPtr<BlockType> createWeakPtr() const;

    MCNAPI void finalizeBlockComponentStorage();

    MCNAPI void finalizeScriptCustomComponents(::ScriptBlockCustomComponentsFinalizer&);

    MCNAPI void forEachAlteredBlockState(::brstd::function_ref<bool(const BlockState&)>) const;

    MCNAPI void forEachBlockPermutation(::brstd::function_ref<bool(const Block&)>) const;

    MCNAPI bool forEachBlockPermutationMutable(::brstd::function_ref<bool(Block&)>);

    MCNAPI void forEachBlockStateInstance(::brstd::function_ref<bool(const BlockStateInstance&)>) const;

    MCNAPI bool getAllowsRunes() const;

    MCNAPI ::BlockActorType getBlockEntityType() const;

    MCNAPI short getBlockItemId() const;

    MCNAPI ::BlockState const* getBlockState(::HashedString const&) const;

    MCNAPI ::BlockStateGroup const* getBlockStateGroup() const;

    MCNAPI ::BlockStateGroup* getBlockStateGroup();

    MCNAPI bool getClientPredictionOverride(::BlockClientPredictionOverrides) const;

    MCNAPI std::vector<CommandName> getCommandNames() const;

    MCNAPI ::SharedTypes::CreativeItemCategory getCreativeCategory() const;

    MCNAPI void getDebugText(std::vector<std::string>&, ::BlockPos const&) const;

    MCNAPI ::Block const& getDefaultState() const;

    MCNAPI std::string const& getDescriptionId() const;

    MCNAPI float getDestroySpeed() const;

    MCNAPI ::BlockEvents::BlockEventManager& getEventManager();

    MCNAPI int getExperienceDrop(::Random&) const;

    MCNAPI float getExplosionResistance() const;

    MCNAPI float getFriction() const;

    MCNAPI ::Material const& getMaterial() const;

    MCNAPI std::string const& getNamespace() const;

    MCNAPI ::HashedString const& getRawNameHash() const;

    MCNAPI std::string const& getRawNameId() const;

    MCNAPI ::BlockRenderLayer getRenderLayer() const;

    MCNAPI ::BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCNAPI ::ResourceDrops getResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const;

    MCNAPI ::VoxelShapes::VoxelShapeRegistry const* getShapeRegistry() const;

    MCNAPI ::Block const& getStateFromLegacyData(ushort) const;

    MCNAPI uint getStateMask(::BlockState const&) const;

    MCNAPI float getThickness() const;

    MCNAPI ::TintMethod getTintMethod() const;

    MCNAPI float getTranslucency() const;

    MCNAPI ulong getUniquePermutations() const;

    MCNAPI bool hasAnyProperty(::BlockProperty) const;

    MCNAPI bool hasBlockEntity() const;

    MCNAPI bool hasNonLegacyState(ulong const&) const;

    MCNAPI bool hasProperty(::BlockProperty) const;

    MCNAPI bool hasResourceDropsStrategy() const;

    MCNAPI bool hasState(::BlockState const&) const;

    MCNAPI bool hasState(::HashedString const&) const;

    MCNAPI bool hasTag(::HashedString const&) const;

    MCNAPI bool hasTag(ulong const&) const;

    MCNAPI void initializeBlockStateGroup();

    MCNAPI bool isAir() const;

    MCNAPI bool isCropBlock() const;

    MCNAPI bool isDuplicatedAliasName() const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool isFallingBlock() const;

    MCNAPI bool isMotionBlockingBlock() const;

    MCNAPI bool isOpaqueFullBlock() const;

    MCNAPI bool isSolid() const;

    MCNAPI bool isSolidBlockingBlock() const;

    MCNAPI bool isValidSpawn(::BlockSource&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&) const;

    MCNAPI bool isVanilla() const;

    MCNAPI bool matchesStates(::BlockType const&) const;

    MCNAPI std::shared_ptr<BlockActor> newBlockEntity(::BlockPos const&) const;

    MCNAPI void onFallOnBase(::BlockEvents::BlockEntityFallOnEvent&) const;

    MCNAPI void onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    MCNAPI ::BlockType& operator=(::BlockType const&);

    MCNAPI ::BlockType& operator=(::BlockType&&);

    MCNAPI ::BlockType& overrideBlockProperties(::BlockProperty);

    MCNAPI bool requiresCorrectToolForDrops() const;

    MCNAPI ::BlockType& setAllowsRunes(bool);

    MCNAPI ::BlockType& setCanBeExtraBlock(bool);

    MCNAPI ::BlockType& setCanBeOriginalSurface(bool);

    MCNAPI ::BlockType& setCategory(::SharedTypes::CreativeItemCategory);

    MCNAPI void setClientPredictionOverride(::BlockClientPredictionOverrides, bool);

    MCNAPI void setEnableDataDrivenVanillaBlocksAndItems(bool);

    MCNAPI ::BlockType& setExperienceDrop(::IntRange);

    MCNAPI ::BlockType& setFriction(float);

    MCNAPI void setIgnoreBlockForInsideCubeRenderer(bool);

    MCNAPI ::BlockType& setIsHiddenInCommands(bool);

    MCNAPI ::BlockType&
    setIsValidSpawn(bool (*)(::BlockSource const&, ::Block const&, ::BlockPos, ::br::spawn::EntityType const&));

    MCNAPI void setIsVanillaBlock(bool);

    MCNAPI ::BlockType& setLightBlock(::Brightness);

    MCNAPI ::BlockType& setLightEmission(::Brightness);

    MCNAPI ::BlockType& setMapColor(::mce::Color const&);

    MCNAPI ::BlockType& setMinRequiredBaseGameVersion(::BaseGameVersion const&);

    MCNAPI ::BlockType& setNameId(std::string const&);

    MCNAPI void setOnlyPermutationandDefaultState(std::unique_ptr<Block>);

    MCNAPI void setOpaqueFullBlock(bool);

    MCNAPI void setPreFlatteningName(std::string);

    MCNAPI void setPushesOutItems(bool);

    MCNAPI void setRandomTickingExtraLayer(bool);

    MCNAPI ::BlockType& setRequiresCorrectToolForDrops();

    MCNAPI void setResourceDropsStrategy(std::unique_ptr<IResourceDropsStrategy>);

    MCNAPI void setShapeRegistry(std::shared_ptr<VoxelShapes::VoxelShapeRegistry>);

    MCNAPI void setSolid(bool);

    MCNAPI ::BlockType& setTintMethod(::TintMethod);

    MCNAPI ::BlockType& setTranslucency(float);

    MCNAPI void setVisualShape(::AABB const&);

    MCNAPI void setVisualShape(::Vec3 const&, ::Vec3 const&);

    MCNAPI bool shouldRandomTick() const;

    MCNAPI bool shouldTriggerOnStandOn(::Actor&, ::BlockPos const&) const;

    MCNAPI void spawnResources(
        ::BlockSource&,
        ::BlockPos const&,
        ::Block const&,
        ::IRandom&,
        ::ResourceDropsContext const&,
        ::Actor const*
#else // @header-generator platform
    MCAPI ::Block const& connectionUpdate(
        ::BlockSource&                   region,
        ::Block const&                   block,
        ::BlockPos const&                pos,
        ::NeighborBlockDirections const& neighborBlockDirections
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* tryGetStateFromLegacyData(ushort) const;
#else // @header-generator platform
    MCAPI void createBlockPermutations(uint latestUpdaterVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool updateTallestCollisionShape(
        ::Block const&,
        ::BlockSource const&,
        ::BlockPos const&,
        ::AABB const&,
        ::optional_ref<const GetCollisionShapeInterface>,
        ::AABB&,
        ::Vec3 const&,
        float&
#else // @header-generator platform
    MCAPI void finalizeBlockComponentStorage();

    MCAPI void finalizeScriptCustomComponents(::ScriptBlockCustomComponentsFinalizer& finalizer);

#ifdef LL_PLAT_C
    MCAPI void forEachBlockStateInstance(::brstd::function_ref<bool(::BlockStateInstance const&)> callback) const;
#endif

    MCAPI ::BlockActorType getBlockEntityType() const;

    MCAPI ::BlockState const* getBlockState(::HashedString const& name) const;

    MCAPI ::std::vector<::CommandName> getCommandNames() const;

    MCAPI void getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const;

    MCAPI float getDestroySpeed() const;

    MCAPI float getExplosionResistance() const;

    MCAPI ::ResourceDrops
    getResourceDrops(::Block const& block, ::IRandom& random, ::ResourceDropsContext const& resourceDropsContext) const;

    MCAPI bool hasBlockEntity() const;

    MCAPI bool hasNonLegacyState(::HashedString const& name) const;

    MCAPI bool hasState(::HashedString const& name) const;

    MCAPI bool hasState(::BlockState const& stateType) const;

    MCAPI bool hasTag(::HashedString const& tag) const;

    MCAPI void initializeBlockStateGroup();

    MCAPI bool isValidSpawn(
        ::BlockSource&                 region,
        ::Block const&                 state,
        ::BlockPos                     pos,
        ::br::spawn::EntityType const& entityType
    ) const;

    MCAPI bool matchesStates(::BlockType const& blockType) const;

    MCAPI void onFallOnBase(::BlockEvents::BlockEntityFallOnEvent& eventData) const;

    MCAPI ::BlockType& setMinRequiredBaseGameVersion(::BaseGameVersion const& baseGameVersion);

    MCAPI ::BlockType& setNameId(::std::string const& id);

    MCAPI void setPreFlatteningName(::std::string preFlattenName);

    MCAPI bool shouldTriggerOnStandOn(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void spawnResources(
        ::BlockSource&                region,
        ::BlockPos const&             pos,
        ::Block const&                block,
        ::IRandom&                    random,
        ::ResourceDropsContext const& resourceDropsContext,
        ::Actor const*                actorContext
    ) const;

    MCAPI ::Block const* tryGetStateFromLegacyData(ushort data) const;

    MCAPI bool updateTallestCollisionShape(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::AABB const&                                      intersectTestBox,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::AABB&                                            result,
        ::Vec3 const&                                      posToMinimizeDistanceToIfMatchingHeight,
        float&                                             currentDistanceSqr
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void DEPRECATEDcallOnGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);
#else // @header-generator platform
    MCAPI static ::std::string buildDescriptionIdFromNameInfo(::BlockType::NameInfo const& nameInfo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool addAABB(::AABB const&, ::AABB const*, std::vector<AABB>&);
#else // @header-generator platform
    MCAPI static ::BlockType::NameInfo extractBlockNameInfo(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string buildDescriptionIdFromNameInfo(::BlockType::NameInfo const&);

    MCNAPI static ::BlockType::NameInfo extractBlockNameInfo(std::string const&);

    MCNAPI static ::BlockType::HorizontalDirectionBits
    getConnectedDirections(::Block const&, ::BlockPos const&, ::IConstBlockSource const&);

    MCNAPI static uchar getPlacementFacingAll(::Actor const&, ::BlockPos const&, float);

    MCNAPI static uchar getPlacementFacingAllExceptAxisY(::Actor const&, ::BlockPos const&, float);

    MCNAPI static ::ItemActor* popResource(::BlockSource&, ::BlockPos const&, ::ItemStack const&, ::Actor const*);

    MCNAPI static ::ItemActor* popResource(::BlockSource&, ::BlockPos const&, ::ItemInstance const&, ::Actor const*);
#else // @header-generator platform
    MCAPI static ::ItemActor*
    popResource(::BlockSource& region, ::BlockPos const& pos, ::ItemStack const& item, ::Actor const* actorContext);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& BLOCK_DESCRIPTION_PREFIX();
#else // @header-generator platform
    MCAPI static ::std::string_view const& BLOCK_DESCRIPTION_PREFIX();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockType const&);

    MCNAPI void* $ctor(::BlockType&&);

    MCNAPI void* $ctor(std::string const&, int, ::Material const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $getNextBlockPermutation(::Block const&) const;
#else // @header-generator platform
    MCAPI ::Block const* $getNextBlockPermutation(::Block const& currentBlock) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HitResult $clip(
        ::Block const&,
        ::BlockSource const&,
        ::BlockPos const&,
        ::Vec3 const&,
        ::Vec3 const&,
        ::ShapeType,
        ::optional_ref<const GetCollisionShapeInterface>
#else // @header-generator platform
    MCFOLD bool
    $hasTag(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::std::string const& tagName) const;

    MCAPI ::HitResult $clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
#else // @header-generator platform
    MCAPI ::AABB $getCollisionShape(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    $getCollisionShapeForCamera(::AABB&, ::Block const&, ::IConstBlockSource const&, ::BlockPos const&) const;

    MCNAPI bool $addCollisionShapes(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB const*,
        std::vector<AABB>&,
        ::optional_ref<const GetCollisionShapeInterface>
#else // @header-generator platform
    MCAPI bool $getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $addAABBs(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB const*, std::vector<AABB>&) const;

    MCNAPI ::AABB const& $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI ::AABB const&
    $getVisualShapeInWorld(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI ::AABB const& $getUIShape(::Block const&, ::AABB&) const;

    MCNAPI bool $getLiquidClipVolume(::Block const&, ::BlockSource&, ::BlockPos const&, ::AABB&) const;

    MCNAPI bool $isObstructingChests(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI ::Vec3 $randomlyModifyPosition(::BlockPos const&) const;

    MCNAPI void $onProjectileHit(::BlockSource&, ::BlockPos const&, ::Actor const&) const;

    MCNAPI void $onLightningHit(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $liquidCanFlowIntoFromDirection(
        uchar,
        std::function<const Block&(const BlockPos&)> const&,
        ::BlockPos const&
#else // @header-generator platform
    MCAPI bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;
#else // @header-generator platform
    MCAPI void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canProvideMultifaceSupport(::Block const&, uchar) const;
#else // @header-generator platform
    MCAPI ::AABB const& $getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isMovingBlock() const;
#else // @header-generator platform
    MCFOLD ::AABB const& $getVisualShapeInWorld(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferAABB
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CopperBehavior const* $tryGetCopperBehavior() const;
#else // @header-generator platform
    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isStemBlock() const;
#else // @header-generator platform
    MCAPI ::AABB const& $getUIShape(::Block const& block, ::AABB& bufferAABB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isContainerBlock() const;
#else // @header-generator platform
    MCAPI bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isCraftingBlock() const;
#else // @header-generator platform
    MCAPI bool $isObstructingChests(::BlockSource& region, ::BlockPos const& pos, ::Block const& thisBlock) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLavaBlocking() const;
#else // @header-generator platform
    MCAPI ::Vec3 $randomlyModifyPosition(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFenceBlock() const;
#else // @header-generator platform
    MCFOLD void $onProjectileHit(::BlockSource& region, ::BlockPos const& pos, ::Actor const& projectile) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isThinFenceBlock() const;
#else // @header-generator platform
    MCFOLD void $onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isWallBlock() const;
#else // @header-generator platform
    MCFOLD bool $liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSlabBlock() const;
#else // @header-generator platform
    MCAPI bool $canProvideSupport(::Block const& block, uchar face, ::BlockSupportType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isChestBlock() const;
#else // @header-generator platform
    MCAPI bool $canProvideMultifaceSupport(::Block const& block, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isRailBlock() const;
#else // @header-generator platform
    MCFOLD bool $isMovingBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLeverBlock() const;
#else // @header-generator platform
    MCFOLD ::CopperBehavior const* $tryGetCopperBehavior() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isCandleCakeBlock() const;
#else // @header-generator platform
    MCFOLD bool $isStemBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isMultifaceBlock() const;
#else // @header-generator platform
    MCFOLD bool $isContainerBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSignalSource() const;
#else // @header-generator platform
    MCFOLD bool $isCraftingBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isConsumerComponent() const;
#else // @header-generator platform
    MCAPI bool $isLavaBlocking() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeOriginalSurface(bool) const;
#else // @header-generator platform
    MCFOLD bool $isFenceBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSilentWhenJumpingOff() const;
#else // @header-generator platform
    MCFOLD bool $isThinFenceBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidAuxValue(int) const;
#else // @header-generator platform
    MCFOLD bool $isWallBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canFillAtPos(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $isSlabBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $sanitizeFillBlock(::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $isChestBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFillBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $isRailBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDirectSignal(::BlockSource&, ::BlockPos const&, int) const;
#else // @header-generator platform
    MCFOLD bool $isLeverBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<HashedString> $getRequiredMedium() const;
#else // @header-generator platform
    MCFOLD bool $isCandleCakeBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldConnectToRedstone(::BlockSource&, ::BlockPos const&, ::Direction::Type) const;
#else // @header-generator platform
    MCFOLD bool $isMultifaceBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handlePrecipitation(::BlockSource&, ::BlockPos const&, float, float) const;
#else // @header-generator platform
    MCFOLD bool $isSignalSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const&) const;
#else // @header-generator platform
    MCFOLD bool $isConsumerComponent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool $canBeOriginalSurface(bool aboveSeaLevel) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldDispense(::BlockSource&, ::Container&) const;
#else // @header-generator platform
    MCFOLD bool $isSilentWhenJumpingOff() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $dispense(::BlockSource&, ::Container&, int, ::Vec3 const&, uchar) const;
#else // @header-generator platform
    MCFOLD bool $isValidAuxValue(int value) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $transformOnFall(::BlockSource&, ::BlockPos const&, ::Actor*, float) const;
#else // @header-generator platform
    MCFOLD bool $canFillAtPos(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onMove(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD ::Block const& $sanitizeFillBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $detachesOnPistonMove(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD void $onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $movedByPiston(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD int $getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onStructureBlockPlace(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::HashedString> $getRequiredMedium() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setupRedstoneComponent(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isPreservingMediumWhenPlaced(::BlockType const*) const;
#else // @header-generator platform
    MCFOLD void
    $handlePrecipitation(::BlockSource& region, ::BlockPos const& pos, float downfallAmount, float temperature) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFilteredOut(::BlockRenderLayer) const;
#else // @header-generator platform
    MCAPI bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canRenderSelectionOverlay(::BlockRenderLayer) const;
#else // @header-generator platform
    MCFOLD bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $ignoreEntitiesOnPistonMove(::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $shouldDispense(::BlockSource& region, ::Container& container) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $onFertilized(::BlockSource&, ::BlockPos const&, ::Actor*, ::FertilizerType) const;
#else // @header-generator platform
    MCFOLD bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayConsumeFertilizer(::BlockSource&) const;
#else // @header-generator platform
    MCFOLD void
    $transformOnFall(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, float fallDistance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCFOLD void $onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPick(::BlockSource const&, ::Block const&, bool) const;
#else // @header-generator platform
    MCFOLD bool $detachesOnPistonMove(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPick() const;
#else // @header-generator platform
    MCFOLD void $movedByPiston(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD void $onStructureBlockPlace(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;
#else // @header-generator platform
    MCFOLD void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPlaceOn(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool $isPreservingMediumWhenPlaced(::BlockType const* medium) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $tryToPlace(::BlockSource&, ::BlockPos const&, ::Block const&, ::ActorBlockSyncMessage const*) const;
#else // @header-generator platform
    MCFOLD bool $isFilteredOut(::BlockRenderLayer heldItemRenderLayer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $tryToTill(::BlockSource&, ::BlockPos const&, ::Actor&, ::ItemStack&) const;
#else // @header-generator platform
    MCFOLD bool $canRenderSelectionOverlay(::BlockRenderLayer heldItemRenderLayer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;
#else // @header-generator platform
    MCFOLD bool $ignoreEntitiesOnPistonMove(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $destroy(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor*) const;
#else // @header-generator platform
    MCFOLD bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getIgnoresDestroyPermissions(::Actor&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool $mayConsumeFertilizer(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getSecondPart(::IConstBlockSource const&, ::BlockPos const&, ::BlockPos&) const;
#else // @header-generator platform
    MCFOLD bool $mayPick() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $playerWillDestroy(::Player&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI bool $mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;
#else // @header-generator platform
    MCFOLD bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
#else // @header-generator platform
    MCFOLD bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $tryToPlace(
        ::BlockSource&                 region,
        ::BlockPos const&              pos,
        ::Block const&                 block,
        ::ActorBlockSyncMessage const* syncMsg
    ) const;

    MCFOLD bool $tryToTill(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, ::ItemStack& item) const;

    MCFOLD bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCFOLD void
    $destroy(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor* entitySource) const;

    MCFOLD bool $getIgnoresDestroyPermissions(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD bool $getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const* blockActor) const;

    MCFOLD void
#endif // @header-generator platform
    $spawnAfterBreak(::BlockSource&, ::Block const&, ::BlockPos const&, ::ResourceDropsContext const&) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getPlacementBlock(::Actor const&, ::BlockPos const&, uchar, ::Vec3 const&, int) const;
#else // @header-generator platform
    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isAttachedTo(::BlockSource&, ::BlockPos const&, ::BlockPos&) const;
#else // @header-generator platform
    MCFOLD bool $isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $attack(::Player*, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool $attack(::Player* player, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldTriggerEntityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
#else // @header-generator platform
    MCAPI bool $shouldTriggerEntityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeBuiltOver(::Block const&, ::BlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool $canBeBuiltOver(
        ::Block const&       block,
        ::BlockSource const& region,
        ::BlockPos const&    pos,
        ::BlockType const&   newBlock
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeBuiltOver(::Block const&, ::BlockSource const&, ::BlockPos const&, ::BlockType const&) const;
#else // @header-generator platform
    MCAPI bool $canBeBuiltOver(::Block const& block, ::BlockSource const&, ::BlockPos const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $triggerEvent(::BlockSource&, ::BlockPos const&, int, int) const;
#else // @header-generator platform
    MCFOLD void $triggerEvent(::BlockSource& region, ::BlockPos const& pos, int b0, int b1) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasTag(::BlockSource&, ::BlockPos const&, ::Block const&, std::string const&) const;
#else // @header-generator platform
    MCAPI ::MobSpawnerData const* $getMobToSpawn(::SpawnConditions const& conditions, ::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MobSpawnerData const* $getMobToSpawn(::SpawnConditions const&, ::BlockSource&) const;
#else // @header-generator platform
    MCAPI bool $shouldStopFalling(::Actor& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldStopFalling(::Actor&) const;
#else // @header-generator platform
    MCFOLD bool $pushesUpFallingBlocks() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $pushesUpFallingBlocks() const;
#else // @header-generator platform
    MCFOLD bool $canHaveExtraData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canHaveExtraData() const;
#else // @header-generator platform
    MCFOLD bool $hasComparatorSignal() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasComparatorSignal() const;
#else // @header-generator platform
    MCFOLD int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getComparatorSignal(::BlockSource&, ::BlockPos const&, ::Block const&, uchar) const;
#else // @header-generator platform
    MCAPI bool $canSlide(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canSlide(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool $canInstatick() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canInstatick() const;
#else // @header-generator platform
    MCFOLD bool $canSpawnAt(::BlockSource const& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canSpawnAt(::BlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD void $notifySpawnedAt(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $notifySpawnedAt(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool $causesFreezeEffect() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $causesFreezeEffect() const;
#else // @header-generator platform
    MCFOLD ::std::string $buildDescriptionId(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildDescriptionId(::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSeasonTinted(::Block const&, ::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const&);
#else // @header-generator platform
    MCAPI float $getShadeBrightness(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadeBrightness(::Block const&) const;
#else // @header-generator platform
    MCAPI int $telemetryVariant(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $telemetryVariant(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI int $getVariant(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getVariant(::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $canSpawnOn(::Actor* actor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canSpawnOn(::Actor*) const;
#else // @header-generator platform
    MCFOLD ::Block const& $getRenderBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getRenderBlock() const;
#else // @header-generator platform
    MCFOLD uchar $getMappedFace(uchar face, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar $getMappedFace(uchar, ::Block const&) const;
#else // @header-generator platform
    MCFOLD ::Flip $getFaceFlip(uchar face, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Flip $getFaceFlip(uchar, ::Block const&) const;
#else // @header-generator platform
    MCFOLD void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    MCFOLD void $animateTick(::BlockAnimateTickData const& tickData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $animateTick(::BlockAnimateTickData const&) const;
#else // @header-generator platform
    MCAPI ::Brightness $getLightEmission(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $tryLegacyUpgrade(ushort) const;
#else // @header-generator platform
    MCFOLD ::Block const* $tryLegacyUpgrade(ushort extraData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $dealsContactDamage(::Actor const&, ::Block const&, bool) const;
#else // @header-generator platform
    MCFOLD bool $dealsContactDamage(::Actor const& actor, ::Block const& block, bool isPathFinding) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $tryGetInfested(::Block const&) const;
#else // @header-generator platform
    MCFOLD ::Block const* $tryGetInfested(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $tryGetUninfested(::Block const&) const;
#else // @header-generator platform
    MCFOLD ::Block const* $tryGetUninfested(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
#else // @header-generator platform
    MCFOLD void $_addHardCodedBlockComponents(::Experiments const& experiments);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRemove(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onExploded(::BlockSource&, ::BlockPos const&, ::Actor*) const;
#else // @header-generator platform
    MCFOLD void $onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onStandOn(::EntityContext&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldTickOnSetBlock() const;
#else // @header-generator platform
    MCFOLD bool $shouldTickOnSetBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInteractiveBlock() const;
#else // @header-generator platform
    MCFOLD bool $isInteractiveBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $allowStateMismatchOnPlacement(::Block const&, ::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $allowStateMismatchOnPlacement(::Block const& clientTarget, ::Block const& serverTarget) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockRenderLayer $getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::BlockRenderLayer $getRenderLayer(::Block const& block, ::BlockSource&, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getExtraRenderLayers() const;
#else // @header-generator platform
    MCFOLD int $getExtraRenderLayers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& $getCullingLayer() const;
#else // @header-generator platform
    MCAPI ::HashedString const& $getCullingLayer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD float $getBounciness(::IConstBlockSource const& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Brightness $getLight(::Block const&) const;
#else // @header-generator platform
    MCAPI ::Brightness $getLight(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Brightness $getLightEmission(::Block const&) const;
#else // @header-generator platform
    MCFOLD ::Brightness $getEmissiveBrightness(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Brightness $getEmissiveBrightness(::Block const&) const;
#else // @header-generator platform
    MCFOLD ::mce::Color $getMapColor(::BlockSource& source, ::BlockPos const& pos, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI ::Block const& $getInitialDefaultState();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getInitialDefaultState();
#else // @header-generator platform
    MCFOLD void $_onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor* sourceActor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onHitByActivatingAttack(::BlockSource&, ::BlockPos const&, ::Actor*) const;
#else // @header-generator platform
    MCFOLD void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor&) const;
    // NOLINTEND
#else // @header-generator platform
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
