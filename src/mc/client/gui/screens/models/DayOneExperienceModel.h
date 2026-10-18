#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/LegacyWorldConversionManager.h"
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/legacy/ImportStatus.h"
#include "mc/client/world/LegacyWorldInfo.h"
#include "mc/util/CallbackToken.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class LegacyOptionsParser;
class Skin;
struct ImportResult;
struct MinecraftScreenModelContext;
namespace Legacy { class WorldImporter; }
// clang-format on

class DayOneExperienceModel : public ::MainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<LegacyOptionsParser>>   mOptionsParser;
    ::ll::TypedStorage<8, 8, ::Skin const*>                          mLegacySkin;
    ::ll::TypedStorage<1, 1, bool>                                   mLegacySkinRetrievalFinished;
    ::ll::TypedStorage<1, 1, bool>                                   mNeedsRetrievalOnNetworkAvailable;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Legacy::WorldImporter>> mLegacyWorldImporter;
    ::ll::TypedStorage<8, 24, std::vector<LegacyWorldInfo>>          mLegacyWorldList;
    ::ll::TypedStorage<1, 1, bool>                                   mLegacyWorldsFetched;
    ::ll::TypedStorage<1, 1, bool>                                   mFetchingLegacyWorldsInProgress;
    ::ll::TypedStorage<1, 1, bool>                                   mFoundLegacyWorlds;
    ::ll::UntypedStorage<8, 112>                                     mLegacyWorldConversionManager;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                    mImportedWorldIndex;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                       mRetrieveCallbackToken;
    ::ll::UntypedStorage<8, 24>                                      mImportCallbackToken;
    // NOLINTEND

public:
    // prevent constructor by default
    DayOneExperienceModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DayOneExperienceModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DayOneExperienceModel(::MinecraftScreenModelContext);

    MCNAPI void _fetchWorlds();

    MCNAPI bool _initOptionsParser();

    MCNAPI void convertLegacyWorld(uint const, std::function<void()>);

    MCNAPI void exitDayOneExperience(int);

    MCNAPI void fetchLegacySkin();

    MCNAPI bool finishedRetrievingWorlds() const;

    MCNAPI ::Skin const* getDisplaySkin() const;

    MCNAPI float getLegacyWorldConversionProgress() const;

    MCNAPI ::LoadingState getLegacyWorldConversionState() const;

    MCNAPI ::LegacyWorldInfo const& getWorldAt(int) const;

    MCNAPI uint getWorldCount() const;

    MCNAPI bool hasSkin() const;

    MCNAPI void initSkin();

    MCNAPI void initWorlds();

    MCNAPI bool isFetchingWorlds() const;

    MCNAPI bool isSkinRetrievalFinished() const;

    MCNAPI bool needsRetrievalOnNetworkAvailable() const;

    MCNAPI void onWizardComplete();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftScreenModelContext);
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
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/LegacyWorldConversionManager.h"
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/util/CallbackToken.h"

// auto generated forward declare list
// clang-format off
class LegacyOptionsParser;
class Skin;
struct LegacyWorldInfo;
struct MinecraftScreenModelContext;
namespace Legacy { class WorldImporter; }
// clang-format on

class DayOneExperienceModel : public ::MainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LegacyOptionsParser>>   mOptionsParser;
    ::ll::TypedStorage<8, 8, ::Skin const*>                              mLegacySkin;
    ::ll::TypedStorage<1, 1, bool>                                       mLegacySkinRetrievalFinished;
    ::ll::TypedStorage<1, 1, bool>                                       mNeedsRetrievalOnNetworkAvailable;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Legacy::WorldImporter>> mLegacyWorldImporter;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyWorldInfo>>          mLegacyWorldList;
    ::ll::TypedStorage<1, 1, bool>                                       mLegacyWorldsFetched;
    ::ll::TypedStorage<1, 1, bool>                                       mFetchingLegacyWorldsInProgress;
    ::ll::TypedStorage<1, 1, bool>                                       mFoundLegacyWorlds;
    ::ll::TypedStorage<8, 128, ::LegacyWorldConversionManager>           mLegacyWorldConversionManager;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                      mImportedWorldIndex;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                           mRetrieveCallbackToken;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                           mImportCallbackToken;
    // NOLINTEND

public:
    // prevent constructor by default
    DayOneExperienceModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DayOneExperienceModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DayOneExperienceModel(::MinecraftScreenModelContext context);

    MCAPI void _fetchWorlds();

    MCAPI bool _initOptionsParser();

    MCAPI void convertLegacyWorld(uint worldIndex, ::std::function<void()> failureCallback);

    MCAPI void fetchLegacySkin();

    MCAPI void initWorlds();

    MCAPI void onWizardComplete();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftScreenModelContext context);
    // NOLINTEND
};
#else // @header-generator platform
class DayOneExperienceModel {};
#endif // @header-generator platform
#endif // @header-generator platform
