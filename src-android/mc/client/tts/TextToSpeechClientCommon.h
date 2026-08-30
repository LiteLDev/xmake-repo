#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/tts/TextToSpeechClient.h"

class TextToSpeechClientCommon : public ::TextToSpeechClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mTextToSpeechEnabled;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextToSpeechClientCommon();

    virtual void setTextToSpeechEnabled(bool);

    virtual bool getTextToSpeechEnabled() const;

    virtual void _setTextToSpeechEnabled(bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextToSpeechClientCommon();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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

    MCNAPI void $_setTextToSpeechEnabled(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
