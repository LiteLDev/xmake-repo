#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/tts/TextToSpeechClient.h"

class NullTextToSpeechClient : public ::TextToSpeechClient {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NullTextToSpeechClient();

    virtual void setTextToSpeechEnabled(bool);

    virtual bool getTextToSpeechEnabled() const;

    virtual void setVolume(float, float);

    virtual void speakText(std::string const&);

    virtual void stopSpeaking();

    virtual bool isIdle() const;

    virtual bool supportsLanguage(std::string const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setTextToSpeechEnabled(bool);

    MCNAPI bool $getTextToSpeechEnabled() const;

    MCNAPI void $setVolume(float, float);

    MCNAPI void $speakText(std::string const&);

    MCNAPI void $stopSpeaking();

    MCNAPI bool $isIdle() const;

    MCNAPI bool $supportsLanguage(std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class NullTextToSpeechClient {};
#endif // @header-generator platform
