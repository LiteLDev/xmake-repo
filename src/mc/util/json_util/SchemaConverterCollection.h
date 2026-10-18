#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/json_util/SchemaConverterNode.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonUtil {

class SchemaConverterCollection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<JsonUtil::SchemaConverterNode>> mCollection;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkedc066;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaConverterCollection& operator=(SchemaConverterCollection const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SchemaConverterCollection(SchemaConverterCollection const&);
#endif // @header-generator platform
    SchemaConverterCollection();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SchemaConverterCollection(::Json::Value&);
#else // @header-generator platform
    MCNAPI ::JsonUtil::SchemaConverterCollection&
    operator()(::std::string const& filterString, bool forceCaseInsensitive);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::JsonUtil::SchemaConverterCollection copy() const;
#else // @header-generator platform
    MCNAPI ::JsonUtil::SchemaConverterCollection& operator()(uint64 minIndex, uint64 maxIndex, bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::JsonUtil::SchemaConverterCollection& operator()(std::string const&, bool);

    MCNAPI ::JsonUtil::SchemaConverterCollection& operator()(ulong const, ulong const, bool);

    MCNAPI ~SchemaConverterCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Json::Value&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~SchemaConverterCollection();
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

} // namespace JsonUtil
