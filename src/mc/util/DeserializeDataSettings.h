#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/MinEngineVersion.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
// clang-format on
#endif // @header-generator platform

struct DeserializeDataSettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>    mFormatVersion;
    ::ll::UntypedStorage<8, 32>    mMinEngineVersion;
    ::ll::TypedStorage<1, 1, bool> mIsBaseGamePack;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk921597;
    ::ll::UntypedStorage<8, 32> mUnk31758d;
    ::ll::UntypedStorage<1, 1>  mUnk66d3bd;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializeDataSettings& operator=(DeserializeDataSettings const&);
#if defined(LL_PLAT_A) // @header-generator platform
    DeserializeDataSettings(DeserializeDataSettings const&);
#else // @header-generator platform
#endif // @header-generator platform
    DeserializeDataSettings();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI DeserializeDataSettings(::DeserializeDataSettings const&);

    MCNAPI DeserializeDataSettings(
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool                      isBaseGamePack
    );

#endif // @header-generator platform
    MCNAPI ~DeserializeDataSettings();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DeserializeDataSettings const&);

    MCNAPI void*
    $ctor(::SemVersion const& formatVersion, ::MinEngineVersion const& minEngineVersion, bool isBaseGamePack);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
