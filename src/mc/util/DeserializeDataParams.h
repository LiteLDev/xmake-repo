#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/DeserializeDataSettings.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class MinEngineVersion;
class SemVersion;
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

struct DeserializeDataParams : public ::DeserializeDataSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value&> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializeDataParams& operator=(DeserializeDataParams const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DeserializeDataParams(DeserializeDataParams const&);
#endif // @header-generator platform
    DeserializeDataParams();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeserializeDataParams(::Json::Value&, ::DeserializeDataSettings const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Json::Value&, ::DeserializeDataSettings const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
