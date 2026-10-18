#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/PackCollection.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class LevelDataWrapper;
namespace OreUI { class IResourceAllowList; }
namespace World { struct PackDetails; }
namespace World { struct WorldPacksData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/PackCollection.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class LevelDataWrapper;
namespace OreUI { class IResourceAllowList; }
namespace World { struct PackDetails; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct LevelPackBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mIsDirty;
    ::ll::TypedStorage<8, 8, ::LevelDataWrapper*>       mWorldData;
    ::ll::UntypedStorage<8, 24>                         mEntitlementManager;
    ::ll::UntypedStorage<8, 24>                         mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                      mIsTrialMode;
    ::ll::TypedStorage<8, 128, ::World::PackCollection> mTexturePacks;
    ::ll::TypedStorage<8, 128, ::World::PackCollection> mBehaviorPacks;
    ::ll::TypedStorage<1, 1, bool>                      mIsRealmsPlusSubscriptionActive;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelPackBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<World::PackDetails> const& getActiveBehaviorPacks() const;

    MCNAPI std::vector<World::PackDetails> const& getActiveTexturePacks() const;

    MCNAPI std::vector<World::PackDetails> const& getAvailableBehaviorPacks() const;

    MCNAPI std::vector<World::PackDetails> const& getAvailableTexturePacks() const;

    MCNAPI std::vector<World::PackDetails> const& getGlobalTexturePacks() const;

    MCNAPI std::vector<World::PackDetails> const& getRealmsTexturePacks() const;

    MCNAPI std::vector<World::PackDetails> const& getUnownedTexturePacks() const;

    MCNAPI bool isRealmsPlusSubscriptionActive();

    MCNAPI bool isRealmsPlusSupported() const;

    MCNAPI ~LevelPackBindings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LevelPackBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 8, ::LevelDataWrapper*>                                         mWorldData;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>       mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsTrialMode;
    ::ll::TypedStorage<8, 128, ::World::PackCollection>                                   mTexturePacks;
    ::ll::TypedStorage<8, 128, ::World::PackCollection>                                   mBehaviorPacks;
    ::ll::TypedStorage<1, 1, bool> mIsRealmsPlusSubscriptionActive;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addPackIconPathToAllowList(
        ::World::PackCollection&                                   packCollection,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ::std::vector<::World::PackDetails> const& getActiveBehaviorPacks() const;

    MCFOLD ::std::vector<::World::PackDetails> const& getActiveTexturePacks() const;

    MCFOLD ::std::vector<::World::PackDetails> const& getAvailableBehaviorPacks() const;

    MCFOLD ::std::vector<::World::PackDetails> const& getAvailableTexturePacks() const;

    MCFOLD ::std::vector<::World::PackDetails> const& getGlobalTexturePacks() const;

    MCAPI ::std::vector<::World::PackDetails> const& getRealmsTexturePacks() const;

    MCFOLD ::std::vector<::World::PackDetails> const& getUnownedTexturePacks() const;

    MCAPI bool isRealmsPlusSubscriptionActive();

    MCAPI bool isRealmsPlusSupported() const;
    // NOLINTEND
};
#else // @header-generator platform
struct LevelPackBindings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
