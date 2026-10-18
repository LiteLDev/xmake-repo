#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class AutomationBehaviorTreeGroup;
class BehaviorFactory;
class BlockTypeRegistry;
class EntityContext;
class EntitySystemsManager;
class IEntityRegistryOwner;
class ILevel;
class IMinecraftEventing;
class LevelCrashDumpManager;
class LevelData;
class LevelEventCoordinator;
class LevelSoundManager;
class LevelStorageManager;
class LinkedAssetValidator;
class PacketSender;
class ParticleProvider;
class PauseManager;
class Scheduler;
class StructureManager;
struct DimensionFactoryAndManager;
namespace VoxelShapes { class VoxelShapeRegistry; }
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

struct LevelArguments {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 24> mPacketSender;
    ::ll::UntypedStorage<8, 16> mCreateLevelSoundManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    ::ll::UntypedStorage<8, 24> mStructureManager;
    ::ll::TypedStorage<8, 8, ::Scheduler&> mCallbackContext;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::NonOwnerPointer<IEntityRegistryOwner>> const&> mEntityRegistryOwner;
    ::ll::UntypedStorage<1, 24> mLevelEntity;
    ::ll::TypedStorage<1, 1, bool> mClientSideChunkGenerationEnabled;
    ::ll::TypedStorage<1, 1, bool> mBlockNetworkIdsAreHashes;
    ::ll::UntypedStorage<8, 24> mBlockRegistry;
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const> mItemRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelStorageManager>> mLevelStorageManager;
    ::ll::UntypedStorage<8, 16> mCreateLevelCrashDumpManager;
    ::ll::UntypedStorage<8, 16> mCreateEntitySystemsManager;
    ::ll::UntypedStorage<8, 16> mCreateAutomationTree;
    ::ll::UntypedStorage<8, 16> mCreateDimensionFactoryAndManager;
    ::ll::TypedStorage<1, 1, ::SubClientId> mSubClientId;
    ::ll::UntypedStorage<8, 24> mValidator;
    ::ll::UntypedStorage<8, 24> mLevelData;
    ::ll::TypedStorage<1, 1, bool> mIsClientSide;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ParticleProvider>> mParticles;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VoxelShapes::VoxelShapeRegistry>> mShapeRegistry;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PacketSender>> mPacketSender;
    ::ll::TypedStorage<
        8,
        16,
        ::brstd::function_ref<
            ::std::unique_ptr<::LevelSoundManager>(::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator>)>>
                                                                                           mCreateLevelSoundManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                        mEventing;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>>           mStructureManager;
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                                 mCallbackContext;
    ::ll::TypedStorage<8, 8, ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> const&> mEntityRegistryOwner;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext> const>                            mLevelEntity;
    ::ll::TypedStorage<1, 1, bool>                                                mClientSideChunkGenerationEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                mBlockNetworkIdsAreHashes;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::BlockTypeRegistry>> mBlockRegistry;
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const>                            mItemRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelStorageManager>>            mLevelStorageManager;
    ::ll::TypedStorage<8, 16, ::brstd::function_ref<::std::unique_ptr<::LevelCrashDumpManager>()>>
        mCreateLevelCrashDumpManager;
    ::ll::
        TypedStorage<8, 16, ::brstd::function_ref<::OwnerPtr<::EntitySystemsManager>(::StackRefResult<::PauseManager>)>>
            mCreateEntitySystemsManager;
    ::ll::
        TypedStorage<8, 16, ::brstd::function_ref<::std::unique_ptr<::AutomationBehaviorTreeGroup>(::BehaviorFactory&)>>
            mCreateAutomationTree;
    ::ll::TypedStorage<
        8,
        16,
        ::brstd::function_ref<::std::unique_ptr<::DimensionFactoryAndManager>(
            ::Bedrock::NotNullNonOwnerPtr<::ILevel>,
            ::br::worldgen::StructureSetRegistry&
        )>>
                                                                                   mCreateDimensionFactoryAndManager;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                        mSubClientId;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>>  mValidator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelData>>          mLevelData;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsClientSide;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ParticleProvider>>                mParticles;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VoxelShapes::VoxelShapeRegistry>> mShapeRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LevelArguments& operator=(LevelArguments const&);
    LevelArguments(LevelArguments const&);
    LevelArguments();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~LevelArguments();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~LevelArguments();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
