#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/EventResponseFactory.h"

// auto generated forward declare list
// clang-format off
struct PackLoadInfo;
// clang-format on

class BlockEventResponseFactory : public ::EventResponseFactory, public ::IPackLoadScoped {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BlockEventResponseFactory& operator=(BlockEventResponseFactory const&);
    BlockEventResponseFactory();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockEventResponseFactory();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~BlockEventResponseFactory() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~BlockEventResponseFactory() /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeFactory(::PackLoadInfo const&);
#else // @header-generator platform
    virtual void initializeFactory(::PackLoadInfo const& packLoadInfo) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initSchema();
#else // @header-generator platform
    virtual void initSchema() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeFactory(::PackLoadInfo const&);
#else // @header-generator platform
    MCAPI void $initializeFactory(::PackLoadInfo const& packLoadInfo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initSchema();
#else // @header-generator platform
    MCAPI void $initSchema();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForIPackLoadScoped();

    MCNAPI static void** $vftableForEventResponseFactory();
#endif // @header-generator platform
    // NOLINTEND
};
