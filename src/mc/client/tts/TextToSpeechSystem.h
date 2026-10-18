#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/tts/TTSEnabledStatus.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
class TextToSpeechClient;
// clang-format on

class TextToSpeechSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TTSEnabledStatus> mTTSEnabledStatus;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextToSpeechSystem() = default;

    virtual bool evaluateAndAutoEnablePlatformTTS(::gsl::not_null<OptionRegistry*>);

    virtual bool checkPlatformTTSEnabled(::gsl::not_null<OptionRegistry*>);

    virtual bool canAutoEnableTTS(::gsl::not_null<const OptionRegistry*>) const;

    virtual ::TTSEnabledStatus getTTSEnabledStatus() const;

    virtual void setTTSEnabledStatus(::TTSEnabledStatus);

    virtual bool supportsMultipleTTSClients() const;

    virtual std::shared_ptr<TextToSpeechClient> _createTTSClient() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _checkPlatformTTSEnabled(::gsl::not_null<OptionRegistry*>, bool);

    MCNAPI std::shared_ptr<TextToSpeechClient> createTTSClient(bool);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $evaluateAndAutoEnablePlatformTTS(::gsl::not_null<OptionRegistry*>);

    MCNAPI bool $checkPlatformTTSEnabled(::gsl::not_null<OptionRegistry*>);

    MCNAPI bool $canAutoEnableTTS(::gsl::not_null<const OptionRegistry*>) const;

    MCNAPI ::TTSEnabledStatus $getTTSEnabledStatus() const;

    MCNAPI void $setTTSEnabledStatus(::TTSEnabledStatus);

    MCNAPI bool $supportsMultipleTTSClients() const;
    // NOLINTEND
};
#else // @header-generator platform
class TextToSpeechSystem {};
#endif // @header-generator platform
