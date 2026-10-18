#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/edu_discovery/Availability.h"
#include "mc/client/social/edu_discovery/Error.h"
#include "mc/client/social/edu_discovery/JoinCode.h"

// auto generated forward declare list
// clang-format off
class IEDUDiscoveryService;
class MinecraftScreenModel;
namespace EDUDiscovery { struct JoinServerQueryState; }
namespace EDUDiscovery { template<typename T0> class QueryContext; }
// clang-format on

class JoincodeEntryScreenController : public ::MinecraftScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/social/edu_discovery/Availability.h"
#include "mc/client/social/edu_discovery/Error.h"
#include "mc/client/social/edu_discovery/JoinCode.h"
#include "mc/client/social/edu_discovery/QueryContext.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace EDUDiscovery { struct JoinServerQueryState; }
// clang-format on

class JoincodeEntryScreenController : public ::MinecraftScreenController {
#else // @header-generator platform
class JoincodeEntryScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // JoincodeEntryScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ActiveScreen : int {
        None        = 0,
        Entry       = 1,
        Connecting  = 2,
        Error       = 3,
        ServerFound = 4,
        IPEntry     = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                             mJoinContext;
    ::ll::UntypedStorage<8, 16>                                             mAvailabilityContext;
    ::ll::TypedStorage<8, 32, ::EDUDiscovery::Error>                        mJoinError;
    ::ll::TypedStorage<8, 24, std::string>                                  mHostUsername;
    ::ll::TypedStorage<8, 24, std::string>                                  mWorldName;
    ::ll::TypedStorage<4, 4, ::JoincodeEntryScreenController::ActiveScreen> mActiveScreen;
    ::ll::TypedStorage<8, 32, ::EDUDiscovery::JoinCode>                     mEnteredJoincode;
    ::ll::TypedStorage<4, 4, int>                                           mHoveredEntry;
    ::ll::UntypedStorage<8, 48>                                             mUpdateIdHeaderText;
    ::ll::UntypedStorage<8, 48>                                             mCheckForServiceDialog;
    ::ll::UntypedStorage<1, 16>                                             mServiceRedirectedToIP;
    // NOLINTEND

public:
    // prevent constructor by default
    JoincodeEntryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JoincodeEntryScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JoincodeEntryScreenController(std::shared_ptr<MinecraftScreenModel>, std::string const&);

    MCNAPI void _closeActiveScreen(bool);

    MCNAPI void _closeScreen(std::string const&);

    MCNAPI void _openEntryScreen();

    MCNAPI void _openErrorScreen(::EDUDiscovery::Error const&);

    MCNAPI void _openIPEntryScreen();

    MCNAPI void _openScreen(std::string const&, std::string const&, std::string const&);

    MCNAPI void _requestJoinServer(
        std::function<void(std::shared_ptr<JoincodeEntryScreenController>, const EDUDiscovery::JoinServerQueryState&)>
    );

    MCNAPI bool canQuery() const;

    MCNAPI void queryJoincode(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, std::string const&);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ActiveScreen : int {
        None        = 0,
        Entry       = 1,
        Connecting  = 2,
        Error       = 3,
        ServerFound = 4,
        IPEntry     = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EDUDiscovery::QueryContext<::EDUDiscovery::JoinServerQueryState>>>
        mJoinContext;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EDUDiscovery::QueryContext<::EDUDiscovery::Availability>>>
                                                                            mAvailabilityContext;
    ::ll::TypedStorage<8, 40, ::EDUDiscovery::Error>                        mJoinError;
    ::ll::TypedStorage<8, 32, ::std::string>                                mHostUsername;
    ::ll::TypedStorage<8, 32, ::std::string>                                mWorldName;
    ::ll::TypedStorage<4, 4, ::JoincodeEntryScreenController::ActiveScreen> mActiveScreen;
    ::ll::TypedStorage<8, 32, ::EDUDiscovery::JoinCode>                     mEnteredJoincode;
    ::ll::TypedStorage<4, 4, int>                                           mHoveredEntry;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string)>>         mUpdateIdHeaderText;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                      mCheckForServiceDialog;
    ::ll::TypedStorage<1, 1, bool>                                          mServiceRedirectedToIP;
    // NOLINTEND

public:
    // prevent constructor by default
    JoincodeEntryScreenController();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JoincodeEntryScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      popupButtonName
    );

    MCAPI void _closeActiveScreen(bool fullClose);

    MCAPI void _closeScreen(::std::string const& popupControlId);

    MCAPI void _openEntryScreen();

    MCAPI void _openErrorScreen(::EDUDiscovery::Error const& error);

    MCAPI void _openIPEntryScreen();

    MCAPI void
    _openScreen(::std::string const& popupControlId, ::std::string const& ttsTitle, ::std::string const& ttsContent);

    MCAPI void _requestJoinServer(
        ::std::function<
            void(::std::shared_ptr<::JoincodeEntryScreenController>, ::EDUDiscovery::JoinServerQueryState const&)>
            joinCallback
    );

    MCAPI void queryJoincode(::std::string const& encodedJoincode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::std::string const& popupButtonName);
    // NOLINTEND
#else // @header-generator platform
    enum class ActiveScreen : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
