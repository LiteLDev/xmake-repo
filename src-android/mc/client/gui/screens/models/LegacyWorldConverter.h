#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/LegacyWorldConversionManager.h"
#include "mc/client/legacy/ImportStatus.h"
#include "mc/client/world/LegacyWorldInfo.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/util/CallbackToken.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftGame;
class MainMenuScreenModel;
struct ImportResult;
namespace Legacy { class WorldImporter; }
namespace Legacy { class WorldProcessRequest; }
// clang-format on

class LegacyWorldConverter : public ::std::enable_shared_from_this<LegacyWorldConverter> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                      mMinecraftGame;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                     mClient;
    ::ll::TypedStorage<8, 8, ::MainMenuScreenModel&>                 mModel;
    ::ll::TypedStorage<8, 24, std::vector<LegacyWorldInfo>>          mLegacyWorldList;
    ::ll::TypedStorage<8, 24, std::vector<LegacyWorldInfo>>          mRetailToPreviewWorldList;
    ::ll::TypedStorage<1, 1, bool>                                   mFetchingLegacyWorldsInProgress;
    ::ll::TypedStorage<1, 1, bool>                                   mLegacyWorldsFetched;
    ::ll::TypedStorage<1, 1, bool>                                   mFoundLegacyWorlds;
    ::ll::UntypedStorage<8, 112>                                     mLegacyWorldConversionManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Legacy::WorldImporter>> mLegacyWorldImporter;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                       mRetrieveCallbackToken;
    ::ll::UntypedStorage<8, 24>                                      mImportCallbackToken;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyWorldConverter& operator=(LegacyWorldConverter const&);
    LegacyWorldConverter(LegacyWorldConverter const&);
    LegacyWorldConverter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void cancelImportCallbackToken();

    MCNAPI void convertLegacyWorld(
        ::LegacyWorldInfo,
        std::string const&,
        std::function<void(Legacy::ImportStatus, float, std::shared_ptr<ImportResult>)>
    );

    MCNAPI ::Core::PathBuffer<std::string> createUniquePathForWorld() const;

    MCNAPI bool getFetchingLegacyWorldsInProgress() const;

    MCNAPI ::LegacyWorldInfo* getLegacyWorldAtIndex(int);

    MCNAPI float getLegacyWorldConversionProgress() const;

    MCNAPI ::LoadingState getLegacyWorldConversionState() const;

    MCNAPI int getLegacyWorldCount() const;

    MCNAPI bool getLegacyWorldsFetched() const;

    MCNAPI ::LegacyWorldInfo* getRetailToPreviewWorldAtIndex(int);

    MCNAPI int getRetailToPreviewWorldCount() const;

    MCNAPI void handleLegacyWorldConversionComplete(::ImportResult const&);

    MCNAPI void initLegacyWorldImporter();

    MCNAPI void setLegacyWorldConversionProgress(float);

    MCNAPI bool supportsLegacyWorlds() const;
    // NOLINTEND
};
