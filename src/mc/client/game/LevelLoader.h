#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/ImportLevelData.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
struct LevelSummary;
// clang-format on

class LevelLoader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                 mMinecraft;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ImportLevelData>> mQueuedImportLoad;
    ::ll::TypedStorage<8, 24, std::vector<ImportLevelData>>     mLevelImportQueue;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelSummary>>     mLevelToLoad;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelSummary>>     mActivityLevelToLoad;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                 mPendingLoadRequest;
    ::ll::TypedStorage<8, 24, std::string>                      mRealmToLoad;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                 mLoadingRealmLink;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelLoader& operator=(LevelLoader const&);
    LevelLoader(LevelLoader const&);
    LevelLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelLoader();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LevelLoader(::IMinecraftGame&);

    MCNAPI void _navigateToDisconnectScreen(::Connection::DisconnectFailReason);

    MCNAPI void checkForPendingLevelImport();

    MCNAPI void checkForPendingLevelLoad();

    MCNAPI bool ensureCompatibleLevelOrDisconnect(::LevelSummary const&);

    MCNAPI void queueLevelForImport(::ImportLevelData const&);

    MCNAPI void setLoadingRealmLink(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class LevelLoader {};
#endif // @header-generator platform
