#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/common/IApp.h"
#include "mc/deps/application/AppPlatformListener.h"

class App : public ::IApp, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> _inited;
    ::ll::TypedStorage<1, 1, bool> _finished;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~App();

    virtual void init();

    virtual bool isInited();

    virtual void changeContext();

    virtual void quit(std::string const&, std::string const&);

    virtual bool wantToQuit();

    virtual void initImpl() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI App();
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
    MCNAPI void $init();

    MCNAPI bool $isInited();

    MCNAPI void $changeContext();

    MCNAPI void $quit(std::string const&, std::string const&);

    MCNAPI bool $wantToQuit();
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
#include "mc/common/IApp.h"
#include "mc/deps/application/AppPlatformListener.h"

class App : public ::IApp, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2e3651;
    ::ll::UntypedStorage<1, 1> mUnke11601;
    // NOLINTEND

public:
    // prevent constructor by default
    App& operator=(App const&);
    App(App const&);
    App();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() /*override*/;

    virtual bool isInited() /*override*/;

    virtual void changeContext() /*override*/;

    virtual void quit(::std::string const& src, ::std::string const& reason) /*override*/;

    virtual bool wantToQuit() /*override*/;

    virtual void initImpl() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();

    MCNAPI bool $isInited();

    MCNAPI void $changeContext();

    MCNAPI void $quit(::std::string const& src, ::std::string const& reason);

    MCNAPI bool $wantToQuit();
    // NOLINTEND
};
#else // @header-generator platform
class App {};
#endif // @header-generator platform
#endif // @header-generator platform
