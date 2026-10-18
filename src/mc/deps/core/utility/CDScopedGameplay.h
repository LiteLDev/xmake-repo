#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#else // @header-generator platform
#endif // @header-generator platform

struct CDScopedGameplay {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mFunc;
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTagEnd;
    ::ll::TypedStorage<4, 4, int>                    mClientId;
    ::ll::TypedStorage<4, 4, int>                    mBuildActionIntention;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnkef270b;
    ::ll::UntypedStorage<2, 2> mUnkc0b39b;
    ::ll::UntypedStorage<4, 4> mUnk71c85f;
    ::ll::UntypedStorage<4, 4> mUnkadb785;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CDScopedGameplay& operator=(CDScopedGameplay const&);
    CDScopedGameplay(CDScopedGameplay const&);
#endif // @header-generator platform
    CDScopedGameplay();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CDScopedGameplay(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID, int, int);

    MCNAPI ~CDScopedGameplay();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID, int, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~CDScopedGameplay();
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
};
