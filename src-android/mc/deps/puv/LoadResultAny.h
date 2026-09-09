#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/puv/Logger.h"
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"

namespace Puv {

class LoadResultAny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming> mLoadTime;
    ::ll::UntypedStorage<8, 24>                                    mVersion;
    ::ll::TypedStorage<8, 40, ::entt::basic_any<16, 8>>            mData;
    ::ll::TypedStorage<8, 80, ::Puv::Logger>                       mLog;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isValid() const;

    MCNAPI ::Puv::Logger const& log() const;

    MCNAPI ::Puv::Logger& log();

    MCNAPI explicit operator bool() const;

    MCNAPI ::SemVersion const& version() const;

    MCNAPI ~LoadResultAny();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Puv::LoadResultAny makeError(::Puv::Logger);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv
