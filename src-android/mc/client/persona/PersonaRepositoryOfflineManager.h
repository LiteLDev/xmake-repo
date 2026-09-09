#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/persona/PersonaOfflineCatalogItem.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class StoreCatalogRepository;
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
namespace persona { class PieceOfferWrapper; }
// clang-format on

class PersonaRepositoryOfflineManager {
public:
    // PersonaRepositoryOfflineManager inner types declare
    // clang-format off
    struct PersonaOfflineIdCache;
    // clang-format on

    // PersonaRepositoryOfflineManager inner types define
    struct PersonaOfflineIdCache {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::map<std::string, std::shared_ptr<persona::PersonaOfflineCatalogItem>>> mPieceCatalogMap;
        ::ll::TypedStorage<8, 24, std::map<std::string, std::set<std::string>>> mPlayfabIdPieceMap;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PersonaOfflineIdCache();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::PersonaRepositoryOfflineManager::PersonaOfflineIdCache> mPersonaOfflineIdCache;
    ::ll::UntypedStorage<8, 24>                                                         mPersonaFilePath;
    ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::ReflectionCtx>>                    mCerealContext;
    ::ll::TypedStorage<1, 1, bool> mLoadedOfflineMapIntoStoreCatalog;
    ::ll::TypedStorage<1, 1, bool> mLoadedOfflineMapFromFile;
    ::ll::TypedStorage<1, 1, bool> mOfflineMapUpdated;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaRepositoryOfflineManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void saveOfflinePersonaCatalogCache();
    // NOLINTEND
};
