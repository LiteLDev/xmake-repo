#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/InGameType.h"
#include "mc/client/world/WorldSystemModules.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class TrialManager;
namespace World { class ExternalServerWorldList; }
namespace World { class FeaturedWorldTemplateManager; }
namespace World { class FriendServerWorldList; }
namespace World { class IWorldCloudSyncer; }
namespace World { class InfiniteWorldConverter; }
namespace World { class LanServerWorldList; }
namespace World { class LocalWorldList; }
namespace World { class LocalWorldStarter; }
namespace World { class MarketplacePassWorldTemplateManager; }
namespace World { class NetworkWorldJoiner; }
namespace World { class OwnedWorldTemplateManager; }
namespace World { class ThirdPartyWorldList; }
namespace World { class WorldEditor; }
namespace World { class WorldPlayerListTracker; }
namespace World { class WorldResourcePackHandler; }
namespace World { class WorldStorageHandler; }
namespace World { class WorldTransferer; }
namespace World { struct WorldSystemModuleGameDependencies; }
// clang-format on

namespace World {

class WorldSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::World::WorldSystemModules> mModules;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSystem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::World::ExternalServerWorldList& getExternalServerWorldList();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<World::FeaturedWorldTemplateManager>>
    getFeaturedWorldTemplateManager();

    MCNAPI ::World::FriendServerWorldList& getFriendServerWorldList();

    MCNAPI ::World::InfiniteWorldConverter& getInfiniteWorldConverter();

    MCNAPI ::World::LanServerWorldList& getLanServerWorldList();

    MCNAPI std::shared_ptr<World::LocalWorldList> getLocalWorldList();

    MCNAPI ::World::LocalWorldStarter& getLocalWorldStarter();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<World::MarketplacePassWorldTemplateManager>>
    getMarketplacePassWorldTemplateManager();

    MCNAPI ::World::NetworkWorldJoiner& getNetworkWorldJoiner();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<World::OwnedWorldTemplateManager>> getOwnedWorldTemplateManager();

    MCNAPI ::World::ThirdPartyWorldList& getThirdPartyWorldList();

    MCNAPI ::World::IWorldCloudSyncer& getWorldCloudSyncer();

    MCNAPI ::World::WorldEditor& getWorldEditor();

    MCNAPI ::World::WorldPlayerListTracker& getWorldPlayerListTracker();

    MCNAPI ::World::WorldResourcePackHandler& getWorldResourcePackHandler();

    MCNAPI ::World::WorldStorageHandler const& getWorldStorageHandler() const;

    MCNAPI ::World::WorldTransferer& getWorldTransferer();

    MCNAPI void update(double, ::TrialManager*, ::World::InGameType, bool);

    MCNAPI ~WorldSystem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<World::WorldSystem> create(::World::WorldSystemModuleGameDependencies&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace World
