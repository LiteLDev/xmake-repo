#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/tts/TextToSpeechClientCommon.h"
#include "mc/locale/I18nObserver.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
// clang-format on

class TextToSpeechClientAndroid : public ::TextToSpeechClientCommon, public ::I18nObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextToSpeechClientAndroid();

    virtual void setVolume(float, float);

    virtual void speakText(std::string const&);

    virtual void stopSpeaking();

    virtual bool isIdle() const;

    virtual bool supportsLanguage(std::string const&) const;

    virtual void onLanguageChanged(std::string const&, bool);

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    virtual void onLanguagesLoaded();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setVolume(float, float);

    MCNAPI void $speakText(std::string const&);

    MCNAPI void $stopSpeaking();

    MCNAPI bool $isIdle() const;

    MCNAPI bool $supportsLanguage(std::string const&) const;

    MCNAPI void $onLanguageChanged(std::string const&, bool);

    MCNAPI void $onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    MCNAPI void $onLanguagesLoaded();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
