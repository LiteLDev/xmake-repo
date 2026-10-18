#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/secure_storage/SecureStorage.h"

class NullSecureStorage : public ::SecureStorage {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    NullSecureStorage();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NullSecureStorage();
#else // @header-generator platform
    virtual ~NullSecureStorage() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool add(std::string const&, std::string const&);
#else // @header-generator platform
    virtual bool add(::std::string const&, ::std::string const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addOrUpdate(std::string const&, std::string const&);
#else // @header-generator platform
    virtual bool addOrUpdate(::std::string const&, ::std::string const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool remove(std::string const&);
#else // @header-generator platform
    virtual bool remove(::std::string const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool get(std::string const&, std::string&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool get(::std::string const&, ::std::string&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $add(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI bool $add(::std::string const&, ::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $addOrUpdate(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI bool $addOrUpdate(::std::string const&, ::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $remove(std::string const&);
#else // @header-generator platform
    MCNAPI bool $remove(::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $get(std::string const&, std::string&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI bool $get(::std::string const&, ::std::string&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
