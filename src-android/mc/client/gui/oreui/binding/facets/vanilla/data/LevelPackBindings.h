#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
