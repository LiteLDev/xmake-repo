#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/DeserializeDataSettings.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
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
    DeserializeDataParams();

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
};
