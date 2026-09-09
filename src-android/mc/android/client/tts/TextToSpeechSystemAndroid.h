#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/tts/TextToSpeechSystem.h"

// auto generated forward declare list
// clang-format off
class TextToSpeechClient;
// clang-format on

class TextToSpeechSystemAndroid : public ::TextToSpeechSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextToSpeechSystemAndroid();

    virtual std::shared_ptr<TextToSpeechClient> _createTTSClient();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<TextToSpeechClient> $_createTTSClient();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
