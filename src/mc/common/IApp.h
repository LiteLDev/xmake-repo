#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class IApp : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IApp() /*override*/ = default;

    virtual void init() = 0;

    virtual bool isInited() = 0;

    virtual void changeContext() = 0;

    virtual void quit(::std::string const& src, ::std::string const& reason) = 0;

    virtual bool wantToQuit() = 0;

    virtual void setRenderingSize(int w, int h) = 0;

    virtual void setUISizeAndScale(int w, int h, float forcedGuiScale) = 0;

    virtual void muteAudio() = 0;

    virtual void unMuteAudio() = 0;

    virtual void audioEngineOn() = 0;

    virtual void audioEngineOff() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IApp {};
#endif // @header-generator platform
#endif // @header-generator platform
