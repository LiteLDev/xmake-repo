#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/ipjsc/Inputs.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class IPJoinScreenController : public ::MinecraftScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/ipjsc/Inputs.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class IPJoinScreenController : public ::MinecraftScreenController {
#else // @header-generator platform
class IPJoinScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // IPJoinScreenController inner types declare
    // clang-format off
    struct JoinData;
    // clang-format on

    // IPJoinScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class JoinRequest : uchar {
        JoinWorld = 0,
        Cancel    = 1,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class JoinRequest : uchar {
        JoinWorld = 0,
        Cancel    = 1,
    };
#else // @header-generator platform
    enum class JoinRequest : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct JoinData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> connectionId;
        ::ll::TypedStorage<8, 24, std::string> netherNetId;
        ::ll::TypedStorage<8, 24, std::string> playerMessagingId;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~JoinData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using OnJoinAttempt = std::function<IPJoinScreenController::JoinRequest(const IPJoinScreenController::JoinData&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 72, ::IPJoinScreenController::JoinData> mJoinData;
    ::ll::TypedStorage<1, 1, ::IPJSC::Inputs> mHoveredInputs;
    ::ll::TypedStorage<8, 48, std::function<IPJoinScreenController::JoinRequest (const IPJoinScreenController::JoinData&)>> mOnJoinAttempt;
    ::ll::UntypedStorage<8, 32> mHeaderText;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    IPJoinScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPJoinScreenController();
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
    struct JoinData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> connectionId;
        ::ll::TypedStorage<8, 32, ::std::string> netherNetId;
        ::ll::TypedStorage<8, 32, ::std::string> playerMessagingId;
        // NOLINTEND
    };

    using OnJoinAttempt =
        ::std::function<::IPJoinScreenController::JoinRequest(::IPJoinScreenController::JoinData const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::IPJoinScreenController::JoinData> mJoinData;
    ::ll::TypedStorage<1, 1, ::IPJSC::Inputs>                     mHoveredInputs;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::IPJoinScreenController::JoinRequest(::IPJoinScreenController::JoinData const&)>>
                                             mOnJoinAttempt;
    ::ll::TypedStorage<8, 32, ::std::string> mHeaderText;
    // NOLINTEND

public:
    // prevent constructor by default
    IPJoinScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPJoinScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IPJoinScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>                                                         model,
        ::std::function<::IPJoinScreenController::JoinRequest(::IPJoinScreenController::JoinData const&)> onIdJoin
    );

    MCAPI void setHeaderText(::std::string text);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>                                                         model,
        ::std::function<::IPJoinScreenController::JoinRequest(::IPJoinScreenController::JoinData const&)> onIdJoin
    );
    // NOLINTEND
#else // @header-generator platform
    struct JoinData {};
#endif // @header-generator platform
#endif // @header-generator platform
};
