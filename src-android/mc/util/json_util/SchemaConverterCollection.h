#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/SchemaConverterNode.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonUtil {

class SchemaConverterCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<JsonUtil::SchemaConverterNode>> mCollection;
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaConverterCollection& operator=(SchemaConverterCollection const&);
    SchemaConverterCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SchemaConverterCollection(::Json::Value&);

    MCNAPI ::JsonUtil::SchemaConverterCollection copy() const;

    MCNAPI ::JsonUtil::SchemaConverterCollection& operator()(std::string const&, bool);

    MCNAPI ::JsonUtil::SchemaConverterCollection& operator()(ulong const, ulong const, bool);

    MCNAPI ~SchemaConverterCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Json::Value&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonUtil
