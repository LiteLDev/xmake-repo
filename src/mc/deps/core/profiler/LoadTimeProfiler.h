#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/OutputFileStream.h"
#include "mc/deps/core/profiler/LoadTimeData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class ScopedLoadTimeSection; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

class LoadTimeProfiler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Core::ScopedLoadTimeSection*>> mSections;
    ::ll::TypedStorage<4, 4, uint>                                       mCurrentFrame;
    ::ll::TypedStorage<8, 24, std::vector<Core::LoadTimeData>>           mFinishedSections;
    ::ll::UntypedStorage<8, 304>                                         mLogFile;
    ::ll::TypedStorage<1, 1, bool>                                       mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                       mCloseLogOnUpdate;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24>  mUnk69a966;
    ::ll::UntypedStorage<4, 4>   mUnkec42a1;
    ::ll::UntypedStorage<8, 24>  mUnk3beda8;
    ::ll::UntypedStorage<8, 296> mUnk58830a;
    ::ll::UntypedStorage<1, 1>   mUnka79572;
    ::ll::UntypedStorage<1, 1>   mUnkfa6b3f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LoadTimeProfiler& operator=(LoadTimeProfiler const&);
    LoadTimeProfiler(LoadTimeProfiler const&);
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LoadTimeProfiler();
#else // @header-generator platform
    virtual ~LoadTimeProfiler() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LoadTimeProfiler();
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI void endLogging();

    MCNAPI bool isLogging() const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
