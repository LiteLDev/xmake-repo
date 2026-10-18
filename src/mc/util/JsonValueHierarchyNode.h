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
namespace Json { class Value; }
// clang-format on

class JsonValueHierarchyNode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Json::Value*> mValue;
    ::ll::UntypedStorage<8, 24>              mFormatVersion;
    ::ll::UntypedStorage<8, 32>              mMinEngineVersion;
    ::ll::TypedStorage<8, 24, std::string>   mSourceFileName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkd1325c;
    ::ll::UntypedStorage<8, 24> mUnkc7915f;
    ::ll::UntypedStorage<8, 32> mUnkbebb5d;
    ::ll::UntypedStorage<8, 32> mUnk8deeb9;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    JsonValueHierarchyNode(JsonValueHierarchyNode const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    JsonValueHierarchyNode& operator=(JsonValueHierarchyNode const&);
    JsonValueHierarchyNode(JsonValueHierarchyNode const&);
    JsonValueHierarchyNode();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    JsonValueHierarchyNode& operator=(JsonValueHierarchyNode const&);

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JsonValueHierarchyNode();

    MCNAPI JsonValueHierarchyNode(::JsonValueHierarchyNode&&);

    MCNAPI JsonValueHierarchyNode(::Json::Value&, ::SemVersion const&, ::MinEngineVersion const&, std::string const&);

    MCNAPI ~JsonValueHierarchyNode();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI JsonValueHierarchyNode();

    MCNAPI JsonValueHierarchyNode(::JsonValueHierarchyNode const&);

    MCNAPI JsonValueHierarchyNode(
        ::Json::Value&            value,
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      sourceFileName
    );

    MCNAPI ~JsonValueHierarchyNode();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::JsonValueHierarchyNode&&);

    MCNAPI void* $ctor(::Json::Value&, ::SemVersion const&, ::MinEngineVersion const&, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::JsonValueHierarchyNode const&);

    MCNAPI void* $ctor(
        ::Json::Value&            value,
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      sourceFileName
    );
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
