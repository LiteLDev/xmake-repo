#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class IApp : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IApp();

    virtual void init() = 0;

    virtual bool isInited() = 0;

    virtual void changeContext() = 0;

    virtual void quit(std::string const&, std::string const&) = 0;

    virtual bool wantToQuit() = 0;

    virtual void setRenderingSize(int, int) = 0;

    virtual void setUISizeAndScale(int, int, float) = 0;

    virtual void muteAudio() = 0;

    virtual void unMuteAudio() = 0;

    virtual void audioEngineOn() = 0;

    virtual void audioEngineOff() = 0;
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
