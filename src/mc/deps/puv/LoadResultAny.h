#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/puv/Logger.h"
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Puv { class Logger; }
// clang-format on
#endif // @header-generator platform

namespace Puv {

class LoadResultAny {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming> mLoadTime;
    ::ll::UntypedStorage<8, 24>                                    mVersion;
    ::ll::TypedStorage<8, 40, ::entt::basic_any<16, 8>>            mData;
    ::ll::TypedStorage<8, 80, ::Puv::Logger>                       mLog;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk23851a;
    ::ll::UntypedStorage<8, 24> mUnk545455;
    ::ll::UntypedStorage<8, 40> mUnk8aa8ef;
    ::ll::UntypedStorage<8, 80> mUnk6e20bb;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LoadResultAny& operator=(LoadResultAny const&);
    LoadResultAny(LoadResultAny const&);
    LoadResultAny();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isValid() const;

    MCNAPI ::Puv::Logger const& log() const;

    MCNAPI ::Puv::Logger& log();

    MCNAPI explicit operator bool() const;

    MCNAPI ::SemVersion const& version() const;
#else // @header-generator platform
    MCNAPI LoadResultAny(::Puv::LoadResultAny&&);
#endif // @header-generator platform

    MCNAPI ~LoadResultAny();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Puv::LoadResultAny makeError(::Puv::Logger);
#else // @header-generator platform
    MCNAPI static ::Puv::LoadResultAny makeError(::Puv::Logger log);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Puv::LoadResultAny&&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv
