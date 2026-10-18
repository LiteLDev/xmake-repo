#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/MinEngineVersion.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class MinEngineVersion;
class SemVersion;
#endif // @header-generator platform
struct DeserializeDataParams;
namespace Json { class Value; }
// clang-format on

struct ConstDeserializeDataParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Json::Value const&> mValue;
    ::ll::UntypedStorage<8, 24>                    mFormatVersion;
    ::ll::UntypedStorage<8, 32>                    mMinEngineVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk53e6e0;
    ::ll::UntypedStorage<8, 24> mUnkcb3186;
    ::ll::UntypedStorage<8, 32> mUnk25c848;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ConstDeserializeDataParams& operator=(ConstDeserializeDataParams const&);
    ConstDeserializeDataParams(ConstDeserializeDataParams const&);
    ConstDeserializeDataParams();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ConstDeserializeDataParams(::DeserializeDataParams const&);
#else // @header-generator platform
    MCNAPI explicit ConstDeserializeDataParams(::DeserializeDataParams const& deserializeDataParams);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ConstDeserializeDataParams(::Json::Value const&, ::ConstDeserializeDataParams const&);

    MCNAPI ConstDeserializeDataParams(::Json::Value const&, ::SemVersion const&, ::MinEngineVersion const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ConstDeserializeDataParams(::Json::Value const& value, ::ConstDeserializeDataParams const& parent);

    MCNAPI ConstDeserializeDataParams(
        ::Json::Value const&      value,
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion
    );
#endif
#endif // @header-generator platform

    MCNAPI ~ConstDeserializeDataParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::DeserializeDataParams const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::DeserializeDataParams const& deserializeDataParams);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Json::Value const&, ::ConstDeserializeDataParams const&);

    MCNAPI void* $ctor(::Json::Value const&, ::SemVersion const&, ::MinEngineVersion const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Json::Value const& value, ::ConstDeserializeDataParams const& parent);

    MCNAPI void*
    $ctor(::Json::Value const& value, ::SemVersion const& formatVersion, ::MinEngineVersion const& minEngineVersion);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
