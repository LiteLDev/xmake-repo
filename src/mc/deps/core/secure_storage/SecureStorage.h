#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

class SecureStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mSettingsPath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk9a5d0b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SecureStorage& operator=(SecureStorage const&);
    SecureStorage(SecureStorage const&);
#endif // @header-generator platform
    SecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SecureStorage();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~SecureStorage() = default;
#else // LL_PLAT_C
    virtual ~SecureStorage();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool add(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual bool add(::std::string const& key, ::std::string const& value) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addOrUpdate(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual bool addOrUpdate(::std::string const& key, ::std::string const& value) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool remove(std::string const&) = 0;
#else // @header-generator platform
    virtual bool remove(::std::string const& key) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool get(std::string const&, std::string&) = 0;
#else // @header-generator platform
    virtual bool get(::std::string const& key, ::std::string& outValue) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit SecureStorage(::Core::PathView settingsPath);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Core::PathView settingsPath);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
