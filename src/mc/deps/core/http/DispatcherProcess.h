#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DispatcherInterface.h"

namespace Bedrock::Http {

class DispatcherProcess : public ::Bedrock::Http::DispatcherInterface,
#if defined(LL_PLAT_A) // @header-generator platform
                          public ::std::enable_shared_from_this<Bedrock::Http::DispatcherProcess> {
#else // @header-generator platform
                          public ::std::enable_shared_from_this<::Bedrock::Http::DispatcherProcess> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Http::DispatcherProcess>> mChild;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk757a87;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DispatcherProcess& operator=(DispatcherProcess const&);
    DispatcherProcess(DispatcherProcess const&);
#endif // @header-generator platform
    DispatcherProcess();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DispatcherProcess();
#else // @header-generator platform
    virtual ~DispatcherProcess() /*override*/;
#endif // @header-generator platform

    virtual void initialize();

    virtual void shutdown();

    virtual void suspend();

    virtual void resume();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DispatcherProcess(std::shared_ptr<Bedrock::Http::DispatcherProcess>);
#else // @header-generator platform
    MCNAPI explicit DispatcherProcess(::std::shared_ptr<::Bedrock::Http::DispatcherProcess> childProcess);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::shared_ptr<Bedrock::Http::DispatcherProcess>);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::shared_ptr<::Bedrock::Http::DispatcherProcess> childProcess);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI void $shutdown();

    MCNAPI void $suspend();

    MCNAPI void $resume();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
