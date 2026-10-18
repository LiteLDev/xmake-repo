#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class TextToSpeechClient {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextToSpeechClient();

    virtual void setTextToSpeechEnabled(bool) = 0;

    virtual bool getTextToSpeechEnabled() const = 0;

    virtual void setVolume(float, float) = 0;

    virtual void speakText(std::string const&) = 0;

    virtual void stopSpeaking() = 0;

    virtual bool isIdle() const = 0;

    virtual bool supportsLanguage(std::string const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class TextToSpeechClient {};
#endif // @header-generator platform
