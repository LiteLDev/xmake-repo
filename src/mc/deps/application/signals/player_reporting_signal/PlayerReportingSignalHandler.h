#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock { class SignalReceiver; }
#endif // @header-generator platform
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace PlayerReportingSignal { class GetReportJson; }
namespace PlayerReportingSignal { class ResetAll; }
namespace PlayerReportingSignal { class SendReport; }
namespace PlayerReportingSignal { class SetData; }
namespace PlayerReportingSignal { class SetJson; }
#endif // @header-generator platform
// clang-format on

namespace PlayerReportingSignal {

class PlayerReportingSignalHandler {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>> mInfo;
    ::ll::UntypedStorage<8, 24>                                   mJsonInfo;
    ::ll::TypedStorage<1, 1, bool>                                mIsTestHandler;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnka9415e;
    ::ll::UntypedStorage<8, 16> mUnkfd49d2;
    ::ll::UntypedStorage<1, 1>  mUnkf9318b;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerReportingSignalHandler& operator=(PlayerReportingSignalHandler const&);
    PlayerReportingSignalHandler(PlayerReportingSignalHandler const&);
    PlayerReportingSignalHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerReportingSignalHandler() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI PlayerReportingSignalHandler(::Bedrock::SignalReceiver* listener, bool isTestHandler);

    MCNAPI ::Json::Value _getReportDataJson();

    MCNAPI void _getReportJsonHandler(::PlayerReportingSignal::GetReportJson const& signal);

    MCNAPI void _resetAll(::PlayerReportingSignal::ResetAll const& signal);

    MCNAPI void _sendReport(::PlayerReportingSignal::SendReport const& signal);

    MCNAPI void _setDataHandler(::PlayerReportingSignal::SetData const& signal);

    MCNAPI void _setJsonHandler(::PlayerReportingSignal::SetJson const& signal);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Bedrock::SignalReceiver* listener, bool isTestHandler);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PlayerReportingSignal
